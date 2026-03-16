#include <iostream>
#include <string>

using namespace std;

string getWord()
{
	string word;

	getline(cin, word);

	return word;
}

void reverseWord(string word, string& reverse)
{

	for (int i = word.length() - 1; i >= 0; i--)
	{
		reverse += word[i];
	}

}

int main()
{

	string word = getWord();
	string reverse = "";

	reverseWord(word, reverse);

	cout << reverse;

}
