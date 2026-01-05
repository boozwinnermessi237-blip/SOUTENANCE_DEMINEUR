#include "Grid.h"

Grid::Grid(int size, int mineCount)
    : mSize(size), mMineCount(mineCount)
{
    mCells.resize(mSize, std::vector<Cell>(mSize));
}

void Grid::Generate()
{
    // Placement des mines (plus tard)
}

void Grid::RevealCell(int x, int y)
{
    if (!IsInside(x, y)) return;
    mCells[x][y].Reveal();
}

bool Grid::IsInside(int x, int y) const
{
    return x >= 0 && y >= 0 && x < mSize && y < mSize;
}

int Grid::GetSize() const { return mSize; }

const Cell& Grid::GetCell(int x, int y) const
{
    return mCells[x][y];
}
