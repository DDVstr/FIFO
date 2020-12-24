#include <cstdlib>
#include <cstdio>
#include "FIFO.h"

FIFO::FIFO()
{
    LengthVector = 0;
    CounterValues = 0;
    Vector = NULL;
    MemoryInit = false;
}

FIFO::~FIFO()
{
    if (MemoryInit)
    {
        Deint();
    }
}

int32_t FIFO::Init(uint32_t lengthVector)
{
    if (lengthVector == 0)
        return -1;

    LengthVector = lengthVector;
    Vector = new int32_t[LengthVector];
    MemoryInit = true;
    CounterValues = 0;

    for (int32_t i = 0; i < LengthVector; i++)
    {
        Vector[i] = 0;
    }
}

int32_t FIFO::Deint()
{
    delete[] Vector;
    LengthVector = 0;
    CounterValues = 0;
    MemoryInit = false;
    return 0;
}

void FIFO::Put(int32_t value)
{
    if (CounterValues < LengthVector)
    {
        Shift();
        Vector[LengthVector - 1] = value;
        CounterValues += 1;
    }
    else
    {
        Vector[LengthVector - 1] = value;
    }
}

/**
 * \brief Получить число из фифо
 * \return
 */
int32_t FIFO::Get()
{
    int32_t result = 0;
    if (CounterValues > 0)
    {
        result = Vector[LengthVector - CounterValues];
        CounterValues -= 1;
    }
    else
    {
        result = Vector[LengthVector - 1];
    }
    return result;
}

/**
 * \brief Сдвиг в сторону нулевого элекнта с затиранием
 */
void FIFO::Shift()
{
    for (int32_t i = 0; i < LengthVector - 1; i++)
    {
        Vector[i] = Vector[i + 1];
    }
}

/**
 * \brief Печать статуса фифо
 */
void FIFO::PrintVector()
{
    printf("Status FIFO: \n");
    printf("CounterValues = %d\n", CounterValues);
    printf("Vector: ");
    for (int32_t i = 0; i < LengthVector; i++)
        printf("%5d ", Vector[i]);
    printf("\n\n");
}




