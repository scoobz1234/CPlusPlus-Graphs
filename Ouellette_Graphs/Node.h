#pragma once

template <class T>
class Node
{

public:
	Node<T>(T _data, Node<T>* _next)
	{
		data = _data;
		next = _next;
	};

protected:

	T data;
	Node<T>* next;
};

