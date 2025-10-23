#include <iostream>
using namespace std ;

int algo(int prices[] , int size){

    int left = 0 ;
    int right = 1 ; 
    int maxprofit = 0 ;

    while(right<size){

        int price = prices[right] - prices[left];
        maxprofit = max(maxprofit,price);

        if(prices[left]>prices[right]){
            
            if(left<right){
                left ++;
            }
            else if(left==right){
                right++;
            }
            else{
                right++ ;
            }
        }
        else if(prices[left]<prices[right]){
            right++;
        }
        else{
            right++;
        }

    }

    return maxprofit;
}
 
int main(){
    int prices[] = {7,5,3,1,4,2,3,20,1,15};
    int size = sizeof(prices)/sizeof(prices[0]);

    cout <<  algo(prices ,size) ;

    return 0 ;
}