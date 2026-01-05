#pragma once
#include <SDL3/SDL.h>
#include "Grid.h"

/**
 * @brief Gestion du rendu SDL
 */
class Renderer
{
public:
    static void DrawGrid(SDL_Renderer* renderer, const Grid& grid);
};
