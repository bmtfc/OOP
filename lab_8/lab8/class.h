#ifndef CLASS_H
#define CLASS_H
#include <iostream>

class printed_production
{
protected:
    char name[100]={'\0'};
    int number_of_pages{};
public:
    printed_production()= default;; // +
    printed_production(const char name[100], int number_of_pages); // +
    ~printed_production()= default;;
    char* get_name(); // +
    int get_number_of_pages(); // +
    void set_name(const char name[100]); // +
    void set_number_of_pages(int number_of_pages); // +
    char* print(); // +
    char* print(int num); // +

};

class magazine : public printed_production
{
private:
    double size_of_page{};
    int number{};
    int period{};
public:
    magazine()= default;;
    ~magazine()= default;;
    magazine(const char name[100], int number_of_pages, double size_of_page, int number, int period);
    double get_size_of_page();
    int get_number();
    int get_period();
    void set_size_of_page(double size_of_page);
    void set_number(int number);
    void set_period(int period);
    char* print();
    double paper();

};

class book : public  printed_production
{
private:
    char author[100]={'\0'};
    double size_of_page{};
    int number{};
public:
    book()= default;;
    ~book()= default;;
    book(const char name[100], int number_of_pages, double size_of_page, int number, const char author[100]);
    double get_size_of_page();
    int get_number();
    char* get_author();
    void set_size_of_page(double size_of_page);
    void set_number(int number);
    void set_author(const char author[100]);
    char* print();
    double paper();
};


#endif // CLASS_H
