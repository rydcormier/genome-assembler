//
#include <iostream>
#include "gtest/gtest.h"

int fib( int n )
{
    if ( n == 0 || n == 1 )
        return 1;
    return n + fib(n - 1);
}

TEST(FibTest, HandlesGoodInput)
{
    EXPECT_EQ( fib( 0 ), 1 );
    EXPECT_EQ( fib( 1 ), 1 );
    EXPECT_EQ( fib( 2 ), 3 );
}

int _main( int argc, char **argv )
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
