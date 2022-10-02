#include <iostream>
using namespace std;

void insertionSort(int *a, int size)
{
    for(int i = 1; i < size; i++)
    {
	int temp = a[i];
    	int j= i-1;
    	for (; j>=0; j--)
    	{
        	if (a[j]>temp){
            	a[j+1 ]= a[j];
        	}
        	else{
            		break;
        	}
    	}
    a[j+1] = temp;
    }
}

int main()
{
	//For number of Test cases
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		cin >> size;
		int *input = new int[size];
		//taking input to the array
		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		//Function calling
		insertionSort(input, size);

		//Printing the sorted array
		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}
