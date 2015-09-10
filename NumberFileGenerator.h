#ifndef __NUMBER_FILE_GENERATOR__
#define __NUMBER_FILE_GENERATOR__


#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef __TRUE_FALSE__
#define __TRUE_FALSE__
#define TRUE 1
#define FALSE 0
#endif

#define SUCCESS 0
#define FILE_CANT_OPEN 1


using namespace std;

class NumberFileGenerator
{
private: 
	int* numberArrayHolder;
public:
	NumberFileGenerator();
	int GenerateNumberFile(char* fileName, long howMany);
	long ValidateDataFile(char* fileName);
};
#endif

NumberFileGenerator::NumberFileGenerator()
{

}

int NumberFileGenerator::GenerateNumberFile(char* fileName, long howMany)
{
	const int SIZE(howMany);
	int *yourArray = new int[howMany];

	srand((unsigned)time(0)); 
	for (int i = 0; i<SIZE; i++)
	{
		yourArray[i] = (rand() % SIZE) + 1; 
	}

	ofstream numData(fileName);

	for (int k = 0; k<SIZE; k++)
	{
		numData << yourArray[k] << endl; //Outputs array to txtFile
	}
	
	delete[] yourArray;
	return 0;
}

long NumberFileGenerator::ValidateDataFile(char* fileName)
{
	int num_of_lines = 0;
	FILE *file = fopen(fileName, "r");
	int count;

	while (EOF != (count=getc(file)))
	{
		if ('\n' == count)
		{
			++num_of_lines;
		}
	}


	return num_of_lines;
}