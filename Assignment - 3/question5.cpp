#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the length of the first side of the triangle: ";
    cin>>a;
    cout<<"Enter the length of the second side of the triangle: ";
    cin>>b;
    cout<<"Enter the length of the third side of the triangle: ";
    cin>>c;
    if(a==b && b==c){
        cout<<"The triangle is equilateral";
    }
    else if(a==c || a==b || b==c){
        cout<<"The triangle is isosceles";
    }
    else{
        cout<<"The triangle is scalene";
    }
    return 0;
}