#include <stdio.h>

// Function to calculate total marks
int calculateTotal(int m1, int m2, int m3, int m4, int m5) {
    return m1 + m2 + m3 + m4 + m5;
}

// Function to calculate percentage
float calculatePercentage(int total) {
    return total / 5.0;
}

int main() {
    char name[50];
    int m1, m2, m3, m4, m5, total;
    float percentage;

    printf("\n============================================\n");
    printf("    🎓 STUDENT MARKS MANAGEMENT SYSTEM 🎓\n");
    printf("============================================\n");

    // Input name (single word only)
    printf("Enter Student Name: ");
    scanf("%s", name);

    // Input marks
    printf("\nEnter marks of the subjects:\n");
    printf("MATHEMATICS: "); 
    scanf("%d", &m1);
    printf("PHYSICS: "); 
    scanf("%d", &m2);
    printf("CHEMISTRY: "); 
    scanf("%d", &m3);
    printf("ENGLISH: "); 
    scanf("%d", &m4);
    printf("KANNADA: "); 
    scanf("%d", &m5);

    // Function calls
    total = calculateTotal(m1, m2, m3, m4, m5);
    percentage = calculatePercentage(total);

    // Output
    printf("\n=====================================\n");
    printf("        📊 STUDENT REPORT CARD 📊 \n");
    printf("=====================================\n");

    printf("Student Name : %s\n", name);

    printf("-------------------------------------\n");
    printf("MATHEMATICS : %d\n", m1);
    printf("PHYSICS : %d\n", m2);
    printf("CHEMISTRY : %d\n", m3);
    printf("ENGLISH : %d\n", m4);
    printf("KANNADA : %d\n", m5);

    printf("-------------------------------------\n");
    printf("Total Marks   : %d\n", total);
    printf("Percentage    : %.2f%%\n", percentage);
    printf("=====================================\n");

    return 0;
}

