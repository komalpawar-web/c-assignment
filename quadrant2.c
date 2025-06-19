#include <stdio.h>

int main() {
    int x, y;

    printf("Enter x and y coordinates: ");
    scanf("%d %d", &x, &y);

    if (x == 0 && y == 0) {
        printf("Point is at the Origin\n");
    } else {
        if (x == 0) {
            printf("Point lies on Y-axis\n");
        } else if (y == 0) {
            printf("Point lies on X-axis\n");
        } else {
            if (x > 0 && y > 0)
                printf("Point lies in Quadrant I\n");
            else if (x < 0 && y > 0)
                printf("Point lies in Quadrant II\n");
            else if (x < 0 && y < 0)
                printf("Point lies in Quadrant III\n");
            else
                printf("Point lies in Quadrant IV\n");
        }
    }

    return 0;
}