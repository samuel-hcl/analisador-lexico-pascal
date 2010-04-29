#include <iostream>
#include <string>
#include <ctype.h>

#include "afd.h"

using namespace std;

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
         cout << codeline << " " << buffertoken << " [ID] \n";
         if(code == 2)
         cout << codeline << " " << buffertoken << " [PR] \n";
         if(code == 3)
         cout << codeline << " " << buffertoken << " [NUM] \n";
         if(code == 4)
         cout << codeline << " " << buffertoken << " [SE_MENOR] \n";
         if(code == 5)
         cout << codeline << " " << buffertoken << " [SE_MAIOR] \n";
         if(code == 6)
         cout << codeline << " " << buffertoken << " [SE_MULT] \n";
         if(code == 7)
         cout << codeline << " " << buffertoken << " [SE_2PT] \n";
         if(code == 8)
         cout << codeline << " " << buffertoken << " [SE_APAR] \n";
         if(code == 9)
         cout << codeline << " " << buffertoken << " [SE_DIV] \n";
         if(code == 10)
         cout << codeline << " " << buffertoken << " [SE_ADD] \n";
         if(code == 11)
         cout << codeline << " " << buffertoken << " [SE_SUB] \n";
         if(code == 12)
         cout << codeline << " " << buffertoken << " [SE_PT] \n";
         if(code == 13)
         cout << codeline << " " << buffertoken << " [SE_PTVG] \n";
         if(code == 14)
         cout << codeline << " " << buffertoken << " [SE_VG] \n";
         if(code == 15)
         cout << codeline << " " << buffertoken << " [SE_FPAR] \n";
         if(code == 16)
         cout << codeline << " " << buffertoken << " [SE_IGUAL] \n";
         if(code == 17)
         cout << codeline << " " << buffertoken << " [SE_FCHAVE] \n";
         if(code == 18)
         cout << codeline << " " << buffertoken << " [SE_ACHAVE] \n";
         if(code == 19)
         cout << codeline << " " << buffertoken << " [SC_MENORIG] \n";
         if(code == 20)
         cout << codeline << " " << buffertoken << " [SC_DIF] \n";
         if(code == 21)
         cout << codeline << " " << buffertoken << " [SC_MAIORIG] \n";
         if(code == 22)
         cout << codeline << " " << buffertoken << " [SC_FCOM] \n";
         if(code == 23)
         cout << codeline << " " << buffertoken << " [SC_ATTRIB] \n";
         if(code == 24)
         cout << codeline << " " << buffertoken << " [SC_ACOM] \n";
         
         if(code == 99)
         cout << codeline << " " << buffertoken << " [ERRO/INVALIDO] \n";
         
}
