#include <stdio.h>

int main() {
    float weight, height, bmi;
    char* eval;

    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);

    printf("Enter your height in metres: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    if (bmi < 18.5) {
        eval = "underweight";
    } else if (bmi >= 18.5 && bmi <=24.9) {
        eval = "normal";
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        eval = "overweight";
    } else {
        eval = "obese";
    }

    printf("Your BMI is %0.1f. That is within the %s range.\n", bmi, eval);
    
    return 0;
}