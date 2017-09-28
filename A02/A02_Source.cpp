#include <iostream>
#include <vector>

//Ejercicio 1)

template <typename T, int param = 1>
void fExample1() {
	std::cout << param << '\n';
}


template<typename T1, typename T2>
class CExample2
{
public:

	std::vector<T1> aV;
	T2 atr;
};


template <typename T>
struct node
{
	T info;
	node* next;
};

//Ejercicio 2)

template<typename T>
void SwapValues(T & variable1, T & variable2)
{
	T temp;
	temp = variable1;
	variable1 = variable2;
	variable2 = temp;
}
//Ejercicio 3)


template <typename T>
class SuperQueue
{
public:

	SuperQueue()
	{
		sizen = 0;
		first = nullptr;
		last = nullptr;
	}

	SuperQueue(const SuperQueue & param):sizen{param.sizen},first{param.first}, last{param.last}
	{
	}

	void push(T val) 
	{
		if (sizen > 0) {
			last->next = new qnode{ val,nullptr,last };
			last = last->next;
			sizen += 1;
		}
		else {
			sizen++;
			first = new qnode{ val,nullptr,nullptr };
			last = first;
		}
	}

	void pop() {
		if (sizen > 1) {
			first = first->next;
			first->previous = nullptr;
			sizen -= 1;
		}
		else if (sizen == 1) {
			first = nullptr;
			last = nullptr;
			sizen -= 1;
		}
		
	}

	int size() {
		return sizen;
	}

	~SuperQueue()
	{
		while (sizen != 0)
		{
			pop();
		}
	}

private:

	struct qnode
	{
		T valor;
		qnode* next;
		qnode* previous;
	};

	int sizen;
	qnode* first;
	qnode* last;

};



int main()
{
	//Ejercicio 1

	fExample1<int>();
	CExample2<int, char> uno;
	node<int> n1{ 3, nullptr };
	node<char> n2{ 'a', nullptr };

	//Ejercicio 2

	double i{ 2 }, j{ 4 };

	SwapValues(i, j);

	char x{ 'a' }, y{'z'};
	
	SwapValues(x, y);

	//Ejercicio 3

	SuperQueue<int> q1;

	q1.push(3);

	q1.push(6);

	q1.push(8);
	
	SuperQueue<int> q2(q1);

	q1.pop();

	q1.size();

	q1.pop();

	q1.pop();

	q1.push(7);

	return 0;
}