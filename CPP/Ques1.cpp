#include <iostream>
#include <math.h>
#include <graphics.h>
#include <bits/stdc++.h> 
using namespace std; 


int main() 
{ 

	float x1 = 200, x2 = 80; 
    float y1 = 100, y2 = 230; 
    float a = 280, b = 230; 
  
    // Formula to calculate in-center 
    float x = (a * x1 + b * 
                   x2 ) / (a + b ); 
    float y = (a * y1 + b *  
                   y2 ) / (a + b); 
		

	initwindow(800,500);
		
   line(x1, y1,x2,y2);
   line(x1, y1, a,y2);
   line(a, y2, x2,y2);
		
		circle(x,y,x+y);
		getch();
	return 0; 
} 




