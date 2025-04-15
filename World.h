#pragma once

#include <vector>

class APlayer;
class ASlime;
class AGoblin;
class ABoar;

using namespace std;
//World has a Player.

class UWorld
{
public:
	vector<APlayer*> Player;
	vector<ASlime*> Slime;
	vector<AGoblin*> Goblin;
	vector<ABoar*> Boar;

public:
	UWorld();
	~UWorld();

	void Initialize();
	void PrintAllActor();
	void Clear();
	void Terminate();
};

