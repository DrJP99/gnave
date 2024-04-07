#include <stdlib.h>

#include <iostream>
#include <vector>

using namespace std;

string random_instrument() {
	string instruments[] = {
		"Pan Flute",
		"Bag Pipes",
		"Flute",
		"Shawm",
		"Hulusi",
		"Ocarina",
		"Simple Drum",
		"Tantan",
		"Udu",
		"Maracas",
		"Gong",
		"Adufe",
		"Bumbulum",
		"Cymbals",
		"Frame drum",
		"Nakers",
		"Pandeiro",
		"Tabor",
		"Tambourine",
		"Timbrel",
		"Citole",
		"Cretan lyra",
		"Dulcimer",
		"Fiddle",
		"Gittern",
		"Guitarra latina",
		"Guitarra morisca",
		"Harp",
		"Hurdy-gurdy",
		"Lute",
		"Lyre",
		"Psaltery",
		"Rebab",
		"Rebec",
		"Tromba marina",
		"Vielle",
		"Viol",
		"Zither",
		"Bagpipes ",
		"Bellows pipe",
		"Bladder pipe",
		"Bombard",
		"Buisine",
		"Crumhorn",
		"Flageolet",
		"Flute",
		"Gemshorn",
		"Organ",
		"Portative Organ",
		"Recorder",
		"Sackbut",
		"Shawm",
		"Tabor Pipe",
		"Zampogna",
	};

	int len = sizeof(instruments) / sizeof(instruments[0]);
	int r = rand() % len;
	return instruments[r].append(" (instrument)");
}

