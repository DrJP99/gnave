#include <iostream>

#include "utils/character.h"

using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int n = 0;

	// cout << "enter a number n: ";
	// cin >> n;
	string name = "john";

	Die myDie = Die(n);
	Character my_character = Character();

	// int enter;
	// bool running = true;

	// do {
	// 	cout << "The die was rolled and you got: " << myDie.roll() << endl;

	// 	cout << "Do you want to roll the d" << myDie.get_faces() << "? [1 = yes, 0 = no]: ";
	// 	cin >> enter;
	// 	running = enter == 1;
	// } while (running);

	// int scores[3];

	// cout << "You rolled: ";
	// for (int i = 0; i < 3; i++) {
	// 	scores[i] = myDie.roll();
	// 	cout << scores[i] << endl;
	// }

	// my_character.set_ability_scores(scores);

	// cout << "These are your scores:\n"
	// 	 << my_character.print_scores() << endl;

	Item item1 = Item("Quiver (20)", 1);
	Item item2 = Item("backpack", 1);
	Item item3 = Item("Torch (3)", 1);
	Weapon sword = Weapon("Zweihander", 2, "melee");

	Inventory inventory = Inventory();
	inventory.push_item(item1);
	inventory.push_item(item2);
	inventory.push_item(item3);
	inventory.push_item(sword);

	inventory.finish_inv();
	inventory.print_inv();

	my_character.set_up_random();

	cout << "Exiting..." << endl;

	return 0;
}