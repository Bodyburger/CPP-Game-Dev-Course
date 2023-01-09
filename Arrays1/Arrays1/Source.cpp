#include <iostream>
using namespace std;

int main()
{
	int myIntArray[10];

	for (int i = 0; i < 10; i++)
	{
		myIntArray[i] = i;
		cout << myIntArray[i] << endl;
	}

	cout << "The first element in myIntArray is: " << myIntArray[0] << endl;
	cout << "The fifth element in myIntArray is: " << myIntArray[4] << endl;


	int myArray[5] = { 1, 23, 5, 4, 9 };

	cout << "myArray[0] = " << myArray[0] << endl;
	cout << "myArray[1] = " << myArray[1] << endl;
	cout << "myArray[2] = " << myArray[2] << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << "myArray[" << i << "] = " << myArray[i] << endl;
	}


	system("pause");
}