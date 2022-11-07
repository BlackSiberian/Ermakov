#include "CStructure.h"
#include "FIFO.h"
#include "FIFO.cpp"
#include "LIFO.h"
#include "LIFO.cpp"


template class CStructure<int>;
template class LIFO<int>;
template class FIFO<int>;

template class LIFO<double>;
template class FIFO<double>;