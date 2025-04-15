#pragma once

#include <vector>
#include <iostream>

#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "Boar.h"
#include "Slime.h"

UWorld::UWorld()
{
	Initialize();
}
UWorld::~UWorld()
{
	Terminate();
}
void UWorld::Initialize()
{
	srand(unsigned int(time(NULL)));

	for (int i = 0; i < 10; ++i)
	{
		int Type = rand() % 3;
		if (Type == 0)
		{
			Slime.push_back(new ASlime());
		}
		if (Type == 1)
		{
			Goblin.push_back(new AGoblin());
		}
		if (Type == 2)
		{
			Boar.push_back(new ABoar());
		}
		if (Type == 3)
		{
			Player.push_back(new APlayer());
		}
	}
}
void UWorld::PrintAllActor()
{
	cout << Player.size() << endl;
	cout << Slime.size() << endl;
	cout << Goblin.size() << endl;
	cout << Boar.size() << endl;
}

void UWorld::Clear()
{
	Player.clear();
	Slime.clear();
	Goblin.clear();
	Boar.clear();
}

void UWorld::Terminate()
{
	for (auto value : Player)
	{
		delete value;
		value = nullptr;
	}
	for (auto value : Slime)
	{
		delete value;
		value = nullptr;
	}
	for (auto value : Goblin)
	{
		delete value;
		value = nullptr;
	}
	for (auto value : Boar)
	{
		delete value;
		value = nullptr;
	}
}