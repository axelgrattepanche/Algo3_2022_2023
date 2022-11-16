
int inf(int *tab, int n, int v)
{
    if (n == 0)
        return 0;
    else
    {
        if (tab[n - 1] < v)
            return 1 + inf(tab, n - 1, v);
        else
            return inf(tab, n - 1, v);
    }
}
