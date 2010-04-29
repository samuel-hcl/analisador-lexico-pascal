#include <iostream>
#include <string>
#include <ctype.h>

#include "afd.h"

using namespace std;

void AFD::EstadoInicial(char x) ///////////////////////////////////////ESTADO 1
{
     while(sourcecode[si] != '\0')
     {
                          
                          buffertoken.clear();
                          
                          x = sourcecode[si];
                          
                          if(x == ' ' || x == '\n')
                          {
                             if (x == '\n')
                                codeline++;
                             si++;
                          }
                          
                          if(isalpha(x)) //transição 1 para 2
                          output(Estado2(x));
                          else
                          if(isdigit(x)) //transição 1 para 3
                          output(Estado3(x));
                          else
                          if(x == '<') //transição 1 para 4
                          output(Estado4(x));
                          else
                          if(x == '>') //transição 1 para 5
                          output(Estado5(x));
                          else
                          if(x == '*') //transição 1 para 6
                          output(Estado6(x));
                          else
                          if(x == ':') //transição 1 para 7
                          output(Estado7(x));
                          else
                          if(x == '(') //transição 1 para 8
                          output(Estado8(x));
                          else
                          if(x == '/') //transição 1 para 9
                          output(Estado9(x));
                          else
                          if(x == '+') //transição 1 para 10
                          output(Estado10(x));
                          else
                          if(x == '-') //transição 1 para 11
                          output(Estado11(x));
                          else
                          if(x == '.') //transição 1 para 12
                          output(Estado12(x));
                          else
                          if(x == ';') //transição 1 para 13
                          output(Estado13(x));
                          else
                          if(x == ',') //transição 1 para 14
                          output(Estado14(x));
                          else
                          if(x == ')') //transição 1 para 15
                          output(Estado15(x));
                          else
                          if(x == '=') //transição 1 para 16
                          output(Estado16(x));
                          else
                          if(x == '}') //transição 1 para 17
                          output(Estado17(x));
                          else
                          if(x == '{') //transição 1 para 18
                          output(Estado18(x));
                          else
                          if(x != ' ' && x != '\n') //tratamento de erro
                          {
                               output(99);
                               si++;
                          }
     }
}

int AFD::Estado2(char x) //////////////////////////////////////////////ESTADO 2
{
     buffertoken.append(1, x);
     si++;
     
     while(true)
     {
                x = sourcecode[si];
                if(Estado2loop(x)) //transição 2 para 2 (self-loop)
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

int AFD::Estado3(char x) //////////////////////////////////////////////ESTADO 3
{
     buffertoken.append(1, x);
     si++;
     
     while(true)
     {
                x = sourcecode[si];
                if(Estado3loop(x)) //transição 3 para 3 (self-loop)
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

int AFD::Estado4(char x) //////////////////////////////////////////////ESTADO 4
{
    buffertoken.append(1, x);
    si++;
    
    x = sourcecode[si];
    
    if(x == '=')
    return Estado19(x); //transição 4 para 19
    else
    if(x == '>')
    return Estado20(x); //transição 4 para 20
    else
    return 4;
}

int AFD::Estado5(char x) //////////////////////////////////////////////ESTADO 5
{
    buffertoken.append(1, x);
    si++;
    
    x = sourcecode[si];
    
    if(x == '=')
    return Estado21(x); //transição 5 para 21
    else
    return 5;
}

int AFD::Estado6(char x) //////////////////////////////////////////////ESTADO 6
{
    buffertoken.append(1, x);
    si++;
    
    x = sourcecode[si];
    
    if(x == ')')
    return Estado22(x); //transição 6 para 22
    else
    return 6;
}

int AFD::Estado7(char x) //////////////////////////////////////////////ESTADO 7
{
    buffertoken.append(1, x);
    si++;
    
    x = sourcecode[si];
    
    if(x == '=')
    return Estado23(x); //transição 7 para 23
    else
    return 7;
}

int AFD::Estado8(char x) //////////////////////////////////////////////ESTADO 8
{
    buffertoken.append(1, x);
    si++;
    
    x = sourcecode[si];
    
    if(x == '*')
    return Estado24(x); //transição 8 para 24
    else
    return 8;
}

int AFD::Estado9(char x) //////////////////////////////////////////////ESTADO 9
{
    buffertoken.append(1, x);
    si++;
    
    return 9;
}

int AFD::Estado10(char x) ////////////////////////////////////////////ESTADO 10
{
    buffertoken.append(1, x);
    si++;
    
    return 10;
}

int AFD::Estado11(char x) ////////////////////////////////////////////ESTADO 11
{
    buffertoken.append(1, x);
    si++;
    
    return 11;
}

int AFD::Estado12(char x) ////////////////////////////////////////////ESTADO 12
{
    buffertoken.append(1, x);
    si++;
    
    return 12;
}

int AFD::Estado13(char x) ////////////////////////////////////////////ESTADO 13
{
    buffertoken.append(1, x);
    si++;
    
    return 13;
}

int AFD::Estado14(char x) ////////////////////////////////////////////ESTADO 14
{
    buffertoken.append(1, x);
    si++;
    
    return 14;
}

int AFD::Estado15(char x) ////////////////////////////////////////////ESTADO 15
{
    buffertoken.append(1, x);
    si++;
    
    return 15;
}

int AFD::Estado16(char x) ////////////////////////////////////////////ESTADO 16
{
    buffertoken.append(1, x);
    si++;
    
    return 16;
}

int AFD::Estado17(char x) ////////////////////////////////////////////ESTADO 17
{
    buffertoken.append(1, x);
    si++;
    
    return 17;
}

int AFD::Estado18(char x) ////////////////////////////////////////////ESTADO 18
{
    buffertoken.append(1, x);
    si++;
    
    return 18;
}

int AFD::Estado19(char x) ////////////////////////////////////////////ESTADO 19
{
    buffertoken.append(1, x);
    si++;
    
    return 19;
}
    
int AFD::Estado20(char x) ////////////////////////////////////////////ESTADO 20
{
    buffertoken.append(1, x);
    si++;
    
    return 20;
}

int AFD::Estado21(char x) ////////////////////////////////////////////ESTADO 21
{
    buffertoken.append(1, x);
    si++;
    
    return 21;
}

int AFD::Estado22(char x) ////////////////////////////////////////////ESTADO 22
{
    buffertoken.append(1, x);
    si++;
    
    return 22;
}

int AFD::Estado23(char x) ////////////////////////////////////////////ESTADO 23
{
    buffertoken.append(1, x);
    si++;
    
    return 23;
}

int AFD::Estado24(char x) ////////////////////////////////////////////ESTADO 24
{
    buffertoken.append(1, x);
    si++;
    
    return 24;
}
