#ifndef UNTITLED_BUILDER_H
#define UNTITLED_BUILDER_H

#include <iostream>
#include <string>

class Product {
public:
    void addPart(const std::string& part) {
        parts += part + " ";
    }

    void show() const {
        std::cout << "Product parts: " << parts << std::endl;
    }

private:
    std::string parts;
};

class Builder {
public:
    virtual void buildFirstPart() = 0;
    virtual void buildSecondPart() = 0;
    virtual void buildThirdPart() = 0;
};

class ConcreteBuilder : public Builder {
public:
    ConcreteBuilder() : product(new Product()) {}

    void buildFirstPart() override {
        product->addPart("Part A");
    };

    void buildSecondPart() override {
        product->addPart("Part B");
    };

    void buildThirdPart() override {
        product->addPart("Part C");
    };

    Product* getResult() {
        return product;
    }

private:
    Product* product;
};

class Director {
public:
    void construct(Builder* builder) {
        builder->buildFirstPart();
        builder->buildSecondPart();
        builder->buildThirdPart();
    }
};

#endif //UNTITLED_BUILDER_H
