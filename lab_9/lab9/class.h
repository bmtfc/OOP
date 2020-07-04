#ifndef CLASS_H
#define CLASS_H


#include <iostream>
#include <string>
#include <utility>

using namespace std;

class printed_production {
protected:
    string name;
    int number_of_pages;
    double size_of_page;
    int number;
public:

    printed_production() {};

    virtual ~printed_production() = default;;

    printed_production(string name, int number_of_pages, double size_of_pages, int number) {
        this->name = std::move(name);
        this->number_of_pages = number_of_pages;
        this->size_of_page = size_of_pages;
        this->number = number;
    };

    string get_name();

    void set_name(string name1);

    int get_number_of_pages();

    void set_number_of_pages(int number_of_pages1);

    double get_size_of_page();

    void set_size_of_page(double size_of_page1);

    int get_number();

    void set_number(int number1);

    static string print();

    virtual double paper() = 0;

};

class magazine : virtual public printed_production {
protected:
    int period;
public:
    magazine() : printed_production() {};

    ~magazine() override = default;;

    magazine(string name, int number_of_pages, double size_of_page, int number, int period) :
            printed_production(std::move(name), number_of_pages, size_of_page, number) {
        this->period = period;
    };

    int get_period();

    void set_period(int period1);

    static string print();

    double paper() override;

};

class book : virtual public printed_production {
protected:
    string author;
public:
    book() : printed_production() {};

    ~book() override = default;;

    book(string name, int number_of_pages, double size_of_page, int number, string author) :
            printed_production(std::move(name), number_of_pages, size_of_page, number) {
        this->author = std::move(author);
    };

    string get_author();

    void set_author(string author);

    static string print();

    double paper() override;
};

class authorial_magazine : public book, public magazine {
public:
    authorial_magazine() : printed_production(){};

    ~authorial_magazine() override = default;;

    authorial_magazine(const string &name, int number_of_pages, double size_of_page, int number, string author,
                       int period) : printed_production(name, number_of_pages, size_of_page, number) {
        this->author = std::move(author);
        this->period = period;
    }


    static string print();

    double paper() override;

    double paper(int days);
};

#endif // CLASS_H
