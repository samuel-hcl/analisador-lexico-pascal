#include "afd.h"

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
                 cout << codeline << " " << buffertoken << " [NUM] \n"; //N�MERO
                 fout << codeline << " " << buffertoken << " [NUM] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 4)
         {
                 cout << codeline << " " << buffertoken << " [SE_MENOR] \n"; //S�MBOLO ESPECIAL_MENOR
                 fout << codeline << " " << buffertoken << " [SE_MENOR] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 5)
         {
                 cout << codeline << " " << buffertoken << " [SE_MAIOR] \n"; //S�MBOLO ESPECIAL_MAIOR
                 fout << codeline << " " << buffertoken << " [SE_MAIOR] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 6)
         {
                 cout << codeline << " " << buffertoken << " [SE_MULT] \n"; //S�MBOLO ESPECIAL_MULTIPLICA��O
                 fout << codeline << " " << buffertoken << " [SE_MULT] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 7)
         {
                 cout << codeline << " " << buffertoken << " [SE_2PT] \n"; //S�MBOLO ESPECIAL_DOIS PONTOS
                 fout << codeline << " " << buffertoken << " [SE_2PT] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 8)
         {
                 cout << codeline << " " << buffertoken << " [SE_APAR] \n"; //S�MBOLO ESPECIAL_ABRE PAR�NTESES
                 fout << codeline << " " << buffertoken << " [SE_APAR] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 9)
         {
                 cout << codeline << " " << buffertoken << " [SE_DIV] \n"; //S�MBOLO ESPECIAL_DIVIS�O
                 fout << codeline << " " << buffertoken << " [SE_DIV] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 10)
         {
                 cout << codeline << " " << buffertoken << " [SE_ADD] \n"; //S�MBOLO ESPECIAL_ADI��O
                 fout << codeline << " " << buffertoken << " [SE_ADD] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 11)
         {
                 cout << codeline << " " << buffertoken << " [SE_SUB] \n"; //S�MBOLO ESPECIAL_SUBTRA��O
                 fout << codeline << " " << buffertoken << " [SE_SUB] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 12)
         {
                 cout << codeline << " " << buffertoken << " [SE_PT] \n"; //S�MBOLO ESPECIAL_PONTO
                 fout << codeline << " " << buffertoken << " [SE_PT] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 13)
         {
                 cout << codeline << " " << buffertoken << " [SE_PTVG] \n"; //S�MBOLO ESPECIAL_PONTO E V�RGULA
                 fout << codeline << " " << buffertoken << " [SE_PTVG] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 14)
         {
                 cout << codeline << " " << buffertoken << " [SE_VG] \n"; //S�MBOLO ESPECIAL_V�RGULA
                 fout << codeline << " " << buffertoken << " [SE_VG] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 15)
         {
                 cout << codeline << " " << buffertoken << " [SE_FPAR] \n"; //S�MBOLO ESPECIAL_FECHA PAR�NTESES
                 fout << codeline << " " << buffertoken << " [SE_FPAR] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 16)
         {
                 cout << codeline << " " << buffertoken << " [SE_IGUAL] \n"; //S�MBOLO ESPECIAL_IGUAL
                 fout << codeline << " " << buffertoken << " [SE_IGUAL] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 17)
         {
                 cout << codeline << " " << buffertoken << " [SE_FCHAVE] \n"; //S�MBOLO ESPECIAL_FECHA CHAVES
                 fout << codeline << " " << buffertoken << " [SE_FCHAVE] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 18)
         {
                 cout << codeline << " " << buffertoken << " [SE_ACHAVE] \n"; //S�MBOLO ESPECIAL_ABRE CHAVES
                 fout << codeline << " " << buffertoken << " [SE_ACHAVE] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 19)
         {
                 cout << codeline << " " << buffertoken << " [SC_MENORIG] \n"; //S�MBOLO COMPOSTO_MENOR IGUAL
                 fout << codeline << " " << buffertoken << " [SC_MENORIG] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 20)
         {
                 cout << codeline << " " << buffertoken << " [SC_DIF] \n"; //S�MBOLO COMPOSTO_DIFERENTE
                 fout << codeline << " " << buffertoken << " [SC_DIF] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 21)
         {
                 cout << codeline << " " << buffertoken << " [SC_MAIORIG] \n"; //S�MBOLO COMPOSTO_MAIOR IGUAL
                 fout << codeline << " " << buffertoken << " [SC_MAIORIG] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 22)
         {
                 cout << codeline << " " << buffertoken << " [SC_FCOM] \n"; //S�MBOLO COMPOSTO_FECHA COMENT�RIO
                 fout << codeline << " " << buffertoken << " [SC_FCOM] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 23)
         {
                 cout << codeline << " " << buffertoken << " [SC_ATTRIB] \n"; //S�MBOLO COMPOSTO_ATRIBUI��O
                 fout << codeline << " " << buffertoken << " [SC_ATTRIB] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 24)
         {
                 cout << codeline << " " << buffertoken << " [SC_ACOM] \n"; //S�MBOLO COMPOSTO_ABRE COMENT�RIO
                 fout << codeline << " " << buffertoken << " [SC_ACOM] \n"; //GRAVA NO ARQUIVO
         }
         
         //ERROS
         if(code == 99)
         {
                 cout << codeline << " " << buffertoken << " [ERRO/INVALIDO] \n"; //ERRO OU CARACTER INV�LIDO
                 fout << codeline << " " << buffertoken << " [ERRO/INVALIDO] \n"; //GRAVA NO ARQUIVO
         }
         if(code == 100)
         {
                 cout << codeline << " " << " [ERRO: COMENTARIO ABERTO] \n"; //COMENT�RIO N�O FOI FECHADO
                 fout << codeline << " " << " [ERRO: COMENTARIO ABERTO] \n"; //GRAVA NO ARQUIVO
         }
}
