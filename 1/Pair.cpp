#include "Pair.h"


template <typename T>
Pair<T>::Pair(T uno, T dos)
{
	Pair<T>::values[0] = uno;
	Pair<T>::values[1] = dos;

}

template <typename T>
Pair<T>::~Pair()
{
}
