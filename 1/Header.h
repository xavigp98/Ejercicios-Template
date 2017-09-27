#pragma once
template <typename T, typename J>
void swapValue(T &uno, J &dos)
{
	J buffer = dos;
	dos = uno;
	uno = buffer;
}