#include "board.hpp"

Board::Board(size_t columnsNumber, size_t rowsNumber) 
: m_columnsNumber{columnsNumber}, m_rowsNumber{rowsNumber}{
    m_fields = {m_columnsNumber,{m_rowsNumber,Field::empty}};
}

Board::Board() 
: m_columnsNumber{7}, m_rowsNumber{6}{}

size_t Board::getColumnsNumber(){
    return m_columnsNumber;
}

size_t Board::getRowsNumber(){
    return m_rowsNumber;
}

Field Board::getFieldState(Coordinates coord){
    return m_fields.at(coord.i).at(coord.j);
}

void Board::setFieldState(Coordinates coord,Field field){
    m_fields.at(coord.i).at(coord.j) = field;
}