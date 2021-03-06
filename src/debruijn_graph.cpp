//
//  debruijn_graph.cpp
//  genome-assembler
//
//  Author: Ryan Cormier <rydcormier>
//  Date:   07/11/20202
//

#include "debruijn_graph.h"

using std::string;
using std::vector;
using Graph = Assembler::DeBruijnGraph;
using Vertex = Graph::Vertex;

int Graph::K = 0;

string Vertex::Label() const { return ""; } // TODO

void Graph::Adjacencies( vector< vector<int>>& adj, bool inv ) {} // TODO