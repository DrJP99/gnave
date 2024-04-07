#include <iostream>
#include <sstream>
#include <string>

#include "careers.h"
#include "die.h"
#include "inventory.h"
using namespace std;

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

		cout << "Your stats are:" << endl
			 << print_scores() << endl;

		// 2 - Record Secondary Stats (Roll HP)
		LVL = 1;
		XP = 0;
		inv = Inventory(CON);
		HP = d6.roll();

		cout << "Your secondary stats: " << endl
			 << "HP: " << HP << endl
			 << "LVL: " << LVL << " (" << XP << ") " << endl
			 << "Inventory slots: " << inv.get_avail_slots() << endl;

		// 3 - Roll for careers

		Die d100 = Die(100);
		int career1 = d100.roll();
		int career2;
		do {
			int career2 = d100.roll();
		} while (career1 == career2);

		careers[0] = all_careers[career1 - 1];
		careers[1] = all_careers[career2 - 1];

		// 3.0.1 get careers items

		inv.push_items(careers[0].get_items());
		inv.push_items(careers[1].get_items());

		cout << "Your careers are:\n ("
			 << career1 << ") " << careers[0].get_name() << "; (" << career2 << ") " << careers[1].get_name() << endl;
		inv.finish_inv();
		inv.print_inv();

		// 3.1 - Choose other items

		// 4 - Calculate AP and AC

		// 5 - Name and describe character
	}
};