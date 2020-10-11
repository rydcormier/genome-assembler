//
//  assembler.cpp
//  genome-assembler
//
//  Author: Ryan Cormier <rydcormier@gmail.com>
//  Date:   07/11/2020
//
//	Implementation for Genome::Assembler.

#include "assembler.h"
#include "debruijn_graph.h"

using std::vector;
using std::string;

// define static variables
int Assembler::NumReads { 0 };
int Assembler::ReadLength { 0 };
vector<string> Assembler::Reads {};
Assembler::DeBruijnGraph Assembler::Graph {};


void Assembler::ReadInput( const char* fp ) {} // TODO

void Assembler::BuildGraph( int k_size ) {} // TODO

void Assembler::CorrectErrors( int path_len_max ) {} // TODO

string Assembler::AssembleGenome( ) { return {}; } // TODO

string Assembler::Run(int argc, char **argv) { return {}; } // TODO
