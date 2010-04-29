#include <iostream>
#include <string>
#include <ctype.h>

#include "afd.h"

using namespace std;

AFD::AFD()
{
          if(abrearquivo())
          {
                           char entrada;
                           
                           si = 0;
                           codeline = 1;
                           
                           system("CLS");
                           EstadoInicial(entrada);
          }
}                

bool AFD::abrearquivo()
{
                  char aux;
                  
                  cout << "ANALISADOR LEXICO - PASCAL\n\n";
                  cout << "Desenvolvedores:\nAna Carolina Alves Rodrigues\nSamuel Lourenco\n\n\n";
                  cout << "Crie um arquivo texto com o codigo em pascal na mesma \npasta onde esta o executavel.\n";
                  cout << "Para iniciar a analise, insira o nome do arquivo junto com sua extensao.\n";
                  cout << "Exemplo: teste.txt\n\n";
                  cout << "Digite o nome do arquivo: ";
                  cin >> filename;
                  
                  if((sourcefile = fopen(filename, "r")) != NULL)
                  {
                   while (fread(&aux, sizeof(char), 1, sourcefile) == 1)
                   {
                         if (aux != '\t')
                         {
                                 sourcecode.append(1, aux);
                         }
                   }

                   for (int i=0; sourcecode[i] != '\0'; i++)
            sourcecode[i] = tolower(sourcecode[i]);

        return true;
    }
    else
        return false;
}
