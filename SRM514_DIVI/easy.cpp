#include <sstream> 
#include <string> 
#include <vector> 
#include <map> 
#include <algorithm> 
#include <iostream> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <utility> 
#include <set> 
#include <cctype> 
#include <queue> 
#include <stack> 
#include <numeric> 
using namespace std; 
class MagicalGirlLevelOneDivOne { 
  public: 
  string isReachable(vector <int> j, int x, int y) { 
         for(int i = 0; i < j.size(); i++) 
         { 
                 if(j[i] % 2 == 0) return "YES"; 
                 if(j[i] % 2 == 1 && (x + y) % 2 == 0) return "YES";  
         } 
         return "NO"; 
          
  } 
};
