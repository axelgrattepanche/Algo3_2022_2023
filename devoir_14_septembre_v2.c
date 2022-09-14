<<<<<<< HEAD
#include <stdio.h>

int max(int va,int vb){
if (va>vb)
    return va;
else
    return vb;
}
int div(int max1, int max2){
int sum;
int resul;
sum = max1 + max2;
resul = sum/2;
}

int main()
{
int n,a,b,i;
int max1,max2;
int resul;

printf("entrer le nombre de calcul");
scanf("%d",&n);

for(i=0;i<n;i++){
        printf("entrer la valeur de a:");
    scanf("%d",&a);

        printf("entrer la valeur de b");
    scanf("%d",&b);
    max1 = max1+ max(a,b);
    max2 = max2+ max(a,b) +5 ;

      printf("max1 = %d\n",max1);

printf("max2 = %d\n",max2);

resul = div(max1,max2);
printf("resul = %d\n",resul);

}
}



   /* printf("entrer la valeur de a :");
        scanf("%d",&a);

            printf("entrer la valeur de b:");
                scanf("%d",&b);

    c = max(a,b);
    printf("max = %d",c);

printf("\n");

    printf("entrer la valeur de a :");
        scanf("%d",&a);
            printf("entrer la valeur de b:");
                scanf("%d",&b);

  d = max(a,b);
    printf("max = %d",d);
        printf("\n");

    moyenne = div(c,d);

    printf("La moyenne est :%d",moyenne);

    return 0;
}
*/

>>>>>>> eef4b0388bc219dd79085c498aefba1d2be4bff4
