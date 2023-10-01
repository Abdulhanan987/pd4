#include<iostream>
using namespace std;
void IsEqual(float num1, float num2);
main ( ) {
	cout<<"Enter the first number: ";
	  float n1;
	cin>>n1;
	cout<<"Enter the second number: ";
		float n2;
	cin>>n2;
	IsEqual(n1,n2);
}
void IsEqual(float num1, float num2)
{
     if (num1==num2)
  {  cout<<"true";   }
    if (num1!=num2)
	{cout<<"false";    }
}