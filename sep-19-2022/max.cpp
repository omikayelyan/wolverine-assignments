// Գրել ծրագիրը, որը կգտնի երկու փոփոխականների մաքսիմումը։

#include <iostream>

int main()
{
    int num1;
    int num2;
    int max;
    std::cin >> num1 >> num2;
    max = num1;
    if(num2 > max)
    {
        max = num2;
    }
    std::cout << max;
}

main:
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-4], 30
        mov     DWORD PTR [rbp-8], 10
        mov     eax, DWORD PTR [rbp-4]
        mov     DWORD PTR [rbp-12], eax
        mov     eax, DWORD PTR [rbp-8]
        cmp     eax, DWORD PTR [rbp-12]
        jle     .L2
        mov     eax, DWORD PTR [rbp-8]
        mov     DWORD PTR [rbp-12], eax
.L2:
        mov     eax, 0
        pop     rbp
        ret

int max(int num1, int num2)
{
    int max;
    max = num1;
    if (num2 > max)
    {
        max = num2;
    }
    return max;
}

int main()
{
    std::cout << max(4, 9);
}

max(int, int):
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-20], edi
        mov     DWORD PTR [rbp-24], esi
        mov     eax, DWORD PTR [rbp-20]
        mov     DWORD PTR [rbp-4], eax
        mov     eax, DWORD PTR [rbp-24]
        cmp     eax, DWORD PTR [rbp-4]
        jle     .L2
        mov     eax, DWORD PTR [rbp-24]
        mov     DWORD PTR [rbp-4], eax
.L2:
        mov     eax, DWORD PTR [rbp-4]
        pop     rbp
        ret
main:
        push    rbp
        mov     rbp, rsp
        mov     esi, 9
        mov     edi, 4
        call    max(int, int)
        mov     eax, 0
        pop     rbp
        ret
