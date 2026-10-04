#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    a=abs(a);
    b=abs(b);
    if (a==0 || b==0){
        cout<<"Undefined"<<endl;
        return 0;
    }
    while (b !=0){
        int c=b;
        b=a%b;
        a=c;
    }
    cout<<"GCD: "<<a<<endl;
    return 0;
}