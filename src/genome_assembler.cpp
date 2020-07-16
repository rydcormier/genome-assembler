//
//  genome_assembler.cpp
//  genome-assembler
//
//  Author: Ryan Cormier <rydcormier@gmail.com>
//  Date:   07/11/2020
//
//	Implementation for Genome::Assembler.

#include "genome_assembler.h"
#include "debruijn_graph.h"

using std::vector;
using std::string;
using Genome::Assembler;

// define static variables
int Assembler::num_reads { 0 };
int Assembler::read_length { 0 };
vector<string> Assembler::reads {};


void Assembler::ReadInput( const char* fp ) {} // TODO

void Assembler::BuildGraph( int k_size ) {} // TODO

void Assembler::CorrectErrors( int path_len_max ) {} // TODO

string Assembler::AssembleGenome( ) { return {}; }