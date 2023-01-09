#pragma once
#include "Object.h"
#include "Actor.h"
#include <iostream>
using namespace std;


class Pawn : public Actor
{
public:
	virtual void BeginPlay() override;

	void PawnFunction();
};