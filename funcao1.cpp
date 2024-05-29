#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int menu;
int ID[100];
string Titulo[100];
string Descricao[100];
string DataDeVencimento[100];
string status[100];
int editar;
int controle = 1;
int removerid = -1;
string statusbusca;
string busca;
int main () {

    do {
        cout << "Olá, seja bem vindo ao Gerenciador de Tarefas. Escolha uma função: " << endl;
    cout << "1. Adicione uma tarefa "<< endl;
    cout << "2. Visualize suas tarefas" << endl; 
    cout << "3. Remova uma tarefa "<< endl; 
    cout << "4. Edite uma tarefa" << endl;
    cout << "5. Busque uma tarefa" << endl;
    cout << "6. Filtrar tarefas" << endl;
    cout << "0. Sair" << endl;
    cin >> menu;
     
     if (menu == 1) {
        
        ID[controle] = controle;
        cout << "ID: " << controle << endl;
        cout << "Titulo: " << endl;
        cin >> Titulo[controle];
        cout << "Descrição: " << endl;
        cin >> Descricao[controle];
        cout << "Data De Vencimento: " << endl;
        cin >> DataDeVencimento[controle];
        cout << "Status: (1 - Pendente, 2 - Em Progresso, 3 - Concluída): " << endl;
        cin >> status[controle];
    controle ++;

    }
    
  

    else if (menu == 2) {
        for (int i = 0; i < controle; i++) {
        if (ID[i] != -1)  {
            
          
        
         
        cout << "ID: " << ID[i] << endl;
        cout << "Titulo: " << Titulo[i] << endl;
        cout << "Descrição: " << Descricao[i] << endl;
        cout << "DataDeVencimento: " << DataDeVencimento[i] << endl;
        cout << "Status: " << status[i] << endl;
            }
        } 
    }  
    
    else if (menu == 3) {
        cout << "Digite o ID da tarefa que deseja remover: " << endl;
        cin >> removerid;
        for (int i = 0; i < controle; i++) {
            if (ID[i] == removerid) {        
                ID[i] = -1;
                }
        
            }
        
        }
        else if (menu == 4) {
        cout << "Digite o ID da tarefa que deseja editar: ";
        cin >> editar;

        ID[editar] = editar;
        cout << "ID: " << editar << endl;
        cout << "Titulo: " << endl;
        cin >> Titulo[editar];
        cout << "Descrição: " << endl;
        cin >> Descricao[editar];
        cout << "Data De Vencimento: " << endl;
        cin >> DataDeVencimento[editar];
        cout << "Status: " << endl;
        cin >> status[editar];
        
        }

        else if (menu == 5) {
            cout << "Digite o título da tarefa que deseja buscar: ";
            cin >> busca;
            for (int i = 0; i < controle; i++) {
                if ( busca == Titulo[i]) {
                    cout << "ID: " << ID[i] << endl;
                    cout << "Titulo: " << Titulo[i] << endl;
                    cout << "Descrição: " << Descricao[i] << endl;
                    cout << "DataDeVencimento: " << DataDeVencimento[i] << endl;
                    cout << "Status: " << status[i] << endl;


                }
                
            }
            
        }
        
        else if (menu == 6) {
        cout << "Digite o status das tarefas que deseja filtrar: ";
        cin >> statusbusca;
        
        for (int i = 0; i < controle; i++)
        {
            if (statusbusca == status[i]) {
                status[i] = statusbusca;
                
                 
                 cout << "ID: " << ID[i] << endl;
                    cout << "Titulo: " << Titulo[i] << endl;
                    cout << "Descrição: " << Descricao[i] << endl;
                    cout << "DataDeVencimento: " << DataDeVencimento[i] << endl;
                    cout << "Status: " << status[i] << endl;

            }   

            }
        }
        
        
     
      
       
    

       
 }
    
 while (menu != 0);
 return 0;    
}

    