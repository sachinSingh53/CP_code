#include <bits/stdc++.h>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
using namespace std;

// using namespace __gnu_pbds;

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

#define int long long


int64_t expo(int64_t a, int64_t b, int64_t mod) {int64_t res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(int64_t a, int64_t b, int64_t*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); int64_t x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
int64_t mminv(int64_t a, int64_t b) {int64_t arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
int64_t mminvprime(int64_t a, int64_t b) {return expo(a, b - 2, b);}
int64_t combination(int64_t n, int64_t r, int64_t m, int64_t *fact, int64_t *ifact) {int64_t val1 = fact[n]; int64_t val2 = ifact[n - r]; int64_t val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
int64_t mod_add(int64_t a, int64_t b, int64_t m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int64_t mod_mul(int64_t a, int64_t b, int64_t m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int64_t mod_sub(int64_t a, int64_t b, int64_t m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
int64_t mod_div(int64_t a, int64_t b, int64_t m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
int64_t phin(int64_t n) {int64_t number = n; if (n % 2 == 0) {number /= 2; while (n % 2 == 0) n /= 2;} for (int64_t i = 3; i <= sqrt(n); i += 2) {if (n % i == 0) {while (n % i == 0)n /= i; number = (number / i * (i - 1));}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
int gcd(int a, int b){ if (a == 0)return b;return gcd(b % a, a);}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    #define debug(x) cout << #x<<' '; _print(x); cout << endl;
    const int64_t Arrsize = 1; // during debugging array 
    // void _print(int64_t t) {cout << t;}
    void _print(int t) {cout << t;}
    void _print(string t) {cout << t;}
    void _print(char t) {cout << t;}
    void _print(long double t) {cout << t;}
    void _print(double t) {cout << t;}
    void _print(unsigned int t) {cout << t;}
    
    template <class T, class V> void _print(pair <T, V> p); //pair
    template <class T> void _print(vector <T> v); // vector
    template <class T> void _print(T a[]); // array
    template <class T> void _print(set <T> v); // set
    template <class T, class V> void _print(map <T, V> v); // map
    template <class T> void _print(multiset <T> v); // multiset
    template <class T, class V> void _print(pair <T, V> p) {cout << '{'; _print(p.first); cout << ','; _print(p.second); cout << '}';}
    template <class T> void _print(vector <T> v) {cout << '['; for (T i : v) {_print(i); cout <<' ';} cout << ']';}
    template <class T> void _print(T a[]) {cout << '['; for (T i = 0 ; i<Arrsize; i++) {_print(a[i]); cout <<' ';} cout << ']';}
    template <class T> void _print(set <T> v) {cout << '['; for (T i : v) {_print(i); cout << ' ';} cout << ']';}
    template <class T> void _print(multiset <T> v) {cout << '['; for (T i : v) {_print(i); cout << ' ';} cout << ']';}
    template <class T, class V> void _print(map <T, V> v) {cout << '['; for (auto i : v) {_print(i); cout <<' ';} cout << ']';}
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

bool prime (int n) {bool prime = 1;if (n == 1) {return 0;}else {for (int i = 2; i <= n/2 ; i++) {if (n % i == 0) {prime = 0;break ;}}return prime;}}
bool isPerfectSquare(long double x){if (x >= 0) {long long sr = sqrt(x);return (sr * sr == x);}return false;}
void py(){cout<<"YES"<<endl;}
void pn(){cout<<"NO"<<endl;}
int ceil_val(int a,int b){return (a+b-1)/b;}
 
int isSubstring(string s1, string s2){
    // using find method to check if s1 is
    // a substring of s2
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
static bool sortbyCond(const pair<int, int>& a,
                const pair<int, int>& b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}

 
//------------------------------------------------------------------------------------------------------------------------------
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//-----------------------------------------------------------------------------------------------------------------------------

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    


    
}
 
int32_t main()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
 
    int t = 1;
    cin >> t;
 
    for (int C = 1; C <= t; C++)
    {
        // cout << "Case #" << C << ": ";
        solve();
 
    }
 
}
 