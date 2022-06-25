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
    
    EXPECT_EQ(testedBoard.getColumnsNumber(),7);
    EXPECT_EQ(testedBoard.getRowsNumber(),6);
}

TEST_F(BoardTest, When_CreatedNewBoard_Expect_AllFieldsAreEmpty)
{
    for (size_t i = 0; i<testedBoard.getColumnsNumber(); i++)
    {
        for (size_t j = 0; j<testedBoard.getRowsNumber(); j++)
        {
            EXPECT_EQ(testedBoard.getFieldState({i,j}),Field::empty);
        }
    }
}

TEST_F(BoardTest, When_OneFieldIsSetToRedDisc_Expect_FieldHasRedDisc)
{
    size_t column0 = 0;
    size_t row0 = 0;
    testedBoard.setFieldState({column0,row0},Field::red);
    EXPECT_EQ(testedBoard.getFieldState({column0,row0}),Field::red);
}

