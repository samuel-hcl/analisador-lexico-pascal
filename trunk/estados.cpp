#include <iostream>
#include <string>
#include <ctype.h>

#include "afd.h"

using namespace std;

void AFD::EstadoInicial(char x)
{
     while(sourcecode[si] != '\0')
     {
                          
                          buffertoken.clear();
                          
                          x = sourcecode[si];
                          
                          if (x == ' ' || x == '\n')
                          {
                             if (x == '\n')
                                codeline++;
                             si++;
                          }
                          
                          if(isalpha(x)) //transição 1
                          output(Estado2(x));
                          else
                          if(isdigit(x))
                          output(Estado3(x));
                          
     }
}

int AFD::Estado2(char x)
{
     buffertoken.append(1, x);
     si++;
     
     while(true)
     {
                x = sourcecode[si];
                if(Estado2loop(x))
                {
                                  buffertoken.append(1, x);
                                  si++;
                }
                else
                break;
     }
     return 1;
}

bool AFD::Estado2loop(char x)
{
    if(isalnum(x) || x == '_')
    return true;
    else
    return false;
}

int AFD::Estado3(char x)
{
     buffertoken.append(1, x);
     si++;
     
     while(true)
     {
                x = sourcecode[si];
                if(Estado3loop(x))
                {
                                  buffertoken.append(1, x);
                                  si++;
                }
                else
                break;
     }
     return 3;
}

bool AFD::Estado3loop(char x)
{
    if(isdigit(x))
    return true;
    else
    return false;
}
