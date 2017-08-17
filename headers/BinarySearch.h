// BinarySearch.h interface for the binary search algorithm.

// Header guards
#ifndef _BINARYSEARCH_H_
#define _BINARYSEARCH_H_

#include <vector>

using namespace std;

class BinarySearch
{
	public:
		BinarySearch(int); // constructor initializes vector
		int binarySearch(int); // perform a binary search on vector
		void displayElements() const; // display vector elements

	private:
		int size; // vectors size
		vector<int> data; // vector of ints
		void displaySubElements(int, int) const; // display range of values
};

#endif // !BINARY_SEARCH_H

