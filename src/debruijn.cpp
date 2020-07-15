//
//  debruijn.cpp
//  genome-assembler
//
//  Author: Ryan Cormier <rydcormier>
//  Date:   07/11/2020
//

#include "debruijn.h"
#include "assembler.h"

using std::string;
using std::vector;

using Vertex = Graph::Vertex;

int Graph::V = 0;
int Graph::E = 0;
vector<Vertex> Graph::Vertices {};
vector< vector<int>> Graph::Adj {};
vector< vector<int>> Graph::EdgeCount {};

string Vertex::Label() const { return ""; }

vector<int> Graph::EulerianPath() { return vector<int>{}; }
