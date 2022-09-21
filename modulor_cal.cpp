#include<iostream>
#include<sstream>
#include<string>
using namespace std;
int main(){
    double n;
    string x,y;
    getline(cin,y);
    stringstream sss(y);
    sss>>n;
    while(getline(cin,x))
    {
        char ch;
        double m;
        stringstream ss(x);
        ss>>ch>>m;
        if(ch=='+'){
            n=m+n;
            cout<<n<<" ";
        }
        else if(ch=='-'){
            n=n-m;
            cout<<n<<" ";
        }
        else if(ch=='*'){
            n=n*m;
            cout<<n<<" ";
        }
        else if(ch=='/'){
            n=n/m;
            cout<<n<<" ";
        }
        else if(ch=='%'){
            while (n >= m)
                {n = n - m;}
            cout<<n;
        }
    }
}