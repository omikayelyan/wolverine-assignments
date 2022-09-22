// Գրել ծրագիր, որը կհայտարարի երեք թվային փոփոխականներ և կհաշվի դրանց թվաբանական միջինը։

#include <iostream>

int main()
{
    int num1 = 1;
    int num2 = 2;
    int num3 = 3;
    int average = (num1 + num2 + num3) / 3;
    std::cout << average;
}

main:
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-4], 1
        mov     DWORD PTR [rbp-8], 2
        mov     DWORD PTR [rbp-12], 3
        mov     edx, DWORD PTR [rbp-4]
        mov     eax, DWORD PTR [rbp-8]
        add     edx, eax
        mov     eax, DWORD PTR [rbp-12]
        add     eax, edx
        movsx   rdx, eax
        imul    rdx, rdx, 1431655766
        mov     rcx, rdx
        shr     rcx, 32
        cdq
        mov     eax, ecx
        sub     eax, edx
        mov     DWORD PTR [rbp-16], eax
        mov     eax, 0
        pop     rbp
        ret
