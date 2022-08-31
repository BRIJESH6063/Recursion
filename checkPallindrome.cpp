#include<bits/stdc++.h>
using namespace std ;

bool checkPallindrome(string s, int a, int b){
    if(a > b) return  true ;
    else if(s[a] == s[b]) return checkPallindrome(s, a+1, b-1) ;
    else return false ;
    
}


int main()
{
    string s ; cin >> s ; 
    if(checkPallindrome(s, 0, s.size()-1)) cout << "Yes the string is Pallindrome" << endl ;
    else cout << "No the string is NOT Pallindrome" << endl ;
    return 0 ;
}