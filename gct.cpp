#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b)
    {
        return a;
    }
    else {
        return b;
    }
}
int main(){
    int n;
    cin>>n;
    while(n){
        int o,p,a,b;
        cin>>o>>p;
        int lcm=0,gct=0;
        int val=1;
        a=o;
        b=p;
        int t=max(a,b)/2;
        int i=2;
        while(i<t){
            if(a%i==0 && b%i==0){
                a=a/i;
                b=b/i;
                t=max(a,b)/2;
                val=val*i;
                i=1;
            }
            else{
                t--;
            }
            i++;
        }
        lcm=val*a*b;
        // cout<<val<<" "<<a<<" "<<b<<" ";
        gct=(o*p)/lcm;
        if(gct==0){cout<<"("<<"1"<<" "<<a*b<<") ";}
        else{cout<<"("<<gct<<" "<<lcm<<") ";}
        n=n-1;
    }
}