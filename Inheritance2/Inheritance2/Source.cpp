#include <iostream>
#include <string>
using namespace std;


class Animal
{
public:
	Animal();
	Animal(string nameParam, int ageParam, int limbsParam);

	string name;
	int age;
	int numberOfLimbs;

	void Report();
};

class Dog : public Animal
{
public:
	Dog();
	Dog(string nameParam, int ageParam, int limbsParam);

	void Speak();
};

int main()
{
	Dog dog("Spot", 4, 5);

	dog.Speak();

	system("pause");
}

Animal::Animal()
{
	cout << "An animal is born." << endl;

	name = "Default name";
	age = 2;
	numberOfLimbs = 4;
}

 Animal::Animal(string nameParam, int ageParam, int limbsParam)
  	: name(nameParam), age(ageParam), numberOfLimbs(limbsParam)
 {
		Report();
 }

void Animal::Report()
{
	cout << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Number of limbs: " << numberOfLimbs << endl;
	cout << endl;
}

Dog::Dog()
{
	cout << "A dog is born.\n";
}

Dog::Dog(string nameParam, int ageParam, int limbsParam)
{
	Animal(nameParam, ageParam, limbsParam);
}

void Dog::Speak()
{
	cout << "Woof! \n";
}