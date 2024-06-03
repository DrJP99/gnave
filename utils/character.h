#include <iostream>
#include <sstream>
#include <string>

#include "careers.h"
#include "die.h"
#include "inventory.h"

using namespace std;

void random_items(Inventory &inv) {
	int ap = 0;
	int rand = 0;
	bool has_weapon = false;
	Die d = Die();

	Die armor_die = Die(7);
	Armor armors[] = {
		Armor("Shield"),
		Armor("Helmet"),
		Armor("Gambeson"),
		Armor("Mail shirt"),
		Armor("Breastplate"),
		Armor("Arm plate"),
		Armor("Leg plate"),
	};

	Die weapon_die = Die(12);
	Weapon weapons[] = {
		Weapon("Dagger", 1, "melee"),
		Weapon("Cudgel", 1, "melee"),
		Weapon("Sword", 1, "melee"),
		Weapon("Mace", 1, "melee"),
		Weapon("Axe", 1, "melee"),
		Weapon("Bow", 2, "missile"),
		Weapon("Crossbow", 2, "missile"),
		Weapon("Sling", 1, "missile"),
		Weapon("Halberd", 2, "melee"),
		Weapon("War Hammer", 2, "melee"),
		Weapon("Battleaxe", 2, "melee"),
		Weapon("Zweihander", 2, "melee"),
	};

	Die rand_die = Die(2);
	for (int i = inv.get_curr_slot(); i < inv.get_avail_slots(); i++) {
		rand = d.roll();
		switch (rand) {
			case 1: {
				// 3d6 * 10 coins
				int coins = (d.roll() + d.roll() + d.roll()) * 10;
				inv.push_item(Item(to_string(coins).append(" coins")));
				break;
			}
			case 2: {
				inv.push_item(Item("Rations 2x"));
				break;
			}
			case 3: {
				inv.push_item(Item("50' rope"));
				break;
			}
			case 4: {
				inv.push_item(Item("Torches 2x"));
				break;
			}
			case 5: {
				int choice = 1;
				if (!has_weapon) {
					choice = rand_die.roll();
				}
				switch (choice) {
					case 1: {
						inv.push_item(armors[ap]);
						ap++;
						break;
					}
					case 2: {
						bool has_space = true;
						Weapon selected_weapon;
						do {
							selected_weapon = weapons[weapon_die.roll()];
							has_space = i + selected_weapon.get_space() <= inv.get_avail_slots();
						} while (!has_space);
						has_weapon = true;
						inv.push_item(selected_weapon);
						break;
					}
				}
				break;
			}
			case 6: {
				inv.push_item(Item("Quiver (20 arrows)"));
				break;
			}
		}
	}

	// return inv;
}

class Character {
   private:
	int STR;
	int DEX;
	int CON;
	int INT;
	int WIS;
	int CHA;

	Inventory inv;

	string name;
	Career careers[2];

	int HP;

	int AC;
	int AP;

	int LVL;
	int XP;

	int max_inventory;

   public:
	Character() {
		STR = 0;
		DEX = 0;
		CON = 0;
		INT = 0;
		WIS = 0;
		CHA = 0;

		inv = Inventory();
	}

	void set_ability_scores(int scores[3]) {
		for (int i = 0; i < 3; i++) {
			increase_ability_score(scores[i]);
		}
	}

	int increase_ability_score(int a) {
		switch (a) {
			case 1:
				return ++STR;
				break;
			case 2:
				return ++DEX;
				break;
			case 3:
				return ++CON;
				break;
			case 4:
				return ++INT;
				break;
			case 5:
				return ++WIS;
				break;
			case 6:
				return ++CHA;
				break;
		}
		return 0;
	}

	string print_scores() {
		ostringstream oss;
		oss << "STR: " << STR << "\tDEX: " << DEX
			<< "\tCON: " << CON << "\tINT: " << INT << "\tWIS: " << WIS << "\tCHA: " << CHA << endl;
		return oss.str();
	}

	void set_up_random() {
		// 1 - Roll ability Scores
		int stats[3];
		Die d6 = Die();
		for (int i = 0; i < 3; i++) {
			stats[i] = d6.roll();
		}

		set_ability_scores(stats);

		// 2 - Record Secondary Stats (Roll HP)

		LVL = 1;
		XP = 0;
		inv = Inventory(CON);
		HP = d6.roll();

		// 3 - Roll for careers

		Die d100 = Die(100);
		d100.roll();
		int career1 = d100.roll();
		int career2;
		do {
			career2 = d100.roll();
		} while (career1 == career2);

		careers[0] = all_careers[career1 - 1];
		careers[1] = all_careers[career2 - 1];

		// 3.0.1 get careers items

		inv.push_items(careers[0].get_items());
		inv.push_items(careers[1].get_items());

		// 3.1 - Choose other items

		if (this->INT >= 1) {
			Item spell_item = Item("Spell");
			inv.push_item(spell_item);
		}

		random_items(inv);

		// 4 - Calculate AP and AC

		this->AP = inv.calculate_ap();
		this->AC = AP + 11;

		// 5 - Name and describe character

		this->name = "John";
	}

	void print() {
		string separator = "~~~~~~~~~~~~~~~";
		cout << "Name: " << name << endl;
		cout << "Careers: " << careers[0].get_name() << ", " << careers[1].get_name() << endl;

		// cout << "Stats: " << endl;
		cout << separator << endl;
		cout << " STR: " << STR << "\t\t"
			 << "LVL: " << LVL << "; XP: " << XP << endl;
		cout << " DEX: " << DEX << "\t\t"
			 << "HP:  " << HP << "/" << HP << endl;
		cout << " CON: " << CON << "\t\t"
			 << "AC:  " << AC << "; AP: " << AP << endl;
		cout << " INT: " << INT << endl;
		cout << " WIS: " << WIS << endl;
		cout << " CHA: " << CHA << endl;
		cout << separator << endl;
		cout << "> Item slots: [" << inv.get_avail_slots() << "]" << endl;
		inv.print_inv();
	}
};