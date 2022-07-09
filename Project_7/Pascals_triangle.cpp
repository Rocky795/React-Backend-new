#include <iostream>
using namespace std;

int fac(int f){
    if(f==1 || f==0){
        return 1;
    }
    return (f*fac(f-1));

}

// int ncr(int n,int r){
//     int f;
//     f=(fac(n))/(fac(n-r)*fac(r));
//     return f;
// }

// void pascal(int n){
//     for(int i=0;i<=n;i++){
//         for(int j=0;j<=n;j++){
//            cout<<ncr(i,j)<<"hell";
//         }
//         cout<<endl;
//     }
//     return ;
// }

int main(){

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
           cout<<(fac(i))/(fac(i-j)*fac(j));
        }
        cout<<endl;
    }


    return 0;
}