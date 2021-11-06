#include <iostream>

int sum(int lo, int hi)
{
    int sum = 0;
    while (lo <= hi) sum += lo++;
    return sum;
}

int main()
{   
    int lo = 0, hi = 0;
    std::cout << "Please enter two number:" << std::endl;
    std::cin >> lo >> hi;
    // show the compute result of the while statement
    std::cout << "The sum is " << sum(lo, hi) << "." << std::endl;

    return 0;
}