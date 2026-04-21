/*This program will dynamically allocate memory for some test scores and sort them in acending order.
then find the average.*/
//Daniel Parker 04/21/2026
#include <iostream>
#include <iomanip>

using namespace std;

//function declarations
void selectionSort(double* testPtr, int size);
void swap(double& num1, double& num2);
double average(double* testPtr, int size);
void arrayOut(double* testPtr, int size);
void getScores(double* testPtr, int size);

//main function driver for sort and average functions as well as output
int main()
{
	//create pointer, size and average value
	double* testPtr, avg;
	int size;

	//greeting
	cout << "This program will get your test scores, sort, and average them." << endl;

	//get quantity of test scores
	cout << "How many test scores do you have? ";
	cin >> size;

	//dynamically allocate test score array.
	testPtr = new double[size];

	//get test scores from user
	getScores(testPtr, size);

	//function call to sort
	selectionSort(testPtr, size);

	//get average
	avg = average(testPtr, size);

	//function call to output
	arrayOut(testPtr, size);

	//output average
	cout << "The average score is: " << setprecision(3) << avg << endl;

	return 0;
}

void selectionSort(double* testPtr, int size)
{
	//create indexes and smallNum tracker and pointer for smallest number
	int i, index;
	double smallNum = 0;
	int smallIndex;

	for (index = 0; index < size - 1; index++)
	{
		smallNum = testPtr[index];
		smallIndex = index;
		for (i = index +1; i < size; i++)
			if (smallNum > *(testPtr + i))
			{
				smallNum = *(testPtr + i);
				smallIndex =  i;
			}
		swap(*(testPtr + smallIndex), *(testPtr + index));
	}
}

//function swap two numbers
void swap(double& num1, double& num2)
{
	//create temporary variable
	double temp;
	//proform swap
	temp = num1;
	num1 = num2;
	num2 = temp;
}

double average(double* testPtr, int size)
{
	//create running total and average
	double runTot = 0, avg;
	//loop add
	for (int i = 0; i - 1 < size; i++)
	{
		runTot += *(testPtr + i);
	}
	//get average
	avg = runTot / size;

	return avg;
}

void arrayOut(double* testPtr, int size)
{
	for (int i = 0; i < size; i++)
		cout << "test" << i + 1 << ": " << * (testPtr + i) << endl;
}

void getScores(double* testPtr, int size)
{
	//loop for filling array
	for (int i = 0; i < size; i++)
	{
		cout << "Enter a test score: ";
		cin >> *(testPtr + i);
	}
}