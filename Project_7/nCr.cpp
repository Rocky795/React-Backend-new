#include<iostream>
using namespace std;

int fac(int f){
    if(f==1){
        return 1;
    }
    return (f*fac(f-1));

}

int ncr(int n,int r){
    int f;
    f=(fac(n))/(fac(n-r)*fac(r));
    return f;
}
main(){

    int n,r;

    cin>>n>>r;
   cout<< ncr(n,r);


    return 0;
}