#ifndef LETTERFORMATEXCEPTION_H
#define LETTERFORMATEXCEPTION_H
#include <exception>
class LetterFormatException: public std::exception {
    const char *what() const noexcept{
        return "LetterFormatException";
    }
};

#endif // LETTERFORMATEXCEPTION_H
