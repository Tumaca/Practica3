

#include "stdafx.h"
#include "HeaderWorld.h"
#include "Globales.h"
#include "Enemy.h"
#include "PintarMundo.h"
#include "Collisions.h"
#include "Bullets.h"
#include "Inputs.h"
#include "GestorAtmosferico.h"

int main()
{
	paintHeader();
	pintaMundo();

	if (!_kbhit()) {
		key = _getch();
	}
	while (1) {

		moveAndShoot();

		disparaBala();

		spawnEnemy();

		checkCollisions();
		doRain();
		pintaMundo();
		
		Sleep(50);

	}
	return 0;
}
