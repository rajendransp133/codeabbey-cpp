#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        float w,h,bmi;
        cin>>w>>h;
        bmi=w/(h*h);
        if(bmi<18.5){
            cout<<"under"<<" ";
        }
        else if(bmi>=18.5 && bmi<25.0){
            cout<<"normal"<<" ";
        }
        else if(bmi>=25.0 && bmi<30.0){
            cout<<"over"<<" ";
        }
        else{
            cout<<"obese"<<" ";
        }
    }
}