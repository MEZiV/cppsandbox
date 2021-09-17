//This program uses pseudo-random numbers to get a random result which you have to guess


#include <iostream>
#include <cstdlib>
#include <Windows.h>
int main()
{
    int number ;
    int attempt=1;
    int a;   // The variable a holds a "random" number
    std::cout << "Hello guess a number in the range 1..100 \n";
    srand(time(NULL));
    a = rand() % 100 + 1;
    while (true)
    {
        std::cout << "give your number suggestion \n";
        std::cin >> number;
        if ( a==number ) {
            break;
        }
        else if (a > number) {
            std::cout << "wrong answer your number is too small, try againtry again in 3 secend \n";
            Sleep(2500);
            system("cls");
        }
        else
        {
            std::cout << "Wrong answer your number is too big, try again in 3 secend  \n";
            Sleep(2500);
            system("cls");
        }
        attempt++;

    }
    std::cout << "congratulations you guessed the number in " << attempt << " tries";
}




