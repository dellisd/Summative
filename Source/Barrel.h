#pragma once

#include "Engine.h"
#include "Enemy.h"
#include "PlayState.h"

class Barrel : public Enemy{
public:

	void Run(Vector2D velocity);

	void Jump();

	void Tick(float delta, std::vector<Character*> *Curr);

	void Die();

	void Collide(Character* OtherCharacter);

	void BlockCollide(bool w, int CollisionDirection);

	Barrel(ECharacterDirection d, Vector2D pos);

private:
	SpriteSheet Roll;
};