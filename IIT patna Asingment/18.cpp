#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int x,y,r,m,x1,y1,r1;
    cout<<"To know a point lie insice a circle or not\n";
    cout<<"Enter the x and y as centre of cricle \n";
    cin>>x>>y;
    cout<<"Enter the radius r \n";
    cin>>r;
    cout<<"Enter the point as x1 and y1\n";
    cin>>x1>>y1;
    m=(x-x1)*(x-x1)+(y-y1)*(y-y1);
    r1=sqrt(m);



    if(r1>r) cout<<x1<<","<<y1<<" outside the circle";
    else if(r1==r) cout<<x1<<","<<y1<<" on the circle";
    else cout<<x1<<","<<y1<<" lie inside the circle";

    

}