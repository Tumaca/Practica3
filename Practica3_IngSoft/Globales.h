#pragma once

#define	ANCHOMUNDO  40
#define	PLAYER		'X'
#define	BACKGROUND  '_'
#define	BULLET		'o'
#define	ENEMY		'E'


extern HANDLE hConsole;
extern int			pos_Bullet;
//Bool que se pone en true si hay una bala en el mapa
extern bool			bulletExist;
extern int			direction_Bullet;

//Bool que especifica si hay un enemigo en pantalla.
extern bool			enemyExist;
extern int			pos_Enemy;
//Direccion del enemigo
extern int			direction_Enemy;
extern int			pos_Player;
extern int			key;

extern bool			rain;
extern int			pos_Rain;
extern int			phase;
extern char			char_Rain;