#include <iostream>
// Section 2.2.3 - 
// References and Pointers

// int main()
// {
//     // invalid: int double = 3.14;
//     // invalid: int catch-22;
//     double Double = 3.14;
//     std::cout << Double << std::endl; // prints 3.14
//     int _;
//     std::cout << _ << std::endl; // prints whatever junk was stored in the allocated memory location
//     // invalid: int 1_or_2 = 1;
// }


// int i = 42;
// int k = 100, sum = 0;
// int main()
// {
//     int i = 100;
//     int j = i;
//     std::cout << i << ", " << j << std::endl;  // 100, 100
//     std::cout << ::i << ", " << j << std::endl;  // 42, 100

//     for (int k = 0; k != 10; ++k)
//     {
//         sum += k;
//     }
//     std::cout << k << ", " << sum << std::endl; // 100, 45
// }


// int main()
// {
    // int ival = 1.01; // valid
    // int &rval1 = 1.01; // invalid
    // int &rval2 = ival; // valid
    // int &rval3; // invalid

    // int i = 44, &r1 = i;
    // double d = 66.4444, &r2 = d;
    // std::cout << i << ", " << r1 << ", " << d << ", " << r2 << std::endl;
    // r2 = 3.14159; // valid - d is set to 3.14159
    // std::cout << i << ", " << r1 << ", " << d << ", " << r2 << std::endl;
    // r2  = r1; // valid - r2 sets d to the value r1 binds to, which is 44
    // std::cout << i << ", " << r1 << ", " << d << ", " << r2 << std::endl;
    // i = r2; // valid - sets i equal to d, cuts off the decimal part
    // std::cout << i << ", " << r1 << ", " << d << ", " << r2 << std::endl;
    // r1 = d; // valid - sets i equal to d, cuts the decimal part
    // std::cout << i << ", " << r1 << ", " << d << ", " << r2 << std::endl;

//     int i, &ri = i;
//     i = 5; ri = 10;
//     std::cout << i << " " << ri << std::endl; // 10 10
// }


// int main()
// {
    // pointer test
    // int i = 3;
    // int *ptr3 = &i;
    // *ptr3 = 4;
    // std::cout << ptr3 << ": " << *ptr3 << std::endl;

    // int i = 42;
    // int *p1 = &i;
    // *p1 = *p1 * *p1; // 42 * 42
    // std::cout << *p1 << std::endl;

    // int i = 0;
    // double* dp = &i;  // invalid - can't point a double to an int
    // int *ip = i;  // invalid - cannot assign an int to a pointer
    // int *p = &i;  // valid

//     return 0;
// }