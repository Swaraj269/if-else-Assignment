#include <iostream>
using namespace std;
int main(){
    int x1, y1, x2, y2, x3, y3;
    cout<< "Enter the x coordinate of the first point: ";
    cin>> x1;
    cout<< "Enter the y coordinate of the first point: ";
    cin>> y1;
    cout<< "Enter the x coordinate of the second point: ";
    cin>> x2;
    cout<< "Enter the y coordinate of the second point: ";
    cin>> y2;
    cout<< "Enter the x coordinate of the third point: ";
    cin>> x3;
    cout<< "Enter the y coordinate of the third point: ";
    cin>> y3;
    if(((y2-y1)/(x2-x1)) == ((y3-y2)/(x3-x2))){
        cout<< "Points lie on the straight line";
    }
    else{
        cout<< "Points do not lie on the straight line";
    }
    return 0;
}