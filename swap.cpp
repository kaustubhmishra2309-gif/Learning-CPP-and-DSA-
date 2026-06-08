#include<iostream>
using namespace std;
int main (){
    int a;
    cout<<"a:";
    cin>>a;
    int b;
    cout<<"b:";
    cin>>b;
    //int c = a + b ;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"a is "<<a<<endl<<"b is "<<b<<endl;
    return 0;
}