#include <iostream>
#include <vector>

int main() {
    int countPrice;
    std::cout << "Input count of price: ";
    std::cin >> countPrice;
    std::vector<float> vecPrice(countPrice);
    int countProduct;
    std::cout << "Input count of product: ";
    std::cin >> countProduct;
    std::vector<int> vecProduct(countProduct);
    for (int i = 0; i < vecPrice.size(); i++) {
        std::cout << "Input price: ";
        std::cin >> vecPrice[i];
    }
    float sum = 0;
    for (int i = 0; i < vecProduct.size(); i++) {
        std::cout << "Input product: ";
        std::cin >> vecProduct[i];
        sum += vecPrice[vecProduct[i]];
    }
    std::cout << "Sum is " << sum;
}

/*
С помощью списка инициализации задаётся вектор цен на продукты
(дробными числами). Так же, с помощью списка инициализации,
задаётся вектор покупок (в виде индексов), которые совершает
человек. Необходимо вывести на экран итоговую стоимость покупок
*/