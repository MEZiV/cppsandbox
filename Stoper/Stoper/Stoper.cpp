

#include <iostream>
#include <Windows.h>
#include<cstdlib>

int main()
{
    int czas;
    std::cout << "set the time to count down in seconds\n";
    std::cin >> czas;
    system("cls");
     for (int i = czas; i >= 0; i--) {
        std::cout << i;
        Sleep(1000);
        system("cls");
    }
    return 0;
}




