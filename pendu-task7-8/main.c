#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char* random_word(char* file_name){
    FILE* f =  fopen(file_name, "r");
    if (f==NULL){
        printf("Erreur de lecture du fichier : %s", file_name);
        exit(1);
    }

    //On choisis un mot aléatoire dans le fichier donné
    int words_number;
    fscanf(f, "%d", &words_number);
    srand(clock());
    int n = (rand() % words_number) + 2; // on rajoute 2 pour ne pas prendre en compte la ligne 0 et 1.

   //On le recupère
    int end, loop;
    char* str = malloc(sizeof(char) * 20);
    for(end=loop=0; loop<n; ++loop){
        if(0==fgets(str, 20, f)){
            end = 1;
            break;
        }
    }
    //if(!end){printf("Line-%d: %s", n, str);}

    fclose(f);
    return str;
}

void print_word(char str[],int guessed[]){
    int index = 0;
    int length = strlen(str)-1;
    while (index!=length){
        if(guessed[index] == 1){
            printf("%c", str[index]);
        }
        if(guessed[index] == 0){
            printf("_");
        }
        index = index + 1;
    }
}

int end_game(int guessed[], int length){
    for(int i=0; i<length-1; i++){
        if (guessed[i] == 0){
            return 0;
        }
    }
    return 1;
}

int find(char str[], int *guessed, char c, int length){
    int statut = 0;
    for(int i=0; i<length-1; i++){
        if (c == str[i]){
            guessed[i] = 1;
            statut = 1;
        }
    }
    return statut;
}

void print_separator(int trial){
    printf("\033[0;31m");
    printf("-------------{%i/10}-------------\n", trial);
    printf("\033[0;37m");
    return;
}

int main() {
    char* str = random_word("words.txt");

    int length = strlen(str);
    int guessed[length];


    printf("\033[0;32m");
    printf("Jeu du Pendu : vous devez deviner un mot de %i lettres.\n", length);
    printf("\033[0;37m");

    memset(guessed, 0, length*sizeof(guessed[0]));

    int trial = 10;
    char c;

    while(end_game(guessed, length)!=1){
        if (trial == 0){
            printf("Perdu, il ne reste aucun essai");
            return 0;
        }
        print_separator(trial);
        print_word(str, guessed);
        printf("    >>> ");
        scanf(" %c", &c);
        if (find(str, guessed, c, length)==0){
            trial--;
        }
    }


    printf("\033[0;33m");
    printf("Bravo c'est la gagne !\n");
    printf("Le mot était %s.", str);

    return 0;
}
