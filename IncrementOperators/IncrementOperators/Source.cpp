#include <iostream>
using namespace std;

int main()
{
	int i = 3;
	float j = 2.0;

	i -= 2;
	i *= 5;
	i /= 2;
	i %= 1;
	i += 3;

	float k = i / j;

	cout << i << endl;
	cout << j << endl;
	cout << k << endl;

	k = j / i;
	cout << k << endl;

	// Implicit conversion
	int l = k;
	cout << l << endl;

	int m = 3;
	m--;
	cout << m << endl;
	++m;
	cout << m << endl;

	// postincrement
	cout << m-- << endl;
	cout << m << endl;

	// preincrement
	cout << ++m << endl;
	cout << m << endl;

	// Preincrements ++i and stores that value into both i and n. 
	int n = ++i;
	cout << n << endl;
	cout << i << endl;

	// Stores value of i into n, then postincrements i++. 
	n = i++;
	cout << n << endl;
	cout << i << endl;


	system("pause");
}