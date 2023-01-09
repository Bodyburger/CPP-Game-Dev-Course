#include <iostream>
#include <string>
using namespace std;

struct LocationVector
{
	float x;
	float y;
	float z;
};

struct Player
{
	int Level;
	float Health;
	float Damage;
	float Stamina;

	LocationVector Location = { 0.f, 0.f, 0.f };

	void TakeDamage(float dmg)
	{
		Health -= dmg;
	}

	int GetLevel()
	{
		if (Level > 10)
		{
			cout << "Level is greater than 10! \n";
		}
		return Level;
	}

	void DisplayLocation()
	{
		cout << "Location.x = " << Location.x << endl;
		cout << "Location.y = " << Location.y << endl;
		cout << "Location.z = " << Location.z << endl;
	}
};

int main()
{
	Player p_1;
	p_1.Level = 11;
	p_1.Health = 100.f;
	p_1.Damage = 10.f;
	p_1.Stamina = 20.f;

	cout << "p_1 Level = " << p_1.GetLevel() << endl;

	p_1.TakeDamage(40.f);
	cout << "p_1 takes " << 40.f << " damage!" << endl;
	cout << "p_1 Health = " << p_1.Health << endl;

	p_1.DisplayLocation();

	Player p_2 = { 1, 50.f, 40.f, 35.54f, {36.2f, 55.12f, 5.f} };

	p_2.DisplayLocation();



	system("pause");
}