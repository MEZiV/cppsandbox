

#include <iostream>

int main()
{
	int stopy;
	double metry;
	double przelicznik;
	przelicznik = 0.3;
	std::cout << "podaj wysoko�� w spotach\n";
	std::cin >> stopy;
	metry = stopy * przelicznik;
	std::cout << "wysoko�� w metrach\n" << metry;
	return 0;
}



