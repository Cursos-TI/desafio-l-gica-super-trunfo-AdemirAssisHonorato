#include <stdio.h>
#include <string.h>

/* ATIVIDADE SUPER TRUNFO INTERMEDIARIO NIVEl INTERMEDIARIO

NOME: ADEMIR DE ASSIS DA SILVA GONÇALVES JUNIOR CURSO: ENGENHARIA DE SOFTWARE

***POPULAÇÃO TRANSFORMADO EM FLOAT ANTES DA DIVISÃO PELA AREA
***Adicionado um if caso alguem resolva imaginar q 1000 pessoas moram em uma area de 0m
***Alterado o especificador de resultado simples População > População_ para %d
***Não entendi a parte da limpeza de buffer, como fazer da meneira certa. pf mande para mim em forma de codigo
o professor comentou sobre isso nos videos mas falou que n era pra se preocupar. me mande a solução em forma de codigo para q eu 
possa entender.
***Não achei nenhum populacão no codigo

*/

/*

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\\n' && c != EOF) {}}int main(){   

}
  

*/
int main(){
  
//AQUI FICA AS VARIAVEIS

int ponto_turistico, ponto_turistico_,escolha;    
char pais[80], codigo[4], cidade[80], pais_[80], codigo_[4], cidade_[80]; 
float area, pib, area_, pib_, den_pop1, den_pop2, pib_per1, pib_per2,super_poder, super_poder_;
unsigned long int populacao, populacao_;

//AQUI INICIA OS DADOS DA CARTA 1
    
printf("Insira aqui os dados da Carta1\n");

printf("Insira o nome do Pais para a sua carta\n");
scanf(" %[^\n]", pais);

printf("Insira o nome da cidade\n");
scanf(" %[^\n]", cidade);

/*
printf("Insira um codigo entre  A01 e A04\n");
scanf("%s", codigo);
*/

printf("Digite o numero da população\n");
scanf("%lu", &populacao);


printf("Digite a área:\n");
scanf("%f", &area);


printf("PIB:\n");
scanf("%f", &pib);


printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico);
;

//AQUI INICIA OS DADOS CARTA 2

printf("\n"); //ESTA É UMA QUEBRA DE LINHA

printf("Insira aqui os dados da Carta2\n");

printf("Insira o nome do Pais para a sua carta\n");
scanf(" %[^\n]", pais_);

printf("Insira o nome da cidade\n");
scanf(" %[^\n]", cidade_);

/*printf("Insira um codigo entre  B01 e B04\n");
scanf("%s", codigo_);
*/

printf("Digite o numero da população\n");
scanf("%lu", &populacao_);


printf("Digite a área:\n");
scanf("%f", &area_);


printf("PIB:\n");
scanf("%f", &pib_);


printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico_);

//Aqui inicia a comparação escolhida pelo usuario

printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("QUAL DOS PARAMETROS O USUARIO DESEJA COMPARAR?\n");
printf("1.População\n");
printf("2.Área\n");
printf("3.PIB\n");
printf("4.Pontos turisticos\n");
printf("5.Densidade populacional\n");
printf("6.PIB per capta\n");
printf("7.Super poder\n");
printf("Escolha uma das opções (Entre 1 e 7)\n");
scanf("%d", &escolha);

//Aqui inicia os if para n colocarem valores de 0
if(populacao && populacao_ && area && area_ && pib && pib_ > 0){
   
        den_pop1 = (float)((float)populacao / area);
        den_pop2 = (float)((float)populacao_ / area_);

        pib_per1 = (float)((pib * 1000000000.0f) / populacao);
        pib_per2 = (float)((pib_ * 1000000000.0f) / populacao_);

        super_poder = ((float)(populacao + area + pib + ponto_turistico + pib_per1) + (1.0 / den_pop1));
        super_poder_ = ((float)(populacao_ + area_ + pib_ + ponto_turistico_ + pib_per2) + (1.0 / den_pop2));
    
    } else{
    printf("IMPOSSIVEL CALCULAR VALORES SE DADOS DE POPULAÇÃO, AREA OU PIB FOREM IGUAIS A ZERO.");
}

//aqui inicia a comparação
switch (escolha){

        case 1:
            printf("%s x %s\n", pais, pais_);
            printf("População1 x População2\n");
            printf("%lu x %lu\n", populacao, populacao_);
            if (populacao == populacao_){
                printf("EMPATE");
            }else if (populacao > populacao_){
                printf("CARTA 1 VENCEU");
            }else{
                printf("CARTA 2 VENCEU");
            }
        break;

        case 2:
            printf("%s x %s\n", pais, pais_);
            printf("Area1 x Area2\n");
            printf("%f x %f\n", area, area_);
            if (area == area_){
                printf("EMPATE");
            }else if (area > area_){
                printf("CARTA 1 VENCEU");
            }else{
                printf("CARTA 2 VENCEU");
            }
        break;

        case 3:
            printf("%s x %s\n", pais, pais_);
            printf("PIB1 x PIB2\n");
            printf("%f x %f\n", pib, pib_);
            if (pib == pib_){
                printf("EMPATE");
            }else if (pib > pib_){
                printf("CARTA 1 VENCEU");
            }else{
                printf("CARTA 2 VENCEU");
            }
        break;

        case 4:
            printf("%s x %s\n", pais, pais_);
            printf("Pontos turisticos1 x Pontos turisticos2\n");
            printf("%d x %d\n", ponto_turistico, ponto_turistico_);
            if (ponto_turistico == ponto_turistico_){
                printf("EMPATE");
            }else if (ponto_turistico > ponto_turistico_){
                printf("CARTA 1 VENCEU");
            }else{
                printf("CARTA 2 VENCEU");
            }
        break;
        
        case 5:
            printf("%s x %s\n", pais, pais_);
            printf("Densidade populacional1 x Densidade populacional2\n");
            printf("%f x %f\n", den_pop1, den_pop2);
            if (den_pop1 == den_pop2){
                printf("EMPATE");
            }else if (den_pop1 < den_pop2){
                printf("CARTA 1 VENCEU");
            }else{
                printf("CARTA 2 VENCEU");
            }
        break;

        case 6:
            printf("%s x %s\n", pais, pais_);
            printf("PIB per capta1 x PIB per capta2\n");
            printf("%f x %f\n", pib_per1, pib_per2);
            if (pib_per1 == pib_per2){
                printf("EMPATE");
            }else if (pib_per1 < pib_per2){
                printf("CARTA 1 VENCEU");
            }else{
                printf("CARTA 2 VENCEU");
            }
        break;

        case 7:
            printf("%s x %s\n", pais, pais_);
            printf("Super poder1 x Super poder2\n");
            printf("%f x %f\n", super_poder, super_poder_);
            if (super_poder == super_poder_){
                printf("EMPATE");
            }else if (super_poder > super_poder_){
                printf("CARTA 1 VENCEU");
            }else{
                printf("CARTA 2 VENCEU");
            }
        break;

        default:
            printf("ESCOLHA UM NUMERO APENAS ENTRE 1 E 7");
        break;

}

return 0;

}