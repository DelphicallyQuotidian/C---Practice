// 2.4.2
#include <iostream>

// int main()
// {
    // int i2 = -1; // , &r = 0; // invalid can't reference a literal
    // int *const p2 = &i2; // valid
    // const int *const p3 = &i2;
    // std::cout << p3 << ", " << *p3 << std::endl;
    // const int i = -1, &r = 0;  // valid because can bind a reference to const  to a nonconst object, a literal, or a more general expression
    // std::cout << r << std::endl;
    // // const int &const r2 = i2; // invlaid - reference not an object so can't be const int
    // const int i4 = i, &r2 = i;
    // std::cout << i4 << ", " << r2 << std::endl;

    // int i = 2, *const cp = &i; // valid definition - int and const pointer
    // int *p1, *const p2 = &i;  // valid definition - int pointer, int const pointer
    // const int ic = 1, &r = ic;  // valid - non-const referencing a const - but can't change ic through r
    // const int *const p3 = &i;  // valid - const pointer to a const
    // const int *p;  // valid - pointer to a const

//     i = ic; // valid, int = const int
//     p1 = p3;  // invalid, p3 points to const so p1 must point to const
//     p1 = &ic; // p1 must be a pointer to a const
//     p3 = &ic; // p3 is const pointer
//     p2 = p1;  // can't change where const pointer points
//     ic = *p3; // can't chagne value of a const int

//     return 0;
// }