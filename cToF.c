/**
 * C program to convert temperature from degree celsius to fahrenheit
 */  
#include <stdio.h>
#include <conio.h>
  
#define LOWER_LIMIT 0
#define HIGHER_LIMIT 1000
  
int
main (void)
{
  
 
float unit;
unit = 0;
  
float cel, fahr;
  
cel = 0;
  
fahr = 0;
   
    /* Option selection based on user preferences */ 

printf ("\n\n------------------------------------");
      
printf ("\n1. Convert Celsius to Fahrenheit: ");
      
printf ("\n2. convert Fahrenheit to Celsius: ");
      
printf ("\n3. Exit");
      
printf ("\nPlease select from the following options: ");
      
scanf ("%f", &unit);
      
 
	/* If user selects option 1 */ 
	if (unit == 1)
	{
	  
printf ("You have chosen the unit Celsius");
	  
printf
	    ("\nPlease enter the amount of Celsius you want to convert to Fahrenheit: ");
	  
scanf ("%f", &cel);
	  
float f = 0;
	  
	    /* celsius to fahrenheit conversion formula */ 
	    f = ((9.0 / 5.0) * cel) + 32;
	  
printf
	    ("After using the formula of conversion and converting given value of celsius to fahrenheit, the value of fahrenheit is: %f",
	     f);
	  
	    // redirects to the main() method
	    
	
}
      
 
	/* If user selects option 2 */ 
	else if (unit == 2)
	{
	  
printf ("You have chosen the unit Fahrenheit");
	  
printf
	    ("\nPlease enter the amount of Fahrenheit you want to convert to Celsius: ");
	  
scanf ("%f", &fahr);
	  
float c = 0;
	  
	    /* fahrenheit to celsius conversion formula */ 
	    c = (5.0 * (fahr - 32)) / 9.0;
	  
printf
	    ("After using the formula of conversion and converting given value of fahrenheit to celsius, the value of celsius is: %f",
	     c);
	  
	    // redirects to the main() method
	    
	
}
      
	/* If user selects option 3 */ 
	else if (unit == 3)
	{
	  
printf("Thank you for using the program! :) :) Happy to Assist Anytime!");
return 0;	
}

    else{
     printf("Please Try again: ");
     unit = 0;
     
     main();
     return 0;
 }

main();
  
return 0;

}


