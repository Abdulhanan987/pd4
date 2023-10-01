#include<iostream>
using namespace std;
void printmenu();
void calculateAggregate(string name,float matmarks,float intermarks, float ecatmarks);
void comparemarks(string namestd1,float ecatmarksstd1,string namestd2,float ecatmarksstd2);
main ( ) {
    printmenu();
     while(true)
{
        
  cout<<"Enter your name: ";
    string name;
    cin>>name;
  cout<<"Enter your matric marks: ";
	float m;
      cin>>m;
  cout<<"Enter your inter marks: ";
      float i;
    cin>>i;
cout<<"Enter your ecatmarks: ";
       float e;
      cin>>e;
 calculateAggregate(name,m,i,e);
  cout<<"Enter your name: ";
          string n;
       cin>>n;
 cout<<"Enter your matric marks: ";
     float ma;
    cin>>ma;
cout<<"Enter your inter marks: ";
     float in;
     cin>>in;
cout<<"Enter yoyr ecat marks: ";
     float e1;
  cin>>e1;
calculateAggregate(n,ma,in,e1);
 comparemarks(name,e,n,e1);   }

}
void printmenu()
{  cout<<"UNIVERSITY OF ENGINEERING AND TECHNOLOGY"<<endl;

     }
void calculateAggregate(string name,float matmarks,float intermarks, float ecatmarks)
{ float aggregate =(( matmarks/1100 * 0.3)+ (intermarks/550 * 0.3)+(ecatmarks/400 * 0.4))*100;
  cout<<"YOUR AGGREGATE IS: "<<aggregate<<endl;
  }
void comparemarks(string namestd1,float ecatmarksstd1,string namestd2,float ecatmarksstd2)
{
  if (ecatmarksstd1>ecatmarksstd2)
   {cout<<"1."<<namestd1<<endl;
    cout<<"2."<<namestd2<<endl;
       }
    if (ecatmarksstd1<ecatmarksstd2)
     {cout<<"1."<<namestd2<<endl;
      cout<<"2."<<namestd1<<endl;}
}