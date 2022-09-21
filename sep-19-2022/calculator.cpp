//  իրականացնել կալկուլատոր ծրագիր, որը ստանում է որպես մուտք գործողության կոդը և համախատասխան արժեքներն ու կատարում թվաբանական գործողությունները։ 
// Օգտագործել std::map և ֆունկցիաների ցուցիչներ կալկուլատորի գործողություններն իրականացնող ֆունկցիաները գործողության կոդի կամ սիմվոլի հետ արտապատկերելու համար։

#include <iostream>
#include <map>

int sum(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int divison(int a, int b)
{
    return a / b;
}

int main()
{
    std::map <char, int(*)(int, int)> calc;
    char sym;
    std::cout << "Enter the symbol ";
    std::cin >> sym;
    int a;
    int b;
    std::cout << "Enter the numbers ";
    std::cin >> a >> b;
    calc['+'] = &sum;
    calc['-'] = &sub;
    calc['*'] = &mul;
    calc['/'] = &divison;
    std::cout << calc[sym](a, b);
}

sum(int, int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-4], edi
        mov     DWORD PTR [rbp-8], esi
        mov     edx, DWORD PTR [rbp-4]
        mov     eax, DWORD PTR [rbp-8]
        add     eax, edx
        pop     rbp
        ret
sub(int, int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-4], edi
        mov     DWORD PTR [rbp-8], esi
        mov     eax, DWORD PTR [rbp-4]
        sub     eax, DWORD PTR [rbp-8]
        pop     rbp
        ret
mul(int, int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-4], edi
        mov     DWORD PTR [rbp-8], esi
        mov     eax, DWORD PTR [rbp-4]
        imul    eax, DWORD PTR [rbp-8]
        pop     rbp
        ret
divison(int, int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-4], edi
        mov     DWORD PTR [rbp-8], esi
        mov     eax, DWORD PTR [rbp-4]
        cdq
        idiv    DWORD PTR [rbp-8]
        pop     rbp
        ret
