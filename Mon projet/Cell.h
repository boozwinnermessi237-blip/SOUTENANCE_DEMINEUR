#pragma once

/**
 * @brief Représente une cellule du démineur
 */
class Cell
{
public:
    Cell();

    bool HasMine() const;
    bool IsRevealed() const;
    int GetAdjacentMines() const;

    void SetMine(bool value);
    void SetAdjacentMines(int count);
    void Reveal();

private:
    bool mHasMine;
    bool mIsRevealed;
    int mAdjacentMines;
};
