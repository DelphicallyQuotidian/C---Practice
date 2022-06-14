// Exercises 2.1.3 - 
#include <iostream>
#include <typeinfo>

// #define PRINT_NAME(x) std::cout << #x << " - " << typeid(x).name() << '\n' // stackoverflow
// testing <typeinfo> typeid
// int main()
// {
//     PRINT_NAME(char); // c
//     PRINT_NAME(signed char);  // a
//     PRINT_NAME(unsigned char);  // h
//     PRINT_NAME(short);  // s
//     PRINT_NAME(unsigned short);  // t
//     PRINT_NAME(int);  // i
//     PRINT_NAME(unsigned int);  // j
//     PRINT_NAME(long);  // l
//     PRINT_NAME(unsigned long);  // m
//     PRINT_NAME(float);  // f
//     PRINT_NAME(double);  // d
//     PRINT_NAME(long double);  // e
//     PRINT_NAME(char*);  // Pc
//     PRINT_NAME(const char*);  // PKc
//     PRINT_NAME(wchar_t);  // w
//     PRINT_NAME(long long);  // x
//     PRINT_NAME(char16_t);  // Ds
//     PRINT_NAME(char32_t);  // Di
//     PRINT_NAME(int [5]); // A5_i
//     PRINT_NAME(char [5]); // A5_c


//     std::cout << typeid('a').name() << std::endl; // c
//     std::cout << typeid(L'a').name() << std::endl; // w (wchar_t)
//     std::cout << typeid("a").name() << std::endl; // A2_c character array of length 2 (includes /0 at end)
//     std::cout << typeid(L"a").name() << "\n~~~~~" << std::endl; // A2_w

//     std::cout << typeid(10).name() << std::endl; // int - i
//     std::cout << typeid(10u).name() << std::endl; // unsigned int - j
//     std::cout << typeid(10L).name() << std::endl; // long int - l
//     std::cout << typeid(10uL).name() << std::endl; // unsigned long int - m
//     std::cout << typeid(012).name() << ": " << 012 << std::endl; // octal - i - 10
//     std::cout << typeid(0xC).name() << ": " << 0xC << "\n~~~~~" << std::endl;  // hex - i - 12

//     std::cout << typeid(3.14).name() << std::endl; // double - d
//     std::cout << typeid(3.14f).name() << std::endl; // float - f
//     std::cout << typeid(3.14L).name() << std::endl; // long double - e

//     std::cout << typeid(10.).name() << std::endl; // double - d
//     std::cout << typeid(10e-2).name() << std::endl; // double - d
// }


// int main()
// {
//     std::cout << "Who goes with F\145rgus?\012" << std::endl; // e, newline (line feed???) - both octal
// }


// use escape sequences to print 2, a tab, M, newline
// int main()
// {
//     std::cout << "\062\t\115\n" << std::endl;
//     return 0;
// }