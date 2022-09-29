// trim(s); որը վերադարձնում է տողը առանց ձախից և աջից բացատների trim("  hello  "); կվերադարձնի "hello"

#include <iostream>
#include <string>

std::string trim(std::string& s)
{
    int count = 0;
    for (int i = s.size() - 1; i >= 0; --i)
    {
        if (s[i] == ' ')
        {
            ++count;
        }
        else
        {
            break;
        }
    }
    int size = s.size() - count;
    s.erase(size, s.size());
    int count1 = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] == ' ')
        {
            ++count1;
        }
        else
        {
            break;
        }
    }
    s.erase(0, count1);
    return s;
}

int main()
{
    std::string s = "   hello   ";
    std::cout << trim(s);
} 
