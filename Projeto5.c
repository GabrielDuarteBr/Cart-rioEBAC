#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocações de espaço em memória
#include <locale.h> //Biblioteca de alocações de texto por regiÃ£o
#include <string.h> //Biblioteca das strings


int registro() //Função responsável por cadastrar o usuários no sistema
{
	//Inicio da criação de variáveis/strings
	int laco=1;
	int opcao=0;
	char arquivo[12];
	char cpf[12];
	char nome[60];
	char sobrenome[60];
	char cargo[60];
	//Final da criação de variáveis/strings
	
	printf("Digite o CPF a ser cadastrado: "); //Coletando informações do usuário
	scanf("%s", cpf);// %s refere-se a strings
	
	strcpy(arquivo, cpf); //Espelhando as strings, para não perguntar novamente
	
		FILE *file;//Cria o arquivo no banco de dados
		file = fopen(arquivo, "w");//Cria o arquivo no banco de dados
		fprintf(file, "CPF: ");
		fprintf(file, cpf);//Salvo o valor da variável
		fclose(file);//Fecha a variável
	
			file = fopen(arquivo, "a");
			fprintf(file, "\n");
			fclose(file);
	
	printf("Digite o nome a ser cadastrado: "); //Coletando unformações do usuário
	scanf("%s", nome); //%s refere-se a strings
	
		file = fopen(arquivo, "a"); //Entra no arquivo já¡ existente para registrar uma nova informações
		fprintf(file, "Nome: ");
		fprintf(file,nome);//Armazena a string coletada no arquivo
		fclose(file); //Fecha o arquivo 
	
			file = fopen(arquivo, "a");
			fprintf(file, " ");
			fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: "); //Coletando informações do usuário
	scanf("%s", sobrenome); //%s refere-se a strings
	
		file = fopen(arquivo, "a"); // Entra no arquivo já¡ existente para registrar uma nova informações
		fprintf(file,sobrenome); // Armazena a strinf coletada no arquivo
		fclose(file); //Fecha o arquivo
	
			file = fopen(arquivo, "a");
			fprintf(file, "\n");
			fclose(file);
		
	printf("Digite o cargo a ser cadastrado: "); // Coletando informações do usuário
	scanf("%s", cargo); //%s refere-se a strings
	
		file = fopen(arquivo, "a"); //Abre o arquivo já¡ existente para armazenar uma nova informação
		fprintf(file, "Cargo: ");
		fprintf(file,cargo); // Armazena a string coletada no arquivo
		fclose(file); // Fecha o arquivo
	
	system("cls");
	
	for(laco=1;laco=1;)
	{
	printf("Deseja adicionar mais um usuário?\n");
	printf("\n \t1 - Sim");
	printf("\n \t2 - Não");
	printf("\n\n\n Opção: ");
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
			printf("Está opção não está disponivel!\n\n");
			system("pause");
			system("cls");
			break;
		}
	}
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese_Brazil");//Definindo linguagem 
	
	//Inicio da criação de variáveis
	int laco=1;
	int opcao=0;
	char cpf[12];
	char conteudo[250];
	//Final da criação de variáveis
	
	printf("Digite o CPF a ser consultado: "); // Coletando a informação do usuário à ser consultado
	scanf("%s", cpf); // %s refere-se a strings
	
	FILE *file; //Criando um novo arquivo
	file = fopen(cpf, "r"); // Lendo um arquivo já¡ existente
		if(file == NULL) // Criando uma lÃ³gica e cima das informações contidas no arquivo
		{
			printf("\nNão foi possível abrir o arquivo, CPF não localizado!");
		}
			else
			{
				printf("\nInformações do usuário: \n\n");
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
	printf("Deseja consultar mais um usuário?\n");
	printf("\n \t1 - Sim");
	printf("\n \t2 - Não");
	printf("\n\n\n Opção: ");
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
			printf("Está opção não está disponivel!\n\n");
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
	//Inicio da criação de variáveis
	int laco=1;
	int opcao=0;
	char cpf[12];
	//Final da criação de variáveis
	printf("Digite o CPF do usuário a ser deletado: "); //Coletando informações do usuário á ser deletado
	scanf("%s", cpf); //%s refere-se a stings

	FILE *file;
	file = fopen(cpf, "r"); //Lendo um arquivo já existente
		if(file != NULL)
		{
			fclose(file);
			remove(cpf);
			printf("\nUsuário deletado!");
		}
			else
			{
				fclose(file);
				printf("\nUsuário não encontrado");
			}
	fclose(file);
	
	printf("\n\n");
	system("pause");
	
	system("cls");
	
	for(laco=1;laco=1;)
	{
	printf("Deseja deletar mais um usuário?\n");
	printf("\n \t1 - Sim");
	printf("\n \t2 - Não");
	printf("\n\n\n Opção: ");
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
			printf("Está opção não está disponivel!\n\n");
			system("pause");
			system("cls");
			break;
		}
	}
    		
	system("pause");
}

int main() 
{
	//Inicio da criação de variaveis
	int opcao=0;
	int laco=1;
	//Final da criação de variaveis
	
	for(laco=1;laco=1;)
	{
	
		system("cls"); // Limpando a tela
		
		setlocale(LC_ALL, "Portuguese_Brazil");//Definindo linguagem
		
		printf("###Cartório da EBAC###\n\n");//Inicio do menu
		printf("Escolha a opção desejada no menu:\n\n");
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes\n");
		printf("\n\t4 - Sair do sistema\n\n\n");
		printf("Opção: ");//Fim do menu
	
		scanf("%d", &opcao);//Armazenando a escolha do unuÃ¡rio
	
		system("cls"); // Limpando a tela
	
		switch(opcao) // Criando os botÃµes
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
			printf("Esta opção não está¡ disponivel!\n\n");
			system("pause");
			break;
			
		}//Fim da seleÃ§Ã£o
		
		
	}
}
