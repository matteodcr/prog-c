 
/*
 * Ces fonctions sont réellement simple, inspirées de concepts mathématiques 
 * que vous connaissez tous. Ce ne sont pas les fonctions les plus marrantes
 * à coder, nous vous l'accordons, mais elles ont l'avantage d'être simples,
 * tout en vous permettant d'appliquer les concepts que vous venez de découvrir.
 */

/**
 * La constante réelle PI
 * Remarquez le caractère "f" à la fin du chiffre indiquant que la valeur 
 * est une valeur réelle pour le type "float" du language de programmation C.
 */
float PI = 3.14159265358979323846f;


/**
 * Conversion d'un angle en degré vers un angle en radians.
 *
 * @param   angle: angle en degré
 * @return  la conversion en radian
 */
float toRadians(float angle) {
    return angle * 0.0175;
}

/**
 * Conversion d'un angle en radians vers un angle en degrée.
 *
 * @param   angle: an angle given in radians
 * @return  the measurement of the given angle in degrees.
 */
float toDegrees(float angle) {
    return angle * 57.296;
}



/**
 * @param n
 * @return la valeur absolue du la valeur entière passée en argument.
 */
int abs(int n) {
    if (n==0){return 0;}
    return (n*n)/n;
}

/**
 * @param n
 * @return la valeur absolue du la valeur réelle passée en argument.
 */
float absf(float n) {
    if (n==0){return 0;}
    return (n*n)/n;
}

/**
 * Compare les deux valeurs passées en argument et retourne la valeur 
 * la plus petite.
 * @param x,y
 */
int min(int x, int y) {
    if (x <= y) return x;
    return y;
}

/**
 * Compare les deux valeurs passées en argument et retourne la valeur 
 * la plus petite.
 * @param x,y
 */
float minf(float x, float y) {
    if (x <= y) return x;
    return y;
}

/**
 * Compare les deux valeurs passées en argument et retourne la valeur 
 * la plus grande.
 * @param x,y
 */
int max(int x, int y) {
    if (x <= y) return y;
    return x;
}

/**
 * Compare les deux valeurs passées en argument et retourne la valeur 
 * la plus grande.
 * @param x,y
 */
float maxf(float x, float y) {
    if (x <= y) return y;
    return x;
}
  
/**
 * Compare les deux valeurs passées en argument.
 * @param x,y
 * @return 0 si les deux valeurs sont égales.
 *         -1 si la première valeur est inférieur à la seconde.
 *         +1 si la première valeur est supérieur à la seconde.
 */
int comp(int x, int y) {
    if (x<y){return -1;}
    if (x>y){return 1;}
    return 0;
}

/**
 * Compare les deux valeurs passées en argument.
 * @param x,y
 * @return 0 si les deux valeurs sont égales.
 *         -1 si la première valeur est inférieur à la seconde.
 *         +1 si la première valeur est supérieur à la seconde.
 */
 int compf(float x, float y) {
    if (x<y){return -1;}
    if (x>y){return 1;}
    return 0;
 }

/**
 * Calcule la fonction factorielle de la valeur entière passée en argument.
 *   n! = n * (n-1) * (n-2) * ... * (n - n + 1)
 * Voir: https://fr.wikipedia.org/wiki/Factorielle  
 * @param n
 * @return !n si la valeur de l'argument "n" est supérieur ou égale à zéro 
 *         -1 si la valeur de l'argument "n" est inférieur à zéro 
 */
int factorial(int n) {
    if (n==0){return 1;}
    return factorial(n-1) * n;
}

/**
 * Calcule le valeur du premier argument élevée à la puissance de la
 * valeur du second argument.
 *  - si la valeur du second argument est zéro, alors le résultat est 1.0
 *  - si la valeur de second argument est 1.0, alors le résultat est la valeur du premier argument.
 * 
 * @param   a   la base.
 * @param   b   l'exposant
 * @return  a à la puissance b
 */
float power(float x, float n) {
    int y = 1;
    int m =1;
    while (m<=n){
        y *= x;
        m++;
    }
    return y;
}
