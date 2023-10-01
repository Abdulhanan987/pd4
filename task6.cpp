#include <iostream>
using namespace std;
void longestTime(float hours,float minutes);
main ( ) {
      cout<<"Enter the number of hours: ";
	float h;
	cin>>h;
	cout<<"Enter the number of minutes: ";
	float m;
	cin>>m;
      longestTime(h,m);
}
void longestTime(float hours,float minutes)
{    if (hours * 60 >minutes)
    { cout<<hours;}
   if (hours * 60 < minutes)
    {cout<<minutes; }
}