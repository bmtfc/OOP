#ifndef INC_12LAB2PZ_OVERFLOWEXCEPTION_H
#define INC_12LAB2PZ_OVERFLOWEXCEPTION_H

#include "exception"

class OverflowException : public std::exception {
    const char *what() const noexcept{
        return "OverflowException";
    }
};


#endif
