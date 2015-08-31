#include <iostream>
#include <fstream>
#include <string>

class Statistics
{
public:
	void run();
private:
	std::string fileName;

	std::ifstream inputFile;

	int numColumns;
	int numRows;

	typedef struct Data *DataPtr;
	struct Data
	{
		int mean;
		int median;
		int mode;
		int stdev;
	};

	void readFromFile(std::string &fileName);
};
