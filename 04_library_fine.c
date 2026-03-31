#include <stdio.h>

// Function to calculate fine
int calculateFine(int days) {
    if (days > 5)
        return days * 2;
    else
        return 0;
}

int main() {
    char name[50];
    int days, fine;

    printf("\n=====================================\n");
    printf("        LIBRARY FINE SYSTEM\n");
    printf("=====================================\n");

    // Input
    printf("Enter Student Name: ");
    scanf("%s", name);

    printf("Enter number of late days: ");
    scanf("%d", &days);

    // Function call
    fine = calculateFine(days);

    // Output
    printf("\n=====================================\n");
    printf("           FINE DETAILS\n");
    printf("=====================================\n");

    printf("Student Name : %s\n", name);
    printf("Late Days    : %d\n", days);

    if (fine > 0) {
        printf("Fine Rate    : Rs. 2 per day\n");
        printf("Total Fine   : Rs. %d\n", fine);
    } else {
        printf("No Fine (Returned within 5 days)\n");
    }

    printf("=====================================\n");

    return 0;
}
