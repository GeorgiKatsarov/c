// zad 2:
// da se napishe rekursivna funkciq koqto povdiga na stepen cqlo ili necqlo chislo pri slednite n <stepenta> :
// n = 0 -> 1
// n = pozitivno  = x*x.pow(n-1)
// n = negativno = 1/x.pow(-n)
#include <stdlib.h>

double power(double x, int n) {
    if (n == 0) {
        return 1.0;
    } else if (n > 0) {
        return x * power(x, n - 1);
    } else {
        return 1.0 / power(x, -n);
    }
}