#include <iostream>
using namespace std;

class Item {
   private:
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

	Item(string name, int space) {
		this->name = name;
		this->space = space;
		type = "item";
	}

	string get_type() {
		return type;
	}

	string get_name() {
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
		Item("sword", 1);
		dice = 6;
		set_type("melee");
	}

	Weapon(string name, int space, string type) {
		set_name(name);
		set_space(space);
		set_type(type);

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
};

class Armor : public Item {
   private:
	int ap;	 // Armor Points

   public:
	Armor() {
		set_name("shield");
		set_space(1);
		set_type("armor");
		ap = 1;
	}

	Armor(string name) {
		set_name(name);
		set_space(1);
		set_type("armor");
		ap = 1;
	}

	int get_ap() {
		return ap;
	}

	void set_ap(int ap) {
		this->ap = ap;
	}
};

class MultiSlot : public Item {
   public:
	MultiSlot(string name) {
		set_name(name);
		set_space(1);
		set_type("multi");
	}
};

class Empty : public Item {
   public:
	Empty() {
		set_name("*\t-\t-\t*");
	}
};

class Blocked : public Item {
   public:
	Blocked() {
		set_name("XXXXXXXXXXXXX");
	}
};