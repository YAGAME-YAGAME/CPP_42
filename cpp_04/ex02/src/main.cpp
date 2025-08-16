#include "../headers/Animal.hpp"
#include "../headers/Dog.hpp"
#include "../headers/Cat.hpp"
#include "../headers/WrongAnimal.hpp"
#include "../headers/WrongCat.hpp"
#include <iostream>
// color:
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"

void testBasicPolymorphism() {
    std::cout << GREEN<< "=== Basic Polymorphism Test ===" << RESET << std::endl;
    
    // Animal is now abstract, so we can't instantiate it directly
    // const Animal* meta = new Animal(); // This would cause compilation error
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    std::cout << "j type: " << j->getType() << std::endl;
    std::cout << "i type: " << i->getType() << std::endl;

    std::cout << GREEN << "Calling makeSound():" << RESET << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound(); // will output the dog sound!
    // meta->makeSound(); // Animal is abstract, no direct instantiation
    
    // delete meta;
    delete j;
    delete i;
    std::cout << std::endl;
}

void testWrongImplementation() {
    std::cout << GREEN << "=== Wrong Implementation Test (No Polymorphism) ===" << RESET << std::endl;

    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();
    
    std::cout << "wrongCat type: " << wrongCat->getType() << std::endl;

    std::cout << GREEN << "Calling makeSound():" << RESET << std::endl;
    wrongCat->makeSound(); // will output the WrongAnimal sound (not polymorphic!)
    wrongMeta->makeSound();
    
    std::cout << GREEN << " Destructor " << RESET << std::endl;
    delete wrongMeta;
    delete wrongCat;
    std::cout << std::endl;
}

void testCopyConstructorAndAssignment() {
    std::cout << GREEN << "=== Copy Constructor and Assignment Test ===" << RESET << std::endl;

    Dog originalDog;
    Dog copiedDog(originalDog);
    Dog assignedDog;
    assignedDog = originalDog;
    
    std::cout << "Original dog type: " << originalDog.getType() << std::endl;
    std::cout << "Copied dog type: " << copiedDog.getType() << std::endl;
    std::cout << "Assigned dog type: " << assignedDog.getType() << std::endl;

    std::cout << GREEN << "All dogs making sound:" << RESET << std::endl;
    originalDog.makeSound();
    copiedDog.makeSound();
    assignedDog.makeSound();
    std::cout << std::endl;
}

void testPolymorphicArray() {

    std::cout <<std::endl<< GREEN << "=== Polymorphic Array Test ===" << RESET << std::endl;

    const int arraySize = 4;
    Animal* animals[arraySize];
    
    // animals[0] = new Animal(); // Animal is abstract, can't instantiate directly
    animals[0] = new Dog();  // Use Dog instead
    animals[1] = new Dog();
    animals[2] = new Cat();
    animals[3] = new Dog();

    std::cout << GREEN << "Animals in array:" << RESET << std::endl;
    for (int i = 0; i < arraySize; i++) {
        std::cout << "Animal " << i << " (" << animals[i]->getType() << "): ";
        animals[i]->makeSound();
    }
    
    // Clean up
    for (int i = 0; i < arraySize; i++) {
        delete animals[i];
    }
    std::cout << std::endl;
}

void testStackObjects() {
    std::cout << std::endl << GREEN << "=== Stack Objects Test ===" << RESET << std::endl;

    // Animal animal; // Animal is abstract, can't instantiate directly
    Dog dog;
    Cat cat;
    
    std::cout << "Stack objects types:" << std::endl;
    // std::cout << "Animal type: " << animal.getType() << std::endl;
    std::cout << "Dog type: " << dog.getType() << std::endl;
    std::cout << "Cat type: " << cat.getType() << std::endl;

    std::cout << GREEN << "Stack objects sounds:" << RESET << std::endl;
    // animal.makeSound();
    dog.makeSound();
    cat.makeSound();
    std::cout << std::endl;
}

void testPolymorphicReferences() {
    std::cout << std::endl<< GREEN << "=== Polymorphic References Test ===" << RESET << std::endl;

    Dog dog;
    Cat cat;
    
    Animal& dogRef = dog;
    Animal& catRef = cat;

    std::cout << GREEN << "Reference types:" << RESET << std::endl;
    std::cout << "Dog reference type: " << dogRef.getType() << std::endl;
    std::cout << "Cat reference type: " << catRef.getType() << std::endl;
    
    std::cout << "Reference sounds:" << std::endl;
    dogRef.makeSound();
    catRef.makeSound();
    std::cout << std::endl;
}

void testArryOfAnimals(){
    const int numAnimals = 4;
    Animal* animals[numAnimals];

    std::cout<< GREEN<<"Create half dogs and half cats"<< RESET<< std::endl;
    for (int i = 0; i < numAnimals / 2; i++) {
        animals[i] = new Dog();
    }
    for (int i = numAnimals / 2; i < numAnimals; i++) {
        animals[i] = new Cat();
    }
    
    // Test deep copy
    std::cout<< GREEN<<"Test deep copy"<< RESET<< std::endl;
    Dog originalDog;
    Dog copyDog(originalDog);
    
    // Delete all animals
    std::cout<< GREEN<<"Delete all animals"<< RESET<< std::endl;
    for (int i = 0; i < numAnimals; i++) {
        delete animals[i];
    }
};

int main() {
    // testBasicPolymorphism();
    // testWrongImplementation();
    // testCopyConstructorAndAssignment();
    // testPolymorphicArray();
    // testStackObjects();
    // testPolymorphicReferences();
    
    // Animal is now abstract - cannot instantiate directly
    // const Animal* meta = new Animal(); // This would cause compilation error
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound(); //will output the dog sound!
    // meta->makeSound(); // Cannot call - meta doesn't exist
    
    delete j;
    delete i;
    
    testArryOfAnimals();

    
}

// int main()
// {
//     const Animal* meta = new Animal();
//     const Animal* j = new Dog();
//     const Animal* i = new Cat();
//     std::cout << j->getType() << " " << std::endl;
//     std::cout << i->getType() << " " << std::endl;
//     i->makeSound(); //will output the cat sound!
//     j->makeSound(); //will output the dog sound!
//     meta->makeSound();


//     return 0;
// }