// Career c1 = Career("Acolyte", Item("Candlestick", 1), Item("Censer", 1), Item("Incense", 1));
Career c[] = {
	Career("Acolyte", Item("Candlestick"), Item("Censer"), Item("Incense")),											 // 01
	Career("Acrobat", Item("Flash powder"), Item("Balls"), Item("Lamp oil")),											 // 02
	Career("Actor", Item("Wig"), Item("Makeup"), Item("Costume")),														 // 03
	Career("Alchemist", Item("Acid"), Item("Mortar/Pestle"), Item("6 vials")),											 // 04
	Career("Antiquarian", Item("Old coin"), Item("Flag"), Item("Lore book")),											 // 05
	Career("Arcanist", Item("Spell book"), Item("Arcane robes"), Item("Chalk")),										 // 06
	Career("Architect", Item("Plumb line"), Item("Level"), Item("Ruler")),												 // 07
	Career("Assassin", Weapon("Crossbow", 2, "missile"), Weapon("Garrote (strangle)", 1, "melee"), Item("Soft boots")),	 // 08
	Career("Astrologer", Item("Star charts"), Item("Almanac"), Item("Telescope")),										 // 09
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
	Career("Jailer", Item("Padlock"), Item("10/' chain"), Item("Wine jug")),											 // 51
	Career("Jester", Item("Scepter"), Item("Donkey head"), Item("Motley")),												 // 52
	Career("Jeweler", Item("Pliers"), Item("Loupe"), Item("Tweezers")),													 // 53
	Career("Knight", Item("Lady's favor"), Item("Banner"), Item("Signet ring")),										 // 54
	Career("Kidnapper", Item("Chloroform"), Item("Manacles"), Item("Hood")),											 // 55
	Career("Lawyer", Item("Fancy robe"), Item("Law book"), Item("Certificate")),										 // 56
	Career("Locksmith", Item("Crowbar"), Item("Picks"), Item("Padlock")),												 // 57
	Career("Mason", Item("Chisel"), Weapon("Hammer", 1, "melee"), Item("Chalk")),										 // 58
	Career("Merchant", Item("Scales"), Item("Strongbox"), Item("Bag of spice")),										 // 59
	Career("Miner", Weapon("Pickaxe", 1, "melee"), Item("Lantern"), Item("Pet canary")),								 // 60
	Career("Musician", Item(random_instrument()), Item(random_instrument()), Item(random_instrument())),				 // 61
	Career("Naturalist", Item("Fossil"), Item("Insect case"), Item("Geode")),											 // 62
	Career("Officer", Item("Shoe polish"), Item("Medal"), Item("Spyglass")),											 // 63
	Career("Oracle", Item("Tea leaves"), Item("Tarot deck"), Item("Crystal")),											 // 64
	Career("Orator", Item("100 marbles"), Item("Bullhorn"), Item("Wax tablet")),										 // 65
	Career("Painter", Item("Linseed oil"), Item("Pigments"), Item("Brushes")),											 // 66
	Career("Peddler", Item("Bucket"), Item("300/' twine"), Item("Mirror")),												 // 67
	Career("Philosopher", Item("Staff"), Item("Lantern"), Item("Chalk")),												 // 68
	Career("Physician", Item("Saw"), Item("Scalpel"), Item("Wine jug")),												 // 69
	Career("Pilgrim", Item("Staff"), Item("Relic"), Item("Letter of passage")),											 // 70
	Career("Pirate", Item("Sextant"), Item("Cannonball"), Item("Grappling hook")),										 // 71
	Career("Pit Fighter", Item("Net"), Weapon("Whip", 1, "melee"), Item("Wine jug")),									 // 72
	Career("Playwright", Item("Quill/ink"), Item("Skull"), Item("10 candles")),											 // 73
	Career("Poacher", Item("Animal scent"), Weapon("Bow", 2, "missile"), Item("20 arrows")),							 // 74
	Career("Poet", Item("Stationery"), Item("Bell"), Item("Perfume")),													 // 75
	Career("Priest", Item("Holy water"), Item("10 stakes"), Item("Prayer book")),										 // 76
	Career("Prospector", Item("10 iron spikes"), Weapon("Pickaxe", 1, "melee"), Item("Pan")),							 // 77
	Career("Puppeteer", Item("Confetti"), Item("Puppet"), Item("Sewing kit")),											 // 78
	Career("Rat Catcher", Item("Cage"), Item("10 rat traps"), Item("Sack")),											 // 79
	Career("Saboteur", Item("Air bladder"), Item("Crowbar"), Item("Bomb")),												 // 80
	Career("Sailor", Item("Beeswax"), Item("Pullies"), Item("Spyglass")),												 // 81
	Career("Scout", Item("Signal flags"), Item("Black grease"), Item("Dice")),											 // 82
	Career("Scribe", Item("Lamp oil"), Item("Quill/ink"), Item("Sealing wax")),											 // 83
	Career("Sculptor", Item("Chisel"), Item("Clay"), Item("Calipers")),													 // 84
	Career("Servant", Item("Sponge"), Item("Silverware"), Item("Poker")),												 // 85
	Career("Shepherd", Item("Crook"), Item(random_instrument()), Weapon("Sling", 1, "missile")),						 // 86
	Career("Shipwright", Item("Drill"), Weapon("Hammer", 1, "melee"), Weapon("Axe", 1, "melee")),						 // 87
	Career("Singer", Item("Mirror"), Item("Makeup"), Item("Locket")),													 // 88
	Career("Smuggler", Item("Pulleys"), Item("Rope"), Item("Makeup")),													 // 89
	Career("Soldier", Item("Tent"), Item("Card deck"), Item("Shovel")),													 // 90
	Career("Spy", Item("Caltrops"), Item("Poison"), Item("Forged papers")),												 // 91
	Career("Squire", Item("Torch"), Item("Armor polish"), Item("Trumpet")),												 // 92
	Career("Tailor", Item("Sewing kit"), Item("Scissors"), Item("Soap")),												 // 93
	Career("Tattooist", Item("Soot pot"), Item("Needles"), Item("10 candles")),											 // 94
	Career("Thieftaker", Item("Bear trap"), Item("Manacles"), Item("Torch")),											 // 95
	Career("Thug", Item("Poison"), Weapon("Knife", 1, "melee"), Item("Lamp oil")),										 // 96
	Career("Torturer", Item("Drill"), Item("Hourglass"), Item("10/' chain")),											 // 97
	Career("Trapper", Item("Bear trap"), Item("300/' twine"), Item("Bear pelt")),										 // 98
	Career("Watchman", Item("Lantern"), Item("Trumpet"), Weapon("Spear", 2, "melee")),									 // 99
	Career("Woodcutter", Weapon("Axe", 1, "melee"), Item("Firewood"), Item("50/' rope")),								 // 100
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
		return c[d];
	}

	string get_name() {
		return name;
	}
};