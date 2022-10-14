//
// Gittele Roos
// Project 2
// Algorithm 1: String Run Encoding
//
//
#include <iostream>
#include <string>
using namespace std;



string runLength(string S)
{
	string ending = "";
	string numAsString;

	for (int i = 0; i < S.length(); i++)
	{
		int count = 1;
		while (i < S.length() - 1 && S[i] == S[i + 1])
		{
			count++;
			i++;
		}
		
		//get rid of the 1 if applicable
			if (count > 1)
			{
				numAsString = to_string(count);
			}
			else
			{
				numAsString = "";
			}

		//string concatenation
		string tmp = numAsString + S[i];
		ending += tmp;
	}
	return ending;
}


int main()
{
	string inputString;

	//User input
	cout << "Please enter the word you would like to shorten: ";
	getline(cin, inputString);
	cout << runLength(inputString);
	cout << "\n";


	//Testing for part d.
	string test1 = "ddd";
	string test2 = "heloooooooo there";
	string test3 = "choosemeeky and tuition-free";


	cout << "\n" << "Project 2 - Algorithm 1 resulting encoding below" << endl;
	cout << runLength(test1) << endl;
	cout << runLength(test2) << endl;
	cout << runLength(test3) << endl;



	system("pause");
	return 0;
}
