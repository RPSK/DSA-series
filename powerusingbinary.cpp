#include <iostream>
using namespace std ; 

long long powerusingbinaryform(long long x , long long n ){
    
    long answer = 1 ;

    while(n>0){
        if(n%2==1){
            answer = answer *x ;
        }
        x = x*x ; 
        n = n/2 ;
    }


    return answer ;
}

int main(){

    long long x = 3 ;
    long long n = 5 ;
    cout<<powerusingbinaryform(x ,n );
    return 0 ;

    }