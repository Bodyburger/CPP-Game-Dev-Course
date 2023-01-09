#include <iostream>
#include <string>
using namespace std;

struct Container
{
	string name;

	int x;
	int y;
	int z;
};

int main()
{
	int a = 100;
	int* aPtr;
	aPtr = &a;
	cout << *aPtr << endl;


	int b = 50;
	aPtr = &b;
	cout << *aPtr << endl;


	int numbers[] = { 0,1,2,3,4,5,6,7,8,9,10 };
	int* numPtr = numbers;
	cout << *numPtr << endl;


	numPtr++;
	cout << *numPtr << endl;
	numPtr++;
	cout << *numPtr << endl;
	numPtr += 3;
	cout << *numPtr << endl;


	Container container = { "Sam", 5, 6, 7 };
	Container* containerPtr = &container;

	cout << (*containerPtr).name << endl;

	cout << containerPtr->name << endl;
	cout << containerPtr-> x << endl;




	system("pause");
}