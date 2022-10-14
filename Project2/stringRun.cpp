//
// Gittele Roos
// Project 2
// Algorithm 1: String Run Encoding
//
//
#include <iostream>
#include <string>
using namespace std;



string runLength(string testing)
{
	string ending = "";
	string num;

	for (int i = 0; i < testing.length(); i++)
	{
		int count = 1;
		while (i < testing.length() - 1 && testing[i] == testing[i + 1])
		{
			count++;
			i++;
		}
		
		//get rid of the 1 if applicable
			if (count > 1)
			{
				 num = to_string(count);
			}
			else
			{
				num = "";
			}

		//string concatenation
		string tmp = num + testing[i];
		ending += tmp;
	}
	return ending;
}


int main()
{
	string wordToShorten;

	//User input
	cout << "Please enter the word you would like to shorten: ";
	getline(cin, wordToShorten);
	cout << runLength(wordToShorten);
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
