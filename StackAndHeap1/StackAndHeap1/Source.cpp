#include <iostream>
#include <string>
using namespace std;

struct  Character
{
	Character();

	void PrintHealth();

	string name;
	float health;
};

int main()
{
	for (int i = 0; i < 10; i++)
	{
		Character* ptrToChar = new Character();

		ptrToChar->name = "Neo";

		cout << ptrToChar->name << endl;

		ptrToChar->PrintHealth();

		delete ptrToChar;
	}

	system("pause");
}

Character::Character()
{
	name = "Default name";
	health = 100.f;
}

void Character::PrintHealth()
{
	cout << "Character health: " << health << endl;
}