#pragma once

#include "Engine.h"
#include "Button.h"
#include "TextBox.h"
#include "Online.h"

class MainMenuState : public GameState {
public:

	enum class EMenuScreen{
		Main,
		Options,
		Online
	};

	int ActiveScreen;

	float splashTime;
	bool bDrawSplash;

	ALLEGRO_BITMAP* splash;


	bool bFullscreen = false;

	UIComponent* AllUIComponents[10];

	ALLEGRO_FONT* LargeRoboto;

	Buffer Background[3];
	
	ALLEGRO_BITMAP* controls;

	static bool bDisplayControls;

	void Init();

	void Pause();
	void Resume();

	void HandleEvents(ALLEGRO_EVENT *ev);
	void Tick(float delta);
	void Draw();

	void Destroy();

	MainMenuState();
	~MainMenuState();
};
namespace MainMenu{
	void PlayGame();
	void LoadEditor();
	void OpenSettings();
	void ToggleFullscreen();
}

void PushLevel();