#include <iostream>
#include "World.h"
#include "Slime.h"
#include <vector>

UWorld World;

using namespace std;

int main()
{
	World.Initialize();
	World.PrintAllActor();

	World.Clear();
	World.PrintAllActor();

	World.End();
	return 0;
}