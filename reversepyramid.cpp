    // *****
    //  ***
    //   *
#include<iostream>
using namespace std;
void printpattern(int n){
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
printpattern(n);
}