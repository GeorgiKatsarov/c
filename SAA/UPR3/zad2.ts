function power(x: number, n: number): number {
    if (n == 0) {
        return 1;
    } else if (n < 0) {
        return 1 / power(x, -n);
    } else {
        return x * power(x, n - 1);
    }
}