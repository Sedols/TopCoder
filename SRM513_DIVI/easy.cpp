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
class YetAnotherIncredibleMachine { 
  public: 
  int countWays(vector <int> p, vector <int> L, vector <int> b) { 
    long long ret = 1; 
    b.push_back(-1000001); 
    b.push_back(1000001); 
    sort(b.begin(),b.end()); 
    int h,l; 
    for(int i = 0; i < p.size(); i++) 
    { 
            for(int j = 0 ; j < b.size(); j++) 
            { 
             if(b[j] < p[i]) l = b[j]; 
             if(p[i] == b[j]) return 0; 
             if(b[j] > p[i]) {h = b[j]; break;}  
            } 
              
            int left = min(L[i],p[i] - 1 - l); 
            int right = min(L[i],h - p[i] - 1); 
            if(min(left,right) < 0) return 0; 
            if(left + right < L[i]) return 0; 
            int p = 0; 
            for(int k = left; k >= 0; k--) 
            { 
                    if(L[i] - k <= right) p++; 
            } 
            ret = (ret * p) % 1000000009; 
    } 
  
    return ret %1000000009 ; 
  } 
}; 
