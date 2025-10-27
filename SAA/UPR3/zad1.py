
# Euclidean algorithm (iterative) for GCD
def gcd(a, b):
	a = abs(a)
	b = abs(b)
	while b != 0:
		temp = b
		b = a % b
		a = temp
	return a

def main():
	purviMasiv = [
		[12, 15, 18, 21, 24],
		[30, 35, 40, 45, 50],
		[60, 70, 80, 90, 100],
		[110, 120, 130, 140, 150],
		[160, 170, 180, 190, 200]
	]
	vtroiMasiv = [0, 0, 0, 0, 0]
	# compute gcd of symmetric pairs purviMasiv[i][i+1] and purviMasiv[i+1][i] for i = 0..3
	for i in range(4):
		a = purviMasiv[i][i + 1]
		b = purviMasiv[i + 1][i]
		vtroiMasiv[i] = gcd(a, b)
	# last element has no symmetric pair, keep as 0
	vtroiMasiv[4] = 0
	for i in range(5):
		print(f"vtroiMasiv[{i}] = {vtroiMasiv[i]}")

if __name__ == "__main__":
	main()