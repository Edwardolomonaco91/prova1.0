 #include <stdio.h>

int main() {
    int età;
    double reddito;
    char garante;

    printf("Inserisci la tua età: ");
    scanf("%d", &eta);

    if (età < 18) {
    printf("Non puoi richiedere un prestito, devi avere almeno 18 anni.\n");
         
    }

    if (età >= 18 && età <= 60) {
    printf("Inserisci il tuo reddito annuo (in euro): ");
    scanf("%lf", & reddito);
     if (reddito >= 25000) {
     printf("Prestito approvato!\n");
        } else {
     printf("Il reddito minimo richiesto è di 25.000 euro. Prestito rifiutato.\n");
        }
    }

    if (eta > 60) {
    printf("Hai un garante (s/n)? ");
    scanf(" %c", &haGarante); 
    if (garante == 's' || garante == 'S') { 
    printf("Prestito approvato!\n");
        } else {
    printf("Il prestito è rifiutato, è necessario un garante.\n");
        }
    }

    return 0;
}

