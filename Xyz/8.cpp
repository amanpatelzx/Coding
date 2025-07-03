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

