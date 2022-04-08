#include <stdio.h>
int main()
{
    float age,amount,time,FD; // We are taking age, amount,time & FD as float.
    
    printf("Please enter your age = ");
    scanf("%f", & age);
    printf("\nPlease enter your FD amount in Rupees = ");
    scanf("%f", & amount);
    printf("\nPlease enter you FD time duration in days = ");
    scanf("%f", & time);
// We are using if-else statement to get final FD amount for different ranges of time and interest rates.

    if(age>=60)  // If age is greater than equal to 60 following if-else statement under curly brackets will be followed.
    {
        if(time<7)
        FD=(amount);
        else if(time>=7 & time<=45)
        FD=(amount+((amount*6.25)/100)); // We are using a simple formula to calculate final FD amount.
        else if(time>=46 & time<=179)
        FD=(amount+((amount*6.75)/100));
        else if(time>=180 & time<=210)
        FD=(amount+((amount*6.85)/100));
        else if(time>=211 & time<=365)
        FD=(amount+((amount*6.9)/100));
        else if(time>365)
        FD=(amount+((amount*6.9)/100));
    }
    else if(age<60) // If age is less than equal to 60 following if-else statement under curly brackets will be followed.
    {
        if(time<7)
        FD=(amount);
        if(time>=7 & time<=45)
        FD=(amount+((amount*5.75)/100));
        else if(time>=46 & time<=179)
        FD=(amount+((amount*6.25)/100));
        else if(time>=180 & time<=210)
        FD=(amount+((amount*6.35)/100));
        else if(time>=211 & time<=365)
        FD=(amount+((amount*6.4)/100));
        else if(time>365)
        FD=(amount+((amount*6.4)/100));
    }
     printf("\n\nYou will recieve an amount of = %f",FD); // It will print final amount (Principal+Interest)
     printf(" Rupees only\n");
     return 0;
}