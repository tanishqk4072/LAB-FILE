#include <stdio.h>

int main() {
    int length, width, area, perimeter;

    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    area = length * width;
    perimeter = 2 * (length + width);
   
    printf("\nPerimeter of Rectangle = %d\n", perimeter);
 printf("\nArea of Rectangle = %d", area);
    return 0;
}
