// C++ Primer Exercise 1.4.4 - 1.6
#include <iostream>
#include "Sales_item.h"

// Print the number of times each value occurs (in a row)
// int main()
// {
//     int currVal = 0, val = 0;
//     if (std::cin >> currVal) 
//     {
//         int cnt = 1;
//         while (std::cin >> val)
//         {
//             if (val == currVal)
//             {
//                 ++cnt;
//             }
//             else
//             {
//                 std::cout << currVal << " occurs " << cnt << " times" << std::endl;
//                 currVal = val;
//                 cnt = 1;
//             }
//         }
//         std::cout << currVal << " occurs " << cnt << " times" << std::endl;
//     }
//     return 0;
// }


// Print the values between two integer inputs when the first number is smaller
// int main()
// {
//     int a = 0, b = 0;
//     std::cin >> a >> b;
//     if (a < b)
//     {
//         for (int i = a; i <= b; i++)
//         {
//             std::cout << i << std::endl;
//         }
//     }
//     return 0;
// }


// read and then output Sales_item
// int main()
// {
//     Sales_item item;
//     while (std::cin >> item)
//     {
//         std::cout << item << std::endl;
//     }
//     return 0;
// }


// read two Sales_item objects and produce their sum
// int main()
// {
//     Sales_item item1, item2;
//     std::cin >> item1 >> item2;
//     std::cout << item1 + item2 << std::endl;
// }


// read sum of multiple transations (same ISBN - matches first entry)
// int main()
// {
//     Sales_item sum, item2;
//     if (std::cin >> sum)
//     {
//         while (std::cin >> item2)
//         {   
//             if (sum.isbn() == item2.isbn())
//                 sum += item2;
//         }
//     std::cout << sum << std::endl;
//     }
//     return 0;
// }


// count # transactions for each ISBN
// int main()
// {
//     Sales_item lead, next;
//     if (std::cin >> lead)
//     {
//         int count = 1;
//         while (std::cin >> next)
//         {
//             if (lead.isbn() == next.isbn())
//             {
//                 count++;
//             }
//             else
//             {
//                 std::cout << lead.isbn() << ": " << count << std::endl;
//                 count = 1;
//             }
//             lead = next;
//         }
//         std::cout << lead.isbn() << ": " << count << std::endl;
//     }
// }


// count total earnings per ISBN
int main()
{
    Sales_item lead, next;
    if (std::cin >> lead)
    {
        while (std::cin >> next)
        {
            if (lead.isbn() == next.isbn())
            {
                lead += next;
            }
            else
            {
                std::cout << lead << std::endl;
                lead = next;
            }
        }
        std::cout << lead << std::endl;
        return 0;
    }
    else
    {
        std::cout << "Missing data" << std::endl;
        return -1;
    }
}