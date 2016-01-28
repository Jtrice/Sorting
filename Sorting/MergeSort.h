#ifndef MERGE_SORT
#define MERGE_SORT

#include <limits>
#include <vector>

// Performs the merge step for Merge Sort
template <typename T>
void merge(std::vector<T> &vect, int vectStart, int vectMid, int vectEnd)
{
	// Establish size of and create vectors to hold left and right side of selection
	int lSize = vectMid - vectStart + 1;
	int rSize = vectEnd - vectMid;
	std::vector<T> lVect;
	std::vector<T> rVect;
	// Push left side of selection into lVect
	for (int i = 0; i < lSize; ++i)
	{
		lVect.push_back(vect.at(vectStart + i));
	}
	// Push right side of selection into rVect
	for (int i = 0; i < rSize; ++i)
	{
		rVect.push_back(vect.at(vectMid + 1 + i));
	}
	// Add maximum value available for object to end of each vector to prevent going out of range
	lVect.push_back(std::numeric_limits<T>::max());
	rVect.push_back(std::numeric_limits<T>::max());
	// Initialize indices for each vector
	int lIndex = 0;
	int rIndex = 0;
	// Move through the selection, adding the lowest remaining value between lVect and rVect into the current position in the selection
	for (int i = vectStart; i <= vectEnd; i++)
	{
		if (lVect.at(lIndex) <= rVect.at(rIndex))
		{
			// add value from lVect to vect, increment lVect index
			vect.at(i) = lVect.at(lIndex);
			lIndex++;
		}
		else
		{
			// add value from rVect to vect, increment rVect index
			vect.at(i) = rVect.at(rIndex);
			rIndex++;
		}
	}
}

// Perform Merge Sort on a vector
template <typename T>
void mergeSort(std::vector<T> &vect, int vectStart, int vectEnd)
{
	// Check to ensure more than one value remains in the selection
	if (vectStart < vectEnd)
	{
		// Establish the mid point of the selection
		int vectMid = int((vectStart + vectEnd) / 2);
		// Recursively submit the left side of the selection
		mergeSort(vect, vectStart, vectMid);
		// Recursively submit the right side of the selection
		mergeSort(vect, vectMid + 1, vectEnd);
		// Combine the two halves, now sorted, back together so that the final result is also sorted
		merge(vect, vectStart, vectMid, vectEnd);
	}

}


#endif	//MERGE_SORT