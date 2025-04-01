// 1      1
// 12    21
// 123  321
// 12344321
#include<iostream>
using namespace std;
void printnumberpyramid(int n){
    int spaces= 2*n-1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<"";
        }
        for(int j=1;j<=spaces;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<"";
        }
        cout<<endl;
        spaces=spaces-2;
    }
}
int main(){
    int n;
    cin>>n;
    printnumberpyramid(n);
}