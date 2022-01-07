#include <iostream>
#include <cmath>
int main() {
    float a,b,c,x,y,z,q,im,re;
    float delta,sqrDelta;
    std::cout<<"write variables"<<std::endl;
    std::cout<<"Enter a: ";
    std::cin>>a;
    std::cout<<"Enter b: ";
    std::cin>>b;
    std::cout<<"Enter c: ";
    std::cin>>c;

    delta = (b*b)-(4*a*c);
    std::cout<<"delta = "<<delta<<std::endl;
    if(delta>0){
        sqrDelta = sqrt(delta);
        x=(-b-sqrDelta)/(2*a);
        y=(-b+sqrDelta)/(2*a);
        std::cout<<"this equation have two solution"<<std::endl;
        std::cout<<"X1 = "<<x <<" and X2 = "<<y<<std::endl;
    }else if(delta<0){
       sqrDelta = sqrt(-delta);
       re = -b/(2*a);
       im = sqrDelta/(2*a);
       std::cout<<"Z1 = "<<re<<"-i"<<im<<std::endl;
       std::cout<<"Z2 = "<<re<<"+i"<<im<<std::endl;
    }
    
    return 0;
}