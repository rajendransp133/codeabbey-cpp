#include<iostream>
#include <sstream>
#include<string>
using namespace std;

void sumDigit(int val){
    int sum=0;
    while(val>9){
        int x=val%10;
        sum=sum+x;
        val=val/10;
    }
    cout<<sum+val<<" ";
}
int main(){
    string t;
    int tt;
    getline(cin,t);
    stringstream sss(t);
    sss>>tt;
    while(tt--){
        int x=0,y=0,z=0,value=0;
        string str;
        getline(cin,str);
        stringstream ss(str);
        ss>>x>>y>>z;
        value=(x*y)+z;
        sumDigit(value);
    }
    
}