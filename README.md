# Gnave

A random character creator for Knave 2e on the command line

To run, clone the repo, compile the code and execute

```bash
git clone https://github.com/DrJP99/gnave/
cd gnave
g++ main.cpp -o gnave
./gnave
```

If the output file is not executable, add execution rights by doing

```bash
chmod +x gnave
```

Executing the command will print a completely random Knave 2e character, including their inventory, for example:

```
Name: John
Careers: Jeweler, Locksmith
~~~~~~~~~~~~~~~
 STR: 2		LVL: 1; XP: 0
 DEX: 0		HP:  3/3
 CON: 0		AC:  11; AP: 0
 INT: 1
 WIS: 0
 CHA: 0
~~~~~~~~~~~~~~~
> Item slots: [10]
  1- Pliers
  2- Loupe
  3- Tweezers
  4- Crowbar
  5- Picks
  6- Padlock
  7- Spell
  8- 90 coins
  9- 50' rope
 10- Quiver (20 arrows)
 11- XXXXXXXXXXXXXXX
 12- XXXXXXXXXXXXXXX
 13- XXXXXXXXXXXXXXX
 14- XXXXXXXXXXXXXXX
 15- XXXXXXXXXXXXXXX
 16- XXXXXXXXXXXXXXX
 17- XXXXXXXXXXXXXXX
 18- XXXXXXXXXXXXXXX
 19- XXXXXXXXXXXXXXX
 20- XXXXXXXXXXXXXXX
```

NOTE: random names have not been implemented
