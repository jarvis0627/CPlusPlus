#include <iostream>

int main()
{   
    int strt_val = 50, sum = 0;
    // caculate the sum from 50 to 100
    while (strt_val <= 100)
    {
        sum += strt_val;
        strt_val++;
    }

    // show the compute result of the while statement
    std::cout << "The sum from 50 to 100 is " << sum << "." << std::endl;

    return 0;
}