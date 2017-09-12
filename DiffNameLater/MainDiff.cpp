#include <iostream>

void diffArrays(int * arrA, size_t arrASize,
	int * arrB, size_t arrBSize)

{
	for (int i = 0; i < arrBSize; ++i)
	{
		arrA[i] -= arrB[i];
	}
}

int main()
{
	int numA[] = { 3, 2, 1 };
	int numB[] = { 3, 2 ,1, 10, 12 };l

	diffArrays(numA, 3, numB, 3);

	for (int i = 0; i < 3; i++)
	{
		std::cout << numA[i] << std::endl;
	}

}