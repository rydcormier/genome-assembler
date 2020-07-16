//
//  assembler_impl.h
//  genome-assembler
//
//  Author: Ryan Cormier <rydcormier@gmail.com>
//  Date:   07/11/2020
//
//	Implementer's interface for Assembler.

#ifndef assembler_impl_h
#define assembler_impl_h

#include <vector>

namespace Assembler 
{
	/** 
	 * 	Strongly Connected Components
	 *
	 *	TODO: add desc
	 */
	 struct {
	 	std::vector< std::vector<int>> components;
		std::vector< std::vector<int>>::iterator begin() { return components.begin(); }
		std::vector< std::vector<int>>::iterator end() { return components.end(); }
		std::vector<int>& operator[]( int i ) { return components[ i ]; }
	 } SCC;
	
	/** Find and fix short, disjoint, non-overlapping paths (bubbles). */
	void RemoveBubbles( int );
	
	/** Find and remove dead ends in the graph. */
	void RemoveTips();
	
	/** Post order of a DFS traversal of the graph starting at s. */
	std::vector<int> PostOrder( int s = 0 );
	void PostDFS( int, std::vector<int>&, std::vector<bool>& );
	
	/** Find the strongly connected components */
	void FindSCCs();
	void SCCDFS( int, int, std::vector<bool>& );
	
	
} /* Assembler */

#endif /* assembler_impl_h */