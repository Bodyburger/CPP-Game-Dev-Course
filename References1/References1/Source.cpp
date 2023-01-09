#include <iostream>
#include <string>
using namespace std;

// You have to either only accept string reference data type, then you can change it with operands etc.
// Operations on references change the variable itself, but you can't use literals.
// If const is used, you can use literals, but not operands, on the reference.
void ChangeStr(string& str);

int main()
{
	string myStr = "Druid";

	ChangeStr(myStr);
	ChangeStr("Literal Druid");


	cout << myStr << endl;

	string& myRef = myStr;

	cout << myStr << endl;
	cout << myRef << endl;

	myRef += " Mechanics";

	cout << myStr << endl;
	cout << myRef << endl;

	myStr += " Mechanics";

	cout << myStr << endl;
	cout << myRef << endl;


	system("pause");
}

void ChangeStr(string& str)
{
	// Doesn't work if str is const
	str += "!";
}