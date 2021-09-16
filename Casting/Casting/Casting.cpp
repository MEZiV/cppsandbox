

#include <iostream>

int main()
{
    int a = 24;
    double b;
    b = static_cast<double>(a);

    b = (double)a;
    b = double(a);
    b = a;
    a = static_cast<int>(b);
}




