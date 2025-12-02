#include <stdio.h>

int main() {
    float height, weight;
    printf("Enter your weight in kgs:");
    scanf("%f",&weight);
    printf("Enter your height in mtrs:");
    scanf("%f",&height);

    float BMI, bmi;
    bmi = weight/height * height;

    printf("BMI Index is : %f", bmi);

    if(bmi <=15){
        printf("Category : starvation");
    }
    else if(bmi >=15.1 && bmi <=17.5){
        printf("Category : Underweight");
    }
    else if(bmi >=17.6 && bmi <=18.5){
        printf("Category : Underweight");
    }
    else if(bmi >=18.6 && bmi <=24.9){
        printf("Category : Ideal");
    }
    else if(bmi >=25 && bmi <=29.9){
        printf("Category : Overweight");
    }
    else if(bmi >=30 && bmi <=38.9){
        printf("Category : obese!!");
    }
    else if(bmi >=40){
        printf("Category : morbidly obese");
    }
    else{
        printf("Invalid BMI, check your input");
        return 0;
    }

}
