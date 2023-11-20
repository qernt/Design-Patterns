#ifndef UNTITLED_FACTORYMETHODE_H
#define UNTITLED_FACTORYMETHODE_H

class Transport{
public:
    virtual void use() const = 0;
    virtual ~Transport(){}
};

class Plane : public Transport{
public:
    void use() const override {
        std::cout << "Plane" << std::endl;
    }
};

class Truck : public Transport{
public:
    void use() const override {
        std::cout << "Truck" << std::endl;
    }
};

class Creator{
public:
    virtual Transport* factoryMethode() const = 0;
    virtual ~Creator(){}

    void createTransportAndUse() const{
        Transport* transport = factoryMethode();
        transport->use();
        delete transport;
    }
};

class PlaneCreator : public Creator{
public:
    Transport* factoryMethode() const override{
        return new Plane();
    }
};

class TruckCreator : public Creator{
public:
    Transport* factoryMethode() const override{
        return new Truck();
    }
};

#endif //UNTITLED_FACTORYMETHODE_H
