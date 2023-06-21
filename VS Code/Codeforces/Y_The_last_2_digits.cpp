#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    // Calculate the multiplication of the four numbers
    long long x = (a % 100) * (b % 100) * (c % 100) * (d % 100);

    // Extract the last two digits
    int lastTwoDigits = x % 100;

    // Print the last two digits with leading zeros if necessary
    if (lastTwoDigits <= 9) {
        printf("0%d\n", lastTwoDigits);
    } else {
        printf("%d\n", lastTwoDigits);
    }

    return 0;
}
