#include "singleton.hpp"

Singleton* Singleton::s_instance = nullptr;

Singleton* Singleton::get_instance()
{
    if (nullptr == s_instance) {
        s_instance = new Singleton();
    }
    return s_instance;
}

void Singleton::remove_instance()
{
    delete s_instance;
    s_instance = nullptr;
}

Singleton::~Singleton()
{
}
