#include <iostream>
#include <algorithm>
using namespace std ;

int algo(int height[] , int size ){

    int start = 0  ;
    int end = size - 1 ;
    int volume =0;
    int maxvol = 0 ;
    

    while(start<end){

        volume = (end - start )*(min(height[start] , height[end]));
        maxvol = max(volume , maxvol);

        if(height[start]>height[end]){
            end-- ;
        }
        else if
        (height[start]<height[end]){
            start++;
        }
        else{
            start++;
        }
   
    }

    return maxvol ;

}

int main(){

    int height[] = {1,8,7,4,6,2,9,2};
    int size= sizeof(height)/sizeof(height[0]);

    cout<< algo(height , size );

     return 0 ; 
}