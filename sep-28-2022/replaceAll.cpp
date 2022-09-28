// replaceAll(s, t, r); վերադարձնում է s տողի փոփոխված տարբերակը, որտեղ յուրաքանչյուր հանդիպած t
// ենթատող փոխարինվել է r ենթատողով, օրինակ՝ replaceAll("hello, world", "l", "ch"); կվերադարձնի "hechcho, worchd"։

#include <iostream> 
#include <string>

std::string replaceAll(std::string& s, const std::string& t, const std::string& r)
{
    std::string str;
    for (int i = 0; i < s.size(); ++i)
    {
        while (t.find(s[i]) != -1)
        {
            str += r;
            ++i;
        }
        str += s[i];
    }
    return str;
}

int main()
{
    std::string s = "hello, world";
    std::string t = "l";
    std::string r = "ch";
    std::cout << replaceAll(s, t, r);
}