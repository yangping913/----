#include <stdio.h>
#include <stdlib.h>
int a[20], b[20];
int main() {
    int t;
    long long n, s;
    scanf("%d", &t);
    while (t--) {
        scanf("%lld %d", &n, &s);
        int cnt = 0, sum = 0, idx = 1;
        long long k = n;
        while (k) {
            a[cnt++] = k % 10;
            k /= 10;
            sum += a[cnt - 1];
        }
        if (sum <= s) {
            printf("0\n");
            continue;
        }
        sum = 0;
        int flag = 0;
        b[idx] = 0;
        int i;
        for (i = cnt - 1; i >= 0; i--) {
            sum += a[i];
            if (sum >= s && flag == 0) {
                b[idx]++;
                flag = 1;
            }
            if (flag)
                b[++idx] = 0;
            else
                b[++idx] = a[i];
        }
        long long ans = 0;
        for (i = 1; i <= idx; i++) {
            ans = ans * 10 + b[i];
        }
        printf("%lld\n", ans - n);
    }
    return 0;
}
