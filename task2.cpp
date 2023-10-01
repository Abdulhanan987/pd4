#include<iostream>
using namespace std;
void Reverse(string trueorfalse);
main ( ) {
       cout<<"Enter 'true' or 'false': ";
         string condition;
	cin>>condition;
	Reverse(condition);
}
void Reverse(string trueorfalse)
{    if (trueorfalse == "true")
     { cout<<"false";   }
    if (trueorfalse == "false")
{	cout<<"true";     }
}