
#include "stdafx.h"
#include "Globales.h"
#include "PintarMundo.h"

void pintaMundo() {

	for (int i = 0; i < ANCHOMUNDO; i++) {
		if		(i == pos_Player)	{ SetConsoleTextAttribute(hConsole, 7); printf("%c", PLAYER); }
		else if (i == pos_Bullet)	{ SetConsoleTextAttribute(hConsole, 15); printf("%c", BULLET); }
		else if (i == pos_Enemy)	{ SetConsoleTextAttribute(hConsole, 12); printf("%c", ENEMY); }
		else if (i == pos_Rain)		{ SetConsoleTextAttribute(hConsole, 11); printf("%c", char_Rain); }
		else						{ SetConsoleTextAttribute(hConsole, 15); printf("%c", BACKGROUND); }
	}
	printf("\r");
}
