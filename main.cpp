#include <iostream>
#include <string>

using namespace std;

int transformador(char *palavra, char *palavra_codificada, char letra, char nova_letra, int tamanho){
  int trocas = 0;
  for (int i = 0; i < tamanho; i++){
    if (palavra[i] == letra){
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
  int trocas, tamanho;
  char letra, nova_letra, *ponteiro= NULL, *ponteiro_novo = NULL;

  cin >> mensagem;
  cin >> letra;
  cin >> nova_letra;

  tamanho = mensagem.length();

  char  vet_char[tamanho], vet_novo[tamanho];

  for (int i = 0; i < tamanho; i++){
    vet_char[i] = mensagem[i];
    cout << vet_char[i];
  }

  cout << endl;
  
  ponteiro = &vet_char[0];
  ponteiro_novo = &vet_novo[0];

  trocas = transformador(ponteiro, ponteiro_novo, letra, nova_letra, tamanho);

  for (int i = 0; i < tamanho; i++){
    cout << vet_novo[i];
  }
  
  cout << endl << trocas << endl;

}