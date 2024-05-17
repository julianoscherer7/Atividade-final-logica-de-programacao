#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;
int menu;
int ID[1000];
string Titulo[1000];
string Descricao[1000];
string DataDeVencimento[1000];
string status[1000];
int main () {
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
        cout << "ID: ";
        cin >> ID[1000];
        cout << "Titulo: ";
        cin.ignore(); getline(cin, Titulo[1000]);
        cout << "Descrição: " << endl;
        cin.ignore(); getline(cin, Descricao[1000]);
        cout << "Data De Vencimento: " << endl;
        cin.ignore(); getline(cin, DataDeVencimento[1000]);
        cout << "Status: " << endl;
        cin.ignore(); getline(cin, status[1000]);


    }
    return 0;
}   