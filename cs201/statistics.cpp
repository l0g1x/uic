#include "statistics.h"

void Statistics::run()
{
	std::cout << "Please enter number of rows: ";
	std::cin >> numRows;
	std::cout << "Please enter number of columns: ";
	std::cin >> numColumns;
	std::cout << "Please enter filename: ";
	std::cin >> fileName;

	readFromFile(fileName);
}

void Statistics::readFromFile(std::string &fileName)
{
	std::cout << "Opening File: " << fileName << std::endl;

	// Check if file contains suffix extension .txt to avoid exceptions thrown

	inputFile(fileName);
}
