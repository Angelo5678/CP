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
        int n; cin >> n;
        int zeros = 0;
        vi arr(n);
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if (arr[i] == 0) zeros++;
        }
        if (zeros == 1) cout << "NO" << '\n';
        else {
            cout << "YES" << '\n';
            if (zeros == 0){
                for (int i = 0; i < n; i++)
                    cout << 'A';
            } else {
                int bin = 1;
                for (int i = 0; i < n; i++) {
                    if (arr[i] != 0) cout << 'C';
                    else if (bin) {
                        cout << 'A';
                        bin = 0;
                    } else {
                        cout << 'B';
                        bin = 1;
                    }
                }
            }
            cout << '\n';
        }
        t--;
    }
    

}