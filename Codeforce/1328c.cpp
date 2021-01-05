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
#define ALLR(V)              V.rbegin(), V.rend()
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
    hitAi;//freopen("E:/Desktop/Programming/input.txt", "r" , stdin );
    ll n , x , testCase ;

    cin >> testCase ;

    FORN(t,testCase)
    {
        ll a=0 , b =0;
        string s, s1,s2;
        cin >> n;
        cin >> s;

        FORN(i,n)
        {
            if (s[i]=='0')
            {
                s1+='0';
                s2+='0';
            }
            else if (s[i]=='1')
            {
                if (a==b)
                {
                    s1+='1';
                    s2+='0';
                    a++;
                }
                else if (a>b){
                    s2+='1';
                    s1+='0';
                }
            }
            else {
                if (a==b)
                {
                    s1+='1';
                    s2+='1';
                }
                else if (a>b){
                    s2+='2';
                    s1+='0';
                }
            }
        }
        cout << s1 << endl << s2 << endl;

    }

}
