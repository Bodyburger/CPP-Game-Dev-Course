#include <iostream>
#include <string>
using namespace std;

enum PlayerStatus
{
	PS_Running,
	PS_Walking,
	PS_Crouching
};

const float runSpeed = 800.f;
const float walkSpeed = 500.f;
const float crouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);

void SwitchOnInt(int i);

int main()
{
	float movementSpeed;

	PlayerStatus status = PS_Walking;

	UpdateMovementSpeed(status, movementSpeed);

	cout << "movementSpeed = " << movementSpeed << endl;


	int integer = 0;

	SwitchOnInt(integer);



	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
	switch (P_Status)
	{
	case PS_Running:
		speed = runSpeed;
		break;
	case PS_Walking:
		speed = walkSpeed;
		break;
	case PS_Crouching:
		speed = crouchSpeed;

	}
}

void SwitchOnInt(int i)
{
	switch (i)
	{
	case 0:
		cout << "Your number was zero." << endl;
		break;
	case 1:
		cout << "Your number was one." << endl;
		break;

	case 2:
		cout << "Your number was two." << endl;
		break;
	default:
		cout << "Your number was not 0, 1, or 2. \n";
	}
}