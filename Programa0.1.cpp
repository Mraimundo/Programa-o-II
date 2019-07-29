#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>
#include <iostream>

// ===============================Declaração das Variaveis clobais===================================//
	int valor,m1,op3,usuario,senha1,n1,op,Servidores,Work,NoBreak,Switch,Storage,Firewall,quant1,quant2,quant3,quant4,quant5,quant6,dias1,dias2,dias3,dias4,dias5,dias6,
	IDcliente,raluguel,pos,ops,codigo;
 	char Rserver[200], Rworks[200], Rbreak[200], Rswit[200], Rfirew[200], Rstora[200];
	char nome[10],senha[10],usuario2[10],senha2[10],r2aluguel[100],caminho[100],idempresa2[200],idempresa[200],IDCLIENTE[200];
	char empresa[20], cnpj[20], tel[11], end[30], cep[8], email[20], idcliente[5]; 

//=============================Função Menu=======================================================//	
void menu(){
	
 system("cls");
		
			printf(" --------------------------------------------------- \n");
			printf("|                   LOCAL-SERVER                    |\n");
			printf(" --------------------------------------------------- \n\n");
			printf("Menu Principal \n\n");
			printf("[1] Novo cadastro de cliente \n");
			printf("[2] Locação de equipamentos \n");
			printf("[3] Relatórios\n");
			printf("[4] Suporte\n");
			printf("[0] Sair \n");
			scanf("%d",&op);	
}
//==================================Função do menuloc==================================================//
void menuloc(){
	system("cls");
			
			printf("              Opcões de Aluguel \n");
			printf("============================================== \n\n");
			printf("[1] Sevidores \n");
			printf("[2] Work station \n");
			printf("[3] No-Break \n");
			printf("[4] Switch \n");
			printf("[5] Firewall \n");
			printf("[6] Storage \n\n");
			printf("[9] Menu principal \n");
			printf("[0] Sair do programa\n\n");
			printf("Digite uma opção:");
			scanf("%d",&op);
	system("cls");
}
//==============================Função cadastros da empresa======================================//	
void cadastroDeCliente(){

			printf("NOVO CADASTRO DE EMPRESA  \n");
			printf("======================== \n\n");
			printf("Qual o nome da empresa:\n");
			gets(empresa);
			printf("CNPJ:\n");
			scanf("%s",&cnpj);
			printf("Telefone:\n");
			scanf("%s",&tel);
			printf("Endereco:\n");
			scanf("%s",&end);
			printf("CEP:\n");
			scanf("%s",&cep);
			printf("Email:\n");
			scanf("%s",&email);
			printf("ID-Cliente:\n");
			scanf("%s",&idcliente);
			printf("Salvar e criar codigo de cliente:\n \n [1]sim  \n [2]nao\n");
			scanf("%d",&codigo);
			
switch (codigo){
		case 1:{
		// Criar novo cliente no TXT			
			FILE *nempresa;
			nempresa=fopen(".\\dba\\clientes\\empresas.txt","a+");
			fprintf(nempresa,"\n Nome da empresa: %s. \n CNPJ: %s. \n Telefone: %s. \n Endereço: %s. \n CEP: %s. \n Email: %s. \n idcliente %s.",empresa,cnpj,tel,end,cep,email,idcliente);
			fclose(nempresa);
					 
			FILE *idcliente3;
			idcliente3=fopen(".\\dba\\clientes\\idcliente.txt","a+");
			fprintf(idcliente3,"\n%s %s",idcliente,empresa);
			fclose(idcliente3);
					
			break;
}
				     
		case 2:{
			menu();
}    
}
				
		if(codigo==1)
		{
		printf("salvar e criar txt");
		}
		if(codigo==2)
		{
		printf("\n");	
		}
	system("cls");

}
//==============================Fim da função cadastro da empresa===============================//

	
	int main() 
	{
	setlocale(LC_ALL,"portuguese"); // bibliotéca de linguagem
		
updown:
		
		system("cls");
		
		printf(" \n");
		printf("  --------------------------------------------------- \n");
		printf(" |            Seja bem vindo ao LOCAL-SERVER         |\n");
		printf("  --------------------------------------------------- \n");
		printf("                 faça seu login abaixo !!! \n\n\n\n");
		printf("Usuário: \n");
		scanf("%s",&nome);
		printf("Senha:\n");
		scanf("%s",&senha);
			
        FILE *usuariosenha;
        usuariosenha=fopen(".\\dba\\usuario do sistema\\userpass.txt", "r");
        if(usuariosenha==NULL){
		printf("Arquino não encontrado");
}

        while((fscanf(usuariosenha,"%s%s",&usuario2,&senha2)) !=EOF){
        usuario=strcmp(nome,usuario2);
        senha1=strcmp(senha,senha2);
        if(usuario==0 && senha1==0){
        system("cls");
		
		printf(" --------------------------------------------------- \n");
		printf("|                     BEM VINDO                     |\n",nome);
		printf(" --------------------------------------------------- \n");
		printf(" \n");
		printf("Senhor(a) %s Precione [1] e ENTER para continuar !!! \n",nome);
		scanf("%d",&op);
	    system("cls");
	
       while(op==1){
       fflush(stdin); // ---------------serve para limpar o registrador---------------
       system("cls");

switch (op){
	
		case 1 :
//==========================locação de equipamentos========================
  		case 2 :
		menuequip: //---------------Voltar para menu de locacao de equipamentos-------------------
		
       while(op>0){ //================parte final ajustar e arrumar=============
       system("cls");
			
		printf("          Locação de equipamentos: \n");
		printf("============================================== \n\n");
		printf("      Lista de ID-Clientes registrados \n");
			
			//==========Verificação de cleintes no diretorio para acessar menu de locação===========
        FILE * IDCLIENTES;
        IDCLIENTES=fopen (".\\dba\\clientes\\idcliente.txt","r");
        if (IDCLIENTES==NULL){
		printf("Id Cliente não exite!");
}

        while(fgets(IDCLIENTE,200,IDCLIENTES)!=NULL){
		printf("        %s \n",IDCLIENTE);
}
        fclose (IDCLIENTES);
			
		printf("\n\nDigite o ID-Cliente:");
		scanf("%s",& idempresa2);
			
        FILE *idcliente;
        idcliente=fopen(".\\dba\\clientes\\idcliente.txt","r");
        if(idcliente==NULL){
		printf("Arquino não encontrado");
}

       while((fscanf(idcliente,"%s",&idempresa)) !=EOF){
       if(IDcliente==0){	
	
			//===============Escolhas dos equipamentos===================
switch (op)
    {
	case 1 :
		printf("Servidores \n\n");
		printf("[1]DELL PowerEdge T130 - Torre \n");
		printf("[2]DELL PowerEdge R230 - Rack \n\n");
		printf("[3]Voltar menu \n");		
		scanf("%d",&m1);

switch (m1)
			{
	case 1 :
					
		printf("Quantidade?");
		scanf("%d",&quant1);
		printf("Quantos dias?");
		scanf("%d",&dias1);
		valor=quant1*(100*dias1);
		printf("valor:R$%d,00",valor);
						
		FILE*server;
		server=fopen(".\\dba\\equipamentos\\servidor.txt","ab+");
		fprintf(server,"\n DELL PowerEdge T130 - Torre. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
		fclose(server);
						
		getch();
		system("cls");
						
		printf("[1] Voltar ao menu principal.\n");
		printf("[2] Voltar ao menu de locações.\n");
		printf("Operador:");
		scanf("%d",&ops);
						
switch (ops){
							
		case 1:{
			menu(); //-------------------chamada da função menu-------------//
}
		case 2:{
			menuloc(); //--------------chamada da fução menuloc------------//
}
}
/*break;*/	
			
		case 2 :
						
		printf("Quantidade?");
		scanf("%d",&quant1);
		printf("Quantos dias?");
		scanf("%d",&dias1);
		valor=quant1*(100*dias1);
		printf("valor:R$%d,00",valor);
					
		FILE *server2;
		server2=fopen(".\\dba\\equipamentos\\servidor.txt","ab+");
		fprintf(server2,"\n DELL PowerEdge R230 - Rack. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
		fclose(server2);
		getch();
		system("cls");
						
		printf("[1] Voltar ao menu principal.\n");
		printf("[2] Voltar ao menu de locações.\n");
		printf("Operador:");
		scanf("%d",&ops);
						
switch (ops){
							
		case 1:{
		menu();
}
							
		case 2:{
		menuloc();
}
}
break;	
		case 3 :
		system ("cls");
		goto menuequip;
break;
}
system("cls");	 
break;
 
		case 2 :
		printf("Workstation \n\n");
		printf("[1] DELL Inspiron 15 3560 - Notebook \n");
		printf("[2] DELL XPS 8930 - Desktop \n");
		printf("[3] Voltar menu \n");
		scanf("%d",&m1);

switch (m1){
		
		case 1 :
				printf("Quantidade?");
				scanf("%d",&quant1);
				printf("Quantos dias?");
				scanf("%d",&dias1);
				valor=quant1*(100*dias1);
				printf("valor:R$%d,00",valor);
					
				FILE*works;
				works=fopen(".\\dba\\equipamentos\\workstation.txt","ab+");
				fprintf(works,"\n DELL Inspiron 15 3560 - Notebook =. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
				fclose(works);
				getch();
				system("cls");
						
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de locações.\n");
				printf("Operador:");
				scanf("%d",&ops);
						
switch (ops){
							
		case 1:{
				menu();
}
							
		case 2:{
				menuloc();
}
}
	break;	
			
		case 2 :
						
				printf("Quantidade?");
				scanf("%d",&quant1);
				printf("Quantos dias?");
				scanf("%d",&dias1);
				valor=quant1*(100*dias1);
				printf("valor:R$%d,00",valor);
						
				FILE *works2;
				works2=fopen(".\\dba\\equipamentos\\workstation.txt","ab+");
				fprintf(works2,"\n DELL XPS 8930 - Desktop =. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
				fclose(works2);
						
				getch();
				system("cls");
						
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de locações.\n");
				printf("Operador:");
				scanf("%d",&ops);
						
switch (ops){
		case 1:{
				menu();
}
							
		case 2:{
				menuloc();
}
}
	break;	
		case 3 :
		system ("cls");
		goto menuequip;
		break;
}

system("cls");	 
break;

		case 3 :
			printf("Nobreak \n\n");
			printf("[1] APC - 600va \n");
			printf("[2] APC - 1500va \n\n");
			printf("[3] Voltar menu \n");
			scanf("%d",&m1);
switch (m1){
		case 1 :
				printf("Quantidade?");
				scanf("%d",&quant1);
				printf("Quantos dias?");
				scanf("%d",&dias1);
				valor=quant1*(100*dias1);
				printf("valor:R$%d,00",valor);
					
				FILE*nobre;
				nobre=fopen(".\\dba\\equipamentos\\nobreak.txt","ab+");
				fprintf(nobre,"\n APC - 600va =. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
				fclose(nobre);
						
				getch();
				system("cls");
						
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de locações.\n");
				printf("Operador:");
				scanf("%d",&ops);
						
switch (ops){
							
		case 1:{
				menu();
}
							
		case 2:{
				menuloc();
}
}
	break;	
			
		case 2 :
						
				printf("Quantidade?");
				scanf("%d",&quant1);
				printf("Quantos dias?");
				scanf("%d",&dias1);
				FILE *nobre2;
				nobre2=fopen(".\\dba\\equipamentos\\nobreak.txt","ab+");
				fprintf(nobre2,"\n APC - 1500va =. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
				fclose(nobre2);
						
				getch();
				system("cls");
						
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de locações.\n");
				printf("Operador:");
				scanf("%d",&ops);
						
switch (ops){
							
		case 1:{
				menu();
}
							
		case 2:{
				menuloc();
}
}
						
	break;	
		case 3 :
			    system ("cls");
				goto menuequip;
				break;
}
	system("cls");	 
	break;
 
		case 4 :
				printf("Switch \n\n");
				printf("[1] DELL - Swicth N1524 - 24p Gigabit \n");
				printf("[2] DELL - Swicth N2048 - 48p Gigabit \n\n");
				printf("[3] Voltar menu \n");
				scanf("%d",&m1);
switch (m1){
		case 1 :
				printf("Quantidade?");
				scanf("%d",&quant1);
				printf("Quantos dias?");
				scanf("%d",&dias1);
				valor=quant1*(100*dias1);
				printf("valor:R$%d,00",valor);
						
				FILE*switc;
				switc=fopen(".\\dba\\equipamentos\\switch.txt","ab+");
				fprintf(switc,"\n DELL - Swicth N1524 - 24p Gigabit =. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
				fclose(switc);
				getch();
				system("cls");
						
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de locações.\n");
				printf("Operador:");
				scanf("%d",&ops);
						
switch (ops){
							
		case 1:{
				menu();
}
		case 2:{
				menuloc();
}
}
	break;	
			
		case 2 :
				printf("Quantidade?");
				scanf("%d",&quant1);
				printf("Quantos dias?");
				scanf("%d",&dias1);
				valor=quant1*(100*dias1);
				printf("valor:R$%d,00",valor);
					
				FILE *switch2;
				switch2=fopen(".\\dba\\equipamentos\\switch.txt","ab+");
				fprintf(switch2,"\n DELL - Swicth N2048 - 48p Gigabit =. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
				fclose(switch2);
				getch();
				system("cls");
						
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de locações.\n");
				printf("Operador:");
				scanf("%d",&ops);
						
switch (ops){
		
		case 1:{
				menu();
}
							
		case 2:{
				menuloc();
}
}
						
	break;	
		case 3 :
				system ("cls");
				goto menuequip;
				break;
}
		system("cls");	 
		break;

		case 5 :
			   printf("Firewall \n\n");	
			   printf("[1] Cisco Asa5506-X \n");
			   printf("[2] CIsco Asa5512-K8 \n\n");
			   printf("[3] Voltar menu \n");		
			   scanf("%d",&m1);
switch (m1){
		case 1 :
				printf("Quantidade?");
				scanf("%d",&quant1);
				printf("Quantos dias?");
				scanf("%d",&dias1);
				valor=quant1*(100*dias1);
				printf("valor:R$%d,00",valor);
						
				FILE*server;
				server=fopen(".\\dba\\equipamentos\\firewall.txt","ab+");
				fprintf(server,"\n Cisco Asa5506-X. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
				fclose(server);
				getch();
				system("cls");
						
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de locações.\n");
				printf("Operador:");
				scanf("%d",&ops);
						
switch (ops){
							
		case 1:{
				menu();
}
							
		case 2:{
				menuloc();
}
}
	break;	
			
		case 2 :
				printf("Quantidade?");
				scanf("%d",&quant1);
				printf("Quantos dias?");
				scanf("%d",&dias1);
				valor=quant1*(100*dias1);
				printf("valor:R$%d,00",valor);
					
				FILE *server2;
				server2=fopen(".\\dba\\equipamentos\\firewall.txt","ab+");
				fprintf(server2,"\n CIsco Asa5512-K8. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
				fclose(server2);
						
				getch();
				system("cls");
						
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de locações.\n");
				printf("Operador:");
				scanf("%d",&ops);
						
switch (ops){
							
		case 1:{
				menu();
}
							
		case 2:{
				menuloc();
}
}
	break;	
		case 3 :
				system ("cls");
				goto menuequip;
				break;
}
	system("cls");	 
	break;

		case 6 :
			    printf("Storage \n\n");
			    printf("[1] Iomega StorCenter IX2 - 6TB \n");
			    printf("[2] Nas Qnap TS-1253U - 60TB \n\n");			
			    printf("[3] Voltar menu \n");		
			    scanf("%d",&m1);
switch (m1){
		case 1 :
				printf("Quantidade?");
				scanf("%d",&quant1);
				printf("Quantos dias?");
				scanf("%d",&dias1);
				valor=quant1*(100*dias1);
				printf("valor:R$%d,00",valor);
						
				FILE*server;
				server=fopen(".\\dba\\equipamentos\\storage.txt","ab+");
				fprintf(server,"\n Iomega StorCenter IX2 - 6TB. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
				fclose(server);
						
				getch();
				system("cls");
						
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de locações.\n");
				printf("Operador:");
				scanf("%d",&ops);
						
switch (ops){
		case 1:{
				menu();
}
							
		case 2:{
				menuloc();
}
}
	break;	
			
		case 2 :
				printf("Quantidade?");
				scanf("%d",&quant1);
				printf("Quantos dias?");
				scanf("%d",&dias1);
				valor=quant1*(100*dias1);
				printf("valor:R$%d,00",valor);
					
				FILE *server2;
				server2=fopen(".\\dba\\equipamentos\\storage.txt","ab+");
				fprintf(server2,"\n Nas Qnap TS-1253U - 60TB. \n Quantidade:%d. \n quantos dias:%d. \n valor:R$%d,00\n ",quant1, dias1,valor);
				fclose(server2);
				getch();
				system("cls");
						
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de locações.\n");
				printf("Operador:");
				scanf("%d",&ops);
						
switch (ops){
		case 1:{
				menu();
}
		case 2:{
				menuloc();
}
}
	break;	
		case 3 :
		system ("cls");
		goto menuequip;
		break;
}
	system("cls");	 
	break;
		case 9 :{
		         menu();
}

		case 0 :
			    printf ("\n");
			    printf ("\n");
	break;
	default :
           printf ("Valor invalido!\n");
}
}
}
	fclose(idcliente);
}


//========================colocar resto============================ 
    break;

//=====================Relatórios para abrir TXT=============================  
		case 3:
		       menurelat: //================ Opcao para voltar para menu principal==============
		       system("cls");
		    
			   printf("==================== \n\n");
	           printf("    Relatório\n");
			   printf("==================== \n\n");
			   printf("[1] Consulta de Alugues \n");
			   printf("[2] Meus clientes \n");
			   printf("[3] Meus equipamentos \n\n");
			   printf("[9] Menu principal \n");
			   scanf("%d",&op3);
			
switch (op3){
				    
		case 1:	
			system ("cls");
			   
		    printf("[1] Servidores \n");
			printf("[2] Work station \n");
			printf("[3] No-Break \n");
			printf("[4] Switch \n");
			printf("[5] Firewall \n");
			printf("[6] Storage \n\n");	
			printf("[9] Voltar para Relatórios \n\n");
		    printf("Escolha uma opção:");
		    scanf("%d",&raluguel);
		    
switch(raluguel){
		case 1:{
				system("cls");
						    	 	
				FILE *Rservidores ;
				Rservidores=fopen (".\\dba\\equipamentos\\servidor.txt","r");
				if (Rservidores==NULL){
				printf("Arquivo não encontrado!");
}
				while(fgets(Rserver,200,Rservidores)!=NULL){
				printf("%s",Rserver);
}
				fclose (Rservidores);
						    	 	
				getch();
				system("cls");
									
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de relatorios.\n");
				printf("Operador:");
				scanf("%d",&ops);
									
switch (ops){
										
		case 1:{
				menu();
}
										
		case 2:{
				goto menurelat;
				break;
}
}
	break;	
}
								 
		case 2:{
								 	
				system("cls");
								 	
				FILE *Rworkstation ;
				Rworkstation=fopen (".\\dba\\equipamentos\\workstation.txt","r");
				if (Rworkstation==NULL){
				printf("Arquivo não encontrado!");
}
				while(fgets(Rworks,200,Rworkstation)!=NULL){
				printf("%s",Rworks);
}
				fclose (Rworkstation);
									
				getch();
				system("cls");
									
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de relatórios.\n");
				printf("Operador:");
				scanf("%d",&ops);
									
switch (ops){
										
		case 1:{
				menu();
}
										
		case 2:{
				goto menurelat;
				break;
}
}
	break;
}	
						    	
		case 3:{
						    		
				system("cls");
						    			
				FILE *Rnobreak ;
				Rnobreak=fopen (".\\dba\\equipamentos\\nobreak.txt","r");
				if (Rnobreak==NULL){
				printf("Arquivo não encontrado!");
}
				while(fgets(Rbreak,200,Rnobreak)!=NULL){
				printf("%s",Rbreak);
}
				fclose (Rnobreak);
				getch();
				system("cls");
									
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de relatórios.\n");
				printf("Operador:");
				scanf("%d",&ops);
									
switch (ops){
		case 1:{
				menu();
}
		case 2:{
				goto menurelat;
				break;
}
}
	break;						
}
									
		case 4:{
				system("cls");
									
				FILE *Rswitch ;
				Rswitch=fopen (".\\dba\\equipamentos\\switch.txt","r");
				if (Rswitch==NULL){
				printf("Arquivo não encontrado!");
}
				while(fgets(Rswit,200,Rswitch)!=NULL){
				printf("%s",Rswit);
}
				fclose (Rswitch);
									
				getch();
				system("cls");
									
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de relatórios.\n");
				printf("Operador:");
				scanf("%d",&ops);
									
switch (ops){
		case 1:{
				menu();
}
										
		case 2:{
				goto menurelat;
				break;
}
}
	break;
}
		case 5:{
				system("cls");
									
				FILE * Rfirewall ;
				Rfirewall=fopen (".\\dba\\relatorios\\firewall.txt","r");
				if (Rfirewall==NULL){
				printf("Arquivo não encontrado!");
}
				while(fgets(Rfirew,200,Rfirewall)!=NULL){
				printf("%s",Rfirew);
}
				fclose (Rfirewall);
				getch();
				system("cls");
									
				printf("[1] Voltar ao menu principal.\n");
				printf("[2] Voltar ao menu de relatórios.\n");
				printf("Operador:");
				scanf("%d",&ops);
									
switch (ops){
			case 1:{
					menu();
}
			case 2:{
					goto menurelat;
					break;
}
}
	break;
}
			case 6:{
					system("cls");
									
					FILE * Rstorage ;
					Rstorage=fopen (".\\dba\\relatorios\\ARstora.txt","r");
					if (Rstorage==NULL){
					printf("Arquivo não encontrado!");
}
					while(fgets(Rstora,200,Rstorage)!=NULL){
					printf("%s",Rstora);
}
					fclose (Rstorage);
					getch();
					system("cls");
									
					printf("[1]Voltar ao menu principal.\n");
					printf("[2]Voltar ao menu de relatórios.\n");
					printf("Operador:");
					scanf("%d",&ops);
									
switch (ops){
		case 1:{
				menu();
}
		case 2:{
				goto menurelat;
				break;
}
}
	break;
}
		case 9:{
				goto menurelat;
				break;
}
}
	system("cls");	
	break;
							
		case 2:
				system("cls");
				printf("Meus Clientes\n");
				break;	
			
		case 3:
				system("cls");
				printf("Meus Equipamentos\n");
				break;
		case 9:
			menu();
			system("cls");
			break;
			
}
	break;
    
//======================suporte================================== 
		case 4 :
				printf("     Suporte:\n");
			    printf("==================== \n\n");
	            printf("Voce que ajuda? \n");
	            printf("Fale no suporte \n\n");
	            printf("Email:suporte@suporte.com.br \n");
	            printf("tel:1111-1111 \n\n");
	            printf("[9] Menu principal \n");
	            scanf("%d",&op);
	        
switch (op){
	        case 9:{
	        		menu();
}
}
	system("cls");
    break;

       case 0 :
               printf("%s Você finalizou ",nome);
               return 0;
               break;
}
}
			
}
		else{
			
		     printf("Usuario ou senha invalidos");
		     getch();
		     goto updown;
}
		
}
		fclose(usuariosenha);
		cadastroDeCliente();	
}
