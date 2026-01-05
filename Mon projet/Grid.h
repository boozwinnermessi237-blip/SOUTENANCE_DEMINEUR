#pragma once
#include <vector>
#include "Cell.h"

/**
 * @brief Gère la grille du jeu
 */
class Grid
{
public:
    Grid(int size, int mineCount);

    void Generate();
    void RevealCell(int x, int y);
    bool IsInside(int x, int y) const;

    int GetSize() const;
    const Cell& GetCell(int x, int y) const;

private:
    int mSize;
    int mMineCount;
    std::vector<std::vector<Cell>> mCells;
};
