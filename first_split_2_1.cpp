#include <iostream>
#include "first_split_2_2.h"

int main()
{
    int x{ first_split_2_2() };
    int y{ first_split_2_2() };

    std::cout << x << " + " << y << " is " << x + y << '\n';

    return 0;
}