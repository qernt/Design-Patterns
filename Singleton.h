#ifndef UNTITLED_SINGLETON_H
#define UNTITLED_SINGLETON_H

class Singleton{
public:
    static Singleton& gitInstance(){
        static Singleton instance;
        return instance;
    }

    void someFunction() {
        std::cout << "Hello Singleton" << std::endl;
    }

private:
    Singleton(){}
    ~Singleton(){}

    Singleton(const Singleton&) = delete;
    Singleton operator=(const Singleton&) = delete;
};

#endif //UNTITLED_SINGLETON_H
