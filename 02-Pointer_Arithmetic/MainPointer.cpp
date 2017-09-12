#include <iostream>

//// Prints the contents of an integer array to the terminal
//void printInts(int * arr, int size)
//{
//	for (int i = 0; i < size; ++i)
//	{
//		std::cout << *(arr + i) << std::endl;
//	}
//}
//
//int main()
//{
//	// allocate an array of 100 ints on the heap
//	int * nums = new int[100];
//
//	// initialize array elements
//	for (int i = 0; i < 100; ++i) { *(nums + i) = i; }
//
//	// print elements using function
//	printInts(nums, 100);
//
//
//	while (true)
//	{
//	}
//
//}

//Functions
void printFloats(float * arr, int size)
{
		for (int i = 0; i < size; i++)
		{
			std::cout << arr[i] << std::endl;
		}
}

int arraySum(int * arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum;
}

float arrayAvg(int * arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}

int findCount(int target, int * arr, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) == target) { sum++; }
	}
	return sum;
}

void arrCopy(int * srcArr, int srcSize, int * dstArr, int dstSize)
{
	for (int i = 0; i < srcSize; i++)
	{
		dstArr[i] = srcArr[i];
	}
}

void arrReversal(int * arr, int size)
{
	int swapnum =0;
	
	int x = size - 1;
	for (int i = 0; i < size/2; i++)
	{
		swapnum = arr[i];
		arr[i] = arr[x];
		arr[x] = swapnum;
		x--;
	}

}

void cstrReversal(char * arr, int size)
{
	
		char swapChar;

		int x = size - 1;
		for (int i = 0; i < size / 2; i++)
		{
			swapChar = arr[i];
			arr[i] = arr[x];
			arr[x] = swapChar;
			x--;
		}

	

}
//FunctionCalls

int main()
{
	int parrTest[11] = { 1,2,3,4,5,6,7,8,9,10,11};
	int *parr = new int[11];
	int parrTest2[11] = {};
	int *parr2 = new int[11];

	for (int i = 0; i < 11; i++)
	{
		parr[i] = parrTest[i];
	}
	for (int i = 0; i < 11; i++)
	{
		parr2[i] = parrTest2[i];
	}

	arrCopy(parr, 11, parr2, 11);
	//arrReversal(parr, 11);

	for (int i = 0; i < 11; i++)
	{
		std::cout << parr2[i] << std::endl;
	}


	while(true){}
}