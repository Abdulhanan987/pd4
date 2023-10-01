#include<iostream>
using namespace std;
void flowerShop(int redRose,int whiteRose,int tulip);
main ( ) {
     cout<<"Red Rose: ";
     int r;
	cin>>r;
   cout<<"White Rose: ";
	int w;
	cin>>w;
	cout<<"Tulips: ";
       int t;
	cin>>t;
   flowerShop(r,w,t);
}
void flowerShop(int redRose,int whiteRose,int tulip)
{
      double totalprice=(redRose*2.00)+ (whiteRose*4.10)+ (tulip*2.50);
        cout<<"Original Price: $"<<totalprice<<endl;
          if (totalprice>200)
      {double discount=totalprice - (totalprice*0.2);
           cout<<"Price after Discount: $"<<discount;

        }
   if (totalprice<200)
   {   cout<<"No discount applied.";
}
}