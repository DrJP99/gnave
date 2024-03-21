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
		type = 'item';
	}

	Item(string name, int space) {
		name = name;
		space = space;
		type = 'item';
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
		type = type;
	}

	void set_name(string name) {
		name = name;
	}

	void set_space(int n) {
		space = n;
	}

	MultiSlot get_under() {
		string new_name = "";
		if (space == 2) {
			int l = name.length();
			for (int i = 0; i < l; i++) {
				new_name.append('^');
			}
			return new MultiSlot(new_name);
		} else {
			return;
		}
	}
};

class Weapon : Item {
   private:
	int dice;

   public:
	Weapon() {
		Item("sword", 1);
		dice = 6;
		set_type("melee");
	}

	Weapon(string name, int space, string type) {
		Item(name, space);
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

		set_type(type);
	}

	int get_dice() {
		return dice;
	}

	void set_dice(int n) {
		dice = n;
	}
};

class Armor : Item {
   private:
	int ap;	 // Armor Points

   public:
	Armor() {
		Item("shield", 1);
		ap = 1;
		set_type("armor");
	}

	Armor(string name) {
		Item(name, 1);
		ap = 1;
		set_type("armor");
	}

	int get_ap() {
		return ap;
	}

	void set_ap(int ap) {
		this.ap = ap;
	}
};

class MultiSlot : Item {
   public:
	MultiSlot(string name) {
		Item(name, 1);
		set_type("multi");
	}
};

class Empty : Item {
   public:
	Empty() {
		Item("~~~~~~~~~~~~~~~", 1);
	}
}