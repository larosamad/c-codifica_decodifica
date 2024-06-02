#include <stdio.h>
#include <string.h>
#define MAX 100

char parola[MAX+1];

void codifica(char *parolaUniversale);
void decodifica(char *parolaUniversale);


int main(void){

    printf("Inserisci una parola ");
    scanf("%s", parola);

    codifica(parola);
    printf("%s\n", parola);


    decodifica(parola);
    printf("%s\n", parola);

return 0;
}

void codifica(char *parolaUniversale){
    int indice;
    int lunghezzaUniversale;
    lunghezzaUniversale=(int)strlen(parolaUniversale);

    for(indice=0; indice<lunghezzaUniversale; indice++){
        if((parolaUniversale[indice]==90)||(parolaUniversale[indice]==122)){
        parolaUniversale[indice]=parolaUniversale[indice]-25;
        } else {
        parolaUniversale[indice]=parolaUniversale[indice]+1;
        }
    }

    return;
}

void decodifica(char *parolaUniversale){
    int indice;
    int lunghezzaUniversale;
    lunghezzaUniversale=(int)strlen(parolaUniversale);

    for(indice=0; indice<lunghezzaUniversale; indice++){
        if((parolaUniversale[indice]==65)||(parolaUniversale[indice]==97)){
        parolaUniversale[indice]=parolaUniversale[indice]+25;
        } else {
        parolaUniversale[indice]=parolaUniversale[indice]-1;
        }
    }
    return;
}

