#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <queue>  
#include <stack>  
#include <bitset>  
#include <algorithm>  
#include <functional>  
#include <numeric>  
#include <utility>  
#include <sstream>  
#include <iostream>  
#include <iomanip>  
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
#include <cctype>  
#include <string>  
#include <cstring>  
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
#include <ctime>  
using namespace std;
 
class DoubleRoshambo {
public:
   bool win(char a, char b)
   {
      if (a == 'S' && b == 'P') return true;
      if (a == 'R' && b == 'S') return true;
      if (a == 'P' && b == 'R') return true;
      return false;
   }
   int maxScore( vector <string> A, vector <string> B ) {
      vector<int> free1(A.size(), 1), free2(B.size(),2);
      int points = 0;
      for(int i = 0; i < A.size(); i++)
        for(int j = 0; j < B.size(); j++)
        {
          if(free1[i] && free2[j])
          {
            if( win(A[i][0],B[j][0]) && win(A[i][1], B[j][1]))
            {
               points += 2;
               free1[i] = 0;
               free2[j] = 0;
            }
          }
        }
      for(int i = 0; i < A.size(); i++)
        for(int j = 0; j < B.size(); j++)
        {
          if(free1[i] && free2[j])
          {
            if( A[i][0] == B[j][0] && win(A[i][1], B[j][1]))
            {
               points++;
               free1[i] = 0;
               free2[j] = 0;
            }
          }
        }
       return points; 
   }
};
