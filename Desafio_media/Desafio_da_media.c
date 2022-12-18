//Desafio:
//Seu vizinho, o professor Alberto Ainstem, tem muitas provas para corrigir. Porém, o que ele acha mais difícil é calcular as médias aritméticas para saber a média final dos alunos. Como todos estão ansiosos para concluir o semestre, estão pressionando muito o pobre professor Alberto. Então, como ele sabe das suas habilidades em programação, pediu para que você criasse um programa que calculasse essas médias para ele.

//Entrada:
//A entrada serão três (03) valores inteiros.

//Saída:
//A saída deverá ser a média aritmética desses três valores.

//Instruções:
/// Para ler e escrever dados em C, utilizamos os seguintes métodos da classe Console:  
// - scanf(): lê o(s) dado(s) de Entrada (Inputs) do usuário; 
// - printf(): imprime um texto de Saída (Output) no console;
// - A função getchar() retorna o código ASCII inteiro correspondente ao caractere lido
// - o Return 0 ao final significa que o programa foi executado com sucesso, como pretendia fazer.


//Código:

#include<stdio.h>

int main() {
    float a, b, c, media;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    

    //TODO: Crie as condições necessárias para calcular a média e printar no console o valor dessa média conforme a saída pedida no exercício
    
    //Processamento cálculo
    media = (a + b + c) / 3;
    
    //Leitura da media
    scanf("%f", &media);
    
    //Saída
    printf("Media do aluno = %.1f\n", media);

    getchar();
    return 0;
}