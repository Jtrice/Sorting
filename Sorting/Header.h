#ifndef HEADER
#define HEADER
#include <vector>
#include <iostream>

// Output the contents of a vector
template <typename T>
void outputVector(std::vector<T> &vect)
{
	std::cout << "The contents of the vector are: ";
	// Basic iterator to go through the vector
	for (std::vector<T>::iterator it = vect.begin(); it != vect.end(); it++)
		std::cout << *it << ' ';
	//Formatting
	std::cout << "\n\n";
}


#endif //HEADER
