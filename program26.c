#include <stdio.h>
#include <math.h>

// Function to check if sides form a valid triangle
int isValidTriangle(float a, float b, float c) {
    if (a <= 0 || b <= 0 || c <= 0)
        return 0; // sides must be positive

    if ((a + b > c) && (a + c > b) && (b + c > a))
        return 1; // valid triangle

    return 0; // invalid triangle
}

// Function to calculate area using Heron’s formula
float areaOfTriangle(float a, float b, float c) {
    float s = (a + b + c) / 2; // semi-perimeter
    float area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
}

int main() {
    float a, b, c;

    printf("Enter the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    // Validate the triangle
    if (isValidTriangle(a, b, c)) {
        float area = areaOfTriangle(a, b, c);
        printf("Valid Triangle: Yes\n");
        printf("Area: %.2f\n", area);
    } else {
        printf("Valid Triangle: No\n");
        printf("The given lengths do not form a valid triangle.\n");
    }

    return 0;
}
