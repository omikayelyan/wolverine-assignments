// Գրել ծրագիր, որը կգտնի զանգվածի տարրերի գումարը։

#include <iostream>
int main()
{
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    std::cout << sum;
}

main:
        push    rbp
        mov     rbp, rsp
        mov     DWORD PTR [rbp-12], 5
        mov     DWORD PTR [rbp-32], 1
        mov     DWORD PTR [rbp-28], 2
        mov     DWORD PTR [rbp-24], 3
        mov     DWORD PTR [rbp-20], 4
        mov     DWORD PTR [rbp-16], 5
        mov     DWORD PTR [rbp-4], 0
        mov     DWORD PTR [rbp-8], 0
        jmp     .L2
.L3:
        mov     eax, DWORD PTR [rbp-8]
        cdqe
        mov     eax, DWORD PTR [rbp-32+rax*4]
        add     DWORD PTR [rbp-4], eax
        add     DWORD PTR [rbp-8], 1
.L2:
        cmp     DWORD PTR [rbp-8], 4
        jle     .L3
        mov     eax, 0
        pop     rbp
        ret
        
int sum(int* arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    const int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    std::cout << sum(arr, size);
}
