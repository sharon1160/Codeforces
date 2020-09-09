#include <iostream>

int main(){
    int t, a, b, diferencia, divisor, cociente, residuo, moves;
    std :: cin>>t;
    while(t--){
        moves = 0;
        std :: cin>>a>>b;
        diferencia = b - a;
        //First Case
        if( diferencia == 0 ){
            std :: cout<<moves<<'\n';
        }
        //Second Case
        else if ( diferencia > 0 ){
            for (int i = 10; i > 0; i--){
                if( diferencia / i != 0 ){
                    cociente = diferencia / i;
                    divisor = i;
                    break;
                }
            }
            a += cociente*divisor;
            moves += cociente;
            if(diferencia % divisor != 0){
                a += diferencia % divisor;
                moves ++;
            }
            if (a == b)
                std :: cout<<moves<<'\n';
            
        }
        //Third Case
        else if( diferencia < 0){
            diferencia = diferencia*(-1);
            for (int i = 10; i > 0; i--){
                if( diferencia / i != 0 ){
                    cociente = diferencia / i;
                    divisor = i;
                    break;
                }
            }
            a -= cociente*divisor;
            moves += cociente;
            if(diferencia % divisor != 0){
                a -= diferencia % divisor;
                moves ++;
            }
            if (a == b)
                std :: cout<<moves<<'\n';
        }
    }
    return 0;
}