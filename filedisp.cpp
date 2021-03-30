#include <string>
#include <iostream>
using namespace std;

void displayVersion();

string VERSION_NUM = "1.2";

int main(int argc, char** argv)
{
	//Comment
	displayVersion();
	//Comment
	string input;
	for(int i = 1; i < argc; i++)
	{
		input += argv[i];
	}

	if(input == "-d")
		cout << "The total number of directories in directory <given directory> is: XXXX\n";
	else if(input == "-f")
		cout << "The total number of files in directory <given directory> is: YYYY\n";
	else if(input == "-b")
		cout << "The total number of bytes occupied by all files in directory <given directory is: ZZZZ\n";
}

void displayVersion()
{
	cout << "VERSION: " << VERSION_NUM << "\n";
}
