#include<iostream>
using namespace std;
int main()
{
	int i,count=0;
	/*const char *str="Welcome";*/
	string str;
	cout<<" Enter string :";
	cin>>str;
	for(i=0;str[i]!='\0';i++)
	{
		count++;
	}
	cout<<" Length of string is: "<<count;
}
