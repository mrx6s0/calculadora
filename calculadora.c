#include <stdio.h>

int main()

 {

   char operacao;
   float nums1,
         nums2;
    printf("Opertions [+ - * / ]: ");
    scanf("%c",&operacao);

    printf("Type the initial number: ");
    scanf("%f",&nums1);
    printf("Type the final number: ");
    scanf("%f",&nums2);

    switch(operacao)

    {
     case '+':
         printf("%.2f + %.2f = %.2f", nums1, nums2, nums1 + nums2);
         break;

     case '-':
         printf("%.2f - %.2f = %.2f", nums1, nums2, nums1 - nums2);
         break;

     case '*':
         printf("%.2f * %.2f = %.2f", nums1, nums2, nums1 * nums2);
         break;

     case '/':
         printf("%.2f / %.2f = %.2f", nums1, nums2, nums1 / nums2);
         break;

         default:
                 printf("\nwrong way... type somthing else.\n");
                 return 0;

         }



   }
