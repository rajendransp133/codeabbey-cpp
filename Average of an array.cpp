#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        double x,j=0,sum=0;
        while(cin>>x){
            if(x==0){break;}
            else 
            {
            sum+=x;
            j++;
            }
        }
    cout<<round(sum/j)<<"  ";
    }
}
