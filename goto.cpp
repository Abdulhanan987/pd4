#include <iostream>
#include <windows.h>
using namespace std;
void printh();
void printa();
void printa1();
void prints();
void printa2();
void printn();
main ( ) {
printh();
printa();
printa1();
prints();
printa2();
printn();
}




void printh()
{   cout<<"H"<<endl;
 }
void printa()
{   cout<<"A"<<endl;
}
void printa1()
{     cout<<"S"<<endl;
}
void prints()
{      cout<<"S"<<endl;
}
void printa2()
{      cout<<"A"<<endl;
}
void printn()
{     cout<<"N"<<endl;
}
void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}