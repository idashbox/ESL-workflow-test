#include "vector.h"

Vector vector_add(Vector a, Vector b) {
    Vector result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
    result.z = a.z + b.z;
    return result;
}

Vector vector_sub(Vector a, Vector b) {
    Vector result;
    result.x = a.x - b.x;
    result.y = a.y - b.y;
    result.z = a.z - b.z;
    return result;
}

double vector_dot(Vector a, Vector b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

Vector vector_cross(Vector a, Vector b) {
    Vector result;
    result.x = a.y * b.z - a.z * b.y;
    result.y = a.z * b.x - a.x * b.z;
    result.z = a.x * b.y - a.y * b.x;
    return result;
}
