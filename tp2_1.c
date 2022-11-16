
void printTab(int tab[],int n)
{
    if(n==1)
        printf("%d",tab[0]);
    else
    {
        printTab(tab,n-1);
        printf(" %d",tab[n-1]);
    }
}
