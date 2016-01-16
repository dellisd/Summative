#pragma once

#include "Engine.h"
#include "Character.h"
#include "SpriteSheet.h"
#include "Bullet.h"

class Player : public Character{
public:
	bool PlayerWin;

	bool ShotAlready;

	bool bShooting;

	void Run(Vector2D velocity);

	void Jump();

	void Tick(float delta, std::vector<Character*> *Curr);

	void Die();

	void Win(Vector2D Start);

	void Collide(Character* OtherCharacter);

	void BlockCollide(bool w, int CollisionDirection);

	Player(int Height, int Width);
protected:
	SpriteSheet run;
	SpriteSheet fall;
	SpriteSheet still;
	SpriteSheet shoot;
};