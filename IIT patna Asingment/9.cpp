#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x,a,r;
    cout<<"Enter the Velocty and Angle";
    cin>>x>>a;
    float c=3.14*a/180;

    r=(x*x*sin(c)*sin(c))/(2*9.8);
    cout<<r;

    

    }
//     Write a C program to compute the maximum height reached by a projectile given its
// initial velocity v and angle of projection θ (in degrees). (include math.h for
// trigonometric functions using #include<math.h>):
// a. Use the formula: H = (v^2 * sin^2(θ)) / (2g).
// b. Assume g = 9.8 m/s^2.
// c. Take v and θ as inputs and display the maximum height.
// Example:
// Enter initial velocity (m/s): 20
// Enter angle of projection (degrees): 45
// Maximum height reached by the projectile: 10.20 meters
// 4.

