

#include "stdafx.h"
#include "Globales.h"
#include "Bullets.h"


void disparaBala() {
	if (bulletExist) {
		if (pos_Bullet < 0 || pos_Bullet>ANCHOMUNDO) {
			pos_Bullet = -1;
			bulletExist = false;

		}
		else {
			if		(direction_Bullet == 1) { ++pos_Bullet; }
			else							{ --pos_Bullet; }
		}
	}
}