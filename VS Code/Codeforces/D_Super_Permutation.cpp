//bismillahir rahmanir rahim
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n == 1) {
            cout << "1" << endl;
            continue;
        }
        
        if(n&1){
            cout<<"-1"<<endl;
            continue;
        }

        vector<int> vec;

        for (int i = 0; i < n / 2; i++) {
            vec.push_back(i);
            vec.push_back(n - i - 1);
        }

        
        cout << n << " ";

        for (int i = 0; i < n - 1; i++) {
            
            cout << (vec[i + 1] - vec[i] + n) % n << " ";
        }

        cout << endl;
    }

    return 0;
}