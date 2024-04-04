#include <iostream>
using namespace std;

class Item {
   protected:
	string type;
	string name;
	int space;

   public:
	Item() {
		// default constructor
		name = "";
		space = 1;
		type = "item";
	}

	Item(string name) {
		this->name = name;
		space = 1;
		type = "item";
	}

	Item(string name, int space) {
		this->name = name;
		this->space = space;
		type = "item";
	}

	string get_type() {
		return type;
	}

	virtual string get_name() {
		return name;
	}

	int get_space() {
		return space;
	}

	void set_type(string type) {
		this->type = type;
	}

	void set_name(string name) {
		this->name = name;
	}

	void set_space(int n) {
		space = n;
	}

	string get_under() {
		int l = name.length();
		string new_name = "";
		for (int i = 0; i < l; i++) {
			new_name += '^';
		}
		return new_name;
	}
};

class Weapon : public Item {
   private:
	int dice;

   public:
	Weapon() {
		name = "sword";
		space = 1;
		dice = 6;
		type = "melee";
	}

	Weapon(string name, int space, string type) {
		this->name = name;
		this->space = space;
		this->type = type;

		if (type == "melee") {
			if (space == 1) {
				dice = 6;
			} else if (space == 2) {
				dice = 8;
			}
		} else if (type == "missile") {
			if (space == 1) {
				dice = 4;
			} else if (space == 2) {
				dice = 6;
			}
		}
	}

	int get_dice() {
		return dice;
	}

	void set_dice(int n) {
		dice = n;
	}

	string get_name() override {
		return name + " (d" + to_string(dice) + ")";
	}
};

class Armor : public Item {
   private:
	int ap;	 // Armor Points

   public:
	Armor() {
		name = "shield";
		space = 1;
		ap = 1;
		type = "armor";
	}

	Armor(string name) {
		this->name = name;
		this->space = 1;
		ap = 1;
		type = "armor";
	}

	int get_ap() {
		return ap;
	}

	void set_ap(int ap) {
		this->ap = ap;
	}

	string get_name() override {
		return name + " (+" + to_string(ap) + ")";
	}
};

class MultiSlot : public Item {
   public:
	MultiSlot(string name) {
		this->name = name;
		space = 1;
		type = "multi";
	}
};

class Empty : public Item {
   public:
	Empty() {
		name = "*\t-\t-\t*";
		type = "empty";
	}
};

class Blocked : public Item {
   public:
	Blocked() {
		name = "XXXXXXXXXXXXXXX";
		type = "blocked";
	}
};