//
//  debruijn_graph.h
//  genome-assembler
//
//  Author: Ryan Cormier <rydcormier>
//  Date:   07/11/20202
//

#ifndef debruijn_graph_h
#define debruijn_graph_h

#include <string>
#include <vector>

namespace Assembler 
{
/** A De Bruijn Graph.
 *
 *	TODO: class description.
 */
struct DeBruijnGraph 
{
	/** A De Bruijn Graph vertex. 
	 *
	 *	TODO: class description
	 */
	struct Vertex
	{
		int read_idx { -1 };  /**< The index for the read of which label is a substring. */
		int read_pos;		  /**< The starting position of label in read. */
		int key;			  /**< Unique identifier.  */
		int in_degree;		  /**< Number of incoming edges. */
		int out_degree;		  /**< Number of outgoing edges. */

		/** The vertex label: a (K - 1)-mer. */
		std::string Label() const;
	
	}; /* Vertex */

	std::vector<Vertex> Vertices;
	std::vector< std::vector<int>> Edges;
	int K; /**< The k-mer size. */

	/**< populate an adjacency list or its inverse, omitting self-loops and parallel edges. */
	void Adjacencies( std::vector< std::vector<int>>& adj, bool inv = false );
	
}; /* DeBruijnGraph */
	
} /* Assembler */

# endif /* debruijn_graph_h */
