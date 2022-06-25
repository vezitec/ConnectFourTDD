#include "gmock/gmock.h"
#include "gtest/gtest.h"
#include "board.hpp"
#include "game.hpp"

class GameTest : public ::testing::Test
{
    protected:
    //BoardTest();
    //~BoardTest() override;

    public:
    //Board testedBoard{7,6};
};

TEST_F(GameTest, When_Inserted2BlueDiscsToColumn0_Expect_Colum0Has2BluesDisc)
{
    Game testedGame{7,6};
    testedGame.insertDisc(0,Field::red);
    testedGame.insertDisc(0,Field::red);
    EXPECT_EQ(testedGame.getBoard().getFieldState({0,0}),Field::red);
    EXPECT_EQ(testedGame.getBoard().getFieldState({0,1}),Field::red);
}