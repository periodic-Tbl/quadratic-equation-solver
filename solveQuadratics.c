#include <stdio.h>
#include <math.h>
typedef double w; 
long main () {
    while (1) {
        printf("Enter a, b, c: \n");
        w a, b, c;
        scanf("%lf %lf %lf", &a, &b, &c);
        w d = sqrt(b*b - 4*a*c);
        w x1 = (-1*b + d) / (2*a) ;
        w x2 = (-1*b - d) / (2*a) ;
        if (d*d < 0) {
            printf("NS");
        }
        printf("%lf %lf", x1, x2);
        printf("\n");
    }
}