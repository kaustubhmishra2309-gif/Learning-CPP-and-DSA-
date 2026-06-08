#include<iostream>
using namespace  std;
int main (){
    float sd;
    cout<<" dollars : ";
    cin>>sd;
    float e_rates;
    cout<<"enter the exchange rates : ";
    cin>>e_rates;
    float nrf ;
    nrf=sd*e_rates;
    cout<<" the money is   "<<nrf;
    return 0;
}