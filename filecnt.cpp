#include <string>
#include <iostream>
using namespace std;

void displayVersion();

string VERSION_NUM = "1.2";

int main(int argc, char** argv)
{
    displayVersion();
//Comment
	string input;
	for(int i = 1; 1 < argc; i++)
	{
		input += argv[i];
	}

	cout << "The total number of directories in directory " + input + " is: XXXX\n";
	cout << "The total number of files in directory " + input + " is: YYYY\n";
	cout << "The total number of bytes occupied by all files in directory " + input + " is: ZZZZ\n";
}

void displayVersion()
{
    cout << "Version: " << VERSION_NUM << "\n";
}
