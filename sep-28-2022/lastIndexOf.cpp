#include <iostream>
#include <string>

int lastIndexOf(const std::string& s, const std::string& t) 
{
    int pos = s.find(t);
    while (s.find(t, pos + t.size()) != std::string::npos)
    {
        pos = s.find(t, pos + t.size());
    }
    return pos;
}

int main()
{
    std::string s = "Hello, I said Hello";
    std::string t = "Hell";
    std::cout << lastIndexOf(s, t) << std::endl;
}