#include "Cell.h"

Cell::Cell()
    : mHasMine(false), mIsRevealed(false), mAdjacentMines(0)
{
}

bool Cell::HasMine() const { return mHasMine; }
bool Cell::IsRevealed() const { return mIsRevealed; }
int Cell::GetAdjacentMines() const { return mAdjacentMines; }

void Cell::SetMine(bool value) { mHasMine = value; }
void Cell::SetAdjacentMines(int count) { mAdjacentMines = count; }
void Cell::Reveal() { mIsRevealed = true; }
