#include<iostream>
using namespace std;
void pet(int holidays);
main ( ) {
          cout<<"Holidays: ";
	  int h;
	cin>>h;
	pet(h);
}
  
void pet(int holidays)
{   int working = 365 - holidays;
    int time = holidays*127 + working*63;
    int difference = 30000 - time;
    int minutes = difference/60;
    if (time < 30000)
    { int difference = 30000 - time;
    int hours = difference/60;
     int minutes = difference%60;
 cout<<"Tom sleeps well"<<endl;
       cout<<hours<<" hours and "<<minutes<<" minutes less for play";
}
     if (time>30000)
         { int dif = time - 30000;
           int h1 = dif/60;
	   int m1 = dif %60;
          cout<<"Tom will run away"<<endl;
	cout<<h1<<" hours and "<<m1<<" minutes for play"<<endl;
           }
}
          