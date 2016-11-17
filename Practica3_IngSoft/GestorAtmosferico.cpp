
#include "stdafx.h"
#include "Globales.h"
#include "GestorAtmosferico.h"

void doRain() {
	
	if ((phase == 1)) {
		pos_Rain = (rand() % ANCHOMUNDO);
		phase = 2;
		char_Rain = '\'';
	}
	 if (phase == 2) {
		char_Rain = '/';
		phase = 3;
	}
	else if (phase == 3) {
		char_Rain = '.';
		phase = 1;
	}

	
}
