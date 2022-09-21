#include<iostream>
#include<iomanip>
using namespace std;
void squar(double a,int b){
    double r=1;
    while(b){
        r=(r+(a/r))/2;
        b=b-1;
    }
    cout<<fixed<<setprecision(7)<<r<<" ";
    
}
int main(){
int n;
cin>>n;

for(int i=0;i<n;i++){
    double s1;
    int s2;
    cin>>s1>>s2;
    squar(s1,s2);
    }
}