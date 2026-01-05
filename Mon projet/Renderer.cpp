#include "Renderer.h"

void Renderer::DrawGrid(SDL_Renderer* renderer, const Grid& grid) {
    int w, h;
    SDL_GetRenderOutputSize(renderer, &w, &h);

    float cellW = (float)w / grid.getCols();
    float cellH = (float)h / grid.getRows();

    for (int i = 0; i < grid.getRows(); ++i) {
        for (int j = 0; j < grid.getCols(); ++j) {
            SDL_FRect rect = { j * cellW, i * cellH, cellW, cellH };

            // Blanc si occupé (1), noir sinon (0)
            Uint8 color = grid.at(i, j) ? 255 : 0;
            SDL_SetRenderDrawColor(renderer, color, color, color, 255);
            SDL_RenderFillRect(renderer, &rect);
        }
    }
}