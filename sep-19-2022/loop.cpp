// Իրականացնել ծրագիր, որտեղ առանց ցիկլի օգտագրծման կկազմակերպեք ցիկլ։ 
// Օրինակ օգտագործողը մուտքագրում է թիվ և ձեր ծրագիրը տպում է 0-ից մինչև այդ թվերը՝ առանց ցիկլի կիրառման։

#include <iostream>
// 1.recursion
void foo(int n)
{
    if (n >= 0)
    {
        foo(n - 1);
        std::cout << n << " ";
    }
}

int main()
{
    foo(5);
}

// 2. recursion
void foo(int i, int last)
{
    if (i <= last) 
    {
        std::cout << i << " ";
        foo(i + 1, last);
    }
}
 
int main()
{
    foo(0, 5);
}

// 3. goto
int main()
{
    int num;
    std::cin >> num;
    int i = 0;
begin:
    std::cout << i << " ";
    ++i;
    if (i <= num) 
    {
        goto begin;
    }
}

// 4. static
int main()
{
    static int i = 0;
    if (i <= 10) 
    {
        std::cout << i++ << " ";
        main();
    }
}
