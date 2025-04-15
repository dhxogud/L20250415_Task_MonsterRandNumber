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
void UWorld::Initialize()
{
	srand(unsigned int(time(NULL)));

	for (int i = 0; i < rand() % 10; i++)
	{
		Player.push_back(new APlayer());
	}
	for (int i = 0; i < rand() % 10; i++)
	{
		Slime.push_back(new ASlime());
	}
	for (int i = 0; i < rand() % 10; i++)
	{
		Goblin.push_back(new AGoblin());
	}
	for (int i = 0; i < rand() % 10; i++)
	{
		Boar.push_back(new ABoar());
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
	for (int i = 0; i < Player.size(); i++)
	{
		delete Player[i];
		Player[i] = nullptr;
	}

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