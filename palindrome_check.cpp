#include <iostream>
#include <algorithm> // Required for reverse()

using namespace std ;

bool isPalindrome(string s){
    string rev = s ; 
    reverse(rev.begin(), rev.end()) ;
    return s == rev ; 
}


int main()
{
    string sr = "racecar" ;
    
    bool result = isPalindrome(sr) ; 
    if (result == 0 ){
        cout<<"Flase" << endl ;
    }
    else{
        cout<<"True" << endl ;
    }
 
    return 0;
}
