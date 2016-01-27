#ifndef HEADER
#define HEADER
#include <vector>
#include <iostream>
#include <limits>

// Output the contents of a vector
template <typename T>
void outputVector(std::vector<T> &intVect)
{
	std::cout << "The contents of the vector are: ";
	for (std::vector<T>::iterator it = intVect.begin(); it != intVect.end(); it++)
		std::cout << *it << ' ';
	std::cout << "\n\n";
}


// Perform Insertion Sort on a vector
template <typename T>
void insertionSort(std::vector<T> &intVect)
{
	// Each iteration of the loop sorts the next number in the vector into the previous sorted numbers
	for (int j = 1; j < intVect.size(); j++)
	{
		// key holds the next number to sort
		T key = intVect.at(j);
		// Insert value into sorted sequence
		int i = j - 1;
		// Compare the key to previous sorted numbers, shifting them right as long as the key is smaller
		while (i >= 0 && intVect.at(i) > key)
		{
			intVect.at(i + 1) = intVect.at(i);
			i = i - 1;
		}
		// insert the key back into the vector at it's sorted position
		intVect.at(i + 1) = key;
	}
}


// Performs the merge step for Merge Sort
template <typename T>
void merge(std::vector<T> &vect, int vectStart, int vectMid, int vectEnd)
{
	int lSize = vectMid - vectStart + 1;
	int rSize = vectEnd - vectMid;
	std::vector<T> lVect;
	std::vector<T> rVect;
	for (int i = 0; i < lSize; ++i)
	{
		lVect.push_back(vect.at(vectStart + i));
	}
	for (int i = 0; i < rSize; ++i)
	{
		rVect.push_back(vect.at(vectMid + 1 + i));
	}
	lVect.push_back(std::numeric_limits<T>::max());
	rVect.push_back(std::numeric_limits<T>::max());
	int lIndex = 0;
	int rIndex = 0;
	for (int i = vectStart; i <= vectEnd; i++)
	{
		if (lVect.at(lIndex) <= rVect.at(rIndex))
		{
			vect.at(i) = lVect.at(lIndex);
			lIndex++;
		}
		else
		{
			vect.at(i) = rVect.at(rIndex);
			rIndex++;
		}
	}
}

// Perform Merge Sort on a vector
template <typename T>
void mergeSort(std::vector<T> &vect, int vectStart, int vectEnd)
{
	std::cout << "\nMS from " << vectStart << " to " << vectEnd << std::endl;
	if (vectStart < vectEnd)
	{
		int vectMid = int((vectStart + vectEnd) / 2);
		mergeSort(vect, vectStart, vectMid);
		mergeSort(vect, vectMid + 1, vectEnd);
		merge(vect, vectStart, vectMid, vectEnd);
	}

}


#endif //HEADER
