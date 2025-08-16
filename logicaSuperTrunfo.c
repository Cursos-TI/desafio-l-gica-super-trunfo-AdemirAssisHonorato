#include <stdio.h>
#include <string.h>

/* ATIVIDADE SUPER TRUNFO MESTRE

NOME: ADEMIR DE ASSIS DA SILVA GONÇALVES JUNIOR CURSO: ENGENHARIA DE SOFTWARE
  
*/
int main(){
  
//AQUI FICA AS VARIAVEIS

int ponto_turistico, ponto_turistico_,escolha, escolha_, resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;    
char pais[80], cidade[80], pais_[80], cidade_[80]; 
float area, pib, area_, pib_, den_pop1, den_pop2, pib_per1, pib_per2,super_poder, super_poder_;
unsigned long int populacao, populacao_;

//AQUI INICIA OS DADOS DA CARTA 1
    
printf("Insira aqui os dados da Carta1\n");

printf("Insira o nome do Pais para a sua carta\n");
scanf(" %[^\n]", pais);

printf("Insira o nome da Estado\n");
scanf(" %[^\n]", cidade);

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

printf("Insira o nome da Estado\n");
scanf(" %[^\n]", cidade_);

printf("Digite o numero da população\n");
scanf("%lu", &populacao_);

printf("Digite a área:\n");
scanf("%f", &area_);


printf("PIB:\n");
scanf("%f", &pib_);


printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico_);

//Aqui inicia os if para n colocarem valores de 0

if(populacao && populacao_ && area && area_ && pib && pib_ > 0){
   
        den_pop1 = (float)((float)(populacao / area));
        den_pop2 = (float)((float)(populacao_ / area_));

        pib_per1 = (float)((pib * 1000000000.0f) / populacao);
        pib_per2 = (float)((pib_ * 1000000000.0f) / populacao_);

        super_poder = ((float)(populacao + area + pib + ponto_turistico + pib_per1) + (1.0 / den_pop1));
        super_poder_ = ((float)(populacao_ + area_ + pib_ + ponto_turistico_ + pib_per2) + (1.0 / den_pop2));
    
    } else{
    printf("Impossivel calcular valores se um dos valores de População, Área, PIB ou Pontos turisticos forem igual a zero\n");
}

//Aqui inicia o primeiro parametro de comparação escolhida pelo usuario

    printf("\n"); //ESTA É UMA QUEBRA DE LINHA
    printf("Escolha o primeiro parametro para comparação\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB per capta\n");
    printf("7.Super poder\n");
    printf("Escolha uma das opções\n");
    scanf("%d", &escolha);

