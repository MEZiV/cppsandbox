

#include <iostream>

int main()
{
	int stopy;
	double metry;
	double przelicznik;
	przelicznik = 0.3;
	std::cout << "podaj wysokoœæ w spotach\n";
	std::cin >> stopy;
	metry = stopy * przelicznik;
	std::cout << "wysokoœæ w metrach\n" << metry;
	return 0;
}



