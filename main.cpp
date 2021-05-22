#include <iostream>
#include <string>

using namespace std;

int transformador(char *palavra, char *palavra_codificada, char letra, char nova_letra, int tamanho){
  int trocas = 0;
  for (int i = 0; i < tamanho; i++){
    if ((palavra[i] == letra) || (palavra[i] == toupper(letra))){
      palavra_codificada[i] = nova_letra;
      trocas++;
    }else{
      palavra_codificada[i] = palavra[i];
    }
  }
  return trocas;
}

int main() {
  string mensagem, nova_mensagem; 
  int trocas, tamanho, controlador = 1;
  char letra, nova_letra, *ponteiro= NULL, *ponteiro_novo = NULL;

  while (controlador == 1){
    cout << "Digite a mensagem que quer trocar seus caracteres, o caracter a ser substituido, e o caracter substituto" << endl;
    cout << "INPUT:" << endl;
    cin >> mensagem;
    cin >> letra;
    cin >> nova_letra;

    tamanho = mensagem.length();

    char  vet_char[tamanho], vet_novo[tamanho];

    for (int i = 0; i < tamanho; i++){
      vet_char[i] = mensagem[i];
    }

    cout << endl;
    
    ponteiro = &vet_char[0];
    ponteiro_novo = &vet_novo[0];

    trocas = transformador(ponteiro, ponteiro_novo, letra, nova_letra, tamanho);

    cout << "OUTPUT:" << endl;

    cout << mensagem << endl;

    for (int i = 0; i < tamanho; i++){
      cout << vet_novo[i];
    }
    
    cout << endl << trocas << endl;

    cout << "Deseja continuar? 1 para sim, 0 para não" <<endl;
    cin >> controlador;

  }
  return 0;
}