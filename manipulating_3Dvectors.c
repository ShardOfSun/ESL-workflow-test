void sum(int vector_a[], int vector_b[], int result[]) {
    for (int i = 0; i < 3; i++) {
        result[i] = vector_a[i] + vector_b[i];
    }

}

void sub(int vector_a[], int vector_b[], int result[]) {
    for (int i = 0; i < 3; i++) {
        result[i] = vector_a[i] - vector_b[i];
    }
}

int dot(int vector_a[], int vector_b[]) {
    int result = 0;

    for (int i = 0; i < 3; i++) {
        result += vector_a[i] * vector_b[i];
    }
    return result;
}

void cross(int vector_a[], int vector_b[], int result[]) {
    result[0] = (vector_a[1] * vector_b[2]) - (vector_a[2] * vector_b[1]);
    result[1] = - (vector_a[0] * vector_b[2]) - (vector_a[2] * vector_b[0]);
    result[2] = (vector_a[0] * vector_b[1]) - (vector_a[1] * vector_b[0]);
}