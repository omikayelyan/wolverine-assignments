// toLowerCase(s); վերադարձնում է տողը բոլոր տառերը փոքրատառ փոխված

#include <iostream>
#include <string>

std::string toLowerCase(std::string& s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    return s;
}

int main()
{
    std::string s;
    std::cin >> s;
    std::cout << toLowerCase(s);
}
