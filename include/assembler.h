//
//  assembler.h
//  genome-assembler
//
//  Author: Ryan Cormier <rydcormier@gmail.com>
//  Date:   07/11/2020
//

#ifndef assembler_h
#define assembler_h

#include <string>
#include <vector>

namespace Assembler {

    extern int NUM_READS;
    extern int READ_LENGTH;
    extern std::vector<std::string> READS;
    extern int K;
    std::string Assemble();
    void BuildGraph();
    void ReadInput();
    void RemoveBubbles();
    void RemoveTips();
    
}
#endif /* assembler_h */
