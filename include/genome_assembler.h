//
//  genome_assembler.h
//  genome-assembler
//
//  Author: Ryan Cormier <rydcormier@gmail.com>
//  Date:   07/11/2020
//
//	Basic interface for genome-assembler.

#ifndef genome_assembler_h
#define genome_assembler_h

#include <string>
#include <vector>

#include "debruijn_graph.h"

namespace Genome {
 
	/**
  *	@class Assembler
  *	@breif The genome assembler.
  *
  *	TODO: class description
  */
struct Assembler
{
	static int num_reads;	/**< Number of reads in the data set. */
	static int read_length;	/**< The length of each read; if they are equal. */
	static std::vector<std::string> reads;	/**< The set of reads as strings. */
	static Graph graph;	/**< A De Bruijn graph. */
	
	
	
	/** Read in the reads from a file, or stdin if no filepath is given. */
	void ReadInput( const char* fp = nullptr );
	
	/** Build the De Bruijn graph. */
	void BuildGraph( int );
	
	/**	Modify the graph to compensate for errors in the read set. */
	void CorrectErrors( int );
	
	/** Assemble the genome from the read set and return as a string. */
	std::string AssembleGenome();
	
}; /* Assembler */

} /* Genome */

#endif /* genome_assembler_h */