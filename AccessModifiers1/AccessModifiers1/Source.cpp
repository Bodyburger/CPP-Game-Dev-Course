#include <iostream>
#include <string>
using namespace std;

class Creature
{
public:
	Creature();

	void SetName(string name);
	string GetName();

	void TakeDamage(float damage);

	float GetHealth();

private:
	string name;
	float health;

protected:
	int numberOfLimbs;
};

class Goblin : public Creature
{
// When you create a child class, by default its body is private.
// You need your constructor to be public, if you want to be able to call it
	// by creating an object of that class.
public:
	Goblin();

	int GetNumberOfLimbs();
};

int main()
{
	Creature Igor;
	// name is in a private section
	// Igor.~name~ = "Igor";

	Igor.SetName("Igor");
	cout << "Name :" << Igor.GetName() << endl;
	cout << "Health: " << Igor.GetHealth() << endl;

	cout << "Igor will now take 35 damage\n";
	Igor.TakeDamage(35.0f);

	Goblin Gobby;
	cout << Gobby.GetName() << endl;
	// numberOfLimbs is protected
	// cout << Gobby.numberOfLimbs << endl;
	cout << Gobby.GetNumberOfLimbs() << endl;

	system("pause");
}
Creature::Creature()
{
	health = 100.f;
	cout << "A creature has been created!\n";
}

void Creature::SetName(string nameParam)
{
	name = nameParam;
}

string Creature::GetName()
{
	return name;
}

void Creature::TakeDamage(float damage)
{
	float total;
	total = health - damage;

	if (total <= 0.f)
	{
		cout << GetName() << " has died!\n";
	}
	else
	{
		health = total;
	}

	cout << "Health: " << health << endl;
}

float Creature::GetHealth()
{
	return health;
}

Goblin::Goblin()
{
	// Can access numberOfLimbs, since this variable is protected and inherited.
	numberOfLimbs = 5;
	SetName("Gabby");
}

int Goblin::GetNumberOfLimbs()
{
	return numberOfLimbs;
}