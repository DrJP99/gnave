#include <iostream>
#include <vector>

#include "item.h"
using namespace std;

// Career c1 = Career("Acolyte", Item("Candlestick", 1), Item("Censer", 1), Item("Incense", 1));
Career c[] = {
	Career("Acolyte", Item("Candlestick"), Item("Censer"), Item("Incense")),											 // 1
	Career("Acrobat", Item("Flash powder"), Item("Balls"), Item("Lamp oil")),											 // 2
	Career("Actor", Item("Wig"), Item("Makeup"), Item("Costume")),														 // 3
	Career("Alchemist", Item("Acid"), Item("Mortar/Pestle"), Item("6 vials")),											 // 4
	Career("Antiquarian", Item("Old coin"), Item("Flag"), Item("Lore book")),											 // 5
	Career("Arcanist", Item("Spell book"), Item("Arcane robes"), Item("Chalk")),										 // 6
	Career("Architect", Item("Plumb line"), Item("Level"), Item("Ruler")),												 // 7
	Career("Assassin", Weapon("Crossbow", 2, "missile"), Weapon("Garrote (strangle)", 1, "melee"), Item("Soft boots")),	 // 8
	Career("Astrologer", Item("Star charts"), Item("Almanac"), Item("Telescope")),										 // 9
	Career("Baker", Item("Rolling pin"), Item("Flour bag"), Item("Lard block")),										 // 10
	Career("Bandit", Item("Mask"), Item("Manacles"), Item("Caltrops")),													 // 11
	Career("Barber", Item("Scissors"), Item("Hair oil"), Item("Straight razor")),										 // 12
	Career("Beast Tamer", Weapon("Whip", 1, "melee"), Item("Gloves"), Item("Leash")),									 // 13
	Career("Beekeeper", Item("Honey"), Item("Mask"), Item("Smoke bomb")),												 // 14
	Career("Blacksmith", Weapon("Hammer", 1, "melee"), Item("Bellows"), Item("Tongs")),									 // 15
	Career("Boatman", Item("10\' pole", 2), Item("Instrument"), Item("Paddle")),										 // 16
	Career("Bookbinder", Item("Sewing kit"), Item("Glue"), Item("Quill/ink")),											 // 17
	Career("Brewer", Item("Mash paddle"), Item("Beer keg"), Item("Hops")),												 // 18
	Career("Burglar", Item("Lockpicks"), Item("Grappling hook"), Item("Rope")),											 // 19
	Career("Butcher", Weapon("Cleaver", 1, "melee"), Item("Meat hook"), Item("Bacon")),									 // 20
	Career("Candlemaker", Item("10 candles"), Item("Lamp oil"), Item("Wax")),											 // 21
	Career("Carpenter", Weapon("Hammer", 1, "melee"), Item("Saw"), Item("Box of nails")),								 // 22
	Career("Charlatan", Item("Costume"), Item("Fake elixir"), Item("Degree")),											 // 23
	Career("Cobbler", Item("Leather roll"), Item("Fancy shoes"), Item("Tacks")),										 // 24
	Career("Coachman", Weapon("Whip", 1, "melee"), Item("Lockbox"), Item("Oilskin coat")),								 // 25
	Career("Cook", Item("Frying pan"), Item("Salt"), Item("Olive oil")),												 // 26
	Career("Courier", Item("Oilskin bag"), Item("Local map"), Item("Lantern")),											 // 27
	Career("Courtier", Item("Perfume"), Item("Wig"), Item("Fan")),														 // 28
	Career("Cultist", Weapon("Dagger", 1, "melee"), Item("Ritual robes"), Item("Amulet")),								 // 29
	Career("Cutpurse", Weapon("Knife", 1, "melee"), Item("Caltrops"), Item("Sack")),									 // 30
	Career("Dyer", Item("1-/' poles"), Item("Dyes"), Item("Soap")),														 // 31
	Career("Explorer", Item("Sextant"), Item("Spyglass"), Item("Crampons")),											 // 32
	Career("Falconer", Item("Bird cage"), Item("Gloves"), Item("Whistle")),												 // 33
	Career("Fence", Weapon("Rapier", 1, "melee"), Item("File"), Item("Sealing wax")),									 // 34
	Career("Fisherman", Weapon("Spear", 2, "melee"), Item("Net"), Item("Fishing tackle")),								 // 35
	Career("Folklorist", Item("Prophecy"), Item("Bones"), Item("Scales")),												 // 36
	Career("Gambler", Weapon("Rapier", 1, "melee"), Item("Card deck"), Item("Dice")),									 // 37
	Career("Gamekeeper", Weapon("Sling", 1, "missile"), Item("Horn"), Item("Rope ladder")),								 // 38
	Career("Gardener", Weapon("Sickle", 2, "melee"), Item("Shovel"), Item("Shears")),									 // 39
	Career("Grave Robber", Item("Saw"), Item("Crowbar"), Item("Pulleys")),												 // 40
	Career("Gravedigger", Item("Shovel"), Item("Pickaxe"), Item("Bucket")),												 // 41
	Career("Groom", Item("Oats"), Item("Horse brush"), Item("Blanket")),												 // 42
	Career("Guard", Weapon("Halberd", 2, "melee"), Item("Livery"), Item("Horn")),										 // 43
	Career("Headsman", Weapon("Axe", 1, "melee"), Item("Hood"), Item("Garrote")),										 // 44
	Career("Herbalist", Item("Herbs"), Item("Sickle"), Item("Herb manual")),											 // 45
	Career("Hermit", Item("Staff"), Item("Fungi"), Item("Basket")),														 // 46
	Career("Hunter", Item("Tent"), Item("Bearskin"), Item("Bear trap")),												 // 47
	Career("Innkeeper", Item("Ladle"), Item("10 candles"), Item("Cauldron")),											 // 48
	Career("Inquisitor", Item("Manual"), Item("Vestments"), Item("Pliers")),											 // 49
	Career("Investigator", Item("Journal"), Item("Manacles"), Item("Vial")),											 // 50
};

class Career {
   public:
	vector<Item> items;
	string name;

	Career() {}

	Career(int d) {
		// d = dice rolled;
		roll_career(d);
	}

	Career(string name, Item item1, Item item2, Item item3) {
		this->name = name;
		items.push_back(item1);
		items.push_back(item2);
		items.push_back(item3);
	}

	Career(string name, vector<Item> items) {
		this->name = name;
		this->items = items;
	}

	void roll_career(int d) {
		switch (d) {
			case (1):

				break;

			default:
				break;
		}
	}
};