#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define what_is(x) cerr << #x << " is " << x << endl;
#ifdef ONLINE_JUDGE
#  define lld I64d
#  define debug(args...) {}
#else
#  define debug(args...) fprintf(stderr, args)
#endif
using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const double eps = 1e-9;
const int inf = INT_MAX;
/////////////////0123456789
const int MAXN = 10004;
const int modn = 1000000007;

int main() {
    char s1[MAXN], s2[MAXN];
    scanf("%s %s", s1, s2);
    int tam1 = strlen(s1);
    int tam2 = strlen(s2);
    for(int i = 0; i < tam1; i++) 
        s1[i] = tolower(s1[i]);
    for(int i = 0; i < tam2; i++)
        s2[i] = tolower(s2[i]);
    if(strcmp(s1,s2) == 0)
        printf("0\n");
    else if(strcmp(s1,s2) < 0)
        printf("-1\n");
    else
        printf("1\n");
    return 0;
}

