#include <stdio.h>

// Function to calculate simple interest
float calculateSI(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main() {
    float principal, rate, time, interest;

    printf("\n=====================================\n");
    printf("      SIMPLE INTEREST CALCULATOR\n");
    printf("=====================================\n");

    // Input from user
    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Function call
    interest = calculateSI(principal, rate, time);

    // Output
    printf("\n=====================================\n");
    printf("            RESULT\n");
    printf("=====================================\n");

    printf("Principal Amount : %f\n", principal);
    printf("Rate of Interest : %f\n", rate);
    printf("Time (years)     : %f\n", time);

    printf("-------------------------------------\n");
    printf("Simple Interest  : %f\n", interest);
    printf("=====================================\n");

    return 0;
}
