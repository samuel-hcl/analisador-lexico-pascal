#include <iostream>
#include <string>
#include <ctype.h>

#include "afd.h"

using namespace std;

/* C�digos
   
   1 - identificador
   2 - palavra reservada
   3 - n�mero
   4 - SE menor
   5 - SE maior
   6 - SE aster�sco (multiplica��o)
   7 - SE dois pontos
   8 - SE abre par�nteses
   9 - SE barra (divis�o)
   10 - SE mais (adi��o)
   11 - SE menos (subtra��o)
   12 - SE ponto
   13 - SE ponto e v�rgula
   14 - SE v�rgula
   15 - SE fecha par�nteses
   16 - SE igual
   17 - SE fecha chaves
   18 - SE abre chaves
   19 - SC menor igual
   20 - SC menor maior (diferente)
   21 - SC maior igual
   22 - SC fecha coment�rio *)
   23 - SC atribui��o :=
   24 - SC abre coment�rio (*
   
      SE = S�mbolo Especial
      SC = S�mbolo Composto
*/

void AFD::output(int code)
{
         if(code == 1)
         cout << codeline << " " << buffertoken << " [ID] \n"; //IDENTIFICADOR
         if(code == 2)
         cout << codeline << " " << buffertoken << " [PR] \n"; //PALAVRA RESERVADA
         if(code == 3)
         cout << codeline << " " << buffertoken << " [NUM] \n"; //N�MERO
         if(code == 4)
         cout << codeline << " " << buffertoken << " [SE_MENOR] \n"; //S�MBOLO ESPECIAL_MENOR
         if(code == 5)
         cout << codeline << " " << buffertoken << " [SE_MAIOR] \n"; //S�MBOLO ESPECIAL_MAIOR
         if(code == 6)
         cout << codeline << " " << buffertoken << " [SE_MULT] \n"; //S�MBOLO ESPECIAL_MULTIPLICA��O
         if(code == 7)
         cout << codeline << " " << buffertoken << " [SE_2PT] \n"; //S�MBOLO ESPECIAL_DOIS PONTOS
         if(code == 8)
         cout << codeline << " " << buffertoken << " [SE_APAR] \n"; //S�MBOLO ESPECIAL_ABRE PAR�NTESES
         if(code == 9)
         cout << codeline << " " << buffertoken << " [SE_DIV] \n"; //S�MBOLO ESPECIAL_DIVIS�O
         if(code == 10)
         cout << codeline << " " << buffertoken << " [SE_ADD] \n"; //S�MBOLO ESPECIAL_ADI��O
         if(code == 11)
         cout << codeline << " " << buffertoken << " [SE_SUB] \n"; //S�MBOLO ESPECIAL_SUBTRA��O
         if(code == 12)
         cout << codeline << " " << buffertoken << " [SE_PT] \n"; //S�MBOLO ESPECIAL_PONTO
         if(code == 13)
         cout << codeline << " " << buffertoken << " [SE_PTVG] \n"; //S�MBOLO ESPECIAL_PONTO E V�RGULA
         if(code == 14)
         cout << codeline << " " << buffertoken << " [SE_VG] \n"; //S�MBOLO ESPECIAL_V�RGULA
         if(code == 15)
         cout << codeline << " " << buffertoken << " [SE_FPAR] \n"; //S�MBOLO ESPECIAL_FECHA PAR�NTESES
         if(code == 16)
         cout << codeline << " " << buffertoken << " [SE_IGUAL] \n"; //S�MBOLO ESPECIAL_IGUAL
         if(code == 17)
         cout << codeline << " " << buffertoken << " [SE_FCHAVE] \n"; //S�MBOLO ESPECIAL_FECHA CHAVES
         if(code == 18)
         cout << codeline << " " << buffertoken << " [SE_ACHAVE] \n"; //S�MBOLO ESPECIAL_ABRE CHAVES
         if(code == 19)
         cout << codeline << " " << buffertoken << " [SC_MENORIG] \n"; //S�MBOLO COMPOSTO_MENOR IGUAL
         if(code == 20)
         cout << codeline << " " << buffertoken << " [SC_DIF] \n"; //S�MBOLO COMPOSTO_DIFERENTE
         if(code == 21)
         cout << codeline << " " << buffertoken << " [SC_MAIORIG] \n"; //S�MBOLO COMPOSTO_MAIOR IGUAL
         if(code == 22)
         cout << codeline << " " << buffertoken << " [SC_FCOM] \n"; //S�MBOLO COMPOSTO_FECHA COMENT�RIO
         if(code == 23)
         cout << codeline << " " << buffertoken << " [SC_ATTRIB] \n"; //S�MBOLO COMPOSTO_ATRIBUI��O
         if(code == 24)
         cout << codeline << " " << buffertoken << " [SC_ACOM] \n"; //S�MBOLO COMPOSTO_ABRE COMENT�RIO
         
         //ERROS
         if(code == 99)
         cout << codeline << " " << buffertoken << " [ERRO/INVALIDO] \n"; //ERRO OU CARACTER INV�LIDO
         if(code == 100)
         cout << codeline << " " << " [ERRO: COMENTARIO ABERTO] \n"; //COMENT�RIO N�O FOI FECHADO
}
