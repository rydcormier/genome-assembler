//
//  assembler_impl.h
//  genome-assembler
//
//  Author: Ryan Cormier <rydcormier@gmail.com>
//  Date:   07/11/2020
//
//	Implementer's implementation for Assembler.

#include "assembler_impl.h"

using std::vector;

void Assembler::RemoveBubbles( int path_len_max ) {} // TODO

void Assembler::RemoveTips() {} // TODO

vector<int> Assembler::PostOrder( int s ) { return {}; } // TODO

void Assembler::PostDFS( int u, vector<int>& order, vector<bool>& visited ) {} // TODO

void Assembler::FindSCCs() {} // TODO

void SCCsDFS( int u, int cc, vector<bool>& visited ) {} // TODO
