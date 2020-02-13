#include <iostream>
#include <string>
#include "Warrior.h"
#define TRUE 1
#define FALSE 0

Warrior::Warrior(std::string name, std::string race){
	this->name = name;
	this->race = race;
	level = 0;
	experience = 0;
	health = 0;
	enraged = FALSE;
}
Warrior::Warrior(std::string name, std::string race, int level){
	this->name = name;
	this->race = race;
	this->level = level;
	health = 0;
	getXP();
	enraged = FALSE;
}
Warrior::Warrior(std::string name, std::string race, int level, int health){
	this->name = name;
	this->race = race;
	this->level = level;
	this->health = health;
	getXP();
	enraged = FALSE;
}
int Warrior::maxHP(){
	return 90 + 10 * level;
}
int Warrior::getHP() const{
	return health;
}
void Warrior::setHP(int health){
	this->health = health;
}
int Warrior::nextLevelXP(){
	return 1000 * level;
}
void Warrior::evalXP(){
	if(experience > nextLevelXP()){
		level+=1;
		health = maxHP();
	}
}
int Warrior::getXP() const{
	return experience;
}
void Warrior::addXP(int xp){
	experience+=xp;
	evalXP();
}
double Warrior::healthPercent(){
	return 100.0 * health / maxHP();
}
void Warrior::display(){
	std::cout << "Warrior " 
		<< "Name: " << name
		<< ", Race: " << race
		<< ", Level: " << level
		<< ", healthPercent: " << healthPercent() << "%"
		<< ", experience: " << experience
		<< ", xp until next level: " << nextLevelXP() << std::endl;
}