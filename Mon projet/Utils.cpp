#include "Utils.h"

void Grid::Generate()
{
    int placedMines = 0;

    while (placedMines < mMineCount)
    {
        int x = Utils::RandomInt(0, mSize - 1);
        int y = Utils::RandomInt(0, mSize - 1);

        if (!mCells[x][y].HasMine())
        {
            mCells[x][y].SetMine(true);
            placedMines++;
        }
    }
}
