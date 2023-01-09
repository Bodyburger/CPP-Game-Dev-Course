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

int main()
{
	Animal animal;
	animal.Report();

	Animal animal_2("Cheetah", 7, 5);

	system("pause");
}

Animal::Animal()
{
	cout << "An animal is born." << endl;

	name = "Default name";
	age = 2;
	numberOfLimbs = 4;

}

// Animal::Animal(string nameParam, int ageParam, int limbsParam)
//  	: name(nameParam), age(ageParam), numberOfLimbs(limbsParam)
// {
//		Report();
// }

Animal::Animal(string nameParam, int ageParam, int limbsParam)
{
	name = nameParam;
	age = ageParam;
	numberOfLimbs = limbsParam;
}

void Animal::Report()
{
	cout << endl;
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Number of limbs: " << numberOfLimbs << endl;
	cout << endl;
}