#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += abs(arr[i]);

        }

        int op = 0;
        vector<int> poi;
        for (int i = 0; i < n; i++) {
            if (arr[i] > 0) {
                poi.push_back(i);
            }
        }

        poi.insert(poi.begin(), 0);
        poi.push_back(n);

        for (int i = 0; i < poi.size() - 1; i++) {
            for (int j = poi[i]; j < poi[i + 1]; j++) {
                if (arr[j] < 0) {
                    op++;
                    break;
                }
            }
        }

        cout << sum << " " << op << endl;
    }

    return 0;
}
