// xz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

void create_array(int* a, int size)
{
	for (int i = 0; i < size;i++) {
		*(a + i) = rand() % 9;
	}
}

void show_array(int* a, int size)
{
	for (int i = 0; i < size;i++) {
		cout << *(a+i) << " ";
	}
}

int find_size_array(int* a, int size1, int* b, int size2)
{
	int count = 0;
	for (int i = 0; i < size1;i++) {
		bool flag = true;
		for (int j = 0; j < size2;j++) {
			if (*(a + i) == *(b + j)) {
				flag = false;
			}

			if (flag) {
				count++;
			}
		}
	}
	return count;
}
int main() {
	int m;
	int n;
	int* ptr1;
	int* ptr2;
	cin >> m >> n;
	ptr1 = new int[m];
	ptr2 = new int[n];
	create_array(ptr1, m);
	create_array(ptr2, n);
	show_array(ptr1, m);
	cout << "\n";
	show_array(ptr2, n);
	find_size_array(ptr1, m, ptr2, n);

}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
