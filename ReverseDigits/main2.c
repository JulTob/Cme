// with a do - while loop

int main(){
   int number, right_digit;
   printf("Enter your number. \n");
   scanf("%i", &number);
   do {
      right_digit = number % 10;
      printf("%i", right_digit);
      number /= 10n;
      } while (number != 0);
   printf("\n");
   return 0;
   };
