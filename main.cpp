#include <iostream>
#include <string>
#include "Singleton.h"
#include "FactoryMethode.h"
#include "Builder.h"

int main() {
    std::cout << "Singleton" << std::endl;

    Singleton& instance = Singleton::gitInstance();
    instance.someFunction();

    std::cout << "---------------------" << std::endl;

    std::cout << "Factory methode" << std::endl;

    Creator* first = new PlaneCreator();
    first->createTransportAndUse();
    delete first;

    Creator* second = new TruckCreator();
    second->createTransportAndUse();
    delete second;

    std::cout << "---------------------" << std::endl;

    std::cout << "Builder" << std::endl;

    ConcreteBuilder builder;
    Director director;

    director.construct(&builder);
    Product* product = builder.getResult();
    product->show();

    delete product;


    return 0;
}
