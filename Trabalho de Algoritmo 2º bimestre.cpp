#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int continuar;

int main () {

	do {
		
	    printf("\n\nTrabalho do Bimestre:");
		printf("\nDigite 1 volume da caixa");
		printf("\nDigite 2 peso da racao");
		printf("\nDigite 3 para saber se pode votar");
		printf("\nDigite 4 para saber os valores dos numeros");
		printf("\nDigite 5 para saber o valor da variavel 1");
		printf("\nDigite 6 para saber a velocidade");
		printf("\nDigite 7 para saber o raio de uma esfera");
		printf("\nDigite 8 para saber o numero maior");
		printf("\nDigite 9 para saber nascimento, ano, idade, mes, semana, dia ");
		printf("\nDigite 10 para saber se os numeros sao diferentes");
		printf("\nDigite 11 para saber se os numeros sao positivos ou negativos");
		printf("\nDigite 12 para saber o valor da multa");
		printf("\nDigite 13 para saber o valor da maca");
		printf("\nDigite 14 o antecessor e sucessor");
		printf("\nDigite 15 para saber se voce tem acesso");
		printf("\nDigite 16 variavel 2");
		printf("\nDigite 17 peso ideal");
		printf("\nDigite 18 poligono");
		printf("\nDigite 19 calculadora");
		printf("\nDigite 20 para acessar a tabuada");
		
		printf("\n\nDigite 0 para sair ");
		scanf("%d",&continuar);
	system("cls");

		switch(continuar) {

			case 1:
				float comprimento, largura, altura, volume;

				printf ("Digite o comprimento da caixa: ");
				scanf ("%f",&comprimento);
				printf ("Digite a largura da caixa: ");
				scanf ("%f",&largura);
				printf ("Digite a altura da caixa: ");
				scanf ("%f",&altura);

				volume = comprimento * largura * altura;

				printf ("O volume da caixa e de: %.2fcm",volume);
                break;
				

			case 2:
				float peso, quant, grama, sobra;

				printf("Digite o peso da racao: ");
				scanf("%f",&peso);
				printf("Digite a quantidade de racao para os gatos (em gramas): ");
				scanf("%f",&quant);

				grama = peso * 1000;

				sobra = grama - (quant*5);

				printf("A quantidade de racao que sobrou no saco depois de 5 dias foi de %.2f",sobra,"gramas");

				break;

			case 3:
				int nas, idade;

				printf ("Digite o ano de nascimento: ");
				scanf ("%d",&nas);

				idade = 2023-nas;
				if (idade > 16)

					printf ("Voce pode votar! %d", idade,"anos");

				else

					printf ("Voce ainda nao pode votar: %d", idade,"anos");

				break;


			case 4:
				int a,b;
				float x;
				printf("Digite o primeiro numero: ");
				scanf("%d",&a);

				printf("Digite o segundo numero: ");
				scanf("%d",&b);




				printf("\n A soma dos valores sao: \n %d ",a+b );
				printf("\n A subtracao dos valores sao: \n %d",a-b);
				printf("\n A multiplicacao dos valores sao: \n %d ",a*b);

				printf("\n A divisao dos valores sao: \n %d ",a/b);

				break;

			case 5:
				int a1, b2, c3;

				printf ("Digite o numero da primeira variavel: ");
				scanf ("%d",&a1);
				printf ("Digite o numero da segunda variavel: ");
				scanf ("%d",&b2);
				printf ("O valor da variavel A e: %d e o valor da variavel B e: %d \n ",a1, b2);

				c3 = a1;
				a1 = b2;
				b2 = c3;

				printf("O valor da variavel A agora e: %d O valor da variavel B agora e: %d \n",a, b);

				break;

			case 6:
				int v, vel;

				printf("Digite a velocidade: ");
				scanf("%d",&v);
				if (v>80) {


					vel = (v-80)*5;
					printf("Voce foi multado, sua multa e de %d\n", vel);
				}

				else {
					printf("\n Voce nao foi multado");
				}

				break;

			case 7:
				float raio, olume, pot ;

				printf ("Digite o raio para saber o volume de uma esfera: ");
				scanf ("%f",&raio);

				pot = pow(raio, 3);

				olume = (4/3) * 3,14159 * pot ;

				printf ("O volume da esfera e: %.2f ", olume);
				break;

			case 8:
				int n1,n2,n3;

				scanf("%d %d %d", &n1, &n2, &n3);
				if(n1>n2)
					if(n1>n3)


						printf("\n O numero maior e %d", n1);
					else
						printf("\n O numero maior e %d", n3);

				else if(n2>n3)
					printf("\n O numero maior e %d", n2);
				else
					printf("\n O numero maior e %d", n3);

				break;

			case 9:
				int nascimento, ano, ida, mes, semana, dia;


				printf ("Digite seu ano de nascimento: ");
				scanf ("%d",&nascimento);

				printf ("Digite o ano atual: ");
				scanf ("%d",&ano);

				ida = ano - nascimento;

				printf ("Sua idade e: %d \n", ida);

				mes = ida * 12;

				printf ("Sua idade em meses e: %d \n", mes);

				semana = mes * 4;

				printf ("Sua idade em semanas e: %d \n", semana);

				dia = semana * 7;

				printf ("Sua idade em dias e: %d \n", dia);



				break;



			case 10:

				float numero, num;

				printf ("Digite um numero: ");
				scanf ("%f",&numero);
				printf ("Digite um numero: ");
				scanf ("%f",&num);

				while (numero == num) {

					printf ("Erro de digitacao!!! Os numeros precisam ser diferentes \n");
					scanf ("%f",&numero);
					printf ("Digite novamente o segundo numero: ");
					scanf ("%f",&num);

					if (numero > num) {
						printf ("Primeiro numero e maior %.2f", numero);
					} else
						printf ("Segundo numero e maior %.2f", num);
				}
				break;

			case 11:
				int numerro ;

				printf("Digite um numero: " );
				scanf("%d", &numerro);

				if (numerro<0) {
					printf("/n Numero negativo/n");
				} else {
					printf("Numero Positivo");

				}
				break;


			case 12:
				int vv, vvel;

				printf("\nDigite a velocidade:");
				scanf("%d",&vv);
				if (vv>80) {

					vvel =(vv-80)*5;
					printf("Voce foi multado, sua multa e de %d\n", vvel);
				} else {
					printf("\nVoce nao foi multado\n\n");
				}

				break;

			case 13:
				int m;
				float r;
				
				printf("Digite o numero das macas: ");
				scanf("%d",&m);
				
				if(m>=12){
					r=m*0.25;
					printf("\n O valor a se pagar e:%2.f",r);
					
				} else {
					r=m*0.30;
					printf("O valor a se pagar e:%2.f\n\n",r);
				}
				break;
				
			case 14:
				int numeero;
				
				printf("Digite um numero: ");
				scanf("%d",&numeero);
				printf("\nO Numero digitado foi: %d ", numeero);
				printf("\nO seu antecessor e: %d ", numeero-1);
				printf("\nO seu sucessor e: %d ", numeero+1);
				
				break;
				
			case 15:
                int senha;
   
               printf("Digite a senha")	;
               scanf("%d",&senha);
  	
               if (senha == 1234){
			   printf("Acesso permitido");
			   }
               
              
               

              else{
			 printf("Acesso negado");
			  }
              
				break;
				
			case 16:
				int d,e,c;
	
        	printf ("Digite um numero: ");
            scanf ("%d",&a);
            printf ("Digite um numero: ");
            scanf ("%d",&b);
            printf ("Digite um numero: ");
            scanf ("%d",&c);

            while (a==b, b==c, a==c){

            printf ("Erro de digitacao! Os numeros tem que ser diferentes: \n");
            printf ("Digite novamente o primeiro numero: ");
            scanf ("%d",&a);
            printf ("Digite novamente o segundo numero: ");
            scanf ("%d",&b);
            printf ("Digite novamente o terceiro numero: ");
            scanf ("%d",&c);
            }

            if (a>b){
		    }
		  
		     
            if (b>c)
		  
            printf ("%d %d %d\n",c, b, a);
      
            else
          
            printf ("%d %d %d\n",a, b, c);

            if (c>b)
		   
		    if (a>c)     
		  
		    printf ("%d %d %d\n",b, c, a);
          
            else
           
            printf ("%d %d %d\n",b, a, c);
          
				
				
				break;
				
			case 17:
				
			float altur, pes, sexo;



         	printf ("Digite a altura da pessoa: ");
         	scanf ("%f",&altura);
	        printf ("Digite o sexo da pessoa (1 para feminino e 2 para masculino) ");
	        scanf ("%f",&sexo);

        	if (sexo == 1){
	    	peso = (62.1 * altura) - 44.7;
	        }
	
	        if (sexo == 2){
		    peso = (72.7 * altura) - 58;
	        }

	        printf ("O peso ideal da pessoa e: %.2f", peso);
	
				break;
				
			case 18:
					int num_lados;
	            float medida_lado, area;


	            printf ("Digite o numero de lados do poligno:");
	            scanf ("%d",&num_lados);
	            printf("Digite a medida do lado (em cm):");
	            scanf ("%f",&medida_lado);

	             if (num_lados == 3){
	        	area = (medida_lado) * (medida_lado) / 2;
	            printf ("Triangulo");
	            printf ("\narea do Triangulo %.2fcm", area );
	            }
	  	


	
	           if (num_lados == 4){
	        	area = (medida_lado )* (medida_lado);
	        	printf ("Quadrado");
	           printf ("\narea Quadrado e: %2.fcm", area);
	 
	          }
		



	
	          if (num_lados == 5){
	        	printf ("\nPentagono");
	          }
		


	         else

		     if (num_lados<3 or num_lados>5)
	         printf ("\nPoligono indeterminado");



		
				break;
				
				case 19:
					
                int nume,nume1,subtracao,multi,div,soma, mod;

                printf("Calculadora basica\n");
                printf("Entre com 2 numeros a serem processados: ");
                scanf("%i%i", &nume, &nume1);

                soma = nume + nume1;
                subtracao  = nume - nume1;
                multi   = nume * nume1;
                div  = nume / nume1;
                mod = nume % nume1;

                printf("soma e: %i\n", soma);
                printf("subtracao e: %i\n", subtracao);
                printf("multiplicacao e: %i \n", multi);
                printf("divisao e: %i \n", div);
                printf("resto da divisao e: %i \n", mod);
                return 0;	
					
				case 20:
				int numer;
				
				printf("Digite um numero:");
				scanf("%d",&numer);
				
				for (int i = 1; i <= 10; i++) {
				
				printf("%d x %d = %d\n", numer, i, numer * i);
					
				}
				
				
				break;	
					
					
					
					
					
		



			 default:
				printf("Sair");
				break;
		      }



	} while (continuar !=0 );

	return 0;
}