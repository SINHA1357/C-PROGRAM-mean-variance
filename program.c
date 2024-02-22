#include <stdio.h>
#include <math.h>
#define MAXSIZE 10
void main() {
    int i, n;
    float x[MAXSIZE];
    float average, variance, std_deviation, sum = 0, sum1 = 0;

    printf("Enter the value of n:\n");
    scanf("%d", &n);
    printf("Enter %d real numbers:\n", n);

    for(i = 0; i < n; i++){
        scanf("%f", &x[i]);
    }
    for(i = 0; i < n; i++){
        sum = sum + x[i];
    }
    average = sum / (float)n;
    for(i = 0; i < n; i++){
        sum1 = sum1 + pow(x[i] - average, 2);
    }
    variance = sum1 / (float)n;
    std_deviation = sqrt(variance);

    printf("Average of the given numbers:%.2f\n", average);
    printf("Variance of the given numbers:%.2f\n", variance);
    printf("Standard deviation of the given numbers:%.2f\n", std_deviation);
}