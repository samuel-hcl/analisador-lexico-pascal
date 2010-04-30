#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>

using namespace std;

class AFD
{
    public:
           AFD();
           ofstream fout("output.txt");
    
    private:            
            FILE *sourcefile; //ponteiro do arquivo com o c�digo fonte
            char filename[256]; //nome do arquivo
            bool abrearquivo(); //fun��o que abre o arquivo e carrega o conte�do para an�lise
            
            string sourcecode; //string onde � armazenado o c�digo
            string buffertoken; //string onde � armazenado o token que est� sendo analisado
            int si; //�ndice do caractere atual
            int codeline; //linha do c�digo
            
            //Estados do aut�mato
            void EstadoInicial(char x);
            int Estado2(char x);
            int Estado3(char x);
            int Estado4(char x);
            int Estado5(char x);
            int Estado6(char x);
            int Estado7(char x);
            int Estado8(char x);
            int Estado9(char x);
            int Estado10(char x);
            int Estado11(char x);
            int Estado12(char x);
            int Estado13(char x);
            int Estado14(char x);
            int Estado15(char x);
            int Estado16(char x);
            int Estado17(char x);
            int Estado18(char x);
            int Estado19(char x);
            int Estado20(char x);
            int Estado21(char x);
            int Estado22(char x);
            int Estado23(char x);
            int Estado24(char x);
            
            
            bool Estado2loop(char x);
            bool PalavraReservada();
            bool erroEstado3loop(char x);
            int erroEstado3(char x);
            void comentPAR();
            void comentCHAVE();
            
            //output
            void output(int code);
};
