#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(int argc, char** argv) {

   if (argc != 3) {
      printf("Usage: %s <principle> <rate>\n", argv[0]);
      return 0;
   }

   const float amount = atof(argv[1]);
   const float rate   = atof(argv[2]);

   const float annual   = amount * (1 + rate);
   const float monthy   = amount * pow(1 + (rate/12), 12);

   const float e = 2.718;

   const float constant = amount * pow(e,rate);

   printf("Annual: $%.2f\n", annual);
   printf("Monthy: $%.2f\n", monthy);
   printf("Constant: $%.2f\n", constant);

   return 0;
}