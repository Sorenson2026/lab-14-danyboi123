/*This program will dynamically allocate memory for some test scores and sort them in acending order.
then find the average.*/
//Daniel Parker 04/21/2026
#include <iostream>

using namespace std;

//function declarations
void selectionSort(double* testPtr[], int size);
void swap(int& num1, int& num2);

//main function driver for sort and average functions as well as output
int main()
{
	//create pointer and size
	double* testPtr, size;

	//greeting
	cout << "This program will get your test scores, sort, and average them." << endl;

	//get quantity of test scores
	cout << "How many test scores do you have? ";
	cin >> size;

	//dynamically allocate test score array.
	testPtr = new double[size];

	//function call to sort
}

void selectionSort(double* testPtr[], int size)
{
	int i, index;
	double smallNum;

	for (index = 0; index < size; i++)
	{
		for (i = 0; i < size - 1; i++)
			if (smallNum > *(testPtr + i))
				smallNum = *(testPtr + i);
		swap()
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