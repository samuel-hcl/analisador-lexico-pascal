#include "afd.h"

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
                          Estado6(x);
                          else
                          if(x == ':') //transição 1 para 7
                          output(Estado7(x));
                          else
                          if(x == '(') //transição 1 para 8
                          Estado8(x);
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
                          Estado17(x);
                          else
                          if(x == '{') //transição 1 para 18
                          Estado18(x);
                          else
                          if(x != ' ' && x != '\n') //tratamento de erro
                          {
                               buffertoken.append(1, x);
                               output(99);
                               si++;
                          }
     }
}

int AFD::Estado2(char x) //////////////////////////////////////////////ESTADO 2
{
     bool ispr = false;
     
     buffertoken.append(1, x);
     si++;
     
     while(true)
     {
                if(!PalavraReservada())
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
                else
                {
                    ispr = true;
                    break;
                }
     }
     if (ispr == false)
         return 1;
     else
         return 2;
}

bool AFD::PalavraReservada()
{
     string pr[19] = {"program", "label", "type", "array", "of", "var", "procedure", "function", "begin", "end", "if", "then", "else", "while", "do", "or", "and", "div", "mod"};
     bool ispr = false;
     
     for (int i = 0; i < 19; i++)
     {
        if (buffertoken == pr[i] && (sourcecode[si] == ' ' || sourcecode[si] == '\n'))
        {
           ispr = true;
           break;
        }
     }
     return ispr;
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
     x = sourcecode[si];
     
     if(isdigit(x))
     {
                   Estado3(x); //transição 3 para 3 (self-loop)
                   return 3;
     }
     else
     if(isalpha(x))
     return erroEstado3(x);
     
}

int AFD::erroEstado3(char x) ////////////Estado de erro para o estado 3
{
     buffertoken.append(1, x);
     si++;
     
     while(true)
     {
                x = sourcecode[si];
                if(erroEstado3loop(x))
                {
                                  buffertoken.append(1, x);
                                  si++;
                }
                else
                break;
     }
     return 99;
}


bool AFD::erroEstado3loop(char x)
{
    if(isalnum(x))
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
    Estado22(x); //transição 6 para 22
    else
    output(6);
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
    Estado24(x); //transição 8 para 24
    else
    output(8);
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
}

int AFD::Estado18(char x) ////////////////////////////////////////////ESTADO 18
{
    buffertoken.append(1, x);
    si++;
    comentCHAVE();
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
    comentPAR();
}
