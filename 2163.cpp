#include<iostream>
using namespace std;

int main() {
  int m, n, i = 0 , j = 0;

  cin >> m >> n;

  //cria e preenche a matriz
  int terreno[m][n];
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
        cin >> terreno[m][n];
       }
    }



 //faz a busca pelo sabre
  for( i = 0; i < m; i++){
    for(j = 0; j < n; j++){
       if(terreno[i][j] == 42){
         //linha acima
         if(terreno[i - 1][j] == 7 && terreno[i - 1][j - 1] == 7 && terreno[i - 1][j - 1] == 7){
           //na mesma linha
           if(terreno[i][j - 1] == 7  && terreno[i][j + 1] == 7){
             //na linha abaixo
             if(terreno[i + 1][j - 1] == 7  && terreno[i + 1][j] == 7 && terreno[i + 1][j + 1] == 7){
               cout<< i+1 << j+1<<endl;
               break;
             }
           }
         }
       }
    }
  }

  return 0;
}
