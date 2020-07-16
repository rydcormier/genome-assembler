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
using Genome::Graph;
using Vertex = Graph::Vertex;

string Vertex::Label() const { return {}; } // TODO

void Graph::Adjacencies( vector< vector<int>>& adj, bool inv ) {} // TODO