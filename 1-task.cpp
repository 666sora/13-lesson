#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Input vector size: ";
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++) {
        std::cout << "Input number: ";
        std::cin >> vec[i];
    }
    int del;
    std::cout << "Input number to delete: ";
    std::cin >> del;
    for (int i = vec.size() - 1; i >= 0; i--) {
        if (vec[i] == del) {
            for (int j = i; j < vec.size() - 1; j++) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
            vec.pop_back();
        }
    }
    std::cout << "New vector: ";
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
}

/*
Пользователь вводит с клавиатуры число n, далее -- n 
целых чисел, которые нужно записать в вектор.
Потом пользователь вводит ещё одно значение.
Нужно удалить из вектора все элементы, которые 
равны данному значению, и вывести итоговое состояние вектора
*/