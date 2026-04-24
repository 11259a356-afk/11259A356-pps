include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14159;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of the circle = %.2f\n", area);

    return 0;
}

OUTPUT:
Enter the radius:4
 Area of circle=50.27 
