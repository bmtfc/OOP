#ifndef INC_12LAB2PZ_UNSUPPORTEDBASEEXCEPTION_H
#define INC_12LAB2PZ_UNSUPPORTEDBASEEXCEPTION_H
#include <exception>
class UnsupportedBaseException: public std::exception {
    const char *what() const noexcept{
        return "UnsupportedBaseException";
    }
};
#endif
