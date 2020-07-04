#include "class.h"

string printed_production::get_name() {
    return this->name;
}

void printed_production::set_name(string name1) {
    this->name = std::move(name1);
}

int printed_production::get_number_of_pages() {
    return this->number_of_pages;
}

void printed_production::set_number_of_pages(int number_of_pages1) {
    this->number_of_pages = number_of_pages1;
}

double printed_production::get_size_of_page() {
    return this->size_of_page;
}

void printed_production::set_size_of_page(double size_of_page1) {
    this->size_of_page = size_of_page1;
}

int printed_production::get_number() {
    return this->number;
}

void printed_production::set_number(int number1) {
    this->number = number1;
}

string printed_production::print() {
    return "printed_production";
}


//----------------------------------------------------------------------------------------------------------------------

int magazine::get_period() {
    return period;
}

void magazine::set_period(int period1) {
    this->period = period1;
}

string magazine::print() {
    return "magazine";
}

double magazine::paper() {
    return number * number_of_pages * size_of_page;
}

//----------------------------------------------------------------------------------------------------------------------


string book::get_author() {
    return this->author;
}

void book::set_author(string author1) {
    this->author = std::move(author1);
}

string book::print() {
    return "book";
}

double book::paper() {
    return number * number_of_pages * size_of_page;
}

//----------------------------------------------------------------------------------------------------------------------

string authorial_magazine::print() {
    return "authorial_magazine";
}

double authorial_magazine::paper() {
    return number * number_of_pages * size_of_page;
}

double authorial_magazine::paper(int days) {
    return (number * number_of_pages * size_of_page * ((int) (days / period) + 1));
}
