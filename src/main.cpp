#define USE_MAIN

#include <utility>

#define STACK_MAX_SIZE 8

template<typename T>
class Stack {
protected:
	T m_data[STACK_MAX_SIZE];
	int m_size;

public:
	Stack() {
		m_size = 0;
	}

	void push(T& _value) {
		if (m_size < STACK_MAX_SIZE) {
			m_data[m_size++] = std::move(_value);
		}
	}

	void push(T&& _value) {
		if (m_size < STACK_MAX_SIZE) {
			m_data[m_size++] = _value;
		}
	}

	T pop() {
		if (m_size - 1 >= 0) {
			T _temp = m_data[--m_size];
			return _temp;
		}
		return 0;
	}

    int size() {
        return m_size;
    }
};

#ifdef USE_MAIN

#include <iostream>

using namespace std;

int main() {
	Stack<int> data;
	data.push(10);
	data.push(20);
	data.push(30);

	cout << data.pop() << endl;
	cout << data.pop() << endl;
	cout << data.pop() << endl;

	return 0;
}

#endif