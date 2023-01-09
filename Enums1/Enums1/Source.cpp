#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
	PS_Crouched, // Can be set to PS_Crouched = 1,
	PS_Standing, // then this would be automatically set to 2
	PS_Walking,
	PS_Running
};

// PS_ or MS_ is a naming convention that helps to avoid misusage of the name
// Unreal also uses this convention (?)
enum MovementStatus
{
	MS_Crouched,
	MS_Running
};

int main()
{
	PlayerStatus status;
	status = PS_Crouched;

	if (status == PS_Crouched)
	{
		cout << "The player is crouching." << endl;
	}

	status = PlayerStatus::PS_Running;

	if (status != PS_Crouched)
	{
		cout << "The player is not crouching." << endl;
	}

	// a value of type cannot be assigned to an entity of type
	//status ~=~ MovementStatus::PS_Running;


		system("pause");
	}