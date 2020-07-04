#include "class.h"

printed_production::printed_production(const char *name, int number_of_pages) {
    strcpy(this->name, name);
    this->number_of_pages = number_of_pages;
}

char* printed_production::print() {
    char *str = new char[100];
    str = "printed_production";
    return str;
}

char* printed_production::print(int num) {
    char *str = new char[100];
    str = "printed_production with num";
    return str;
}

char* printed_production::get_name(){
    return name;
}

int printed_production::get_number_of_pages(){
    return number_of_pages;
}

void printed_production::set_name(const char name[100]) {
    strcpy(this->name, name);
}

void printed_production::set_number_of_pages(int number_of_pages) {
    this->number_of_pages = number_of_pages;
}

//-------------------------------------------------------------------------------------

magazine::magazine(const char *name, int number_of_pages, double size_of_page, int number, int period) {
    strcpy(this->name, name);
    this->number_of_pages = number_of_pages;
    this->size_of_page = size_of_page;
    this->number = number;
    this->period = period;
}

double magazine::get_size_of_page() {
    return size_of_page;
}

int magazine::get_number() {
    return number;
}

int magazine::get_period() {
    return period;
}

void magazine::set_size_of_page(double size_of_page) {
    this->size_of_page = size_of_page;
}

void magazine::set_number(int number) {
    this->number = number;
}

void magazine::set_period(int period) {
    this->period = period;
}

char* magazine::print() {
    char *str = new char[8];
    str = "magazine";
    return str;
}

double magazine::paper(){
    return number_of_pages*size_of_page*number;
}


//-------------------------------------------------------------------------------------

book::book(const char *name, int number_of_pages, double size_of_page, int number,const char author[100]) {
    strcpy(this->name, name);
    this->number_of_pages = number_of_pages;
    this->size_of_page = size_of_page;
    this->number = number;
    strcpy(this->author,author);
}

double book::get_size_of_page() {
    return size_of_page;
}

int book::get_number() {
    return number;
}

char* book::get_author() {
    return author;
}

void book::set_size_of_page(double size_of_page) {
    this->size_of_page = size_of_page;
}

void book::set_number(int number) {
    this->number = number;
}

void book::set_author(const char author[100]) {
    strcpy(this->author, author);
}

char* book::print() {
    char *str = new char[4];
    str = "book";
    return str;
}

double book::paper(){
    return number_of_pages*size_of_page*number;
}
