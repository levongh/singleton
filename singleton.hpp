#pragma once

class Singleton
{
private:
    static Singleton* s_instance;

private:
    /*
     * @brief Default constructor
     */
    Singleton() = default;

    /*
     * @brief Copy constructor
     */
    Singleton (const Singleton&) = delete;

    /*
     * @brief Copy assignment operator
     */
    Singleton& operator=(const Singleton&) = delete;

    /*
     * @brief Destructor
     */
    ~Singleton();

public:
    /*
     * @brief create the singleton object if it is not exist and returns this object
     * \ if it is exist returns it.
     */
    static Singleton* get_instance();

    /*
     * @brief removes the singleton object
     */
    static void remove_instance();
};
