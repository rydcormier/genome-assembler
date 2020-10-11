//
//  test/test.cpp
//
//  Tests go here.
//
#include "gtest/gtest.h"

#include "debruijn_graph.h"
#include "assembler.h"
#include "assembler_impl.h"

// De Bruijn Tests

// Vertex
//
// If idx and pos are valid, the correct label should be returned.
// All other cases should return an empty string.
TEST( VertexTest, UnitializedLabelIsEmpty ) { ASSERT_TRUE( 0 ); }

// Invalid parameters should yield an empty string
TEST( VertexTest, BadValsIsEmpty ) { ASSERT_TRUE( 0 ); }

TEST( VertexTest, NoDataIsEmpty ) { ASSERT_TRUE( 0 ); }

// Valid parameters should yield a valid label
TEST( VertexTest, GoodValsHasCorrectLabel) { ASSERT_TRUE( 0 ); }

// Graph
//
// Adjacencies() should return unique adjacencies: no parallel
// edges or self-loops;
TEST( DeBruijnGraphTest, ADJHasUniqueValidEdges ) { ASSERT_TRUE( 0 ); }

// Adjacencies() with inv=true should return the inverse graph.
TEST( DeBruijnGraphTest, ADJInverseInvertsEdges ) { ASSERT_TRUE( 0 ); }


// Assembler Tests
//
TEST(AssemblerTest, ReadInputFromSTDIN) { ASSERT_TRUE( 0 ); }

TEST(AssemblerTest, ReadInputFromFile) { ASSERT_TRUE( 0 ); }

TEST(AssemblerTest, BuildGraph) { ASSERT_TRUE( 0 ); }

TEST(AssemblerTest, RemovesBubbles) { ASSERT_TRUE( 0 ); }

TEST(AssemblerTest, FindsSCCs) { ASSERT_TRUE(0); }

TEST(AssemblerTest, RemovesTips) { ASSERT_TRUE(0); }

TEST(AssemblerTest, AssemblesGenome) { ASSERT_TRUE(0); }

TEST(AssemblerTest, RunsCorrectly) { ASSERT_TRUE(0); }
