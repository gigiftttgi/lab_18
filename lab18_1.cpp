#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){

	double x,y;
    x = min(R1.x+R1.w,R2.x+R2.w) - max(R1.x,R2.x);
    y = max(R1.y-R1.h,R2.y-R2.h) - min(R1.y,R2.y);
    if(x*y > 0) return 0;
    return -(x*y);


}

int main(){
	Rect R1 = {1,1,5,5};
    Rect R2 = {7,2,3,3};	
    cout << overlap(R1,R2);	      
}