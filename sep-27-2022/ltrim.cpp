// ltrim(s); որը վերադարձնում է տողը առանց ձախից բացատների, այսինքն ltrim("   hello"); կվերադարձնի "hello"

#include <iostream>
#include <string>

std::string ltrim(std::string& s)
{
    int count = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            ++count;
        }
    }
    s.erase(0, count);
    return s;
}

int main()
{
    std::string s = "    hello";
    std::cout << ltrim(s);
}
