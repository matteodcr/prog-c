/*
 * Vous pouvez ignorer les deux lignes suivantes.
 */
#include <stdint.h>
#include <stdio.h>

int v1 = 2;
/*
 * Notre point d'entrée pour l'exécution.
 * Rappel: l'exécution commence toujours par la fonction main.
 */
void main(void) {
  int8_t v1;
  v1 = 12;
  int8_t* v1_ptr = &v1;
  *v1_ptr = *v1_ptr + 2;

  printf("Hello World! \n");
  return;
}
