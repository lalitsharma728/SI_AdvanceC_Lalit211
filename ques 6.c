#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, si, ci;
    printf("Enter Principal amount: ");
    scanf("%f", &principal);
    printf("Enter Rate of interest: ");
    scanf("%f", &rate);
    printf("Enter Time (years): ");
    scanf("%f", &time);

    si = (principal * rate * time) / 100;

    ci = principal * (pow((1 + rate / 100), time)) - principal;

    printf("\nSimple Interest: %.2f", si);
    printf("\nCompound Interest: %.2f\n", ci);

    return 0;
}