#include <iostream>
#include <assert.h>
using namespace std;

struct Player {
	int health = 30;
	int speed = 10;
	int strength = 15;
	int magic = 30;
};

enum PotionType {
	HEALTH,
	SPEED, 
	STRENGTH, 
	MAGIC
};

// return a new player with modified attributes depending on the potion used
Player applyPotion(PotionType type, Player p);

int main() {
	Player outPlayers[4] = {
		{100, 10, 15, 30},
		{20, 50, 5, 10},
		{60, 25, 200, 30},
		{30, 10, 10, 100}
	};

	Player player;
	Player output;

	// test for each potion type
	for (int i = 0; i < 4; i++) {
		switch (i) {
		case 0: output = applyPotion(HEALTH, player); break;
		case 1: output = applyPotion(SPEED, player); break;
		case 2: output = applyPotion(STRENGTH, player); break;
		case 3: output = applyPotion(MAGIC, player); break;
		}
		assert(
			(output.health == outPlayers[i].health) &&
			(output.speed == outPlayers[i].speed) &&
			(output.strength == outPlayers[i].strength) &&
			(output.magic == outPlayers[i].magic));
	}

	cout << "\n\n======END======\n";
}

Player applyPotion(PotionType type, Player p) {
	Player newPlayer;
	switch (type) {
	case HEALTH: newPlayer = { 100, p.speed, p.strength, p.magic }; break;
	case SPEED: newPlayer = { p.health - 10, 50, p.strength - 10, 10 }; break;
	case STRENGTH: newPlayer = { p.health * 2, 25, 200, p.magic }; break;
	case MAGIC: newPlayer = { p.health, p.speed, 10, 100 }; break;
	}
	return newPlayer;
}