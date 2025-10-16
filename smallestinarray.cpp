#include <iostream>
#include <climits>
using namespace std ;

int main(){

    int array[5] = {54,234,5,3452,356};
    int size= 5 ;

    int min = INT_MAX ;

    for(int i = 0 ; i < size ; i++){
        if (array[i]< min){
            min = array[i];
        }
    }
    cout << min ;
    return 0 ;
}