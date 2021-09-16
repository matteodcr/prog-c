#include <stdio.h>

/**
 * @return la longueur de la chaine de caractères, c'est à dire le nombre
 * de caractères qu'elle contient. 
 * Exemple: "" -> length = 0
 *          "abc" -> length = 3
 */
int string_length(char *s) {
    int index = 0;
    while (s[index]!=0){
        index++;
    }
    return index;
}  


/**
 * Copie la second chaîne sur la première.
 * @param s1 est la première chaîne
 * @param s2 est la seconde chaîne
 */
void string_copy(char* s1, char* s2) {
    while (*s2){
        *s1++ = *s2++;
    }
    *s1 = 0;
}

/**
 * Concatène les deux chaînes de caractères, ajoutant la seconde à la fin 
 * de la première.
 * @param s1 est la première chaîne
 * @param s2 est la seconde chaîne
 */
void string_concat(char* s1, char* s2) {
    s1 += string_length(s1);
    while (*s2){
        *s1++ = *s2++;
    }
    *s1 = 0;
}

/**
 * Compare les deux chaînes de caractères
 * @param s1
 * @param s2
 * @return 0 si les deux chaînes sont identiques.
 *         -1 si la chaîne s1 est lexicographiquement inférieur à la chaîne s2
 *         1 si  la chaîne s1 est lexicographiquement supérieur à la chaîne s2
 */
int string_cmp(char *s1, char* s2) {
    int length_s1 = string_length(s1);
    int length_s2 = string_length(s2);

    if (length_s1 < length_s2) {return -1;}
    if (length_s2 < length_s1) {return 1;}
    if (length_s1 == length_s2){return 0;}
    return 0;
}


/**
 * Cherche le caractère donné en argument, dans la chaîne donné en argument,
 * à partir de la position donné (offset).
 */
int string_index_of(char *dst, int offset, char ch) {
    dst += offset;

    int index = 0;
    while(*dst){
        if (*dst++ == ch){
            return offset + index;
        }
        index++;
    }
  return 0;
}

/**
 * Copie une sous-chaîne de la chaîne source dans la chaîne destination.
 * La sous-chaîne est défini par l'index du premier caractères (offset) 
 * et sa longueur (length). 
 * Cette sous-chaîne sera copiée dans la chaîne destination à l'index
 * donné par l'argument "doff".
 * @param dst: la chaîne destination
 * @param doff: l'offset dnas la chaîne destination
 * @param src: la chaîne source
 * @param offset: l'offset de la sous-chaîne à copier.
 * @param length: la loongueur de la sous-chaîne à copier.
 */
void string_substring(char* dst, int doff, char *src, int offset, int length) {
    dst += doff;
    src += offset;

    int index = 0;
    while (index != length){
        dst[index] = src[index];
        index++;
    }
    dst[index] = 0;
}
