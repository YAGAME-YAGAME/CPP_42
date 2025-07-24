#include "Zombie.hpp"


int main() {
	std::cout << "=== Testing zombieHorde function ===" << std::endl;
	
	// Test with a horde of 5 zombies
	int hordeSize = 5;
	std::string zombieName = "HordeWalker";
	
	std::cout << "Creating a horde of " << hordeSize << " zombies named '" << zombieName << "'..." << std::endl;
	
	Zombie* horde = zombieHorde(hordeSize, zombieName);
	
	if (horde) {
		std::cout << "\nHorde created successfully! Making them announce themselves:" << std::endl;
		
		// Make each zombie announce itself
		for (int i = 0; i < hordeSize; i++) {
			std::cout << "Zombie " << i + 1 << ": ";
			horde[i].announce();
		}
		
		std::cout << "\nTesting individual zombie access:" << std::endl;
		std::cout << "First zombie: ";
		horde[0].announce();
		std::cout << "Last zombie: ";
		horde[hordeSize - 1].announce();
		
		std::cout << "\nCleaning up the horde..." << std::endl;
		// Important: use delete[] for array deletion
		delete[] horde;
	}
	
	std::cout << "\n=== Testing edge cases ===" << std::endl;
	
	// Test with single zombie
	std::cout << "Creating a horde of 1 zombie:" << std::endl;
	Zombie* singleZombie = zombieHorde(1, "LoneWanderer");
	if (singleZombie) {
		singleZombie->announce();
		delete[] singleZombie;
	}
	
	// Test with zero or negative size
	std::cout << "\nTesting with invalid size (0):" << std::endl;
	Zombie* invalidHorde = zombieHorde(0, "Nobody");
	if (!invalidHorde) {
		std::cout << "Correctly returned NULL for invalid size" << std::endl;
	}
	
	std::cout << "\nProgram ending..." << std::endl;
	return 0;
}