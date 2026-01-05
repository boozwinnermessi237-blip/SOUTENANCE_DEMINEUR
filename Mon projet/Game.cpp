#include "Game.h"
#include <iostream>

Game::Game()
    : mIsRunning(true), mWindow(nullptr), mRenderer(nullptr)
    {
        InitSDL();
    }

    Game::~Game()
    {
        CleanUp();
    }
    
    void Game::InitSDL()
    {
        if (SDL_Init(SDL_INIT_VIDEO) < 0)
        {
            std::cerr << "Erreur SDL\n";
            mIsRunning = false;
            return;
        }
    
        mWindow = SDL_CreateWindow("Demineur", 800, 600, SDL_WINDOW_RESIZABLE);
        mRenderer = SDL_CreateRenderer(mWindow, nullptr, SDL_RENDERER_ACCELERATED);
    }
    
    void Game::Run()
    {
        while (mIsRunning)
        {
            HandleEvents();
            Update();
            Render();
        }
    }
    
    void Game::HandleEvents()
    {
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if (event.type == SDL_EVENT_QUIT)
                mIsRunning = false;
        }
    }
    
    void Game::Update()
    {
        // Logique du jeu (plus tard)
    }
    
    void Game::Render()
    {
        SDL_SetRenderDrawColor(mRenderer, 30, 30, 30, 255);
        SDL_RenderClear(mRenderer);
    
        SDL_RenderPresent(mRenderer);
    }
    
    void Game::CleanUp()
    {
        SDL_DestroyRenderer(mRenderer);
        SDL_DestroyWindow(mWindow);
        SDL_Quit();
    }
    
    
    
    
    
    
    
    