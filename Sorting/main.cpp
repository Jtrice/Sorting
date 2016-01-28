#include "Header.h"
#include "InsertionSort.h"
#include "MergeSort.h"

int main()
{
	// Create an array of ints, assign it into a Vector to be sorted
	int arrayOfInts[] = { 15, 17, 2, 56, 75, 12, 16, 22, 64, 59, 17, 3, 70 };
	std::vector<int> vectOfInts(arrayOfInts, arrayOfInts + sizeof(arrayOfInts) / sizeof(int));

	// Output the contents of the vector
	outputVector(vectOfInts);

	// variable to hold selection for switch statement
	int control;
	std::cout << "\n1. Insertion Sort\n2. Merge Sort\n\nSelect a sort method:  ";
	// get user's choice and assign it into control. Need to add input error check
	std::cin >> control;
	std::cin.get();

	// Sort the vector
	std::cout << "\nSorting the vector of Ints\n\n";
	// Switch statement to call chosen sort for vector of ints
	switch (control)
	{
	case 1:
		InsertionSort(vectOfInts);
		break;
	case 2:
		mergeSort(vectOfInts, 0, vectOfInts.size() - 1);
		break;
	default:
		std::cout << "\nInput was invalid\n";
		break;
	}

	// Output the contents of the vector
	outputVector(vectOfInts);


	// Create an array of doubles, assign it into a Vector to be sorted
	double arrayOfDoubles[] = {1.2, 56.4, 1.3, 19.4, 94.3, 78.6, 72.1, 72.2, 22.5, 19.6, 63.8, 75.2};
	std::vector<double> vectOfDoubles(arrayOfDoubles, arrayOfDoubles + sizeof(arrayOfDoubles) / sizeof(double));

	// Output the contents of the vector
	outputVector(vectOfDoubles);

	// Sort the vector
	std::cout << "Sorting the vector of Doubles\n\n";
	// Switch statement to call chosen sort for vector of ints
	switch (control)
	{
	case 1:
		InsertionSort(vectOfDoubles);
		break;
	case 2:
		mergeSort(vectOfDoubles, 0, vectOfDoubles.size() - 1);
		break;
	default:
		std::cout << "\nInput was invalid\n";
		break;
	}


	// Output the contents of the vector
	outputVector(vectOfDoubles);



	// Junk statement to keep command line from from closing
	std::cin.get();

	return 0;
}