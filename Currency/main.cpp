#include <iostream>

int main() {
	double pesos, reals, soles, dollars;
	std::cout << "Enter number of Colombian Pesos: ";
	std::cin >> pesos;
	std::cout << "Enter number of Brazilian Reals: ";
	std::cin >> reals;
	std::cout << "Enter number of Peruvian Soles: ";
	std::cin >> soles;
	dollars = 0.0588620 * pesos + 0.209177 * reals + 0.279104 * soles;
	std::cout << "US Dollars = $" << dollars << "\n";
}