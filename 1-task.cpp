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
    std::vector<int> newVec;
    for (int i = 0; i < vec.size(); i++) {
        if (vec[i] != del) {
            newVec.push_back(vec[i]);
        }
    }
    std::cout << "New vector: ";
    for (int i = 0; i < newVec.size(); i++) {
        std::cout << newVec[i] << " ";
    }
}

/*
Пользователь вводит с клавиатуры число n, далее -- n 
целых чисел, которые нужно записать в вектор.
Потом пользователь вводит ещё одно значение.
Нужно удалить из вектора все элементы, которые 
равны данному значению, и вывести итоговое состояние вектора
*/