#include <iostream>
using namespace std;
int main(){
    int r;
    cout<< "Enter the radius of the circle: ";
    cin>>r;
    int a = 3.14*r*r;
    int c = 2*3.14*r;
    if(a>c){
        cout<< "Area is greater than Circumference";
    }
    else{
        cout<< "Circumference is greater than Area";
    }
    return 0;
}