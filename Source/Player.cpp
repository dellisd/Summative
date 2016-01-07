#include "Player.h"

Player::Player(int Height, int Width){
	run = SpriteSheet(al_load_bitmap("Textures/Characters/running_e.png"), 64, 128, 11);
	fall = SpriteSheet(al_load_bitmap("Textures/Characters/fall_e.png"), 64, 128, 3);
	still = SpriteSheet(al_load_bitmap("Textures/Characters/idle_e.png"), 64, 128, 6);
	ActualHeight = Height;
	ActualWidth = Width;
	texture = al_create_bitmap(Width, Height);
	bOnGround = false;
	position = Vector2D(0.f, 0.f);
}

void Player::Run(Vector2D vel){
	velocity.x += vel.x;

	if (velocity.x > 7.f){
		velocity.x = 7.f;
	}

	else if (velocity.x < -7.f){
		velocity.x = -7.f;
	}
}

//Called when the player jumps
void Player::Jump(){
	if (bOnGround) {
		velocity.y = -20.f;

		bOnGround = false;
	}
}

//Called when the player dies
void Player::Die(){
	printf("You died!\n");
}

//Called every frame
void Player::Tick(float delta){
	//All of the animation code
	if (bRunning && bOnGround){
		run.GetFrameBitmap(this->texture);
		run.PushFrame();
		position += velocity;
	}
	else if (bOnGround){
		still.GetFrameBitmap(this->texture);
		still.PushFrame();
		position += velocity;
	}
	else if (!bOnGround){
		fall.GetFrameBitmap(this->texture);
		fall.PushFrame();
		position += velocity;
	}
}

void Player::Win(Vector2D Start){
	this->SetCharacterWorldPosition(Start);
	printf("You Won!\n");
	//add stuff here later
}