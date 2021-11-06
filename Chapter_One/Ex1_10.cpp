#include <iostream>

/*
* This funciton is used to show the ten numbers from ten to zero. 
*/

int main()
{
    int strt_val = 10;
    while (strt_val >= 0)
    {
        std::cout << strt_val-- << std::endl;
    } 

    return 0;
}