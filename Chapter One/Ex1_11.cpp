#include <iostream>

/*
* Prompt the user for two integers, print the number in the range specified by those two integers.
*/

void between_them(int lo, int hi)
{
    if (lo > hi)
    {
        between_them (hi, lo);
        return;
    }
    while (lo <= hi)
    {
        std::cout << lo << std::endl;
        lo++;
    }
}
int main()
{
    int lo = 0, hi = 0;
    std::cout << "Please input two integers" << std::endl;
    std::cin >> lo >> hi;
    
    between_them(lo, hi);
    return 0;
}