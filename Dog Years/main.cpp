#include <iostream>

int main() {

	int dog_age = 8;
	int early_years = 21; //The first two years of a dog’s life count as 21 human years.
	int later_years = (dog_age - 2) * 4; //Each following year counts as 4 human years.
	int human_years = early_years + later_years; //yeah

	std::cout << "My name is Diego! Ruff ruff, I am " << human_years << " years old in human years.\n";
}