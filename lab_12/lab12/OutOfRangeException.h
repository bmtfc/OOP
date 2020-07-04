#ifndef OUTOFRANGEEXEPTION_H
#define OUTOFRANGEEXEPTION_H
#include <exception>
class OutOfRangeException: public std::exception {
    const char *what() const noexcept{
        return "OutOfRangeException";
    }
};
#endif // OUTOFRANGEEXEPTION_H
