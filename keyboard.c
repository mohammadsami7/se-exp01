#include <stdio.h>
#include <math.h>

void quadratic_solution(float a, float b, float c) {
    float discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots: %.2f, %.2f\n", root1, root2);
    } else {
        printf("No real roots.\n");
    }
}

int main() {
    float a, b, c;
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    quadratic_solution(a, b, c);
    return 0;
}
