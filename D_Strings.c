#include <stdio.h>
#include <string.h>

int main() {
    char A[100], B[100];
    char C[200];
    
    // Input two strings A and B
    scanf("%s", A);
    
    scanf("%s", B);
    
    // Calculate the sizes of A and B
    int sizeA = strlen(A);
    int sizeB = strlen(B);
    
    // Concatenate A and B
    strcpy(C, A);
    strcat(C, B);
    
    // Swap the first characters of A and B
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;
    
    // Print the results
    printf("%d %d\n", sizeA, sizeB);
    printf("%s\n", C);
    printf("%s %s\n", A, B);
    
    return 0;
}
