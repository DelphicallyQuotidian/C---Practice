#include <iostream>


// C++ Primer: Exercises Section 1.4.1 - 
int main()
{
    /* Countdown from 10 to 0 */
    // int x = 10;
    // while (x > -1)
    // {
    //     std::cout << x << std::endl;
    //     --x;
    // }

    
    /* Print the values between two provided integers, those integers inclusive */
    // int a = 0, b = 0;
    // std::cout << "Please provide two integers: " << std::endl;
    // std::cin >> a >> b;
    // if (a <= b)
    // {
    //     while (a <= b)
    //     {
    //         std::cout << a << std::endl;
    //         ++a;
    //     }
    // }
    // else if (a > b)
    // {
    //     while (a >= b)
    //     {
    //         std::cout << a << std::endl;
    //         --a;
    //     }
    // }


    /* Print the values between two provided integers, those integers inclusive - forloop */
    // int a = 0, b = 0;
    // std::cout << "Please provide two integers: " << std::endl;
    // std::cin >> a >> b;
    // if (a <= b)
    // {
    //     for (int x = a; x <= b; ++x)
    //     {
    //         std::cout << a << std::endl;
    //         ++a;
    //     }
    // }
    // else if (a > b)
    // {
    //     for (int x = a; x >= b; --x)
    //     {
    //         std::cout << a << std::endl;
    //         --a;
    //     }
    // } 


    /* Reading an unknown number of inputs */
    int sum = 0, val = 0;
    while (std::cin >> val)
    {
        sum += val;
        // must enter ctrl+z and enter from the command line to create end-of-file
    }
    std::cout << "The final sum is: " << sum << std::endl;
}