#include <iostream>
#include "Warrior.h"

int main(){
	Warrior locutus = Warrior("Locutus", "Borg", 5, 50);
	Warrior quark = Warrior("Quark", "Ferengi", 4, 100);
	quark.display();
	// This is what displays:
	// Warrior Name: Quark, Race: Ferengi, Level: 4, healthPercent: 76.9231%, 
	// experience: 32766, xp until next level: 4000
	locutus.addXP(10000);
	locutus.display();
	// This is what displays:
	// Warrior Name: Locutus, Race: Borg, Level: 6, healthPercent: 100%, 
	// experience: 42766, xp until next level: 6000


}