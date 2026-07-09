

#include <stdio.h>

int main() {
    int n;
    unsigned long long t1 = 0, t2 = 1, nextTerm;

    printf("Kitne terms print karne hain? ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 1; i <= n; ++i) {
        
        printf("%llu ", t1);
        
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}