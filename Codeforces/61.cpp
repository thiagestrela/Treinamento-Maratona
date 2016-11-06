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
    int tam = strlen(s1);
    for(int i = 0; i < tam; i++) {
        if(s1[i]==s2[i]) printf("0");
        else printf("1");
    }
    printf("\n");
    return 0;
}

