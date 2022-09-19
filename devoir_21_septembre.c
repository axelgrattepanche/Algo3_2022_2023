#include <stdio.h>
//question 1
/*int main(int argc, char **argv)
{
    int n;

    printf("Entrer la valeur de n :");
    scanf("%d",&n);

    printf("Value of n : %d\n",n);
        printf("Adress of n : %d\n",&n);

        return 0;
}*/

//question 2

/*int main(int argc, char **argv)
{
    char n;
    printf("Entrer un caractere :");
    scanf("%c",&n);

    printf("Value of n : %c\n",n);
        printf("Adress of n : %d\n",&n);

        return 0;
}*/
//question 3

/*
    void invers(int *a,int *b){
    int save = *a;
    * a = *b;
    * b = save;


    }




int main(int argc, char **argv)
{
    int a,b;
    printf("Entrer la valeur de a:");
    scanf("%d",&a);
    printf("Entrer la valeur de b:");
    scanf("%d",&b);

    printf("Value of a : %d\n",a);
    printf("Value of b : %d\n",b);

        invers(&a,&b);

         printf("\nValue of a : %d\n",a);
    printf("Value of b : %d\n",b);

        return 0;
}
*/

//question 3



void minMax(int *a,int *b,int *c,int *min, int *max){

*max = *a;
*min = *a;
if (*max < *b && *b > *c)
    *max = *b;
else if (*max > *c)
    *max = *max;
else
    *max = *c;



 if (*min > *b && *b < *c)
    *min = *b;
else if (*min < *c)
    *min = *min;
else
    *min = *c;




}


int main(int argc, char **argv)
{
    int a,b,c;

    int min = 0;
    int max = 0;

    printf("Entrer la valeur de a:");
        scanf("%d",&a);

        printf("\nEntrer la valeur de b:");
            scanf("%d",&b);

            printf("\nEntrer la valeur de c:");
                scanf("%d",&c);


    printf("\nValue of |a| : %d\n",a);
        printf("\nValue of |b| : %d\n",b);
            printf("\nValue of |c| : %d\n",c);

 minMax(&a,&b,&c,&min,&max);

printf("\nValue of |min| : %d\n",min);

            printf("\nValue of |max| : %d\n",max);

        return 0;
}
















