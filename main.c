#include <stdio.h>
#include <math.h>


int min_steps(int x, int y) {
    int distance = y - x;
    int steps = 0;
    int max_step = 1;
    while (distance > 0) {
        steps++;
        distance -= max_step;
        if (steps % 2 == 0) {
            max_step++;
        }
    }
    return steps;
}
int main() {
    int x, y;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    printf("Enter the value of y: ");
    scanf("%d", &y);
    int result = min_steps(x, y);
    printf("Minimum number of steps from %d to %d is: %d\n", x, y, result);
    return 0;
}
