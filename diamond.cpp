#include<iostream>
using namespace std;
void printpattern1(int n){
for(int i=0;i<n;i++){
    //spaces
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    //stars
    for(int j=0;j<2*i+1;j++){
        cout<<"*";
    }
    //spaces
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    cout<<endl;
}
}
void printpattern2(int n){
    for(int i=1;i<=n;i++){
        //spaces
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        //stars
        for(int j=1;j<=2*n-(2*i+1);j++){
            cout<<"*";
        }
        //spaces
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
    }
int main(){
int n;
cin>>n;
printpattern1(n);
printpattern2(n);
}