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
	 *	The De Bruijn Graph vertex has a label, a key, and a degree. The label
	 *	is stored using it's location within the read set. The key is a unige
	 *	identifier assigned when building. The degree is stored as integers:
	 *	one for the number of outgoing edges and one for the number of incoming
	 *	edges.
	 */
	struct Vertex
	{
		int read_idx { -1 };  /**< The index for the read containing the label */
		int read_pos;		  		/**< The starting position of label in read. */
		int key;			  			/**< Unique identifier.  */
		int in_degree;		  	/**< Number of incoming edges. */
		int out_degree;		  	/**< Number of outgoing edges. */

		/** The vertex label: a (K - 1)-mer. */
		std::string Label() const;

	}; /* Vertex */

	std::vector<Vertex> Vertices;
	std::vector< std::vector<int>> Edges;
	static int K; /**< The k-mer size. */

	/** populate an adjacency list or its inverse, omitting self-loops and parallel edges. */
	void Adjacencies( std::vector< std::vector<int>>& adj, bool inv = false );

}; /* DeBruijnGraph */

} /* Assembler */

# endif /* debruijn_graph_h */
