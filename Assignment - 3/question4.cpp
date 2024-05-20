#include <iostream>
using namespace std;
int main(){
    int l;
    cout<< "Enter the lenght of the rectangle: ";
    cin>>l;
    int b;
    cout<< "Enter the breadth of the rectangle: ";
    cin>>b;
    int a = l*b;
    int p = 2*(l+b);
    if(a>p){
        cout<< "Area is greater than perimeter";
    }
    else{
        cout<< "Perimeter is greater than area";
    }
    return 0;
}