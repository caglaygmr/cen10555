#include <stdio.h>

double ort(int a, int b); {
    double x;
	
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    x = (a + b) / 2.0;
    printf("%lf\n", x);
    
    return 0;
}

