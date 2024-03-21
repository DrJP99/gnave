#include <iostream>
#include <sstream>
#include <string>
using namespace std;

class Character {
   private:
	int STR;
	int DEX;
	int CON;
	int INT;
	int WIS;
	int CHA;

	string name;
	string careers[2];

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

		// 2 - Record Secondary Stats (Roll HP)

		// 3 - Roll for careers
		// 3.1 - Choose other items

		// 4 - Calculate AP and AC

		// 5 - Name and describe character
	}
};