#include <bits/stdc++.h>

#define MEM(a, b)           memset(a, (b), sizeof(a))
#define CLR(a)              memset(a, 0, sizeof(a))
#define MAX(a, b)           ((a) > (b) ? (a) : (b))
#define MIN(a, b)           ((a) < (b) ? (a) : (b))
#define ABS(X)              ( (X) > 0 ? (X) : ( -(X) ) )
#define S(X)                ( (X) * (X) )
#define SZ(V)               (int )V.size()
#define FORN(i, n)          for(int i = 0; i < n; i++)
#define FORAB(i, a, b)      for(int i = a; i <= b; i++)
#define ALL(V)              V.begin(), V.end()
#define IN(A, B, C)         ((B) <= (A) && (A) <= (C))
//#define AIN(A, B, C)        assert(IN(A, B, C))

#define watch2(x , y)       cout << (#x) << " " << (#y)<< " is " << (x) << " " << (y)<< endl
#define watch(x)            cout << (#x) << " is " << (x) << endl
#define hitAi               ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

#define ll                  long long int
#define xx                  first
#define yy                  second
#define pb(x)               push_back(x)
#define PI                  acos(-1.0)

#define PII                 pair<int, int>
#define PLL                 pair<long long int, long long int>
#define VI                  vector <int>

using namespace std;

int main ()
{
    hitAi;
    ll n , x , testCase , ans = 0 , sum = 0 , a , b , c , count = 0 ;
    //freopen("E:/Desktop/Programming/Codeforce/input.txt", "r" , stdin );
    string s;
    cin >> testCase;
    while (testCase--){
            sum=0;count=0;ans=0;
        cin >> s;

    int length = s.size();
    FORN(i,length){
        if (s[i]=='1')
            ans=1;
        if (ans){
            if (s[i]=='0') count++;
        }
        if(s[i]=='1'){
                sum+=count;
        count=0;
    }
    }
    cout << sum << endl;

}
}
