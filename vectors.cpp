#include <iostream>
#include <vector > 
using namespace std ;

int main(){

    vector<int> vec ;  // verctor --> <type> --> name 

    vector <char> vec1 = {'a' , 'b' , 'c' , 'd', 'e'};
    
    vector <int> vec2(3,0) ; /* inside brackets first value represents size and
                              second tells us the value at every index */

    cout << vec2[0]<< vec2[1] << vec2[2] ;


    //for each loop in vectors

    for( char i : vec1){
        cout<< "\n" << i ;
    }

// VECTOR FUNCTONS ---->

    // 1- size function

    cout << "\n SIZE OF VECTOR = " << vec1.size() ;

    // 2 - push_back function

    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);

    for(int i : vec){
        cout << "\n" << i;
    }

    // 3 -  pop_back function ... deletes last element 
    vec.pop_back();
    for(int i : vec){
        cout << "\n" << i;
    }
    
    // 4 - front and back functions
    cout << "\n" << vec1.front() ;
    cout << " " << vec1.back() ;

    //5 - at function 
    cout << "\n" << vec1.at(3) ;


// SIZE VS CAPACITY OF A VECTOR 

    /*when we push a element in a vector . if there is space 
      then it tries to put it there but if there is no space 
      then it doubles the size of vector*/

    vector <int> vector3;
    vector3.push_back(1);
    vector3.push_back(2);
    vector3.push_back(3);

    cout<< "\n"<<vector3.size();
    cout<< " "<<vector3.capacity();
    return 0 ;

}