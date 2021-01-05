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
    hitAi;
    ll n , x , testCase ;
    //freopen("E:/Desktop/Programming/input.txt", "r" , stdin );

    cin >> testCase;
    FORN(t,testCase)
    {
        string s ,temp,ans;
        cin >> s;
        FORN(i,s.size())
        {
            ll pre,post;
            if (ans.size()==0)
                ans=s[i];

            pre = i-1;
            post = i+1;
            temp = s[i];
            while ( s[pre] == s[post] && pre>=0 && post<s.size() )
            {


                string p;
                p = s[pre] ;
                p+=temp;
                p+=s[post];
                //watch(p);
                temp=p;
                if (temp.size()>ans.size())
                    ans=temp ;
                pre--;
                post++;
            }

            pre=i;
            post = i+1;
            while ( s[pre] ==s[post] && pre>=0 && post<s.size() )
            {
                string p;
                p += s[pre] ;
                p+=temp;
                p+=s[post];
                temp=p;
                if (temp.size()>ans.size())
                    ans=temp ;
                pre--;
                post++;
            }
        }
        cout << ans << endl;
    }
}
