#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ifstream input;
	string str;
	string word("the");
	int ctr = 0;
	input.open("word.txt");
	if(!input)
		cout<<"file did not open"<<endl;
	else
		while(input>>str)
		{
			if(str == word)
			{
				ctr++;
			}
			
		}
		cout << ctr<<endl;
		input.close();
}
