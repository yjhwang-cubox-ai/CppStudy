#include <iostream>
#include <vector>
#include "marine.hpp"


Marine::Marine() {
	hp = 50;
	coord_x = coord_y = 0;
	damage = 5;
	is_dead = false;
}

Marine::Marine(int x, int y, char* name) {
	hp = 50;
	coord_x = x;
	coord_y = y;
	damage = 5;
	is_dead = false;

	mName = new char[strlen(name) + 1];
	strcpy(mName, name);
}

void Marine::move(int x, int y) {
	coord_x = x;
	coord_y = y;
}

int Marine::attack() { return damage; }

void Marine::be_attacked(int damage_earn) {
	hp -= damage_earn;
	if (hp <= 0) is_dead = true;
}

void Marine::show_status() {
	std::cout << " *** Marine *** " << mName << std::endl;
	std::cout << " Location : ( " << coord_x << " , " << coord_y << " ) "
		<< std::endl;
	std::cout << " HP : " << hp << std::endl;
}

int main() {

	/*Marine* marines[100];
	marines[0] = new Marine(2, 3);
	marines[1] = new Marine(3, 5);

	marines[0]->show_status();
	marines[1]->show_status();*/

	Marine a(1,1, "yy");
	Marine b = a;
	a.show_status();
	b.show_status();

	return 0;

}