/*Circular Queue Using Array
  Name: M Yahya*/

#include <iostream>
using namespace std;

template <typename T>
class Queue {
public:
	int front, rear = 0;
	int size = 0;
	T* arr;
	Queue(int s, T j) {
		size = s;
		arr = new T[size];
		for (int i = 0; i < size; i++) {
			arr[i] = j;
		}
	}

	bool isFull() {
		if (rear == front && rear != 0) {
			return true;
		}
		else {
			return false;
		}
	}

	bool isEmpty() {
		if (front == rear) {
			return true;
		}
		else {
			return false;
		}
	}

	void enQueue(T value) {
		if (rear == size && front != 0) {
			rear = 0;
		}
		if (!isFull()) {
			arr[rear] = value;
			rear++;
		}
		else {
			cout << "Array is Full!\n";
		}
	}

	void deQueue() {
		if (!isEmpty()) {
			int i = -1;
			arr[front] = i;
			front++;
		}
	}

	void display() {
		cout << "\nDisplaying Current Array: \n";
		for (int i = 0; i < size; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main() {
	cout << "\t For String Type\n";
	Queue<string> str(5, "null");
	str.enQueue("How ");
	str.enQueue("was ");
	str.enQueue("the ");
	str.enQueue("wonderland, ");
	str.enQueue("Alice! ");
	str.display();

	cout << "\n\n Now deleting..\n";
	str.deQueue();
	str.deQueue();
	str.display();

	cout << "\n\n Again Adding..\n";
	str.enQueue("pretty ");
	str.enQueue("good ");
	str.enQueue("she ");
	str.enQueue("replied. ");
	str.display();

	cout << "\n\n***************\n";
	cout << "\t For Int Type\n";
	Queue<int> num(5, -1);
	num.enQueue(10);
	num.enQueue(20);
	num.enQueue(30);
	num.enQueue(40);
	num.enQueue(50);
	num.display();

	cout << "\n\n Now deleting..\n";
	num.deQueue();
	num.deQueue();
	num.display();

	cout << "\n\n Again Adding..\n";
	num.enQueue(70);
	num.enQueue(80);
	num.enQueue(90);
	num.enQueue(60);
	num.display();

	cout << "\n\n***************\n";
	cout << "\t For Float Type\n";
	Queue<float> frac(5, -1);
	frac.enQueue(10.5);
	frac.enQueue(20.12);
	frac.enQueue(30.33);
	frac.enQueue(40.25);
	frac.enQueue(50.23);
	frac.display();

	cout << "\n\n Now deleting..\n";
	frac.deQueue();
	frac.deQueue();
	frac.display();

	cout << "\n\n Again Adding..\n";
	frac.enQueue(70.77);
	frac.enQueue(80.00);
	frac.enQueue(90.25);
	frac.enQueue(60.10);
	frac.display();

	system("pause");
	return 0;
}