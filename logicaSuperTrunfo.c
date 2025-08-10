#include <stdio.h>

/* ATIVIDADE SUPER TRUNFO INTERMEDIARIO NIVEM BASICO

NOME: ADEMIR DE ASSIS DA SILVA GONÇALVES JUNIOR CURSO: ENGENHARIA DE SOFTWARE

ESPECIFICADOR UL ARRUMADO
MULTIPLICAÇÃO NO SUPER PODER TROCADO POR ADIÇÃO
ADICIONADO 1000000000.0f no calculo do pib

ctrl c + ctrl v doque é pedido no site SAVA

Comparação de cartas (Atributo: População):
 

Carta 1 - São Paulo (SP): 12.300.000

Carta 2 - Rio de Janeiro (RJ): 6.000.000

Resultado: Carta 1 (São Paulo) venceu!

*/

int main(){
//AQUI FICA AS VARIAVEIS

int ponto_turistico, ponto_turistico_;    
char estado[10], codigo[4], cidade[80], estado_[10], codigo_[4], cidade_[80]; 
float area, pib, area_, pib_, den_pop1, den_pop2, pib_per1, pib_per2,super_poder, super_poder_;
unsigned long int populacao, populacao_;

//AQUI INICIA OS DADOS DA CARTA 1
    
printf("Insira aqui os dados da Carta1\n");

printf("Insira a abreviação do Estado para a sua carta\n");
scanf("%s", estado);

printf("Insira um codigo entre  A01 e A04\n");
scanf("%s", codigo);

printf("Insira o nome da cidade\n");
scanf(" %[^\n]", cidade);

printf("Digite o numero da população\n");
scanf("%lu", &populacao);

printf("Digite a área:\n");
scanf("%f", &area);

printf("PIB:\n");
scanf("%f", &pib);

printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico);

//AQUI INICIA OS DADOS CARTA 2

printf("\n"); //ESTA É UMA QUEBRA DE LINHA

printf("Insira aqui os dados da Carta2\n");

printf("Insira a abreviação do Estado para a sua carta\n");
scanf(" %s",estado_);

printf("Insira um codigo entre  B01 e B04\n");
scanf("%s", codigo_);

printf("Insira o nome da cidade\n");
scanf(" %[^\n]", cidade_);

printf("Digite o numero da população\n");
scanf("%lu", &populacao_);

printf("Digite a área:\n");
scanf("%f", &area_);

printf("PIB:\n");
scanf("%f", &pib_);

printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico_);


//AQUI INICIA O RESULTADO, SERÁ RESULTADO CARTA 1
den_pop1 = (float)(populacao / area);
den_pop2 = (float)(populacao_ / area_);

pib_per1 = (float)((pib * 1000000000.0f) / populacao);
pib_per2 = (float)((pib_ * 1000000000.0f) / populacao_);

super_poder = (float)(populacao + area + pib + ponto_turistico + pib_per1) + (1.0 / den_pop1);// AQUI ESTA O CALCULO DO SUPER PODER 1
super_poder_ = (float)(populacao_ + area_ + pib_ + ponto_turistico_ + pib_per2) + (1.0 / den_pop2);// AQUI ESTA O CALCULO DO SUPER PODER 2

printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("Carta1\n");
printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("Estado:%s\n", estado);
printf("Codigo: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("População: %lu milhões\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB:%.2f R$\n", pib);
printf("Pontos Turisticos:%d\n", ponto_turistico);
printf("Densidade populacional 1: %.2f hab/km²\n", den_pop1);
printf("PIB per capta1: %f R$\n", pib_per1);
printf("Super Poder: %f\n", super_poder);

//AQUI INICIA O RESULTADO CARTA 2

printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("Carta2\n");
printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("Estado:%s\n", estado_);
printf("Codigo: %s\n", codigo_);
printf("Nome da cidade: %s\n", cidade_);
printf("População: %lu milhões\n", populacao_);
printf("Área: %.2f km²\n", area_);
printf("PIB: %.2f R$\n", pib_);
printf("Pontos Turisticos: %d\n", ponto_turistico_);
printf("Densidade populacional 2: %.2f hab/km²\n", den_pop2); 
printf("PIB per capta2: %f R$\n", pib_per2); 
printf("Super Poder: %f\n", super_poder);

// AQUI ESTA A COMPARAÇÃO BOOLEANA SIMPLES
printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("RESULTADO COMPARAÇÃO!\n");
printf("Populacao A > Populacao B: %lu\n", populacao > populacao_);
printf("Area A > Area B: %d\n", area > area_);
printf("Pib A > Pib B: %d\n", pib > pib_);
printf("Pontos turisticos A > Pontos turisticos B: %d\n", ponto_turistico > ponto_turistico_);
printf("Densidade populaciol A < Densidade populacional B: %d\n", den_pop1 < den_pop2);
printf("PIB per capta A > PIB per capta B: %d\n", pib_per1 > pib_per2);
printf("Super Poder A > Super Poder B: %d\n", super_poder > super_poder_);
printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("Atributo escolhido para Vitoria = SUPER PODER\n");

//FUNÇÃO DE COMPARAÇÃO SIMPLES, CRITÉRIO DE DESEMPATE ESCOLHIDO SUPER PODER
if(super_poder > super_poder_){
    printf("CARTA 1 VENCEU!!!");
}else if(super_poder == super_poder_){
    printf("EMPATE!!!");
}else{
    printf("CARTA 2 VENCEU!!!");
}

return 0;
}