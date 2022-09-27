// split(s, d); որը կվերադարձնի տողերի զանգված, որտեղ յուրաքանչյուր տող ստացվել է s տողը կտրտելով ըստ տրված d բաժանիչների, այսինքն՝
// split("he,ll,o", ","); կվերադարձնի ["he", "ll", "o"], իսկ split("he ,ll:o world,vui", " ,:"); կվերադարձնի ["he", "ll", "o", "world", "vui"]։
// Փոխանցվող բաժանիչների քանակի սահմանափակում չկա։

#include <iostream>
#include <string>
#include <vector>

std::vector <std::string> split(std::string& s, std::string& sym)
{
    std::vector <std::string> vec;
    std::string str = "";
    for (int i = 0; i < s.size(); ++i)
    {
        if (sym.find(s[i]) != -1)
        {
            vec.push_back(str);
            str = "";
            continue;
        }
        str.push_back(s[i]);
    }
    vec.push_back(str);
    return vec;
}

int main()
{
    std::string s = "he ,ll:o world,vui";
    std::string sym = " ,,:";
    std::vector <std::string> vec = split(s, sym);
    for (auto i : vec)
    {
        std::cout << i << " ";
    }
}
