#include <iostream>

int main()
{
    std::cout << "Please input two num:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "The product result of v1: " << v1 << " and v2: " << v2 << " is: "
              << v1 * v2 << std::endl;
    
    return 0;
}