#include <iostream>
#include <string>

using namespace std;

// Função responsável por trocar as caracters, e retorna o numero de trocas feitas.
int transformador(char *palavra, char *palavra_codificada, char caracter, char novo_caracter, int tamanho){
  int trocas = 0;
  for (int i = 0; i < tamanho; i++){
    if ((palavra[i] == caracter) || (palavra[i] == toupper(caracter))){
      palavra_codificada[i] = novo_caracter;
      trocas++;
    }else{
      palavra_codificada[i] = palavra[i];
    }
  }
  return trocas;
}

int main() {
  // Variáveis
  string mensagem; 
  int trocas, tamanho, controlador = 1;
  char caracter, novo_caracter, *ponteiro= NULL, *ponteiro_novo = NULL;

  // Main Loop
  while (controlador == 1){
    //Input do usuário
    cout << "Digite a mensagem que quer trocar seus caracteres, o caracter a ser substituido, e o caracter substituto" << endl;
    cout << "INPUT:" << endl;
    cin >> mensagem;
    cin >> caracter;
    cin >> novo_caracter;

    tamanho = mensagem.length();

    char  vet_char[tamanho], vet_novo[tamanho];

    //Transforma a string em um vetor char
    for (int i = 0; i < tamanho; i++){
      vet_char[i] = mensagem[i];
    }

    cout << endl;
    
    //Associando os ponteiros
    ponteiro = &vet_char[0];
    ponteiro_novo = &vet_novo[0];

    //Chama a função
    trocas = transformador(ponteiro, ponteiro_novo, caracter, novo_caracter, tamanho);

    //Output do código
    cout << "OUTPUT:" << endl;

    cout << mensagem << endl;

    for (int i = 0; i < tamanho; i++){
      cout << vet_novo[i];
    }
    
    cout << endl << trocas << endl;

    cout << "\nDeseja continuar? 1 para sim, 0 para não" <<endl;
    cin >> controlador;

    //Limpa a tela
    cout << "\033[2J\033[1;1H";
  }
  return 0;
}