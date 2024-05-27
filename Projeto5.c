#include <stdio.h> // Biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // Biblioteca de aloca��es de espa�o em mem�ria
#include <locale.h> //Biblioteca de aloca��es de texto por região
#include <string.h> //Biblioteca das strings


int registro() //Fun��o respons�vel por cadastrar o usu�rios no sistema
{
	//Inicio da cria��o de vari�veis/strings
	int laco=1;
	int opcao=0;
	char arquivo[12];
	char cpf[12];
	char nome[60];
	char sobrenome[60];
	char cargo[60];
	//Final da cria��o de vari�veis/strings
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informa��es do usu�rio
	scanf("%s", cpf);// %s refere-se a strings
	
	strcpy(arquivo, cpf); //Espelhando as strings, para n�o perguntar novamente
	
		FILE *file;//Cria o arquivo no banco de dados
		file = fopen(arquivo, "w");//Cria o arquivo no banco de dados
		fprintf(file, "CPF: ");
		fprintf(file, cpf);//Salvo o valor da vari�vel
		fclose(file);//Fecha a vari�vel
	
			file = fopen(arquivo, "a");
			fprintf(file, "\n");
			fclose(file);
	
	printf("Digite o nome a ser cadastrado: "); //Coletando unforma��es do usu�rio
	scanf("%s", nome); //%s refere-se a strings
	
		file = fopen(arquivo, "a"); //Entra no arquivo j� existente para registrar uma nova informa��es
		fprintf(file, "Nome: ");
		fprintf(file,nome);//Armazena a string coletada no arquivo
		fclose(file); //Fecha o arquivo 
	
			file = fopen(arquivo, "a");
			fprintf(file, " ");
			fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: "); //Coletando informa��es do usu�rio
	scanf("%s", sobrenome); //%s refere-se a strings
	
		file = fopen(arquivo, "a"); // Entra no arquivo j� existente para registrar uma nova informa��es
		fprintf(file,sobrenome); // Armazena a strinf coletada no arquivo
		fclose(file); //Fecha o arquivo
	
			file = fopen(arquivo, "a");
			fprintf(file, "\n");
			fclose(file);
		
	printf("Digite o cargo a ser cadastrado: "); // Coletando informa��es do usu�rio
	scanf("%s", cargo); //%s refere-se a strings
	
		file = fopen(arquivo, "a"); //Abre o arquivo j� existente para armazenar uma nova informa��o
		fprintf(file, "Cargo: ");
		fprintf(file,cargo); // Armazena a string coletada no arquivo
		fclose(file); // Fecha o arquivo
	
	system("cls");
	
	for(laco=1;laco=1;)
	{
	printf("Deseja adicionar mais um usu�rio?\n");
	printf("\n \t1 - Sim");
	printf("\n \t2 - N�o");
	printf("\n\n\n Op��o: ");
	scanf("%d", &opcao);
	
	system ("cls");
	
		switch(opcao)
		{
			case 1:
			registro();
			break;
			
			case 2:
			return 1;
			break;
			
			default:
			printf("Est� op��o n�o est� disponivel!\n\n");
			system("pause");
			system("cls");
			break;
		}
	}
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese_Brazil");//Definindo linguagem 
	
	//Inicio da cria��o de vari�veis
	int laco=1;
	int opcao=0;
	char cpf[12];
	char conteudo[250];
	//Final da cria��o de vari�veis
	
	printf("Digite o CPF a ser consultado: "); // Coletando a informa��o do usu�rio � ser consultado
	scanf("%s", cpf); // %s refere-se a strings
	
	FILE *file; //Criando um novo arquivo
	file = fopen(cpf, "r"); // Lendo um arquivo j� existente
		if(file == NULL) // Criando uma lógica e cima das informa��es contidas no arquivo
		{
			printf("\nN�o foi poss�vel abrir o arquivo, CPF n�o localizado!");
		}
			else
			{
				printf("\nInforma��es do usu�rio: \n\n");
				while(fgets(conteudo, 250, file) != NULL)
					{
						printf("   %s", conteudo);
					}
			}
	fclose(file);
	
	printf("\n\n");
	system("pause");

	
	system("cls");
	
	for(laco=1;laco=1;)
	{
	printf("Deseja consultar mais um usu�rio?\n");
	printf("\n \t1 - Sim");
	printf("\n \t2 - N�o");
	printf("\n\n\n Op��o: ");
	scanf("%d", &opcao);
	
	system ("cls");
	
		switch(opcao)
		{
			case 1:
			consulta();
			break;
			
			case 2:
			return 1;
			break;
			
			default:
			printf("Est� op��o n�o est� disponivel!\n\n");
			system("pause");
			system("cls");
			break;
		}
	}
	system("pause");
}

int deletar()
{
	setlocale(LC_ALL, "Portuguese_Brazil"); //Definindo linguagem
	//Inicio da cria��o de vari�veis
	int laco=1;
	int opcao=0;
	char cpf[12];
	//Final da cria��o de vari�veis
	printf("Digite o CPF do usu�rio a ser deletado: "); //Coletando informa��es do usu�rio � ser deletado
	scanf("%s", cpf); //%s refere-se a stings

	FILE *file;
	file = fopen(cpf, "r"); //Lendo um arquivo j� existente
		if(file != NULL)
		{
			fclose(file);
			remove(cpf);
			printf("\nUsu�rio deletado!");
		}
			else
			{
				fclose(file);
				printf("\nUsu�rio n�o encontrado");
			}
	fclose(file);
	
	printf("\n\n");
	system("pause");
	
	system("cls");
	
	for(laco=1;laco=1;)
	{
	printf("Deseja deletar mais um usu�rio?\n");
	printf("\n \t1 - Sim");
	printf("\n \t2 - N�o");
	printf("\n\n\n Op��o: ");
	scanf("%d", &opcao);
	
	system ("cls");
	
		switch(opcao)
		{
			case 1:
			deletar();
			break;
			
			case 2:
			return 1;
			break;
			
			default:
			printf("Est� op��o n�o est� disponivel!\n\n");
			system("pause");
			system("cls");
			break;
		}
	}
    		
	system("pause");
}

int main() 
{
	//Inicio da cria��o de variaveis
	int opcao=0;
	int laco=1;
	//Final da cria��o de variaveis
	
	for(laco=1;laco=1;)
	{
	
		system("cls"); // Limpando a tela
		
		setlocale(LC_ALL, "Portuguese_Brazil");//Definindo linguagem
		
		printf("###Cart�rio da EBAC###\n\n");//Inicio do menu
		printf("Escolha a op��o desejada no menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n");
		printf("\n\t4 - Sair do sistema\n\n\n");
		printf("Op��o: ");//Fim do menu
	
		scanf("%d", &opcao);//Armazenando a escolha do unuário
	
		system("cls"); // Limpando a tela
	
		switch(opcao) // Criando os botões
		{
			case 1:
			registro();
			break;
			
			case 2:
			consulta();
			break;
			
			case 3:
			deletar();
			break;
			
			case 4:
            printf("Obrigado por utiliazar o sistema!\n");
            return 0;
            break;
			
			default:
			printf("Esta op��o n�o est� disponivel!\n\n");
			system("pause");
			break;
			
		}//Fim da seleção
		
		
	}
}
