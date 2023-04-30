#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

struct timeval t1, t2;
double elapsedTime;

/*para o calculo do tempo*/
unsigned long time_diff(struct timeval a, struct timeval b) {
  struct timeval res;
  timersub(&a, &b, &res);
  return res.tv_sec * 1000000 + res.tv_usec;
}

void FazAlgo(int n) {
  int i, j, k;
  int controle = 0;
  for (i = 1; i < n - 1; i++) {
    for (j = i + 1; j <= n; j++) {
      for (k = 1; k <= j; k++) {
        controle++;
      }
    }
  }
}

void bubble_sort(int arr[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
}

int main(int argc, char **argv) {
  FILE *fp;
  int num, count = 0;
  int *lista = NULL;

  if (argc != 2) {
    printf("Uso: %s <arquivo>\n", argv[0]);
    exit(0);
  }
  fp = fopen(argv[1], "r");
  if (fp == NULL) {
    printf("Não foi possível abrir o arquivo.\n");
    exit(1);
  }

  fscanf(fp, "%d", &num);
  int n = num;  // número total de entradas do arquivo
  fclose(fp);

  gettimeofday(&t1, NULL);
  FazAlgo(n);
  gettimeofday(&t2, NULL);

  printf("\n Tempo de Execucao: ---> %lf \n", time_diff(t2, t1) / 100000.0);

  return 0;
}
