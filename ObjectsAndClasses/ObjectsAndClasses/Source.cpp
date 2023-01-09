#include <iostream>
#include <string>
using namespace std;


struct Cat
{
	Cat();

	int age;
	float health;

	void Meow();
};

Cat::Cat()
{
	cout << "A new cat is born." << endl;

	age = 3;
	health = 75.f;

	Meow();
}

void Cat::Meow()
{
	cout << "My age is: " << age << ".\n";
	cout << "My health is: " << health << ".\n";
}

int main()
{
	Cat cat;

	cat.age += 5;

	cat.Meow();


	system("pause");
}