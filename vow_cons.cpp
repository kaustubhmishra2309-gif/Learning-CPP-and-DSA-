#include<iostream>
using namespace  std;
int main (){
    char ch;
    cin>>ch;
    switch (ch){
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
     cout<<"vowel";
     break;
    
    default:
     cout<<"consonant";
        break;
    }return 0;
}
