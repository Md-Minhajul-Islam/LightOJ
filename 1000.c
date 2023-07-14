// Q: https://lightoj.com/problem/greetings-from-lightoj
#include <stdio.h>

/**
 * Returns the total number of problems.
 *
 * @param a denotes the number of problems in the first computer
 * @param b denotes the number of problems in the second computer
 */
int sum(int a, int b) {
    // Implement this method
    return a+b;
}

/**
 * Takes care of the problem input and output.
 */
int main() {
    int cases, caseno, a, b;
    scanf("%d", &cases);
    for (caseno = 1; caseno <= cases; ++caseno) {
        scanf("%d %d", &a, &b);
        printf("Case %d: %d\n", caseno, sum(a, b));
    }
    return 0;
}