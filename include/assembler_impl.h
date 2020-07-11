//
//  assembler_impl.h
//  genome-assembler
//
//  Created by Ryan Cormier on 7/11/20.
//  Copyright © 2020 Ryan Cormier. All rights reserved.
//

#ifndef assembler_impl_h
#define assembler_impl_h

#include <map>
#include <string>
#include <vector>

namespace Assembler {

extern std::map<std::string, int>* HashTable;

std::vector<int> PostOrder();
std::vector< std::vector<int>> InverseGraph();
std::vector< std::vector<int>> SCC();

}
#endif /* assembler_impl_h */
