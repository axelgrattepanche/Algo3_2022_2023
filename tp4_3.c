
void afficherClientFichier(FILE *f, Client c)
{
    f=fopen("fich.txt","a+");
    fseek(f, 0, SEEK_SET);
    int id =0;
    char nom[12];
    do
    {
        fscanf(f,"%d %s", &id, &nom);
        printf("l'id  : %d et le nom  %s \n", id, nom);
    } while (!feof(f));

}
