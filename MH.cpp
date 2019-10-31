#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>
 
 int main(){
     int N = 10000;

     double delta = 1.0;
     double sigma = 1.0;
     srand48(13);

     double propuesta = drand48();

     int i;
     for(i=0; i<N; i++){
        double temp = propuesta + (drand48()-0.5)*delta;
        double rtemp = exp(-(temp*temp)/(2.0*sigma*sigma))/sqrt(2.0*M_PI*sigma*sigma);
        double rpropuesta = exp(-(propuesta*propuesta)/(2.0*sigma*sigma))/sqrt(2.0*M_PI*sigma*sigma);
        double r1 = rtemp/rpropuesta;
        double menor;
        if(1<r1){
            menor = 1;
        }
        else{
            menor = r1;
        }
        double alpha = drand48();
        if(alpha<menor){
            std::cout << menor << std::endl;
        }
        else{
            std::cout << propuesta << std::endl;
        }

     } 
     return 0;

 }