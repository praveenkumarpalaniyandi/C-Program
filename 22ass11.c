#include <stdio.h>
#include <stdbool.h>

#define MAX_N 20
#define MAX_K 10

int N, K, sum, target;
int arr[MAX_N];
bool visited[MAX_N];

void divide(int cur_sum, int count, int start_index) {
    if (count == K) {
        return true;
    }
    if (cur_sum == target) {
        return divide(0, count+1, 0);
    }
    for (int i = start_index; i < N; i++) {
        if (!visited[i] && cur_sum + arr[i] <= target) {
            visited[i] = true;
            if (divide(cur_sum + arr[i], count, i+1)) {
                //return true;
                printf("true");
            }
            visited[i] = false;
        }
    }
    return false;
}

void main() {
    int choice;
    printf("enter your choice(1,0):");
    scanf("%d", &choice);
    while (choice--) {
            printf("Enter the length :");
        scanf("%d", &N);
        sum = 0;
        for (int i = 0; i < N; i++) {
            printf("Enter Elements :");
            scanf("%d", &arr[i]);
            sum += arr[i];
            visited[i] = false;
        }
    printf("Enter subset :");
        scanf("%d", &K);
        if (sum % K != 0) {
            printf("False\n");
            continue;
        }
        target = sum / K;
        if (divide(0, 1, 0)) {
            printf("True\n");
        } else {
            printf("False\n");
        }
    }

}
