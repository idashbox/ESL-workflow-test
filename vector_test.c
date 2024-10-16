#include <stdio.h>
#include "vector.h"

int main() {
    Vector a = {1.0, 2.0, 3.0};
    Vector b = {4.0, 5.0, 6.0};

    Vector sum = vector_add(a, b);
    printf("Sum: (%.2f, %.2f, %.2f)\n", sum.x, sum.y, sum.z);

    Vector difference = vector_sub(a, b);
    printf("Difference: (%.2f, %.2f, %.2f)\n", difference.x, difference.y, difference.z);

    double dot_product = vector_dot(a, b);
    printf("Dot Product: %.2f\n", dot_product);

    Vector cross_product = vector_cross(a, b);
    printf("Cross Product: (%.2f, %.2f, %.2f)\n", cross_product.x, cross_product.y, cross_product.z);

    return 0;
}
