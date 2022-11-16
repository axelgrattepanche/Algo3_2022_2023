int recherche(int tab[], int n, int v){
    if(n==0) return -1;
    if(tab[n-1]==v) return n-1;
    return recherche(tab,n-1,v);
}
