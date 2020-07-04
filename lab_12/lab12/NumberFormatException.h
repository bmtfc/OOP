#ifndef INC_12LAB2PZ_NUMBERFORMATEXCEPTION_H
#define INC_12LAB2PZ_NUMBERFORMATEXCEPTION_H
#include <exception>

class NumberFormatException: public std::exception {
    const char *what() const noexcept{
        return "NumberFormatException";
    }
};


#endif
