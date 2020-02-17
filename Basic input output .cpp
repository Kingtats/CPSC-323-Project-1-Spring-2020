#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	fstream file;
	ifstream infile("InFile.txt", ios::in);
	ofstream ofile("OutFile.txt", ios::out | ios::app);

	if (!infile.is_open()) 
	{
		cout << "file not found";
	}
	else 
	{
		ofile << infile.rdbuf();
	}
	string words;
	file.open("file2.txt");

	while (file >> words) 
	{
		cout << words << " ";
	}

	return 0;
}
