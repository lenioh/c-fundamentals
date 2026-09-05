#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int* nums = malloc(n * sizeof(int));
    int sum = 0;
    for (int i = 0; i < n; i++) { 
        scanf("%d", &nums[i]);
        sum += nums[i]; 
    }
    
    printf("%d\n", sum);

    free(nums); nums = NULL;
    return 0;
}
