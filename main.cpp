#include <iostream>

#include "utils/character.h"

using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int n = 0;

	// cout << "enter a number n: ";
	// cin >> n;
	// string name = "john";

	// Die myDie = Die(n);
	Character my_character = Character();

	// Item item1 = Item("Quiver (20)", 1);
	// Item item2 = Item("backpack", 1);
	// Item item3 = Item("Torch (3)", 1);
	// Weapon sword = Weapon("Zweihander", 2, "melee");

	// Inventory inventory = Inventory();
	// inventory.push_item(item1);
	// inventory.push_item(item2);
	// inventory.push_item(item3);
	// inventory.push_item(sword);

	// inventory.finish_inv();
	// inventory.print_inv();

	////////

	my_character.set_up_random();
	my_character.print();

	cout << "Exiting..." << endl;

	return 0;
}