#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int mods(int v){
    if(v<0){
        return -v;
    }
    else return v;
}
void findTime(int a1,int b1,int c1,int d1,int a2,int b2,int c2,int d2){
    int day1s,hour1s,min1s,total1s,day2s,hour2s,min2s,total2s,val,w,x,y,z;
    day1s=a1*24*60*60;
    hour1s=b1*60*60;
    min1s=c1*60;
    total1s=day1s+hour1s+min1s+d1;
    day2s=a2*24*60*60;
    hour2s=b2*60*60;
    min2s=c2*60;
    total2s=day2s+hour2s+min2s+d2;
    val=total1s-total2s;
    w=val%(24*60*60);
    val=val/(24*60*60);
    cout<<'('<<mods(val);
    x=w%(60*60);
    val=w/(60*60);
    cout<<" "<<mods(val);
    y=x%60;
    val=x/60;
    cout<<" "<<mods(val);
    cout<<" "<<mods(y)<<") ";
}
int main(){
    string t;
    int tt;
    getline(cin,t);
    stringstream sss(t);
    sss>>tt;
    while(tt--){
        int d1,h1,m1,s1,d2,h2,m2,s2;
        string str;
        getline(cin,str);
        stringstream ss(str);
        ss>>d1>>h1>>m1>>s1>>d2>>h2>>m2>>s2;
        findTime(d1,h1,m1,s1,d2,h2,m2,s2);
    }
    
}