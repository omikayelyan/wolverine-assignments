#include <iostream>
#include <string>
#include <fstream>

void parse(std::string& str)
{
    int pos;
    while ((pos = str.find(',')) != std::string::npos) 
    {
        str.erase(str.begin() + pos);
    }
    for (int i = 0; str[i] == ' '; ++i)
    {
        str.erase(str.begin() + i);
        --i;
    }
} 

int main()
{
    std::ifstream fin;
    std::ofstream fout;
    std::string line;
    fin.open("file.txt");
    fout.open("result.txt");
    if(fin.is_open())
    {
        while (!fin.eof())
        {
            fin >> line;
            parse(line);
            if (!line.empty()) 
            {
                fout << line << std::endl;
            }
            line.clear();
        }
    }    
    else
    {
        std::cout << "Can't open the file.." << std::endl;
    }
}