func power(x float64, n int) float64 {
	if n == 0 {
		return 1
	} else if n < 0 {
		return 1 / power(x, -n)
	} else {
		return x * power(x, n-1)
	}
}
int main() {
	int base = 8;
	int exponent = 10;
	double result = power(base, exponent);
	return 0;
}
