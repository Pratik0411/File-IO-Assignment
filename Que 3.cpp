#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ifstream input;
	string str;
	int ctr = 0;
	input.open("word.txt");
	if(!input)
		cout<<"file did not open"<<endl;
	else
		while(input>>str)
		{
			if(str[0] == 'e')
			{
				ctr++;
			}
			
		}
		cout << ctr<<endl;
		input.close();
}
