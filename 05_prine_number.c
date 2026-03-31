#include <stdio.h>

// Function to check prime
int isPrime(int num) {
    int i;

    if (num <= 1)
        return 0;

    for (i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;   // Not prime
    }

    return 1;   // Prime
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = isPrime(num);

    if (result == 1)
        printf("Prime Number\n");
    else
        printf("Not Prime Number\n");

    return 0;
}
