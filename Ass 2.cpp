#include<iostream>
using namespace std;
int main(){
int result;
int user_input;
cout<<"Take input from user(value of user_input): ";
if(cin>>user_input){
    if(user_input <0)
        result= -1;
    else if(user_input >=0 && user_input <=5)
        result= 0;
    else if(user_input >=6 && user_input <=12)
        result= 1;
    else if(user_input >=13 && user_input <=19)
        result= 2;
    else if(user_input >=20 && user_input <=50)
        result= 3;
    else if(user_input >=51 && user_input <=60)
        result= 4;
    else if(user_input >=61 && user_input <=101)
        result= 5;
    else if(user_input >101)
        result= -1;
        cout<<" Value of variable result will be: "<<result<<endl;
  }
else
    cout<<"Invalid input provided."<<endl;
}

