#include <stdio.h>

int main() {
    int t, n, i, start, petrol, deficit;
    scanf("%d", &t);
    for(int cont = 1; cont <= t; cont++){
        scanf("%d", &n);
        int p[n], q[n];
        start = 0;
        petrol = 0;
        deficit = 0;

        for (i = 0; i < n; i++) {
            scanf("%d", &p[i]);
        }

        for (i = 0; i < n; i++) {
            scanf("%d", &q[i]);
        }

        for (i = 0; i < n; i++) {
            petrol += p[i] - q[i];

            if (petrol < 0) {
                start = i + 1;
                deficit += petrol;
                petrol = 0;
            }
        }

        if (petrol + deficit >= 0) {
            printf("Case %d: Possible from station %d\n",cont, start % n + 1);
        } else {
            printf("Case %d: Not possible\n",cont);
        }
    }

    return 0;
}
