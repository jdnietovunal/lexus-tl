#ifndef LEX_TOKEN_H   // protect against multiple inclusions!
#define LEX_TOKEN_H

#include <string>

class Token {
    protected:
        int type;
        int line;
        int col;
        
    public:
        static const int TOKEN_LLAVE_IZQ;   // {
        static const int TOKEN_LLAVE_DER;   // }
        static const int TOKEN_COM;         // #
        static const int TOKEN_COR_IZQ;     // [
        static const int TOKEN_COR_DER;     // ]
        static const int TOKEN_PAR_IZQ;     // (
        static const int TOKEN_PAR_DER;     // )
        static const int TOKEN_MAYOR;       // >
        static const int TOKEN_MENOR;       // <
        static const int TOKEN_MAYOR_IG;    // >=
        static const int TOKEN_MENOR_IG;    // <=
        static const int TOKEN_IN;          // in
        static const int TOKEN_IGUAL_NUM;   // ==
        static const int TOKEN_POINT;       // .
        static const int TOKEN_DIFF_NUM;    // !=
        static const int TOKEN_AND;         // &&
        static const int TOKEN_OR;          // ||
        static const int TOKEN_NOT;         // !
        static const int TOKEN_MAS;         // +
        static const int TOKEN_MENOS;       // -
        static const int TOKEN_MUL;         // *
        static const int TOKEN_DIV;         // /
        static const int TOKEN_MOD;         // %
        static const int TOKEN_POD;         // ^
        static const int TOKEN_ASSIGN;      // =
        
        Token(int t, int l, int c);
        
        void set_type(int t) {
            type = t;
        }
        void set_line(int l) {
            line = l;
        }
        void set_col(int c) {
            col = c;
        }
        
        static std::string type2str(int type);
};

class Operator: public Token {
    public:
        Operator(int t, int l, int c) : Token(t, l, c) {
            
        }
        void print();
};

#endif