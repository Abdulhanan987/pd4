#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
main ( ) {    int x=50;
		int y = 15;
            system("cls");
         gotoxy(x,y);
        cout<<"ABDUL HANAN";
}
   

void gotoxy(int x,int y)
{
  COORD coordinates;
  coordinates.X = x;
  coordinates.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}