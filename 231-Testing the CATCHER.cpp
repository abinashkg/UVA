//Abinash Ghosh(Om)
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <cstring>
#include <climits>
#include <iostream>
#include <iomanip>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <sstream>
#include <algorithm>
using  namespace  std;

#define PI acos(-1.0)
#define MAX 10000007
#define EPS 1e-9
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define Sort(x) sort(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define pr(x) cout<<x<<"\n"
#define pr2(x,y) cout<<x<<" "<<y<<"\n"
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)

typedef  long long ll;
typedef  pair <int, int> pii;
typedef  pair <double , double> pdd;
typedef  pair <ll , ll > pll;
typedef  vector <int> vi;
typedef  vector <pii> vpii;
typedef  vector <ll > vl;
//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction

int dp[10000],n,s[10000];
long lpath(int u)
{
    if(dp[u]!=-1)return dp[u];
    int mx=0;
    FOR(i,u+1,n)
    {
        if(s[u]>=s[i])
        {
            if(lpath(i)>mx)
            mx=lpath(i);
        }
    }
    return dp[u]=1+mx;
}
long LIS(int n)
{
    long mx=0;
    FOR(i,0,n)
    {
        if(lpath(i)>mx)
            mx=lpath(i);
    }
    return mx;
}
int main()
{
    //READ("in.txt");
    //WRITE("out.txt");
    int t=1;
    while(scanf("%d",&s[0]))
    {
        if(s[0]==-1)break;
        int i=1;
        while(scanf("%d",&s[i]))
        {
            if(s[i]==-1)break;
                i++;
        }
        mem(dp,-1);
        n=i-1;
        long ans=LIS(i-1);
        if(t!=1)puts("");
        printf("Test #%d:\n  maximum possible interceptions: %ld\n",t++,ans);
    }
    return 0;
}


