#include <stdio.h>
#include <math.h>

double addition (double n1 , double n2) {
double resultat;
resultat = n1 + n2;
    printf("Voici le résultat : %lf\n", resultat);
    return resultat;
}

double soustraction (double n1, double n2){
    double resultat;
    resultat = n1 - n2;
    printf("Voici le résultat : %lf\n", resultat);
    return resultat;
}

double multiplication (double n1, double n2) {
    double resultat;
    resultat = n1 * n2;
    printf("Voici le résultat : %lf\n", resultat);
    return resultat;
}

double division (double n1, double n2){
    double resultat;
    resultat = n1/n2;
    printf("Voici le résultat : %lf\n", resultat);
    return resultat;
}

double puissace (double n1, double n2){
    double resultat;
    resultat = pow(n1, n2);
    printf("Voici le résultat : %lf\n", resultat);
    return resultat;
}
double racine_carree (double n1){
    double resultat;
    resultat = sqrt(n1);
    printf("Voici le résultat : %lf\n", resultat);
    return resultat;
}
double pourcentage (double n1, double n2){
    double resultat;
    n2 = n2/100;
    resultat = n1 * n2;
    printf("Voici le résultat : %lf \n", resultat);
    return resultat;
}

int main() {
double nombre1;
double nombre2;
int menu;
int operation_en_chaine;
double resultat;

    while (1){
        printf("Veuillez choisir choisir parmi les opérations suivantes : 1. addition, 2. soustraction, 3. multiplication, 4. division, 5. puissance, 6. racine carrée, 7. pourcentage, 8. quitter \n");
        scanf("%d", &menu);
        if (menu == 1) {
            if (operation_en_chaine == 1){
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                addition(resultat, nombre2);
            }
            else if (operation_en_chaine != 1) {
                printf("Veuillez choisir un premier nombre : \n");
                scanf("%lf", &nombre1);
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                resultat = addition(nombre1, nombre2);
            }

        }
        if (menu == 2) {
            if (operation_en_chaine == 1){
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                soustraction(resultat, nombre2);
            } else if (operation_en_chaine != 1) {
                printf("Veuillez choisir un premier nombre : \n");
                scanf("%lf", &nombre1);
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                resultat = soustraction(nombre1, nombre2);
            }

        }
        if (menu == 3) {
            if (operation_en_chaine == 1){
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                multiplication(resultat, nombre2);
            }
            else if (operation_en_chaine != 1) {
                printf("Veuillez choisir un premier nombre : \n");
                scanf("%lf", &nombre1);
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                resultat = multiplication(nombre1, nombre2);
            }

        }
        if (menu == 4) {
            if (operation_en_chaine == 1){
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                if (nombre2 == 0){
                    printf("Vous ne pouvez pas diviser par 0. \n");
                    continue;
                } else{
                    resultat = division(nombre1, nombre2);
                }
                division(resultat, nombre2);
            }
            else if (operation_en_chaine != 1) {
                printf("Veuillez choisir un premier nombre : \n");
                scanf("%lf", &nombre1);
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                if (nombre2 == 0){
                    printf("Vous ne pouvez pas diviser par 0. \n");
                    continue;
                } else{
                    resultat = division(nombre1, nombre2);
                }
            }


        }
        if (menu == 5) {
            if (operation_en_chaine == 1){
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                puissace(resultat, nombre2);
            }
            else if (operation_en_chaine != 1) {
                printf("Veuillez choisir un premier nombre : \n");
                scanf("%lf", &nombre1);
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                resultat = puissace(nombre1, nombre2);
            }


        }
        if (menu == 6) {
            if (operation_en_chaine == 1){
                if (nombre1 < 0) {
                    printf("Vous ne pouvez pas faire la racine carrée d'un nombre négatif. \n");
                    continue;
                } else {
                    racine_carree(resultat);

                }
            }
            else if (operation_en_chaine != 1)  {
                printf("Veuillez choisir un nombre : \n");
                scanf("%lf", &nombre1);
                if (nombre1 < 0) {
                    printf("Vous ne pouvez pas faire la racine carrée d'un nombre négatif. \n");
                    continue;
                } else {
                    resultat = racine_carree(nombre1);
                }
            }

        }
        if (menu == 7) {
            if (operation_en_chaine == 1){
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                pourcentage(resultat, nombre2);
            }
            else if (operation_en_chaine != 1) {
                printf("Veuillez choisir un premier nombre : \n");
                scanf("%lf", &nombre1);
                printf("Veuillez choisir un deuxieme nombre : \n");
                scanf("%lf", &nombre2);
                resultat = pourcentage(nombre1, nombre2);
            }

        }
        if (menu == 8){
            break;
        }
        printf("Voulez vous continuer à faire des opérations avec le résultat que vous avez trouvé : 1. oui, 2. non\n");
        scanf("%d", &operation_en_chaine);
        if (operation_en_chaine == 1){
            continue;
        }
        if (operation_en_chaine == 2) {
            continue;
        }
    }

return 0;
}