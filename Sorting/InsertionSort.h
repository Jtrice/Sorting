#ifndef INSERTION_SORT
#define INSERTION_SORT

#include <vector>
#include <iostream>


//Perform Insertion Sort on a vector
template <typename T>
void InsertionSort(std::vector<T> &vect)
{
	// Each iteration of the loop sorts the next object in the vector into the previous sorted objects
	for (unsigned int j = 1; j < vect.size(); j++)
	{
		// key holds the next object to sort
		T key = vect.at(j);
		// Insert value into sorted sequence
		int i = j - 1;
		// Compare the key to previous sorted objects, shifting them right as long as the key is smaller
		while (i >= 0 && vect.at(i) > key)
		{
			vect.at(i + 1) = vect.at(i);
			i = i - 1;
		}
		// insert the key back into the vector at it's sorted position
		vect.at(i + 1) = key;
	}
}



#endif		//INSERTION_SORT