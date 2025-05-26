#include <stdio.h>

int main() {
    int N, x, index = -1;

    scanf("%d", &N);

    int arr[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &x);

    for (int i = 0; i < N; i++) {
        if (arr[i] == x) {
            index = i;
            break; 
        }
    }

    printf("%d", index);

    return 0;
}