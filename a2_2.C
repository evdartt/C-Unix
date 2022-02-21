// Evan Dartt
// Assignment 2, #2
// 11-5-2019

#include <stdio.h>
int main(void)
{

 char currency;
 float amount;
  while(1) {
   printf("ATM: Select a button to exchange your currency: \n");
   printf("E-Euros\nP-Pounds Sterling\nA-Australian Dollar\nR-Chinese Renminbi\nL-Turkish Lira\nY-Japanese Yen\nW-South Korean Won\nX-Print All\n#-Reverse Conversion\nQ-Quit\n");
   scanf("%c", &currency);
   printf("Please enter amount between $1.00 and $100.00:\n");
   scanf("%f", &amount);
   
   if (amount < 1.00 || amount > 100.00) {
    printf("Invalid amount\n");

   }else{
    if(currency == 'E' || currency == 'e') {
     printf("Converting %f Dollars to %f Euros\n", amount, amount * .90);
   
    }else if (currency == 'P' || currency == 'p'){
     printf("You have converted %f Dollars to %f Pounds Sterling\n", amount, amount * .78);
   
    }else if (currency == 'A' || currency == 'a'){
     printf("You have converted %f Dollars to %f Australian Dollars\n", amount, amount * 1.45);
   
    }else if (currency == 'R' || currency == 'r'){
     printf("You have converted %f Dollars to %f Chinese Renminbis\n", amount, amount * 7.01);
   
    }else if (currency == 'L' || currency == 'l'){
     printf("You have converted %f Dollars to %f Turkish Lira\n", amount, amount * 5.75);

    }else if (currency == 'Y' || currency == 'y'){
     printf("You have converted &f Dollars to %f Japanese Yen\n", amount, amount * 109.16);

    }else if (currency == 'W' || currency == 'w'){
     printf("You have converted %f Dollars to %f South Korean Won\n", amount, amount * 1156.81);

    }else if (currency == 'X' || currency == 'x'){
     printf("%f Dollars is equal to:\n%f Euros\n%f Pounds Sterling\n%f Australian Dollars\n%f Chinese Renminbis\n%f Turkish Lira\n%f Japanese Yen\n%f South Korean Won\n", amount, amount * .90, amount * .78, amount * 1.45, amount * 7.01, amount * 5.75, amount * 109.16, amount * 1156.81);
			
    }else if (currency == 'Q' || currency == 'q'){
     break;
		
    }else { 
     printf("Please enter a valid input\n"); 
    }
   }
  }
 return 0;
}
