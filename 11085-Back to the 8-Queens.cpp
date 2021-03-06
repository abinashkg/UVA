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
using namespace std;

#define PI acos(-1.0)
#define MAX 10000007
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define pb push_back
#define mp make_pair
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define FOR(i, b, e) for(int i = b; i <= e; i++)
#define pr(x) cout<<x<<"\n"
#define READ(f) freopen(f, "r", stdin)

typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;

//int dx[]={1,0,-1,0};int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
vi sol[95];
int cont=1,x[10];
bool Place(int k,int i)
{
    FOR(j,1,k-1)
      if(x[j]==i||(abs(x[j]-i)==abs(j-k)))
        return false;
    return true;
}
void NQueens(int k,int n)
{
    FOR(i,1,n)
    {
        if(Place(k,i))
        {
            x[k]=i;
            if(k==n)
            {
                sol[cont].pb(0);
                FOR(j,1,n)
                sol[cont].pb(x[j]);
                cont++;
            }
            else NQueens(k+1,n);
        }
    }
}
int main()
{
    //READ("in.txt");
    //freopen("out.txt","w",stdout);
    NQueens(1,8);
    int num[10],cas=1;
    while(scanf("%d",&num[1])!=EOF)
    {
        FOR(j,2,8)
        scanf("%d",&num[j]);
        int M=0;
        FOR(i,1,92)
        {
            int sum=0;
            FOR(j,1,8)
                if(sol[i][j]==num[j])
                    sum++;
            if(M<sum)M=sum;
        }
        printf("Case %d: %d\n",cas++,8-M);
    }
    return 0;
}


