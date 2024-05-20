#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<< "Enter the marks of first child: ";
    cin>>a;
    cout<< "Enter the marks of second child: ";
    cin>>b;
    cout<< "Enter the marks of third child: ";
    cin>>c;
    if(a>b && a>c){
        cout<< "First child has scored highest marks";
    }
    else if (b>a && b>c){
        cout<< "Second child has scored highest marks";
    }
    else{
        cout<< "Third child has scored highest marks";
    }
    return 0;
}