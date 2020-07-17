#include <stdio.h>

int main()
{
    double R1, P1, R2, P2;
    double A, B;

    scanf("%lf %lf %lf %lf", &R1, &P1, &R2, &P2);

    A = R1 * R2 * cos(P1+P2);
    B = R1 * R2 * sin(P1+P2);
  
    /*Without rounding, only partially accepted
      If B = -0.004，the output is -0.00           */
    if(A < 0 && A > -0.005)
        A = 0;
    if(B < 0 && B > -0.005)
        B = 0;

    printf("%.2lf%+.2lfi", A, B);
  
    return 0;
}
