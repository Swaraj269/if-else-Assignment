#include<iostream>
using namespace std;
int main(){
    int a;
    cout<< "Enter your first number: ";
    cin>>a;
    int b;
    cout<< "Enter your second number: ";
    cin>>b;
    if(a>b){
        cout<< a<<" is greater than "<<b<<endl;
    }
    else{
        cout<< b<<" is greater than "<<a<<endl;
    }
    return 0;
}