

#include <iostream>

int main()
{
    std::cout << "program sprawdzajacy czy uczen ma pasek  \n";
    int d;
    int c;
    int b;
    int a;
   
    std::cout << " podaj ocene pierwsza \n";
    std::cin >> a;
    std::cout << " podaj ocene dwa \n";
    std::cin >> b;
    std::cout << "podaj ocene trzy \n";
    std::cin >> c;
    std::cout << "podaj ocena cztery \n";
    std::cin >> d;
    double sr;
    sr = (a + b + c + d) / 4; 
    if (4.75 < sr)
        std::cout << "masz pasek";
    if (4.75 > sr)
        std::cout << "nie masz paska";
    return 0;
}

