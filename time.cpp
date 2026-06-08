#include<iostream>
using namespace  std;
int main (){
    int time;
    int hours;
    int mins;
    int sec;
    cout<<" Enter the time in seconds : ";
    cin>>time;
    hours=time/3600;
    mins=time%3600;
    sec = mins%60;
    mins = mins/60;
    cout<<"the time is "<<hours <<"hours"<<mins <<"minutes"<<sec <<"seconds ";
    return 0;
}
