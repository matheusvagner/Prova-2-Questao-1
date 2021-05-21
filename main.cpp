#include <iostream>
#include <string>

using namespace std;

int main() {
  string mensagem, nova_mensagem; 
  int trocas, tamanho;
  char letra, nova_letra, *ponteiro= NULL, *ponteiro_novo = NULL, vet_char[tamanho], vet_novo[tamanho];

  for (int i = 0; i < tamanho; i++){
    vet_char[i] = mensagem[i];
  }

  
  ponteiro = &vet_char[0];
  ponteiro_novo = &vet_novo[0];


  for (int i = 0; i < tamanho; i++){
    if (ponteiro[i] == letra){
      ponteiro_novo[i] = nova_letra;
    }else{
      ponteiro_novo[i] = ponteiro[i];
    }
    cout << ponteiro_novo[i];
    
  }


  


}