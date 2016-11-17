
#include "stdafx.h"
#include "Globales.h"
#include "Inputs.h"


void moveAndShoot() {
	if (_kbhit()) {
		key = _getch();
		if (key == 'a') {
			if (pos_Player > 0) { --pos_Player; }
		}
		else if (key == 'd') {
			if (pos_Player < ANCHOMUNDO - 1) { ++pos_Player; }
		}

		if (!bulletExist) {
			if (key == 'j') {
				if (pos_Bullet < ANCHOMUNDO - 1) {
					pos_Bullet = pos_Player - 1;
					direction_Bullet = -1;
					bulletExist = true;
				}
			}
			else if (key == 'k') {
				if (pos_Bullet < ANCHOMUNDO - 1) {
					pos_Bullet = pos_Player + 1;
					direction_Bullet = 1;
					bulletExist = true;
				}
			}
		}
	}
}