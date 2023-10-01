#include <iostream>
using namespace std;
void airlineCompany(string country,float amount);
main( ) {
       
  
  cout<<"Enter the country's name: ";
      string name;
	cin>>name;
	cout<<"Enter the ticket price in dollars: $";
	float dollars;
	cin>>dollars;
        airlineCompany(name,dollars);   
}

void airlineCompany(string country,float amount)
    
{  if (country=="Pakistan")
    { float remainning = amount -( amount * 0.05);
        cout<<"Final ticket price after discount: $"<<remainning<<endl;
        }
   if (country=="Ireland")
    { float discount = amount - (amount *0.1);
      cout<<"Final ticket price after discount: $"<<discount<<endl;
       }
  if (country=="India")
   {   float rprice = amount -(amount * 0.2);
     cout<<"Final ticket price after discount: $"<<rprice<<endl;
   }
 if (country == "England")
  {   float eprice = amount - (amount *0.3);
    cout<<"Final ticket price after discount: $"<<eprice<<endl;
  }
if (country == "Canada" )
  {  double cprice = amount - (amount * 0.45);
    cout<<"Final ticket price after discount: $"<<cprice<<endl;
   }
}