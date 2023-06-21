#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        long long mithun = a[n - 1] * a[n - 2];

        mithun = max(mithun, a[0] * a[1]);

        cout << mithun << endl;
    }

    return 0;
}
