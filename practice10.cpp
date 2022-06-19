#include <iostream>
#include <typeinfo>
#include <string>

//2.32
// int main()
// {
//     int null = 0, *p = null;  // invalid - can't bind an integer to a pointer
//     // can change *p = null to *p = nullptr
// }


// 2.33
// int main()
// {
//     int i = 0, &r = i;
//     auto a = r;
//     const int ci = i, &cr = ci;
//     auto b = ci;
//     auto c = cr;
//     auto d = &i;
//     auto e = &ci;
//     auto &g = ci;

//     a = 42;  // sets i (and r) to 42
//     std::cout << a << std::endl;
//     b = 42;  // sets b to 42
//     std::cout << b << std::endl;
//     c = 42;  // sets c to 42
//     std::cout << c << std::endl;
    // d = 42;  // can't set int ptr to an integer
    // std::cout << d << std::endl;
    // e = 42;  // can't set ptr to const int to an int
    // std::cout << e << std::endl;
    // g = 42;  // can't set a const int& to an
    // std::cout << g << std::endl;
// }


// 2.35
// int main()
// {
//     const int i = 42;  // i = const int
//     auto j = i; const auto &k = i; auto *p = &i;  // j = int; k = const int&, p = const int *p
//     const auto j2 = i, &k2 = i;  // j2 = const int; k2 = const int&
//     int *p_test;
//     int **p_test2;
//     const int *p_test3;
//     auto p_test4 = &i;

//     std::cout << typeid(i).name() << std::endl;  // output: i
//     std::cout << typeid(j).name() << std::endl;  // output: i
//     std::cout << typeid(k).name() << std::endl;  // output: i
//     std::cout << typeid(p).name() << std::endl;  // output: PKi
//     std::cout << typeid(j2).name() << std::endl;  // output: i
//     std::cout << typeid(k2).name() << std::endl;  // output: i
//     std::cout << typeid(p_test).name() << std::endl;  // output: Pi
//     std::cout << typeid(p_test2).name() << std::endl;  // output: PPi
//     std::cout << typeid(p_test3).name() << std::endl;  // output: PKi
//     std::cout << typeid(p_test4).name() << std::endl;  // output: PKi
// }


// // 2.36
// int main()
// {
//     int a = 3, b = 4;
//     decltype(a) c = a;
//     decltype((b)) d = a;
//     ++c;  // increase c by 1  = 4
//     ++d;  // increase a by 1  = 4
//     std::cout << c << ", " << a << std::endl;
// }


// 2.39
// struct Foo { /* empty */ }  // "expected ';' after struct definition"
// int main()
// {
//     return 0;
// }


// 2.40, 2.41
// struct Sales_data
// { 
//     std::string bookNo;
//     std::string title;
//     unsigned units_sold = 0;
//     double price = 0.0;
// };

// int main()
// {
//     Sales_data data1;
//     std::cin >> data1.bookNo >> data1.title >> data1.units_sold 
//                 >> data1.price;
//     std::cout << "Book number: " << data1.bookNo << "\t" 
//                 << "Title: " << data1.title << "\t" 
//                 << "Units sold: " << data1.units_sold << "\t"
//                 << "Revenue: " << (double) data1.units_sold * data1.price << "\t"
//                 << "Price: " << data1.price
//                 << std::endl;
// }

// int main()
// {
//     Sales_data data1, data2;
//     std::cin >> data1.bookNo >> data1.title >> data1.units_sold 
//             >> data1.price;
//     std::cin >> data2.bookNo >> data2.title >> data2.units_sold 
//                 >> data2.price;
//     if (data1.bookNo == data2.bookNo)
//     {
//         int units_sold = data1.units_sold + data2.units_sold;
//         double revenue = data1.units_sold * data1.price + data2.units_sold * data2.price;
//         std::cout << "Book number: " << data1.bookNo << "\t" 
//                 << "Title: " << data1.title << "\t" 
//                 << "Units sold: " << units_sold << "\t"
//                 << "Revenue: " << revenue << "\t";
//         if ( revenue != 0 )
//         {
//             std::cout << "Average Price: " << revenue / units_sold << std::endl;
//         } else {
//             std::cout << "(no sales)" << std::endl;
//         }
//     }
// }

// int main()
// {
//     Sales_data data1, data2;
//     std::cin >> data1.bookNo >> data1.title >> data1.units_sold 
//             >> data1.price;
//     unsigned sum = data1.units_sold * data1.price;
//     while (std::cin >> data2.bookNo >> data2.title >> data2.units_sold >> data2.price)
//     {
//         if ( data2.bookNo == data1.bookNo )
//         {
//             sum += (data2.units_sold * data2.price);
//         }
//     }
//     std::cout << sum << std::endl;
//     return 0;
// }


// 2.42
// #ifndef SALES_DATA_H
// #define SALES_DATA_H
// #include <string>
// struct Sales_data
// { 
//     std::string bookNo;
//     std::string title;
//     unsigned units_sold = 0;
//     double price = 0.0;
// };
// #endif