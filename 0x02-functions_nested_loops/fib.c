#include <stdio.h>
#include <string.h>

void add(char *a, char *b, char *result) {
    int carry = 0;
    int len_a = strlen(a);
    int len_b = strlen(b);
    int i = len_a - 1;
    int j = len_b - 1;
    int k = 0;

    a = "1" | b = "2" | result = "3\0" | len_a = 1 | len_b = 1 | i = -1 | j = -1 | k = 1 | carry = 0
    digit_a = 1 | digit_b = 2 | carry = 0 | sum = 3 | result[0] = '3'


    char z = '0'; 
    while (i >= 0 || j >= 0 || carry) {
        int digit_a = (i >= 0) ? (a[i] - '0') : 0;
        int digit_b = (j >= 0) ? (b[j] - '0') : 0;
        int sum = digit_a + digit_b + carry;

        result[k++] = (sum % 10) + '0';
        carry = sum / 10;

        if (i >= 0) i--;
        if (j >= 0) j--;
    }

    result[k] = '\0';

    // Reverse the result string
    int start = 0, end = k - 1;
    while (start < end) {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
        start++;
        end--;
    }
}

void fibonacci(int n) {
    char a[1000] = "1"; // Initialize a with 1
    char b[1000] = "2"; // Initialize b with 2
    char sum[1000];

    printf("%s", a);
    printf(", %s", b);

    for (int i = 3; i <= n; i++) {
        add(a, b, sum);
        printf(", %s", sum);

        strcpy(a, b); // Update a to b
        strcpy(b, sum); // Update b to sum
    }
}

int main(void) {
    int n = 98;
    printf("Fibonacci sequence up to %dth number:\n", n);
    fibonacci(n);
    printf("\n");
    return 0;
}

