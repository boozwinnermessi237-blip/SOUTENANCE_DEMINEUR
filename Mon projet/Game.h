#pragma once
#include <SDL3/SDL.h>
#include "Grid.h"
#include "Renderer.h"

class Game {
public:
    Game();
    ~Game();

    void Run();

private:
    void InitSDL();
    void HandleEvents();
    void Update();
    void Render();
    void CleanUp();

    // Attributs
    SDL_Window* mWindow;
    SDL_Renderer* mRenderer;
    bool mIsRunning;

    Grid mGrid; // Instance du plateau de jeu
};