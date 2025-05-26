#include <stdio.h>

int main() {
    int N, num, min;
    scanf("%d", &N);
    scanf("%d", &min); 

    for (int i = 2; i <= N; i++) {
        scanf("%d", &num);

        if (num < min) {
            min = num;
        }
    }

    printf("%d", min);

    return 0;
}
