#include<iostream>
using namespace std;
int main(){
   int x1,y1,x2,y2,r1,r2;
   cout<<"Enter the first Cirle Coordinate as x1,y1\n";
   cin>>x1>>y1;
   cout<<"Enter the second Circle Coordinate as x2,y2\n";
   cin>>x2>>y2;
   cout<<"Enter radius as r1 and r2\n";
   cin>>r1>>r2;

   if((x2-x1)==(r1+r2) or (y2-y1)==(r1+r2) ) cout<<"Touching";
   if((x2-x1)>(r1+r2) or (y2-y1)>(r1+r2) ) cout<<"Not Intersect";
   if((x2-x1)<(r1+r2) or (y2-y1)<(r1+r2) ) cout<<"Intersect";
}

// You are developing a graphical application that involves manipulating circles on a 2D
// plane. One of the features required is the ability to detect whether two circles intersect
// each other. You need to write a program that, given the coordinates of the centers and
// the radii of two circles, determines if the circles intersect, touch, or are completely
// separate.
// The program should
// a. Take as input the (x,y) coordinates of the center of the circles (i.e., (x1, y1), (x2, y2))
// b. Take as input the radius r1 and r2.
// The program should output one of the following:
// a. "Intersect" if the circles intersect each other.
// b. "Touch" if the circles touch each other (i.e., they have exactly one point in common).
// c. "Separate" if the circles are completely separate from each other.