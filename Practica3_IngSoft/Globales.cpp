#include "stdafx.h"
#include "Globales.h"

HANDLE		hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
int			pos_Bullet = -1;
//Bool que se pone en true si hay una bala en el mapa
bool		bulletExist = false;
int			direction_Bullet;

//Bool que especifica si hay un enemigo en pantalla.
bool		enemyExist = false;
int			pos_Enemy = -5;
//Direccion del enemigo
int			direction_Enemy;
int			pos_Player = ANCHOMUNDO / 2;
int			key;

bool		rain;
int			pos_Rain = -3;
int			phase = 1;
char		char_Rain = '/';