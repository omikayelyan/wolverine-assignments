// endsWith(s, t); վերադարձնում է true, եթե s տողը վերջանում է t ենթատողով

#include <iostream>
#include <string>

bool endsWith(const std::string& s, const std::string& t)
{
    return (s.substr(s.size() - t.size(), t.size()) == t);
}

int main()
{
    std::string s = "hello, world";
    std::string t = "world";
    std::cout << endsWith(s, t);
}