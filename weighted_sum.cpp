#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x=0,cum_sum=0,val=0;
        cin>>x;
        int dum=x;
        int i=1;
        while(dum/10>0){
             i=i+1;
             dum=dum/10;
             }
        while(x>9){
            val=x%10;
            x=x/10;
            cum_sum=cum_sum+(i*val);
            i=i-1;
        }
        cout<<cum_sum+x<<" ";
    }
}