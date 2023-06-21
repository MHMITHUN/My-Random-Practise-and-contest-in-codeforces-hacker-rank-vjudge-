#include <stdio.h>
#define ll long long

int main() {
    int tc;
    scanf("%d", &tc);

    while (tc--) {
        ll n;
        scanf("%lld", &n);

        ll sum = 0;
        while (n) {
            sum += n;
            n /= 2;
        }

        printf("%lld\n", sum);
    }

    return 0;
}
