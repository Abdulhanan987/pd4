#include<iostream>
using namespace std;
void tpChecker(int people,int tissue);
main ( ) {
 cout<<"Number of people in the household: ";
       int n;
      cin>>n;
 cout<<"Number of rolls of TP: ";
      int t;
	cin>>t;
     tpChecker(n,t);
}

void tpChecker(int people,int tp)
{    int days = (tp *500)/(people*57);
        if (days>14)
  { cout<<"Your TP will last "<<days<<" days, no need to panic!";
    }
   if (days<14)
     { cout<<"Your TP will only last "<<days<<" days, buy more!";
        }
} 