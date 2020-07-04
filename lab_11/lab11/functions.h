#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <stack> // first container
#include <queue> // second container
// basic type float

using namespace std;

//----------------------------------------------------------------------------------------------------------------------
float RandomFloat(float min, float max);

bool condition(float temp);

void swap(float *xp, float *yp);

void in_bubbleSort(float arr[], int n);

void de_bubbleSort(float arr[], int n);

//----------------------------------------------------------------------------------------------------------------------
void print_stack(stack<float> &temp);

void add_n_random_to_stack(stack<float> &temp, int n);

void delete_n_top_from_stack(stack<float> &temp, int n);

void stack_change(stack<float> &s1, stack<float> &s2, int pos, int n);

void sort_stack_by_decrease(stack<float> &temp);

void sort_stack_by_increase(stack<float> &temp);

float *search_for_el_in_stack(stack<float> &temp);

void add_stacks(stack<float> &s1, stack<float> &s2, queue<float> &q);

string stack_to_str(stack<float> &temp);

//----------------------------------------------------------------------------------------------------------------------
void from_stack_to_queue(stack<float> &s, queue<float> &q);

void print_queue(queue<float> &temp);

void sort_queue_by_increase(queue<float> &temp);

int number_of_el_in_queue(queue<float> &temp);

string queue_to_str(queue<float> &temp);

//----------------------------------------------------------------------------------------------------------------------




#endif // FUNCTIONS_H
