#include "game.hpp"

Game::Game(size_t columnsNumber, size_t rowsNumber)
    :m_board{columnsNumber,rowsNumber} {}

Game::Game() : m_board{} {}

void Game::insertDisc(size_t columnID,Field field){
    for (size_t rowID = 0; rowID < m_board.getColumnsNumber(); rowID++)
    {
        if (m_board.getFieldState({columnID,rowID}) == Field::empty)
        {
            m_board.setFieldState({columnID,rowID},field);
            break;
        }
    } 
}

Board Game::getBoard()
{
    return m_board;
}