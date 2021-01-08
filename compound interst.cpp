#include<iostream>
#include<math.h>
using namespace std;
int main()
{

	float p,r,t;
	cout<<"Enter the Principal,annual interst rate & time:";
	cin>>p>>r>>t;

	float ci=(p*pow((1+r/100),t));
	 cout<<"The compound interst is ="<<ci;
	return 0;
	
}
