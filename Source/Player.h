#pragma once

#include "Engine.h"
#include "Character.h"
#include "SpriteSheet.h"

class Player : public Character{
public:
	void Run(Vector2D velocity);

	void Jump();

	void Tick(float delta);

	void Die();

	void Win(Vector2D Start);

	Player(int Height, int Width);
protected:
	SpriteSheet run;
	SpriteSheet fall;
	SpriteSheet still;
	int Health;
};