#include <string>
class Warrior{
private:
	std::string name, race;
	int level, experience, health;
	bool enraged;
public:
	Warrior(std::string name, std::string race);
	Warrior(std::string name, std::string race, int level);
	Warrior(std::string name, std::string race, int level, int health);
	int maxHP();
	int getHP() const;
	void setHP(int);
	int nextLevelXP();
	void evalXP();
	void addXP(int);
	int getXP() const;
	double healthPercent();
	void display();
};