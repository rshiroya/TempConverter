/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include <stdio.h>
#include <conio.h>

            #define LOWER_LIMIT 0
            #define HIGHER_LIMIT 1000

            int main(void) {

                char unit;

                float cel, fahr;
                cel = 0;
                fahr = 0;
                    /* Read in lower, higher limit and step */

                   printf("\n\n------------------------------------");
                   printf("\n1. Convert Celsius to Fahrenheit: ");
                   printf("\n2. convert Fahrenheit to Celsius: ");
                   printf("\n3. Exit");
                   printf("\nPlease select from the following options: ");
                    scanf("%c", &unit);


                    if(unit == '1'){
                        printf("You have chosen the unit Celsius");
                        printf("\nPlease enter the amount of Celsius you want to convert to Fahrenheit: ");
                        scanf("%f", &cel);
                        float f = 0;
                        f = ((9.0/5.0)*cel)+32;
                        printf("After using the formula of conversion and converting given value of celsius to fahrenheit, the value of fahrenheit is: %f", f);
                        main();
                    }
                    else if(unit == '2'){
                        printf("You have chosen the unit Fahrenheit");
                        printf("\nPlease enter the amount of Fahrenheit you want to convert to Celsius: ");
                        scanf("%f", &fahr);
                        float c = 0;
                        c = (5.0*(fahr-32))/9.0;
                        printf("After using the formula of conversion and converting given value of fahrenheit to celsius, the value of celsius is: %f", c);
                        main();
                    }
                    else if(unit == '3'){
                        printf("Thank you for using the program! :) :) Happy to Assist Anytime!");
                    }
                    else
                        {

                        main();

                        }

                    return 0;
                }
