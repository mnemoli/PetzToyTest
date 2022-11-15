#include "pch.h"
#include "Sprite_Brus_D2.h"
#include <random>

using namespace Petz;

Sprite_Brus_D2::~Sprite_Brus_D2()
{
}

int randrange(int min, int max) {
	return ((double)rand() / RAND_MAX) * (max - min) + min;
}

void Sprite_Brus_D2::InitToyExtraCode(bool param_1, Host* host)
{
	SetAdjValue(Toyz, 6);
	SetAdjValue(Color, Blue);
	SetAdjValue(Flavor, Wood);
	SetAdjValue(Size, randrange(40, 50));
	SetAdjValue(Mass, randrange(55, 65));
	SetAdjValue(Friction, randrange(29, 33));
	SetAdjValue(Chew, randrange(15, 25));
	SetAdjValue(EAdj::Soft, randrange(15, 25));
	SetAdjValue(Fuzzy, randrange(15, 25));
	SetAdjValue(Bounce, randrange(15, 25));
	SetAdjValue(Vain, randrange(90, 100));
	SetAdjValue(Groom, randrange(90, 100));
}

void Sprite_Brus_D2::PlayFoleySound(EFoleySound sound, EFlavor flavor)
{
}