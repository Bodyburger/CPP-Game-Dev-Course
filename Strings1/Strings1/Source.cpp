#include <iostream>
#include <string>
// using namespace std;

int main()
{
	char myCString[5] = { 'D', 'o', 'g', 's', '\0' };
	std::cout << myCString << std::endl;

	char mySecondCString[5] = "Dogs";
	std::cout << myCString << std::endl;

	std::string myString;

	myString = "My dog's name is: ";
	std::string first = "Spot ";
	std::string last = "Jones";

	myString += (first + last);

	std::cout << myString << std::endl;




	system("pause");
}