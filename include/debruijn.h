//
//  debruijn.h
//  genome-assembler
//
//  Author: Ryan Cormier <rydcormier>
//  Date:   07/11/20202
//

#ifndef debruijn_h
#define debruijn_h

#include <string>
#include <vector>

namespace Graph {
    
struct Vertex
{
    int idx { -1 };
    int pos { -1 };
    int key { -1 };
    int indeg, outdeg;
    std::string Label() const;
};
extern int V;
extern int E;
extern std::vector<Vertex> Vertices;
extern std::vector< std::vector<int>> Adj;
extern std::vector< std::vector<int>> EdgeCount;

std::vector<int> EulerianPath();

}

# endif /* debruijn_h */
