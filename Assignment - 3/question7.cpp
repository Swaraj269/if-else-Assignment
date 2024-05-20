#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<< "Enter the x coordinate: ";
    cin>>x;
    cout<< "Enter the y coordinate: ";
    cin>>y;
    if(x==0 && y!=0){
        cout<< "The point is on the x-axis";
    }
    else if(y==0 && x!=0){
        cout<< "The point is on the y-axis";
    }
    else if(x==0 && y==0){
        cout<< "The point is on the origin";
    }
    else{
        cout<< "The point is neither on the x-axis nor on the y-axis";
    }
    return 0;
}