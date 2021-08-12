#include <stdio.h>
#include <math.h> // We include a math library

int main()
{
  double a,b; // Here we declare the two numbers we will be doing maths with
  char func; // Char "func" will allow us, and the program, to undertsand what function the user will want, whether it be addition, subraction or division.
  
 printf("For subtraction, use '-', for addition '+', for multiplication 'x' or '*', division ':' or '/', root functions 'v' or 'V', for exponentiation '^' or 'pow'.");
  //We give the user some instructions
  
  while (1) // We enter an indefinite loop
    {
      printf("\n Enter a function: "); // We request the input of a function
         scanf("%lf %c %lf", &a, &func, &b); // Here the user imputs the two numbers and a function symbol
        // On the program's side we specify that it should receive a number, character and another number, at the "adresses" of a, b and func.
    
        if (func == '+') //User chose addition
            printf("%.2lf + %.2lf = %.2lf", a, b , a+b); // We add together the numbers and print the result.
    
  
          else
          {
            printf("Error 0001 - FUNCTION NOT SUPPORTED \n Error 0002 - FUNCTION DOES NOT EXIST \n Error 000U - UKNOWN ERROR \n Error X001300 -  PROGRAM ABORTED");
            // Here we add some error messages (for fun mainly)
            break; // We exist the loop
          }
         }



                   }
