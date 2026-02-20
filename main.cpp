#include <iostream>
using namespace std;
int main(){
    int n, x, i, y, j;
    cin>>n;
    cin>>y;
    for(i=1; i<=n; i++){
        cin>>x;
        if(x-y>1){
            for(j=y+1; j<x; j++){
                cout<<j<<" ";
            }
        }
        y=x;
    }
    return 0;
}