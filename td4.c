
#include <stdio.h>

//EXERCICE 1
typedef int Tab[10];

/*typedef int Tab[4];*/
int dicho(Tab t,int c, int g,int d)
{
    int i;
    d=-1;
    for (i=0;i<g;i++)
        if(c == t[i])
            d=(i+1);
    return d;
}
/*int main()
{
    Tab t[]={1,2,3,4};
    printf("%d",dicho(t,3,1,0));
}*/





int Min(int tableau[], int taille){
    int i,j=0;
    for (i = 0;i<taille;i++){ //
        if (tableau[j] > tableau[i+1]) {
            j = i+1;
        }
    }
    return j;
}
void permute(int tableau[],int i, int j){
    int temporaire;
    temporaire = tableau[i];
    tableau[i] = tableau[j];
    tableau[j] = permute ;
}
int affiche_tab(int tableau[], int taille)
{
    int i;
    for(i=0;i<taille;i++)
    {
        printf("%d\n",tableau[i]);
    }
}
/*
//Exercice2
int main()
{
    int t[] = {3,17,9,15,2,7,10,9,8,12};
    printf("%d\n", Min(t,10));
    permute(t,4,0);
    printf("%d\n", Min(t,10));
    affiche_tab(t,13);
    return 0;
}*/



//EXERCICE 3


typedef int Tab[10];
void f(Tab t,int n)
{
    int b=1,j=n,i;
    while(b==1)
    {
        b=0;
        i=0;
        while(i<j)
        {
            if(t[i]>t[i+1])
               {
                   permute(t,i,i+1);
                    b=1;
               }
            i++;
        }
        j--;
    }
}


/*int main()
{
    Tab t[]={3,17,9,15,2,7,10,9,8,12};
    f(t,10);
}*/


//EXERCICE 4

void fusion(Tab t1, int n1, Tab t2, int n2)
{
Tab t[n1+n2];
int i, j, k=0;
for(i=0; i <n1+n2; i++ )
if(t1[i]<t2[j]){
t2[k]=t1[i];
i++;
}
else {
t2[k]=t2[j];
j++;
}
for(i=0 ; i<n1; i++) {t2[k]=t1[i]; k++;}
for(j =0; j<n2; j++ ) {t2[k]=t2[j]; k++;}
}


void triFusion( Tab t, int debut, int fin)
{
    int m;
    if(debut<fin)
    {
        m=(debut+fin)/2;
        triFusion(t,debut,m);
        triFusion(t,m+1,fin);
        fusion(t,debut,m,fin);
    }
}


int main(){
 Tab t[]={3,17,9,15,2,7,10,9,8,12};
int i = 0 ;
 triFusion(t,0,9);
 for(i=0;t[i]<t[9];i++){
    printf("%d",t[i]);
 }
}

