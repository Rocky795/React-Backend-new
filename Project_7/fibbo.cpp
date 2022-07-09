#include <iostream>
using namespace std;

void fibbo(int n){
    int a=0,b=1,c;
    cout<<a<<endl<<b<<endl;
    for(int i=0;i<n-2;i++){
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    return ;
}

main(){

    int n;
    cin>>n;
    fibbo(n);


    return 0;
}