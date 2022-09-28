#include <iostream>
#include <string>

void memset(char *s, char val, size_t count)
{
    while(count--)
    {
        *s++ = val;
    }
}

int main()
{
    const int size = 6;
    char arr[size] = "Hello";
    memset(arr, 'a', size);
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i];
    }
}
