#include<iostream>
using namespace  std;
int main (){
    int choice,a,b,sum,diff,mult,div ;
    cin>>choice;
    cin>>a;
    cin>>b;
    switch (choice){
    case 1:
    sum=a+b;
    cout<<sum;
    break;
    case 2:
    diff=a-b;
     cout<<diff;
    break;
    case 3:
    mult = a*b;
    cout<<mult;
    break;
    case 4:
    div = a/b;
    cout<<div;
    break;
    
    default:
    cout<<"default";
        break;
    }return 0;
}
