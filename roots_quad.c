#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;
    float x1, x2, discriminant, realPart, imaginaryPart;

    printf("Enter the values of a, b, c for the following quadratic equation\nax^2 + bx + c = 0\n");
    scanf("%d %d %d", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);  // Calculate discriminant once

    if (discriminant > 0) {
        printf("Real and Unique roots\n");
        x1 = (-b + sqrt(discriminant)) / (2 * a);
        x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are: %f and %f\n", x1, x2);
    } 
    else if (discriminant == 0) {
        printf("Real and Equal roots\n");
        x1 = -b / (2.0 * a);
        printf("Root is: %f\n", x1);
    } 
    else {
        printf("Imaginary roots\n");
        realPart = -b / (2.0 * a);
        imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are: %f + %fi and %f - %fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
