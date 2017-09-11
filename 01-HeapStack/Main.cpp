#include <iostream>

//Written Functions

int sum(int * numA, int * numB)
{
	return *numA + *numB;
}

int sub(int * numA, int * numB)
{
	return *numA - *numB;
}

void addoneAr(int * Ar, int size)
{
	int sum = 0;
	for (int x = 0; x < size; x++)
	{
		sum++;
		Ar[x] = sum;
		std::cout << Ar[x] << std::endl;
	}
}

void addThreeAr(int * Ar, int size)
{
	int sum = 0;
	for (int x = 0; x < size; x++)
	{
		sum +=3;
		Ar[x] = sum;
		std::cout << Ar[x] << std::endl;
	}
}

void printAr(int * Ar, int size)
{
	
	for (int i = 0; i < size; i++)
	{
		std::cout << Ar[i] << std::endl;
	}

}

void popArray(int ar[], int size)
{
	ar[size];
}

void heapAllocated()
{
	int size = 0;
	
	int evenCount = 0;
	int oddCount = 0;
	int Num = 0;
	std::cout << "Howdy! How many numbers would you like to provide?" << std::endl;
	std::cin >> size;
	int * Ar = new int[size];
	
	for (int x = 0; x < size; x++)
	{
		std::cout << "Okay, what's Number " << x << std::endl;
		std::cout << ">";
		std::cin >> Ar[x];
		Num = Ar[x];
		if (Num % 2 == 0)
		{
			evenCount++;
		}
		else
		{
			oddCount++;
		}
	}
	if (evenCount > oddCount)
	{
		std::cout << "Wow, you sure do like even numbers!" << std::endl;
	}
	else if (oddCount > evenCount)
	{
		std::cout << "Wow, you sure do like odd numbers!" << std::endl;
	}
	else
	{
		std::cout << "Wow, you sure do like numbers!" << std::endl;
	}

}

void addToTwentyone()
{
	int size = 0;
	
	int Num = 0;
	std::cout << "How many numbers do ya think you’ll need?"  << std::endl;
	std::cin >> size;
	int * Ar = new int[size];

	for (int x = 0; x < size; x++)
	{
		std::cout << "Okay, what's Number " << x << std::endl;
		std::cout << ">";
		std::cin >> Ar[x];
		Num += Ar[x];
	}
	if (Num == 21)
	{
		std::cout << "Wow, that adds up to 21! You sure can count." << std::endl;
	}
	else
	{
		std::cout << "Wow, that adds up to " << Num << "! You sure can't count." << std::endl;
	}
}

//Compiling  Different functions in Sessions

void closedSes()
{
	int * agePtr = new int(22);

	float * ageFloat = new float(2.5);

	bool * ageBool = new bool(true);

	int * ageArInt = new int[10];

	float * ageArFloat = new float[10];

	bool * ageArBool = new bool[10];

	int age = 13;

	int * ageAlias = &age;

	std::cout << age << std::endl;
	std::cout << agePtr << std::endl;
	std::cout << *agePtr << std::endl;


	


	*ageAlias = 48;

	std::cout << age << std::endl;
	std::cout << *ageAlias << std::endl;

	int result = sum(agePtr, ageAlias);
	std::cout << result << std::endl;


	std::cout << *ageFloat << std::endl;


	int *arr = new int[100];

	addoneAr(arr, 100);


	delete agePtr;
	delete ageFloat;
	delete ageBool;
	delete ageArInt;
	delete ageArFloat;
	delete ageArBool;

	while (true) {};
}

void openSes()
{

	int *arr = new int[100];

	

	int parrTest[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int *parr = new int[10];
	
	for (int i = 0; i < 10; i++)
	{
		parr[i] = parrTest[i];
	}

	printAr(parr, 10);
	//addThreeAr(arr, 100);
	//heapAllocated();
	//addToTwentyone();

	while (true) {};
}


int main()
{
	//closedSes();
	openSes();

}