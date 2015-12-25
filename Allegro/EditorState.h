#pragma once

#include "Engine.h"

class EditorState : public GameState {
public:
	void Init();

	void Pause();
	void Resume();

	void HandleEvents(ALLEGRO_EVENT *ev);
	void Tick();
	void Draw();

	void Destroy();

	EditorState();
	~EditorState();
};