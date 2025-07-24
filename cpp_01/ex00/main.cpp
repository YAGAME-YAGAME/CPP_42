#include "Zombie.hpp"

int main() {
	std::cout << "=== Testing heap allocation (newZombie) ===" << std::endl;
	
	// Create zombie on heap - can be used outside of scope
	Zombie* heapZombie = newZombie("otmane");
	heapZombie->announce();
	
	std::cout << "\n=== Testing stack allocation (randomChump) ===" << std::endl;
	
	// Create zombie on stack - automatically destroyed at end of function
	randomChump("hihihoho");
	
	std::cout << "\n=== Demonstrating the difference ===" << std::endl;
	std::cout << "otmane is still alive and can announce again:" << std::endl;
	heapZombie->announce();

	std::cout << "\nhihihoho was automatically destroyed when randomChump() ended." << std::endl;
	std::cout << "But otmane needs manual cleanup:" << std::endl;

	// Manual cleanup for heap zombie
	delete[] heapZombie;
	
	std::cout << "\nProgram ending..." << std::endl;
	return 0;
}