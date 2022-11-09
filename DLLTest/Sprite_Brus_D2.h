#pragma once
#include "Sprite_Brus.h"
class Sprite_Brus_D2 : public Sprite_Brus
{
public:
	void InitToyExtraCode(bool, Host*) override;
	void PlayFoleySound(EFoleySound sound, EFlavor flavor) override;
	virtual ~Sprite_Brus_D2();
};

