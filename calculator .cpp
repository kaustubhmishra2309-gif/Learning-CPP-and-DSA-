#include<iostream>
using namespace  std;
int main (){
    double salar;
    cout<<" Enter the salary : ";
    cin>> salar;

    double bonus_Salar;
    bonus_Salar=(0.15)*salar;
    salar+=bonus_Salar;

    double tax ;
    tax=0.05*salar;

    double earning ;
    earning = salar-tax;
    cout<<" The total salary of a month is"<<earning;
    return 0;



}