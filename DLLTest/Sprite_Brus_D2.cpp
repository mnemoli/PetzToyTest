#include "pch.h"
#include "Sprite_Brus_D2.h"
#include <random>

Sprite_Brus_D2::~Sprite_Brus_D2()
{
}

int randrange(int min, int max) {
	return ((double)rand() / RAND_MAX) * (max - min) + min;
}

void Sprite_Brus_D2::InitToyExtraCode(bool param_1, Host* host)
{
	SetAdjValue((EAdj)2, 6);
	SetAdjValue((EAdj)6, 5);
	SetAdjValue((EAdj)7, 12);
	SetAdjValue((EAdj)8, randrange(40, 50));
	SetAdjValue((EAdj)9, randrange(55, 65));
	SetAdjValue((EAdj)10, randrange(29, 33));
	SetAdjValue((EAdj)19, randrange(15, 25));
	SetAdjValue((EAdj)23, randrange(15, 25));
	SetAdjValue((EAdj)24, randrange(15, 25));
	SetAdjValue((EAdj)26, randrange(15, 25));
	SetAdjValue((EAdj)29, randrange(90, 100));
	SetAdjValue((EAdj)26, randrange(90, 100));
}

void Sprite_Brus_D2::PlayFoleySound(EFoleySound sound, EFlavor flavor)
{
}