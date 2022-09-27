#include <iostream>
#include <vector>

std::vector <std::string> split(const std::string& s)
{
    std::vector <std::string> vec;
    std::string str = "";
    bool flag = false;
    int i = 0;
    while (s[i] != '\0')
    {
        while (s[i] == ' ' || s[i] == ',')
        {
            ++i;
            flag = true;
        }
        if (flag)
        {
            vec.push_back(str);
            flag = false;
            str = "";
        }
        if (s[i] != ' ' && s[i] != ',')
        {
            str += s[i];
        }
        else
        {
            ++i;
        }
        flag = false;
        ++i;
    }
    vec.push_back(str);
    return vec;
}

int main()
{
    std::string s = "mov r1, 7";
    std::vector <std::string> vec = split(s);
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
}
