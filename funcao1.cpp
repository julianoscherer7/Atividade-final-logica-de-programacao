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
int controle = 0;
int removerid = -1;
int main () {

    do
    {
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
        cout << "Status: " << endl;
        cin >> status[controle];
    controle ++;

    }
    
  

    if  (menu == 2) {
        for (int i = 0; i < controle; i++)
        if (ID[i] != -1) {   
            
          
        
         
        cout << "ID: " << ID[i] << endl;
        cout << "Titulo: " << Titulo[i] << endl;
        cout << "Descrição: " << Descricao[i] << endl;
        cout << "DataDeVencimento: " << DataDeVencimento[i] << endl;
        cout << "Status: " << status[i] << endl;
        }
    }   
    
    if (menu == 3) {
        cout << "Digite o ID da tarefa que deseja remover: " << endl;
        cin >> removerid;
        for (int i = 0; i < controle; i++) {
            if (ID[i] == removerid) {
                removerid = i;
            } 
            if (removerid != -1) {
                ID[i] = -1;
            }
        }
        
     
      
       
    

       
 }
    }
 while (menu != 0);
 return 0;    
}

    