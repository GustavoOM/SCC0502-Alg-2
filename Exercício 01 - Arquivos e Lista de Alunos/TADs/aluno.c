#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "aluno.h"

struct aluno{
    int numeroUSP;
    char nomeCompleto[50];
    char curso[50];
    float nota;
};

long int tamanhoStructAluno(){
    printf("%ld",sizeof(aluno_ST));
    return sizeof(aluno_ST);
}