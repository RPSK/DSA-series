#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <stack>
#include <queue>
#include <map>
using namespace std ;

int main(){

    list <int> l ; // creating list 
    deque <int> d  = {1,2,3,4,5,6,7}; // creating deque
    pair <char , int > p = {'a' , 2 } ; //creating pair 
    stack <int> s ; // creating a stack 
    queue <int > q ; // creating a queue
    map <string , int > m ; //creating a map 

    cout<< d[3] << "\n" ; //agar ham same cheez list mai kare toh error

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_front(0) ;

    // list part -------->

    for(int val : l ){
        cout << val << " " ; 
    }

    cout << "\n" ;

    l.pop_back() ; // erase last element 
    l.pop_front() ; // erase front element 

    for(int val : l){
        cout << val << " " ; 
    } 

    //stack part ----------->

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(0) ;

    cout << "\n" ;
    while(s.size() != 0 ){

        cout << s.top() << " ";
        s.pop() ; 
    }

//   queue part ------>

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(0) ;

    cout << "\n" ;
    while(q.size() != 0 ){

        cout << q.front() << " " ;
        q.pop() ; 
    }

// map part -------------> 
 
    m["laptop"] = 100 ;
    m["tablet"] = 100 ;
    m["mouse"] = 100 ;
    m["keyboard"] = 100 ;
    m["charger"] = 100 ;

    m.insert({"camera" , 50 }) ; // insert a value 

    cout << "\n" ;
    for(auto v : m){
        cout << v.first << " " << v.second ; 
        cout << "\n" ;
    }

    return 0 ; 
}