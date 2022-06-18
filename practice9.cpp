#include <iostream>

int main()
{   
    int i;
    const int v2 = 0; // top level
    int v1 = v2;
    int *p1 = &v1, &r1 = v1;
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;  // low level, top+low level, low level

    r1 = v2;  // valid - same as v1 = v2, which was legal
    // p1 = p2;  // invalid - p1 is not low level const but p2 is
    p2 = p1;  // valid - converts non-low-level-const p1 to low-level const
    // p1 = p3;  // invalid - p1 must also be low-level const
    p2 = p3;  // valid - low level both const, top level doesn't matter
}