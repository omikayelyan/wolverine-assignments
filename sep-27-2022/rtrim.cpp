// rtrim(s); որը վերադարձնում է տողը առանց աջից բացատների, այսինքն rtrim("hello   "); կվերադարձնի "hello"

#include <iostream>
#include <string>

std::string rtrim(std::string& s)
{
    int count = 0;
    for (int i = s.size(); i >= 0; --i)
    {
        if (s[i] == ' ')
        {
            ++count;
        }
    }
    int size = s.size() - count;
    s.erase(size, s.size());
    return s;
}

int main()
{
    std::string s = "hello   ";
    std::cout << rtrim(s);
} 
