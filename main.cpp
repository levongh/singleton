#include "singleton.hpp"

int main(int argc, char** argv)
{
    Singleton* obj = Singleton::get_instance();
    //TODO add functonality tesing
    obj->remove_instance();

    return 0;
}
