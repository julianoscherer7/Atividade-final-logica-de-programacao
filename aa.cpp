#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

// Estrutura para armazenar informações da tarefa
struct Tarefa {
    int id;
    string titulo;
    string descricao;
    string dataVencimento;
    string status;
};

// Função para adicionar uma nova tarefa
void adicionarTarefa(vector<Tarefa>& tarefas) {
    Tarefa novaTarefa;
    cout << "Adicionar Nova Tarefa" << endl;
    cout << "ID da Tarefa: ";
    cin >> novaTarefa.id;
    cin.ignore(); // Limpar o buffer do teclado
    cout << "Título: ";
    getline(cin, novaTarefa.titulo);
    cout << "Descrição: ";
    getline(cin, novaTarefa.descricao);
    cout << "Data de Vencimento: ";
    getline(cin, novaTarefa.dataVencimento);
    cout << "Status (1 - Pendente, 2 - Em Progresso, 3 - Concluída): ";
    int status;
    cin >> status;
    switch(status) {
        case 1:
            novaTarefa.status = "Pendente";
            break;
        case 2:
            novaTarefa.status = "Em Progresso";
            break;
        case 3:
            novaTarefa.status = "Concluída";
            break;
        default:
            novaTarefa.status = "Desconhecido";
            break;
    }
    tarefas.push_back(novaTarefa);
    cout << "Tarefa adicionada com sucesso!" << endl;
}

// Função para exibir todas as tarefas cadastradas
void visualizarTarefas(const vector<Tarefa>& tarefas) {
    cout << "Lista de Tarefas" << endl;
    for(const auto& tarefa : tarefas) {
        cout << "ID: " << tarefa.id << ", Título: " << tarefa.titulo << ", Descrição: " << tarefa.descricao << ", Data de Vencimento: " << tarefa.dataVencimento << ", Status: " << tarefa.status << endl;
    }
}

int main() {
    vector<Tarefa> tarefas;
    int opcao;

    do {
        cout << "\nSistema de Gerenciamento de Tarefas" << endl;
        cout << "1. Adicionar Tarefa" << endl;
        cout << "2. Visualizar Tarefas" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch(opcao) {
            case 1:
                adicionarTarefa(tarefas);
                break;
            case 2:
                visualizarTarefas(tarefas);
                break;
            case 0:
                cout << "Saindo..." << endl;
                break;
            default:
                cout << "Opção inválida. Tente novamente." << endl;
        }
    } while(opcao != 0);

    return 0;
}