#include <stdio.h>

double ort(int a, int b, int c) {
    double x;
	
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    x = (a + b + c) / 3.0;
    printf("%lf\n", x);
    
    return 0;
}

