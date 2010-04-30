#include "afd.h"

/* Códigos
   
   1 - identificador
   2 - palavra reservada
   3 - número
   4 - SE menor
   5 - SE maior
   6 - SE asterísco (multiplicação)
   7 - SE dois pontos
   8 - SE abre parênteses
   9 - SE barra (divisão)
   10 - SE mais (adição)
   11 - SE menos (subtração)
   12 - SE ponto
   13 - SE ponto e vírgula
   14 - SE vírgula
   15 - SE fecha parênteses
   16 - SE igual
   17 - SE fecha chaves
   18 - SE abre chaves
   19 - SC menor igual
   20 - SC menor maior (diferente)
   21 - SC maior igual
   22 - SC fecha comentário *)
   23 - SC atribuição :=
   24 - SC abre comentário (*
   
      SE = Símbolo Especial
      SC = Símbolo Composto
*/

void AFD::output(int code)
{
         if(code == 1)
         {
                 cout << codeline << " " << buffertoken << " [ID] \n"; //IDENTIFICADOR
                 fout << codeline << " " << buffertoken << " [ID] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 2)
         {
                 cout << codeline << " " << buffertoken << " [PR] \n"; //PALAVRA RESERVADA
                 fout << codeline << " " << buffertoken << " [PR] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 3)
         {
                 cout << codeline << " " << buffertoken << " [NUM] \n"; //NÚMERO
                 fout << codeline << " " << buffertoken << " [NUM] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 4)
         {
                 cout << codeline << " " << buffertoken << " [SE_MENOR] \n"; //SÍMBOLO ESPECIAL_MENOR
                 fout << codeline << " " << buffertoken << " [SE_MENOR] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 5)
         {
                 cout << codeline << " " << buffertoken << " [SE_MAIOR] \n"; //SÍMBOLO ESPECIAL_MAIOR
                 fout << codeline << " " << buffertoken << " [SE_MAIOR] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 6)
         {
                 cout << codeline << " " << buffertoken << " [SE_MULT] \n"; //SÍMBOLO ESPECIAL_MULTIPLICAÇÃO
                 fout << codeline << " " << buffertoken << " [SE_MULT] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 7)
         {
                 cout << codeline << " " << buffertoken << " [SE_2PT] \n"; //SÍMBOLO ESPECIAL_DOIS PONTOS
                 fout << codeline << " " << buffertoken << " [SE_2PT] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 8)
         {
                 cout << codeline << " " << buffertoken << " [SE_APAR] \n"; //SÍMBOLO ESPECIAL_ABRE PARÊNTESES
                 fout << codeline << " " << buffertoken << " [SE_APAR] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 9)
         {
                 cout << codeline << " " << buffertoken << " [SE_DIV] \n"; //SÍMBOLO ESPECIAL_DIVISÃO
                 fout << codeline << " " << buffertoken << " [SE_DIV] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 10)
         {
                 cout << codeline << " " << buffertoken << " [SE_ADD] \n"; //SÍMBOLO ESPECIAL_ADIÇÃO
                 fout << codeline << " " << buffertoken << " [SE_ADD] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 11)
         {
                 cout << codeline << " " << buffertoken << " [SE_SUB] \n"; //SÍMBOLO ESPECIAL_SUBTRAÇÃO
                 fout << codeline << " " << buffertoken << " [SE_SUB] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 12)
         {
                 cout << codeline << " " << buffertoken << " [SE_PT] \n"; //SÍMBOLO ESPECIAL_PONTO
                 fout << codeline << " " << buffertoken << " [SE_PT] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 13)
         {
                 cout << codeline << " " << buffertoken << " [SE_PTVG] \n"; //SÍMBOLO ESPECIAL_PONTO E VÍRGULA
                 fout << codeline << " " << buffertoken << " [SE_PTVG] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 14)
         {
                 cout << codeline << " " << buffertoken << " [SE_VG] \n"; //SÍMBOLO ESPECIAL_VÍRGULA
                 fout << codeline << " " << buffertoken << " [SE_VG] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 15)
         {
                 cout << codeline << " " << buffertoken << " [SE_FPAR] \n"; //SÍMBOLO ESPECIAL_FECHA PARÊNTESES
                 fout << codeline << " " << buffertoken << " [SE_FPAR] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 16)
         {
                 cout << codeline << " " << buffertoken << " [SE_IGUAL] \n"; //SÍMBOLO ESPECIAL_IGUAL
                 fout << codeline << " " << buffertoken << " [SE_IGUAL] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 17)
         {
                 cout << codeline << " " << buffertoken << " [SE_FCHAVE] \n"; //SÍMBOLO ESPECIAL_FECHA CHAVES
                 fout << codeline << " " << buffertoken << " [SE_FCHAVE] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 18)
         {
                 cout << codeline << " " << buffertoken << " [SE_ACHAVE] \n"; //SÍMBOLO ESPECIAL_ABRE CHAVES
                 fout << codeline << " " << buffertoken << " [SE_ACHAVE] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 19)
         {
                 cout << codeline << " " << buffertoken << " [SC_MENORIG] \n"; //SÍMBOLO COMPOSTO_MENOR IGUAL
                 fout << codeline << " " << buffertoken << " [SC_MENORIG] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 20)
         {
                 cout << codeline << " " << buffertoken << " [SC_DIF] \n"; //SÍMBOLO COMPOSTO_DIFERENTE
                 fout << codeline << " " << buffertoken << " [SC_DIF] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 21)
         {
                 cout << codeline << " " << buffertoken << " [SC_MAIORIG] \n"; //SÍMBOLO COMPOSTO_MAIOR IGUAL
                 fout << codeline << " " << buffertoken << " [SC_MAIORIG] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 22)
         {
                 cout << codeline << " " << buffertoken << " [SC_FCOM] \n"; //SÍMBOLO COMPOSTO_FECHA COMENTÁRIO
                 fout << codeline << " " << buffertoken << " [SC_FCOM] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 23)
         {
                 cout << codeline << " " << buffertoken << " [SC_ATTRIB] \n"; //SÍMBOLO COMPOSTO_ATRIBUIÇÃO
                 fout << codeline << " " << buffertoken << " [SC_ATTRIB] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 24)
         {
                 cout << codeline << " " << buffertoken << " [SC_ACOM] \n"; //SÍMBOLO COMPOSTO_ABRE COMENTÁRIO
                 fout << codeline << " " << buffertoken << " [SC_ACOM] \n"; //GRAVA NO ARQUIVO
         }
         
         //ERROS
         if(code == 99)
         {
                 cout << codeline << " " << buffertoken << " [ERRO/INVALIDO] \n"; //ERRO OU CARACTER INVÁLIDO
                 fout << codeline << " " << buffertoken << " [ERRO/INVALIDO] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 100)
         {
                 cout << codeline << " " << " [ERRO: COMENTARIO ABERTO] \n"; //COMENTÁRIO NÃO FOI FECHADO
                 fout << codeline << " " << " [ERRO: COMENTARIO ABERTO] \n"; //GRAVA NO ARQUIVO
         }
}
