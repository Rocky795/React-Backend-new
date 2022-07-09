#include <iostream>
#include <math.h>
using namespace std;

    void prime(int a,int b){
        int c[b-a],k=0,r=0;
        for(int i=a;i<=b;i++){
            for(int j=2;j<a;j++){
            if(a%j==0){
              r++;
              continue;
            }
            }
        if(r==0){
            cout<<a<<endl;
        }
        a++;
        r=0;
        }
       return ;
    }

int main(){

    int a,b;
    cin>>a>>b;
    int c[b-a];
    prime(a,b);


    return 0;
}