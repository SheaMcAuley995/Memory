#include <iostream>
#include<Windows.h>
#include <cassert>


struct permNum
{
	int Relcount = 0;
	//int countCallRlease = 0;
	int Fizzbuzzcount = 0;
	//int countCallFiBi = 0;
};
void releaseHalfLove(permNum &num)
{
	num.Relcount++;
	//num.countCallRlease++;
	std::cout << num.Relcount << ". The game, Half-Love " << ((num.Relcount - 1) % 2) + 1 << ", Was released!" << std::endl;
}

void stepFizzBuzz(permNum &num)
{
	num.Fizzbuzzcount++;
	std::cout << num.Fizzbuzzcount << "     ";
	if (num.Fizzbuzzcount % 3 == 0) { std::cout << "Fizz"; }
	if (num.Fizzbuzzcount % 5 == 0) { std::cout << "Buzz"; }
	if (num.Fizzbuzzcount % 3 != 0 && num.Fizzbuzzcount % 5 != 0) { std::cout << num.Fizzbuzzcount; }
	std::cout << std::endl;
}

float divide(float lhs, float rhs)
{
	assert(rhs != 0.0f);
}


void callMeMAybe()
{
	static int counter = 0;
	switch (counter)
	{
	case 0:
		std::cout << "Hey I just met you " << std::endl;
		break;
	case 1:
		std::cout << "And this is crazy " << std::endl;
		break;
	case 2:
		std::cout << "But here's my number " << std::endl;
		break;
	case 3:
		std::cout << "So call me maybe " << std::endl;
		break;
	case 4:
		std::cout << "Bleeehhhgeehegehg " << std::endl;
		break;
	}

	counter == ++counter % 4;
}


int& picker(int& optA, int& optB, int& optC)
{
	static int counter = 0;

	switch (counter)
	{
	case 0:
		return optA;
	case 1:
		return optB;
	case 2:
		return optC;
	default:
		return optA;
	}
	counter == ++counter % 3;
}

int arrayCopy(int * srcArr, size_t srcSize)

void gridGen(int width, int height)
{
	assert(width > -1);
	assert(height > -1);
}

int main()
{
	permNum num;
	while (true)
	{
		stepFizzBuzz(num);
		Sleep(500);
	}



}