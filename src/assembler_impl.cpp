//
//  assembler_impl.cpp
//  genome-assembler
//
//  Created by Ryan Cormier on 7/11/20.
//  Copyright © 2020 Ryan Cormier. All rights reserved.
//

#include "assembler_impl.h"

using std::map;
using std::string;
using std::vector;

map<string, int>* Assembler::HashTable { nullptr };

vector<int> Assembler::PostOrder() { return vector<int> {}; }

vector< vector<int>> Assembler::InverseGraph() {
    return vector< vector<int>> {}; }

vector< vector<int>> Assembler::SCC() {
return vector< vector<int>> {}; }
