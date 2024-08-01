#include <stdio.h> 
#include <stdlib.h>
int main()
{
printf("This is a simple calculator that can perform basic arithmetic
operations.\n\n");
float num1, num2; printf("Enter the 
FIRST number: \n"); 
scanf("%f", &num1); printf("Enter the 
SECOND number: \n"); scanf("%f", 
&num2);
char Action; printf("Choose which action you want to perform 
(+, -, /, *): \n"); scanf(" %c", &Action);
// Notice the space before %c to consume the newline character from the 
previous input
if (Action == '+')
{
float sum;
sum = num1 + num2;
printf("Sum: %f\n", sum);
}
else if (Action == '-')
{
float sub;
sub = num1 - num2;
printf("Subtraction: %f\n", sub);
}
else if (Action == '/')
{ float div;
div = num1 / num2;
printf("Division: %f\n", div);
}
else if (Action == '*')
{
float mult;
mult = num1 * num2;
printf("Multiplication: %f\n", mult);
}
else
{
printf("Invalid action chosen.\n");
}
return 0;
}
