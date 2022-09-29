// Ստեղծել գույների enum իրականացնել ֆունկցիաներ, որոնք կվերադարձնեն enum-ի հերթական արժեքին համապատասխան տեքստային ներկայացումը կամ 
// տեքստից՝ enum-ի արժեքը, օրինակ toString(Colors::Green); կվերադարձնի "Green"։ toEnum("Green"); կվերադարձնի Colors::Green

#include <iostream>
#include <string>
#include <map>

enum class Colors {Red, Green, Yellow, Blue, Pink};
std::map <Colors, std::string> mp;
std::map <std::string, Colors> num;

std::string toString(Colors obj)
{
    return mp[obj];
}

Colors toEnum(std::string s)
{
    return num[s];
}

int main()
{
    mp[Colors::Red] = "Red";
    mp[Colors::Green] = "Green";
    mp[Colors::Yellow] = "Yellow";
    mp[Colors::Blue] = "Blue";
    mp[Colors::Pink] = "Pink";
    num["Red"] = Colors::Red;
    num["Green"] = Colors::Green;
    num["Yellow"] = Colors::Yellow;
    num["Blue"] = Colors::Blue;
    num["Pink"] = Colors::Pink;
    std::cout << toString(Colors::Yellow) << std::endl;
    std::cout << static_cast<int> (toEnum("Blue")) << std::endl;
}
