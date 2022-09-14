#include <stdio.h>
#include <stdlib.h>
 main(void) {
    float cs, fh;
    printf("Digite uma temperatura: ");
    scanf("%f", &cs);
    fh = 1.8 * cs + 32;
   if(cs >= 30 && cs <=90){
     printf("Temperatura em Celsius %.1f ºC, \nTemperatura em Fahrenheit %.1f ºF" , cs, fh);
   }
   else{
     printf("Temperatura inadequada ao processo");
   }

  
}