#include <iostream>
#include <string>

void memcpy(void* src, void* dest, size_t count)
{
    char *ptr = (char *)src;
    char *ptr1 = (char *)dest;
    for (int i = 0; i < count; ++i)
    {
        ptr1[i] = ptr[i];
    }
}

int main()
{
    const int size = 8;
    char arr[size] = "hello!!";
    char arr1[size];
    memcpy(arr, arr1, size);
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr1[i];
    }
}
