//
//  assembler.h
//  genome-assembler
//
//  Author: Ryan Cormier <rydcormier@gmail.com>
//  Date:   07/11/2020
//
//	User interface for genome-assembler.

#ifndef assembler_h
#define assembler_h

#include <string>
#include <vector>

#include "debruijn_graph.h"


/**
 * The genome assembler.
 *
 *	TODO: description
 */
namespace Assembler
{
	extern int NumReads;	/**< Number of reads in the data set. */
	extern int ReadLength;	/**< The length of each read; if they are equal. */
	extern std::vector<std::string> Reads;	/**< The set of reads as strings. */
	extern DeBruijnGraph Graph;	/**< A De Bruijn graph. */



	/** Read in the reads from a file, or stdin if no filepath is given. */
	void ReadInput( const char* fp = nullptr );

	/** Build the De Bruijn graph. */
	void BuildGraph( int );

	/**	Modify the graph to compensate for errors in the read set. */
	void CorrectErrors( int );

	/** Assemble the genome from the read set and return as a string. */
	std::string AssembleGenome();

  /** Wrapper for all steps of the assembly process. **/
  std::string Run(int, char**);

} /* Assembler */

#endif /* assembler_h */
