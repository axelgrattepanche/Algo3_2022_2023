
void affiche_inverse(int tab[], int n)
{
    if(n > 0)
    {
        printf("\n%d \n", tab[n - 1]);
        affiche_inverse(tab, n - 1);
    }
}
