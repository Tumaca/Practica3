
#include "stdafx.h"
#include "Globales.h"
#include "Enemy.h"

void spawnEnemy() {
	if (!enemyExist) {
		if ((rand() & 2) == 0) {
			pos_Enemy = 0;
			direction_Enemy = 1;
		}
		else {
			pos_Enemy = ANCHOMUNDO - 1;
			direction_Enemy = -1;
		}
		enemyExist = true;
	}
	else {
		if (direction_Enemy == -1) { --pos_Enemy; }
		else { ++pos_Enemy; }
	}
}