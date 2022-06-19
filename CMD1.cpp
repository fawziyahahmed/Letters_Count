// CMD1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//FAWZIYAH AHMED

//
#include <iostream>
#include <string>
#include <fstream>
#include<cstring>
#include <iomanip>
#include <algorithm>

using namespace std;
//this function count the vowels
int vowels_count(string line)
{
	//declaring the variables
	int i, vowelsCount = 0;
	int A = 0, O = 0, I = 0, E = 0, U = 0, X = 0, Y = 0, Z = 0;


	for (int i = 0; i < line.length(); i++)
	{
		if (line[i] == 'a' || line[i] == 'A')
		{
			A++;
			vowelsCount++;
		}
		else if (line[i] == 'e' || line[i] == 'E')
		{
			E++;
			vowelsCount++;
		}

		else if (line[i] == 'o' || line[i] == 'O')
		{
			O++;
			vowelsCount++;
		}

		else if (line[i] == 'I' || line[i] == 'i')
		{
			I++;
			vowelsCount++;
		}
		else if (line[i] == 'u' || line[i] == 'U')
		{
			U++;
			vowelsCount++;
		}
		else if (line[i] == 'x' || line[i] == 'X')
		{
			X++;
			vowelsCount++;
		}
		else if (line[i] == 'y' || line[i] == 'Y')
		{
			Y++;
			vowelsCount++;
		}
		else if (line[i] == 'z' || line[i] == 'Z')
		{
			Z++;
			vowelsCount++;
		}
	}

	cout << "The number of A's:......................" << A << endl;
	cout << "The number of E's:......................" << E << endl;
	cout << "The number of I's:......................" << I << endl;
	cout << "The number of O's:......................" << O << endl;
	cout << "The number of U's:......................" << U << endl;
	//Added 3 more letters
	cout << "The number of U's:......................" << X << endl;
	cout << "The number of U's:......................" << Y << endl;
	cout << "The number of U's:......................" << Z << endl;
	//returning the vowels so that it will calculate the total 
	return vowelsCount;
}

//here goes the main function
int main(int argc, char* argv[])
{	

	// The executable name and at least one argument?
	if (argc < 2)
	{
		std::cout << "Error with input agrs.." << std::endl;
		return 1;
	}
	// For debugging purposes only
	for (int i = 0; i < argc; i++)
	{
		cout << i << ":" << argv[i] << endl;
	}

	///////////////////////
	// Work here with open file.....
	ifstream infile;
	infile.open(argv[1]);

	//I used string here to display the welcome message
	const string welcome = "********Welcome to my Letter Count Program********";
	//using I/O manipulators
	cout << setw(51) << setfill('*');
	cout << "\n";
	cout << welcome << "\n";
	cout << setw(51);
	cout << "\n";
	cout << endl;
	cout << "Analyzing file 'Constitution_of_the_United_States.html'..." << endl;
	cout << endl;

	//Wirking with vowles
	string s;
	int i, vowelsCount;
	//calling the function that I made first, so that it will calculate the vowles

	while (getline(infile, s))
	{
		vowelsCount = vowels_count(s);
		cout << "The vowels count is:...................." << vowelsCount << endl;
		cout << endl;
	}
	return 0;
}