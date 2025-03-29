#include <iostream> 
using namespace std;
void printpattern()
{
    int i,j;
    int n=4;
    for( i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==0||i==n-1||j==0||j==n-1)
            {
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}



int main() {
// int n;
// cin>>n;
printpattern();
return 0;
}

