
int dichotomie(Tab t, int v, int debut, int fin )
{   int m;
    if (debut < fin)
    {   m=(debut+fin)/2;
        if (v < t[m]) return dichotomie(t, v, debut, m);
        if (v > t[m]) return dichotomie(t, v, m+1, fin);
    }else{
    return -1;}
    return debut;
}
