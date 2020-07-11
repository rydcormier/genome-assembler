//
//  assembler.cpp
//  genome-assembler
//
//  Created by Ryan Cormier on 7/11/20.
//  Copyright © 2020 Ryan Cormier. All rights reserved.
//

#include <iostream>

#include "assembler.h"
#include "assembler_impl.h"

using std::string;
using std::vector;

int Assembler::NUM_READS = 0;
int Assembler::READ_LENGTH = 0;
vector<string> Assembler::Reads {};

string Assembler::Assemble() { return ""; }

void Assembler::ReadInput() {}

void Assembler::BuildGraph() {}

void Assembler::RemoveBubbles() {}

void Assembler::RemoveTips() {}
