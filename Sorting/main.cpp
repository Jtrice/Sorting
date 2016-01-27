#include <vector>
#include "Header.h"

int main()
{
	// Create an array of ints, assign it into a Vector to be sorted
	int arrayOfInts[] = { 15, 17, 2, 56, 75, 12, 16, 22, 64, 59, 17, 3, 70 };
	std::vector<int> vectOfInts(arrayOfInts, arrayOfInts + sizeof(arrayOfInts) / sizeof(int));

	// Output the contents of the vector
	outputVector(vectOfInts);

	// Sort the vector
	std::cout << "Sorting the vector\n\n";
	//insertionSort(vectOfInts);
	mergeSort(vectOfInts, 0, vectOfInts.size()-1);

	// Output the contents of the vector
	outputVector(vectOfInts);


	// Create an array of doubles, assign it into a Vector to be sorted
	double arrayOfDoubles[] = {1.2, 56.4, 1.3, 19.4, 94.3, 78.6, 72.1, 72.2, 22.5, 19.6, 63.8, 75.2};
	std::vector<double> vectOfDoubles(arrayOfDoubles, arrayOfDoubles + sizeof(arrayOfDoubles) / sizeof(double));

	// Output the contents of the vector
	outputVector(vectOfDoubles);

	// Sort the vector
	std::cout << "Sorting the vector\n\n";
	//insertionSort(vectOfDoubles);
	mergeSort(vectOfDoubles, 0, vectOfDoubles.size()-1);

	// Output the contents of the vector
	outputVector(vectOfDoubles);



	// Junk statement to keep command line from from closing
	std::cin.get();

	return 0;
}