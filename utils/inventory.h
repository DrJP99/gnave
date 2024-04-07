#include <iostream>
#include <vector>

using namespace std;

class Inventory {
   private:
	int total_slots;   // Total possible slots (default = 20)
	int avail_slots;   // Slots available to the player (10 + CON)
	int curr_slot;	   // current slot counter
	vector<Item> inv;  // actual inventory

   public:
	Inventory() {
		total_slots = 20;
		avail_slots = 10;
		curr_slot = 0;
		inv = {};
	}

	Inventory(int CON) {
		total_slots = 20;
		avail_slots = 10 + CON;
		curr_slot = 0;
		inv = {};
	}

	int get_total_slots() {
		return total_slots;
	}

	int get_avail_slots() {
		return avail_slots;
	}

	int get_curr_slot() {
		return curr_slot;
	}

	vector<Item> get_inv() {
		return inv;
	}

	void set_total_slots(int total_slots) {
		this->total_slots = total_slots;
	}

	void set_avail_slots(int slots) {
		avail_slots = slots;
	}

	void set_curr_slot(int slot) {
		curr_slot = slot;
	}

	void set_inv(vector<Item> inv) {
		inv = inv;
	}

	void push_item(Item item) {
		inv.push_back(item);
		curr_slot++;
		if (item.get_space() >= 2) {
			MultiSlot ms = MultiSlot(item.get_under());
			inv.push_back(ms);
			curr_slot++;
		}
	}

	void finish_inv() {
		cout << "Finishing inv..." << endl;
		for (int c = curr_slot; c < total_slots; c++) {
			if (c < avail_slots) {
				inv.push_back(Empty());
			} else {
				inv.push_back(Blocked());
			}
		}
	}

	void print_inv() {
		for (int i = 0; i < total_slots; i++) {
			cout << " " << i + 1 << "- " << inv[i].get_name() << " " << inv[i].get_type() << endl;
		}
	}
};