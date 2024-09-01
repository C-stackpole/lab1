#include <stdio.h>
#include <stdbool.h>

bool isPowerful(int n) {
    if (n == 1) return true; 

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            int count = 0;
            while (n % i == 0) {
                n /= i;
                count++;
            }
            if (count < 2) {
                return false;
            }
        }
    }
    return n == 1;
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    
    if (isPowerful(number)) {
        printf("%d is a powerful number.\n", number);
    } else {
        printf("%d is not a powerful number.\n", number);
    }
    
    return 0;
}