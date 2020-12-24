//
// Created by DevStandDSP on 22.12.2020.
//

#ifndef FIFO_FIFO_H
#define FIFO_FIFO_H

#include <stdint.h>

class FIFO
{
public:
    FIFO();
    ~FIFO();

    int32_t Init(uint32_t lengthVector = 10);
    int32_t Deint();

    void Put(int32_t value);
    void PrintVector();
    int32_t Get();

    void Shift();

    int32_t *Vector;
    int32_t LengthVector;
    int32_t CounterValues;
    bool MemoryInit;


};
#endif //FIFO_FIFO_H
