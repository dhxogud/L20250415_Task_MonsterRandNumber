#include <iostream>
#include "World.h"
#include "Slime.h"
#include <vector>


using namespace std;


int main()
{
	UWorld* Wolrd = new UWorld();

	Wolrd->PrintAllActor();
	Wolrd->Clear();
	
	delete Wolrd;
	Wolrd = nullptr;

	return 0;
}