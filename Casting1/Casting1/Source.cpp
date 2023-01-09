#include <iostream>
#include "Object.h"
#include "Actor.h"
#include "Pawn.h"
using namespace std;

void InheritanceFunction()
{
	// Dynamically creating three new objects on the heap
	Object* ptr_to_object = new Object;
	Actor* ptr_to_actor = new Actor;
	Pawn* ptr_to_pawn = new Pawn;

	Object* ObjectArray[] = { ptr_to_object, ptr_to_actor, ptr_to_pawn };

	for (int i = 0; i < 3; i++)
	{
		// ObjectArray[i]->BeginPlay(); // this was for previous the exercise

		Object* obj = ObjectArray[i];
		Actor* act = dynamic_cast<Actor*>(obj);

		if (act)
		{
			act->ActorFunction();
		}

		Pawn* pwn = dynamic_cast<Pawn*>(obj);

		if (pwn)
		{
			pwn->PawnFunction();
		}
	}

	cout << "\nNow using static cast: \n\n";

	for (int i = 0; i < 3; i++)
	{
		Object* objAgain = ObjectArray[i];

		Actor* actAgain = static_cast<Actor*>(objAgain);

		if (actAgain)
		{
			actAgain->ActorFunction();
		}

		Pawn* pwnAgain = static_cast<Pawn*>(objAgain);

		if (pwnAgain)
		{
			pwnAgain->PawnFunction();
		}
	}



	delete ptr_to_object;
	delete ptr_to_actor;
	delete ptr_to_pawn;
}

int main()
{
	InheritanceFunction();

	system("pause");
}