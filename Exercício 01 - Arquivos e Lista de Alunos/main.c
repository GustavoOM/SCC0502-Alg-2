#include <stdio.h>
#include <string.h>
#include "./TADs/util.h"
#include "./TADs/aluno.h"

int main(){
    char nomeArquivo[10] = "";
    FILE *arquivoDeDados;
    aluno_ST *listaAlunos = NULL;

    strcpy(nomeArquivo,readLine());
    if((arquivoDeDados = fopen(nomeArquivo, "rb+")) == NULL){
        printf("\nErro ao abrir o arquivo de alunos.\n");
        return 0;
    }
    
    fseek(arquivoDeDados,0,SEEK_SET);
    printf("%ld", tamanhoStructAluno);
    //fread(listaAlunos, sizeof(aluno_ST), quantidadeDeRegistros, arquivoDeProdutos);
    fclose(arquivoDeDados);
}