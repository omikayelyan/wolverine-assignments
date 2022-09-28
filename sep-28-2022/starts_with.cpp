// startsWith(s, t); վերադարձնում է true, եթե s տողը սկսվում է t ենթատողով, օրինակ՝ startsWith("hello, world", "hell"); վերադարձնում է true, 
// իսկ startsWith("hello, world", "world"); վերադարձնում է false։

#include <iostream>
#include <string>

bool startsWith(const std::string& s, const std::string& t)
{
    return (s.substr(0, t.size()) == t);
}

int main()
{
    std::string s = "hello, world";
    std::string t = "hell";
    std::cout << startsWith(s, t);
}