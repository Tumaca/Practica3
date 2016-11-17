
#include "stdafx.h"
#include "Globales.h"
#include "Collisions.h"
#include "HeaderWorld.h"

void checkCollisions() {
	//chequea la colision de la bala con el enemigo
	if (bulletExist) {
		if (pos_Enemy == pos_Bullet || pos_Enemy - direction_Enemy == pos_Bullet) {
			pos_Bullet = -1;
			pos_Enemy = -5;
			enemyExist = false;
		}
	}
	//chequea la colision del enemigo con el jugador
	if (pos_Enemy == pos_Player || pos_Enemy - direction_Enemy == pos_Player) {
		system("cls");
		SetConsoleTextAttribute(hConsole, 15); 
		printf("%s\n", "GAME OVER");
		SetConsoleTextAttribute(hConsole, 15); 
		printf("%s\n", "Pulsa cualquier tecla para empezar de nuevo.");
		pos_Enemy = -5;
		enemyExist = false;
		pos_Bullet = -1;
		bulletExist = false;
		pos_Player = ANCHOMUNDO / 2;

		//Starts again when player press any key
		key = _getch();
		system("cls");
		paintHeader();
	}
}