#include "board.hpp"

Board::Board(int columnsNumber, int rowsNumber) 
: m_columnsNumber{columnsNumber}, m_rowsNumber{rowsNumber}{}

Board::Board() 
: m_columnsNumber{7}, m_rowsNumber{6}{}

int Board::getColumnsNumber(){
    return m_columnsNumber;
}

int Board::getRowsNumber(){
    return m_rowsNumber;
}