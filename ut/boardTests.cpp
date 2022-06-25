#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "board.hpp"

class BoardTest : public ::testing::Test
{
    protected:
    //BoardTest();
    //~BoardTest() override;

    public:
    Board testedBoard{7,6};
};

TEST_F(BoardTest, When_CreatedNewBoard7Colums6ROWs_Expect_BoardColumsNumber7RowsNumber6)
{
    //Board testedBoard(7,6);
    EXPECT_EQ(testedBoard.getColumnsNumber(),7);
    EXPECT_EQ(testedBoard.getRowsNumber(),6);
}

// TEST_F(BoardTest, When_CreatedNewBoard_Expect_AllFieldsAreEmpty)
// {
//     Board testedBoard(7,6);
//     for (int i = 0; i<)
//     EXPECT_EQ(testedBoard.getFieldState(i,j),Field::empty);
// }