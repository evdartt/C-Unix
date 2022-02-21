//Evan Dartt
//12/3/19
//Assignment 5 part 2

#include <stdio.h>

struct famHistory{
    char heartProblem;
    char bloodPressure;
    char cancer;
};


struct healthProfile{
    char fName[50];
    char lName[50];
    char gender;
    float height;
    float weight;
};

struct DOB{
    int dd,mm,yyyy;
};

int main() {
    struct healthProfile p;
    struct famHistory fm;
    struct DOB dob;
    float bmi;
    int age, maxHeartRate;

    printf("Please enter your information: \n");

    printf("Enter your first name: ");
    scanf("%s", &p.fName);

    printf("Enter your last name: ");
    scanf("%s", &p.lName);

    printf("Gender (m/f): ");
    getchar();
    scanf("%c", &p.gender);

    printf("Enter birth month (01-12): ");
    scanf("%d",&dob.mm);
    printf("Enter day (01-31): ");
    scanf("%d",&dob.dd);
    printf("Enter full year (ex. 1997): ");
    scanf("%d",&dob.yyyy);

    printf("Does your family have a history of heart problems? (y/n) ");
    getchar();
    scanf("%c", &fm.heartProblem);
    printf("Does your family have a history of blood pressure problems? (y/n) ");
    getchar();   
    scanf("%c", &fm.bloodPressure);
    printf("Does your family have a history of cancer? (y/n) ");
    getchar();
    scanf("%c", &fm.cancer);

    printf("\n");

    age = 2019 - dob.yyyy; //simple way to calculate age
    maxHeartRate = 220 - age; //simple way to calculate max heartrate
    printf("Your age is %d.\n", age);
    printf("Your maximum heart rate limit: %d\n", maxHeartRate);
    printf("Your target heart rate range: %.2f - %.2f\n", .55*maxHeartRate,.75*maxHeartRate);

    printf("\n");
    printf("Calculating BMI\n");
    printf("Enter your height in inches: ");
    scanf("%f", &p.height);
    printf("Enter your weight in pounds: ");
    scanf("%f", &p.weight);
    bmi = (p.weight * 703.0) / (p.height * p.height); //bmi formula
    printf("Your BMI is %.2f\n", bmi);

    printf("BMI Value: ");

    if(bmi < 18.5) { 
     printf("Underweight \n");
     } else if(bmi >= 18.5 && bmi < 24.9) { 
      printf("Normal \n");
     } else if(bmi >= 25 && bmi < 29.9) { 
      printf("Overweight \n");
     } else {
      printf("Obese \n");
    }
    printf("\n");

    if(fm.cancer && bmi>=25){
        printf("According to your BMI value, you are advised visit your oncologist.");
    }

    printf("\n");
    return 0;
}
