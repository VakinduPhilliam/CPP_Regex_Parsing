// C++ program to demonstrate working of regex_search() 
// Compiled and presented by Vakindu Philliam

#include <iostream> 
#include <regex> 
#include<string.h> 
using namespace std; 
  
int main() 
{ 
    // Target sequence 
    string s = "I am looking for GeeksForGeeks "
               "articles"; 
  
    // An object of regex for pattern to be searched 
    regex r("Geek[a-zA-Z]+"); 
  
    // flag type for determining the matching behavior 
    // here it is for matches on 'string' objects 
    smatch m; 
  
    // regex_search() for searching the regex pattern 
    // 'r' in the string 's'. 'm' is flag for determining 
    // matching behavior. 
    regex_search(s, m, r); 
  
    // for each loop 
    for (auto x : m) 
        cout << x << " "; 
  
    return 0; 
} 