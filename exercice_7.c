

void rechercherIdMinMax(Tab t, int nbClients, int *iIdMin, int *iIdMax){
    int tempIdMin = t[0].idClient;
    int tempIdMax = t[0].idClient;
    for(int i = 1; i<nbClients; i++){
        if(t[i].idClient < tempIdMin){
            tempIdMin = t[i].idClient;
            *iIdMin = i;
        }
        if(t[i].idClient > tempIdMax){
            tempIdMax = t[i].idClient;
            *iIdMax = i;
        }
    }
    printf("\nL'indice ayant l'id Client minimum : %d\n", *iIdMin);
    printf("L'indice ayant l'id Client maximum : %d\n", *iIdMax);
}



int main(int argc, char *argv[])
{
    Tab t;
    Client c;
    c.idClient = 3;
    strcpy(c.nomClient, "c");

    int *nbClients;
    int nbclient = 0;
    nbClients = &nbclient;

    int *indiceClient;
    int indiceclient = 0;
    indiceClient = &indiceclient;

    int *indiceIdMin;
    int indiceidmin = 0;
    indiceIdMin = &indiceidmin;

    int *indiceIdMax;
    int indiceidmax = 0;
    indiceIdMax = &indiceidmax;

    int nbDoublons;
    saisieClients(t, 4, nbClients);
    afficher(t, nbclient);
    enleverClient(1, "b", t, nbClients);
    modifierNom(t, nbclient, 1);
    afficher(t, nbclient);
    rechercheClient(5, t, nbclient, indiceClient);
    rechercherIdMinMax(t, nbclient, indiceIdMin, indiceIdMax);
    ajouterSansDoublon(c, t, nbClients);
    nbDoublons = afficherDoublons(t, nbclient);
    printf("\nNombre de repetition : %d\n", nbDoublons);
    afficher(t, nbclient);
    enleverClient(1 "b", t, nbClients);
    printf("\n Apres modification \n");
    afficher(t, nbclient);

    nbDoublons = afficherDoublons(t, nbclient);
    printf("\nNombre de client dans le tableau : %d\n", nbclient);
    printf("Nombre de repetitions : %d\n", nbDoublons);
    printf("\n//END\n");
    return 0;
}
