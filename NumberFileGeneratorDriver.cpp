#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "NumberFileGenerator.h"


#define FILE_NAME_500 "NumFile500.txt"
#define FILE_NAME_5K "NumFile5K.txt"
#define FILE_NAME_25K "NumFile25K.txt"
#define FILE_NAME_100K "NumFile100K.txt"

#define LIST_SIZE_500 500
#define LIST_SIZE_5K 5000
#define LIST_SIZE_25K 25000
#define LIST_SIZE_100K 100000

using namespace std;

int main() {
	// instantiate the class
	NumberFileGenerator myFileGenerator;

	cout << "BEGIN GENERATING FILES" << endl << endl;

	// generate a data file with 500 random numbers & validate
	myFileGenerator.GenerateNumberFile(FILE_NAME_500, LIST_SIZE_500);
	if (myFileGenerator.ValidateDataFile(FILE_NAME_500) == LIST_SIZE_500) {
		cout << "The file " << FILE_NAME_500 << " was created and contains "
			<< LIST_SIZE_500 << " elements." << endl;
	}

	// generate a data file with 5000 random numbers
	myFileGenerator.GenerateNumberFile(FILE_NAME_5K, LIST_SIZE_5K);
	if (myFileGenerator.ValidateDataFile(FILE_NAME_5K) == LIST_SIZE_5K) {
		cout << "The file " << FILE_NAME_5K << " was created and contains "
			<< LIST_SIZE_5K << " elements." << endl;
	}

	// generate a data file with 25000 random numbers
	myFileGenerator.GenerateNumberFile(FILE_NAME_25K, LIST_SIZE_25K);
	if (myFileGenerator.ValidateDataFile(FILE_NAME_25K) == LIST_SIZE_25K) {
		cout << "The file " << FILE_NAME_25K << " was created and contains "
			<< LIST_SIZE_25K << " elements." << endl;
	}

	// generate a data file with 100000 random numbers
	myFileGenerator.GenerateNumberFile(FILE_NAME_100K, LIST_SIZE_100K);
	if (myFileGenerator.ValidateDataFile(FILE_NAME_100K) == LIST_SIZE_100K) {
		cout << "The file " << FILE_NAME_100K << " was created and contains "
			<< LIST_SIZE_100K << " elements." << endl;
	}

	system("pause");
	return 0;
}