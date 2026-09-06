#include <bits/stdc++.h>
using namespace std;

#define int long long
#define sz(v) (int)v.size()
#define PB push_back
#define PP pop_back

typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef priority_queue <ii, vector<ii>, greater<ii>> pq_min;

signed main(){
    int t;

    cin >> t;

    while (t > 0){
        int n;
        cin >> n;
        int odd_even = 0;
        int even = 0;
        int odd = 0;
        for (int i = 0; i < n; i++){
            int a; cin >> a;
            if (a % 2 != 0) odd++;
            else if ((a / 2) % 2 == 0) even++;
            else odd_even++; 
        }
        cout << max(max(odd_even, even), odd) << '\n';
        t--;
    }
    

}