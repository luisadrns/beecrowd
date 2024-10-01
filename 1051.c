#include <stdio.h>
 
int main() {
 
   double salario;
   scanf("%lf\n",&salario);
   if (salario<=2000.00)
   {
       printf("Isento\n");
   }
   else if (salario>=2000.01 && salario<=3000)
   {
       printf("R$ %.2lf\n",(salario-2000.00)*0.08);
   }
   else if (salario>=3000.01 && salario<=4500)
   {
       printf("R$ %.2lf\n",80+(salario-3000.00)*0.18);
   }
   else
   {
       printf("R$ %.2lf\n",350+(salario-4500.00)*0.28);
   }
 
    return 0;
}
