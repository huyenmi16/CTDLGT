
#include <bits/stdc++.h>
using namespace std;

void check() {
    int n; 
	cin >> n;
    int x;
    queue<int> q;
    for(int j=1;j<=n;j++) {
        cin >> x; // khai bao truy van loai x
        if (x == 1)
            cout << q.size() << endl;
        else if (x == 2) {
            if (q.empty()) cout << "YES\n";
            else cout << "NO\n";
        }
        else if (x == 3) {
            cin >> x; // nhap vao so nguyen 
            q.push(x);
        }
        else if (x == 4) {
            if (!q.empty()) q.pop();
        }
        else if (x == 5) {
            if (q.empty()) cout << "-1\n";
            else cout << q.front() << endl;
        }
        else if (x == 6) {
            if (q.empty()) cout << "-1\n";
            else cout << q.back() << endl;
        }
    }
}

int main() {
    

    int t = 1; 
	cin >> t;
    while (t--) {
        check();
        cout << "\n";
    }
    return 0;
}