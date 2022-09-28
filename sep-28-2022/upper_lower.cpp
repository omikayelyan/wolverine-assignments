#include <iostream>
#include <string>

std::string lower_upper_case(std::string& s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] -= 32;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
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
    std::cout << lower_upper_case(s);
}