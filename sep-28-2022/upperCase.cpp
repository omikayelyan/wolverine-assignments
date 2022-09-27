// toUpperCase(s); վերադարձնում է տողը բոլոր տառերը մեծատառ փոխված

#include <iostream>
#include <string>

std::string toUpperCase(std::string& s)
{
    for (int i = 0; i < s.size(); ++i)
    {
        s[i] -= 32;
    }
    return s;
}

int main()
{
    std::string s;
    std::cin >> s;
    std::cout << toUpperCase(s);
}
