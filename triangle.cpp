#include<iostream>

using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the angles of the triangle:";
	cin>>a>>b>>c;
	if(a==90 || b==90 || c==90)
	 cout<<"The triangle is a RIGHT ANGLE";
	 else 
	 cout<<"The triangle is not a RIGHT ANGLE";
	return 0;
	
}
