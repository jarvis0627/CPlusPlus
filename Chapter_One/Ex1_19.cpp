#include <iostream>

int main()
{
    int lo = 0, hi = 0, sum = 0;
    std::cout << "Input two numbers: " << std::endl;
    std::cin >> hi >> lo;

    if (lo > hi)
    {
        int tmp = 0;
        tmp = hi;
        hi = lo;
        lo = tmp;
    }
    int i = lo;
    while (i <= hi)
    {
        sum += i;
        i++;
    }
    std::cout << "Sum of " << lo << " to " << hi << " is: " << sum << std::endl;

    return 0;
    
}