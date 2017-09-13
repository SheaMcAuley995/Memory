#include <iostream>
#include <fstream>
#include <time.h>
#include <string>

using std::string;

using std::fstream;

int DigitalPrinter();
int MyInformation();
int RunningOut();
int CommaSeparated();

int main()
{
	

}





int holdLesson()
{
	fstream file;

	file.open("text.txt");

	if (file.fail())
	{
		std::cout << "File not found." << std::endl;
		return -1;
	}

	string buffer;
	while (std::getline(file, buffer))
	{
		std::cout << buffer << std::endl;
	}

	file.clear(); // resset the error flags

	file.seekp(0, std::ios_base::end); //move my cursor to the end

									   // write a message! :D
	file << std::endl << "Today is always the present! :)";

	file.flush();

	file.close();

	fstream autoCreate;

	autoCreate.open("createme.txt", std::ios::out | std::ios::in);

	if (autoCreate.fail())
	{
		std::cout << "File not found." << std::endl;
		return -1;
	}

	autoCreate.close();


	while (true) {}
}

int DigitalPrinter()
{
	fstream file;
	string userInput;
	std::cout << "What file would you like to read? \n>";
	std::cin >> userInput;
	file.open(userInput);

	//if (file.fail())
	//{
	//	std::cout << "File not found." << std::endl;
	//	return -1;
	//}

	string buffer;
	while (std::getline(file, buffer))
	{
		std::cout << buffer << std::endl;
	}

	file.clear();

	while (true) {}
}

int MyInformation()
{

	string userInput;
	string name;
	string age;
	string color;
	fstream autoCreate;

	std::cout << "Where would you like to save this? \n>";

	std::cin >> userInput;
	autoCreate.open(userInput, std::ios::out);

	std::cout << "Who are you?\n>";
	std::cin >> name;
	std::cout << "\nHow old are you?\n>";
	std::cin >> age;
	std::cout << "\nWhat is your favorite color?\n>";
	std::cin >> color;

	if (autoCreate.fail())
	{
		std::cout << "File not found." << std::endl;
		return -1;
	}


	autoCreate << "Name :" << name;
	autoCreate << "\nAge :" << age;
	autoCreate << "\nFavorite Color :" << color;

	autoCreate.flush();
	autoCreate.close();



	while (true) {}

}

int RunningOut()
{
	string * CharPointer;
	fstream autoCreate;
	string userInput;
	srand(time(NULL));
	string FileMix = "";
	string buffer;
	int r;
	int j = 0;
	char m = 178;
	std::cout << "Which file you want to open? \n>";
	std::cin >> userInput;

	autoCreate.open(userInput);

	if (autoCreate.fail())
	{
		std::cerr << "File not found." << std::endl;
		return -1;
	}



	while (std::getline(autoCreate, buffer))  // iterates until error or EOF
	{
		for (int i = 0; i < buffer.length(); ++i)
		{
			r = rand() % 100 + 1;
			if (r < 25)
			{
				buffer[i] = m;

			}


		}
		std::cout << buffer << std::endl;

	}




	autoCreate.flush();
	autoCreate.close();


	while (true)
	{

	}
	return 0;
}

int CommaSeparated()
{

	return 0;
}
