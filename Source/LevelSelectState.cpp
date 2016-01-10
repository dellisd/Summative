#include "LevelSelectState.h"

LevelSelectState::LevelSelectState(){
	strcpy(Username, "TestUser");
}

void LevelSelectState::Init(){
	Online::GetLevelData(Username, Levels);

	for (int i = 0; i < (int)Levels.size(); i++){
		OnlineTiles.push_back(new List(Vector2D(GEngine->GetDisplayWidth() / 2 - 250, i * 152 + 3), Levels[i]));
	}
}

void LevelSelectState::Draw(){
	al_clear_to_color(WHITE);
	for (int i = 0; i < (int)OnlineTiles.size(); i++){
		OnlineTiles[i]->Draw();
	}
}

void LevelSelectState::Pause(){

}
void LevelSelectState::Resume(){

}

void LevelSelectState::HandleEvents(ALLEGRO_EVENT *ev){

}
void LevelSelectState::Tick(float delta){

}

void LevelSelectState::Destroy(){

}
LevelSelectState::~LevelSelectState(){

}
