#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    double x;
    double y;
    double z;
} Vector;

Vector vector_add(Vector a, Vector b);
Vector vector_sub(Vector a, Vector b);
double vector_dot(Vector a, Vector b);
Vector vector_cross(Vector a, Vector b);

#endif // VECTOR_H
