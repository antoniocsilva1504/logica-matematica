#include <stdio.h>
#include <locale.h>

int main(){
  setlocale(LC_ALL, "Portuguese");

  int x, y, quociente, resto;
  printf("Digite o primeiro numero: ");
  scanf("%d", &x);
  printf("Digite o segundo numero: ");
  scanf("%d", &y);
  quociente = x / y;
  resto = x % y;
  printf("Quociente: %d\n", quociente);
  printf("Resto: %d\n", resto);
  return 0;
}