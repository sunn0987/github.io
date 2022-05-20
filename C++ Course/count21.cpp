#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

// Hacker rank project euler #2
// sum of even number of fibonacci series
// input 
// 2
// 10 
// 100
// output 
// 2 8 = 10
// 2 8 34 = 44



int main()
{
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++)
    {
        long n;
        long count = 0;
        long c, a = 0, b = 1;
        cin >> n;
        while (a < n)
        {
            c = a + b;
            if (a % 2 == 0)
            {
                count = count + a;
            }
            a = b;
            b = c;
        }
        cout << count <<endl;
    }
    return 0;
}
