#include <iostream>
#include <iomanip>
#include "stdio.h"
#include "math.h"
#include "FIFO.h"

//using namespace std;
//
//double put(double newValue, double *mass, int N ) //input random value
//{
//    int variable;
//    std::cin>>variable;
//
//    int index;
//    for(int i=N ; i>0;i--)
//    {    mass[5]=newValue;
//         mass[i-1]= mass[i];
//
//         std::cout<<mass;
//
//    }
//    return *mass;
//}
//
//double get(double mass)
//{   int value;
//
//
//    return value;
//
//    int main()
//    {
//
//     int  N=5;
//   double mass[N];
//   for(int i = 0; i<  N ; i++ )
//   {
//       mass[i]=0.0;
//   //std::cout<<mass[i]<<std::endl;
//   }
//   double a;
//   a= put(12,mass, 5);
//           std::cout<<a;
//
//
//
//
//struct FIFO
//{
//    int variable;
//    int vol; // volume of memory
//    FIFO *init, *length, *step;
//    double Add(const int x );
//    void Show(); // initial address
//    void Delete(); // deletion from vector
//};
//
//double FIFO::Add(const int x)
//{
//    FIFO *var = new FIFO;
//    step = 0;
//    var->variable=x;
//    if(init != NULL)
//    {
//        length->step= var;
//       length = var;
//    }
//    else
//    {
//        init= length= var;
//    }
//}
//void FIFO::Show()
//{
//    FIFO *var = init;
//    while(var!=length->step)
//    {
//        std::cout<<var->variable<<std::endl;
//        var = var->step;
//
//    }
//
//}
//void FIFO::Delete()
//{
//    FIFO*var= init;
//    while(var!= length)
//    {
//        var=init;
//        init = init ->step;
//        std::cout<< "deletion of element " <<var->variable;
//        delete var;
//
//    }
//}

int main()
{
//    FIFO VAR1;
//    VAR1.init==NULL;
//    VAR1.Add()

    FIFO *fifo = new FIFO();
    fifo->Init(5);
    fifo->PrintVector();

    for (int32_t i = 0; i < 4; ++i)
    {
        fifo->Put(i + 10);
        fifo->PrintVector();
    }

    printf("Get number = %d\n", fifo->Get());
    fifo->PrintVector();
    printf("Get number = %d\n", fifo->Get());
    fifo->PrintVector();
    printf("Get number = %d\n", fifo->Get());
    fifo->PrintVector();

    fifo->Put(99);
    fifo->PrintVector();
    fifo->Put(110);
    fifo->PrintVector();
    printf("Get number = %d\n", fifo->Get());
    fifo->PrintVector();
    fifo->Put(150);
    fifo->PrintVector();

    fifo->Put(180);
    fifo->PrintVector();
    printf("Get number = %d\n", fifo->Get());
    fifo->PrintVector();

    printf("Get number = %d\n", fifo->Get());
    fifo->PrintVector();

    printf("Get number = %d\n", fifo->Get());
    fifo->PrintVector();

    printf("Get number = %d\n", fifo->Get());
    fifo->PrintVector();

    printf("Get number = %d\n", fifo->Get());
    fifo->PrintVector();

    printf("Get number = %d\n", fifo->Get());
    fifo->PrintVector();

    return 0;
}