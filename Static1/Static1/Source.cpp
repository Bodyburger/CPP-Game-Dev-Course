#include <iostream>
using namespace std;


class Critter
{
public:
	Critter()
	{
		cout << "A critter is born.\n";
		++critterCount;
	}

	static void AnnounceCount()
	{
		cout << critterCount << endl;
	}

	// static class variable members must be initialized outside of the class
	static int critterCount;
};

// Fully qualifying the name with the scope resolution operator
int Critter::critterCount = 0;

int main()
{
	Critter::critterCount = 13;
	Critter::AnnounceCount();

	Critter crit;
	Critter::AnnounceCount();

	Critter* critPtr = new Critter;
	Critter::AnnounceCount();

	delete critPtr;

	system("pause");
}


//void AddToCount()
//{
//	static int count = 0;
//	count++;
//	cout << count << endl;
//}
//
//int main()
//{
//	for (int i = 0; i < 100; i++)
//	{
//		AddToCount();
//	}
//
//	system("pause");
//}