//Aqui inicia o segundo parametro de comparação escolhido pelo usuario 
switch (escolha){
case 1:

    printf("Agora escolha o segundo parametro de comparação\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB per capta\n");
    printf("7.Super poder\n");
    printf("Escolha uma das opções\n");
    scanf("%d", &escolha_);
    

break;

case 2:

    printf("Agora escolha o segundo parametro de comparação\n");
    printf("1.População\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB per capta\n");
    printf("7.Super poder\n");
    printf("Escolha uma das opções\n");
    scanf("%d", &escolha_);
    
break;

case 3:

    printf("Agora escolha o segundo parametro de comparação\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB per capta\n");
    printf("7.Super poder\n");
    printf("Escolha uma das opções\n");
    scanf("%d", &escolha_);
    
break;

case 4:

    printf("Agora escolha o segundo parametro de comparação\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB per capta\n");
    printf("7.Super poder\n");
    printf("Escolha uma das opções\n");
    scanf("%d", &escolha_);
    
break;

case 5:

    printf("Agora escolha o segundo parametro de comparação\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("6.PIB per capta\n");
    printf("7.Super poder\n");
    printf("Escolha uma das opções\n");
    scanf("%d", &escolha_);
    
break;

case 6:

    printf("Agora escolha o segundo parametro de comparação\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade populacional\n");
    printf("7.Super poder\n");
    printf("Escolha uma das opções\n");
    scanf("%d", &escolha_);
    
break;

case 7:

    printf("Agora escolha o segundo parametro de comparação\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos turisticos\n");
    printf("5.Densidade populacional\n");
    printf("6.PIB per capta\n");
    printf("Escolha uma das opções\n");
    scanf("%d", &escolha_);
    
break;

default:
    printf("Escolha inválida\n");
break;
}

//Comparação lógica

    resultado1 = populacao > populacao_ ? 1 : 0;
    resultado2 = area > area_ ? 1 : 0;
    resultado3 = pib > pib_ ? 1 : 0;
    resultado4 = ponto_turistico > ponto_turistico_ ? 1 : 0;
    resultado5 = den_pop1 < den_pop2 ? 1 : 0;
    resultado6 = pib_per1 > pib_per2 ? 1 : 0;
    resultado7 = super_poder > super_poder_ ? 1 : 0;

// Comparação para resultado 1 e 2

    if(resultado1 && resultado2 == 1){
        printf("Carta1 %s venceu\n", pais);
    } else if(resultado1 != resultado2){
        printf("Empate\n");
    }else{
        printf("Carta2 %s venceu\n", pais_);
    }

// Aqui esta a comparação entre 1 e 2-7 

if(escolha == 1 && escolha_ == 2){

    printf("Parametros escolhidos foram População e Área\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação População\n");
    printf("%lu x %lu\n", populacao, populacao_);
    printf("Comparação Área\n");
    printf("%f x %f\n", area, area_);
    
}else if(escolha == 1 && escolha_ == 3){

    printf("Parametros escolhidos foram População e PIB\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação População\n");
    printf("%lu x %lu\n", populacao, populacao_);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);

}else if(escolha == 1 && escolha_ == 4){

    printf("Parametros escolhidos foram População e Pontos turisticos\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação População\n");
    printf("%lu x %lu\n", populacao, populacao_);
    printf("Comparação Pontos turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);

}else if(escolha == 1 && escolha_ == 5){

    printf("Parametros escolhidos foram População e Densidade populacional\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação População\n");
    printf("%lu x %lu\n", populacao, populacao_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);

    if(resultado1 && resultado5 == 1){
        printf("Carta %s venceu\n", pais);
    } else if(resultado1 != resultado5){
        printf("Empate\n");
    }else{
        printf("Carta %s venceu\n", pais_);
    }

}else if(escolha == 1 && escolha_ == 6){

    printf("Parametros escolhidos foram População e PIB Per Capta\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação População\n");
    printf("%lu x %lu\n", populacao, populacao_);
    printf("Comparação PIB Per Capta\n");
    printf("%f x %f\n", pib_per1, pib_per2);

}else if (escolha == 1 && escolha_ == 7){

    printf("Parametros escolhidos foram População e Super poder\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação População\n");
    printf("%lu x %lu\n", populacao, populacao_);
    printf("Comparação Super poder\n");
    printf("%f x %f\n", super_poder, super_poder_);

}

// Aqui termina a comparação entre 1 e 2-7 

// Aqui inicia a comparação entre 2 e 1,3-6

if(escolha == 2 && escolha_ == 1){

    printf("Parametros escolhidos foram Area e População\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Area\n");
    printf("%f x %f\n", area, area_);
    printf("Comparação População\n");
    printf("%lu x %lu\n", populacao, populacao_);
    
}else if(escolha == 2 && escolha_ == 3){

    printf("Parametros escolhidos foram Area e PIB\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Area\n");
    printf("%f x %f\n", area, area_);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);

}else if(escolha == 2 && escolha_ == 4){

    printf("Parametros escolhidos foram Area e Pontos turisticos\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Area\n");
    printf("%f x %f\n", area, area_);
    printf("Comparação Pontos Turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);

}else if(escolha == 2 && escolha_ == 5){

    printf("Parametros escolhidos foram Area e Densidade populacional\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Area\n");
    printf("%f x %f\n", area, area_);
    printf("Comparação Densidade Populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);

    if(resultado2 && resultado5 == 1){
        printf("Carta %s venceu\n", pais);
    } else if(resultado2 != resultado5){
        printf("Empate\n");
    }else{
        printf("Carta %s venceu\n", pais_);
    }

}else if(escolha == 2 && escolha_ == 6){

    printf("Parametros escolhidos foram Area e PIB Per Capta\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Area\n");
    printf("%f x %f\n", area, area_);
    printf("Comparação PIB Per Capta\n");
    printf("%f x %f\n", pib_per1, pib_per2);

}else if (escolha == 2 && escolha_ == 7){

    printf("Parametros escolhidos foram Area e Super poder\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Area\n");
    printf("%f x %f\n", area, area_);
    printf("Comparação Super poder\n");
    printf("%f x %f\n", super_poder, super_poder_);

}

// Aqui termina a comparação entre 2 e 1,3-6

// Aqui inicia a comparação entre 3 e 1-2 ,4-6

if(escolha == 3 && escolha_ == 1){

    printf("Parametros escolhidos foram PIB e População\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);
    printf("Comparação População\n");
    printf("%lu x %lu\n", populacao, populacao_);
    
}else if(escolha == 3 && escolha_ == 2){

    printf("Parametros escolhidos foram PIB e Area\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);
    printf("Comparação Área\n");
    printf("%f x %f\n", area, area_);

}else if(escolha == 3 && escolha_ == 4){

    printf("Parametros escolhidos foram PIB e Pontos turisticos\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);
    printf("Comparação Pontos turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);

}else if(escolha == 3 && escolha_ == 5){

    printf("Parametros escolhidos foram PIB e Densidade populacional\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);

    if(resultado3 && resultado5 == 1){
        printf("Carta %s venceu\n", pais);
    } else if(resultado3 != resultado5){
        printf("Empate\n");
    }else{
        printf("Carta %s venceu\n", pais_);
    }

}else if(escolha == 3 && escolha_ == 6){

    printf("Parametros escolhidos foram PIB e PIB Per Capta\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);
    printf("Comparação PIB Per Capta\n");
    printf("%f x %f\n", pib_per1, pib_per2);

}else if (escolha == 3 && escolha_ == 7){

    printf("Parametros escolhidos foram PIB e Super poder\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);
    printf("Comparação Super poder\n");
    printf("%f x %f\n", super_poder, super_poder_);

}

// Aqui termina a comparação entre 3 e 1,2 e 4-7

// Aqui inicia a comparação entre 4 e 1-3 ,5-7

if(escolha == 4 && escolha_ == 1){

    printf("Parametros escolhidos foram Pontos turisticos e População\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Pontos Turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);
    printf("Comparação População\n");
    printf("lu x %lu\n", populacao, populacao_);
    
}else if(escolha == 4 && escolha_ == 2){

    printf("Parametros escolhidos foram Pontos turisticos e Area\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Pontos Turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);
    printf("Comparação Area\n");
    printf("%f x %f\n", area, area_);

}else if(escolha == 4 && escolha_ == 3){

    printf("Parametros escolhidos foram Pontos turisticos e PIB\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Pontos Turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);

}else if(escolha == 4 && escolha_ == 5){

    printf("Parametros escolhidos foram Pontos turisticos e Densidade populacional\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Pontos Turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);

    if(resultado4 && resultado5 == 1){
        printf("Carta %s venceu\n", pais);
    } else if(resultado4 != resultado5){
        printf("Empate\n");
    }else{
        printf("Carta %s venceu\n", pais_);
    }

}else if(escolha == 4 && escolha_ == 6){

    printf("Parametros escolhidos foram Pontos turisticos e PIB Per Capta\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Pontos Turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", pib_per1, pib_per2);

}else if (escolha == 4 && escolha_ == 7){

    printf("Parametros escolhidos foram Pontos turisticos e Densidade populacional\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Pontos Turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", super_poder, super_poder_);

}

// Aqui termina a comparação entre 4 e 1-3 ,5-7

// Aqui inicia a comparação entre 5 e 1-4 ,6-7

if(escolha == 5 && escolha_ == 1){

    printf("Parametros escolhidos foram Densidade populacional e População\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);
    printf("Comparação População\n");
    printf("%lu x %lu\n", populacao, populacao_);
    
}else if(escolha == 5 && escolha_ == 2){

    printf("Parametros escolhidos foram Densidade populacional e Area\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);
    printf("Comparação Área\n");
    printf("%f x %f\n", area, area_);

}else if(escolha == 5 && escolha_ == 3){

    printf("Parametros escolhidos foram Densidade populacional e PIB\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);

}else if(escolha == 5 && escolha_ == 4){

    printf("Parametros escolhidos foram Densidade populacional e Pontos turisticos\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);
    printf("Comparação Pontos turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);

    if(resultado5 && resultado4 == 1){
        printf("Carta %s venceu\n", pais);
    } else if(resultado5 != resultado4){
        printf("Empate\n");
    }else{
        printf("Carta %s venceu\n", pais_);
    }

}else if(escolha == 5 && escolha_ == 6){

    printf("Parametros escolhidos foram Densidade populacional e PIB Per Capta\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);
    printf("Comparação Pib Per Capta\n");
    printf("%f x %f\n", pib_per1, pib_per2);

}else if (escolha == 5 && escolha_ == 7){

    printf("Parametros escolhidos foram Densidade populacional e Super poder\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);
    printf("Comparação Super poder\n");
    printf("%f x %f\n", super_poder, super_poder_);

}

// Aqui termina a comparação entre 5 e 1-4 ,6-7

// Aqui inicia a comparação entre 6 e 1-5 , 7

if(escolha == 6 && escolha_ == 1){

    printf("Parametros escolhidos foram PIB Per Capta e População\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB Per Capta\n");
    printf("%f x %f\n", pib_per1, pib_per2);
    printf("Comparação População\n");
    printf("%lu x %lu\n", populacao, populacao_);
    
}else if(escolha == 6 && escolha_ == 2){

    printf("Parametros escolhidos foram PIB Per Capta e Area\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB Per Capta\n");
    printf("%f x %f\n", pib_per1, pib_per2);
    printf("Comparação Área\n");
    printf("%f x %f\n", area, area_);

}else if(escolha == 6 && escolha_ == 3){

    printf("Parametros escolhidos foram PIB Per Capta e PIB\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB Per Capta\n");
    printf("%f x %f\n", pib_per1, pib_per2);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);

}else if(escolha == 6 && escolha_ == 5){

    printf("Parametros escolhidos foram PIB Per Capta e Densidade populaciona\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB Per Capta\n");
    printf("%f x %f\n", pib_per1, pib_per2);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);

    if(resultado6 && resultado5 == 1){
        printf("Carta %s venceu\n", pais);
    } else if(resultado6 != resultado5){
        printf("Empate\n");
    }else{
        printf("Carta %s venceu\n", pais_);
    }

}else if(escolha == 6 && escolha_ == 4){

    printf("Parametros escolhidos foram PIB Per Capta e Pontos turisticos\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB Per Capta\n");
    printf("%f x %f\n", pib_per1, pib_per2);
    printf("Comparação Pontos turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);

}else if (escolha == 6 && escolha_ == 7){

    printf("Parametros escolhidos foram PIB Per Capta e Super poder\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação PIB Per Capta\n");
    printf("%f x %f\n", pib_per1, pib_per2);
    printf("Comparação Super poder\n");
    printf("%f x %f\n", super_poder, super_poder_);

}

// Aqui termina a comparação entre 6 e 1-5 , 7

// Aqui inicia a comparação entre 7 e 1-6

if(escolha == 7 && escolha_ == 1){

    printf("Parametros escolhidos foram Super poder e População\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Super poder\n");
    printf("%f x %f\n", super_poder, super_poder_);
    printf("Comparação População\n");
    printf("%lu x %lu\n", populacao, populacao_);
    
}else if(escolha == 7 && escolha_ == 2){

    printf("Parametros escolhidos foram Super poder e Area\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Super poder\n");
    printf("%f x %f\n", super_poder, super_poder_);
    printf("Comparação Área\n");
    printf("%f x %f\n", area, area_);

}else if(escolha == 7 && escolha_ == 3){

    printf("Parametros escolhidos foram Super poder e PIB\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Super poder\n");
    printf("%f x %f\n", super_poder, super_poder_);
    printf("Comparação PIB\n");
    printf("%f x %f\n", pib, pib_);

}else if(escolha == 7 && escolha_ == 5){

    printf("Parametros escolhidos foram Super poder e Densidade populacional\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Super poder\n");
    printf("%f x %f\n", super_poder, super_poder_);
    printf("Comparação Densidade populacional\n");
    printf("%f x %f\n", den_pop1, den_pop2);

    if(resultado7 && resultado5 == 1){
        printf("Carta %s venceu", pais);
    } else if(resultado7 != resultado5){
        printf("Empate");
    }else{
        printf("Carta %s venceu", pais_);
    }

}else if(escolha == 7 && escolha_ == 4){

    printf("Parametros escolhidos foram Super poder e Pontos turisticos\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Super poder\n");
    printf("%f x %f\n", super_poder, super_poder_);
    printf("Comparação Pontos turisticos\n");
    printf("%d x %d\n", ponto_turistico, ponto_turistico_);

}else if (escolha == 7 && escolha_ == 6){

    printf("Parametros escolhidos foram Super poder e PIB Per Capta\n");
    printf("Valores Carta %s x Valores Carta %s\n", pais, pais_);
    printf("Comparação Super poder\n");
    printf("%f x %f\n", super_poder, super_poder_);
    printf("Comparação PIB Per Capta\n");
    printf("%f x %f\n", pib_per1, pib_per2);

}

// Aqui termina a comparação entre 7 e 1-6

printf("FIM DO JOGO, OBRIGADO");

return 0;
}