#include<iostream>
using namespace std;
void possibleBonus(int play1,int play2);
main ( ) {
 cout<<"Enter your position: ";
	int p1;
	cin>>p1;
	cout<<"Enter your friend's position: ";
	int p2;
	cin>>p2;
	possibleBonus(p1,p2);
}
void possibleBonus(int play1,int play2)

{    if (play1 + 6 >=play2)
   {  cout<<"true"; }
   if (play1 + 6 <play2)
   { cout<<"false";  }
}
