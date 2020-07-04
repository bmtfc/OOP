#include "functions.h"


float RandomFloat(float min, float max) {
    float random = ((float) rand()) / (float) RAND_MAX;
    float range = max - min;
    return (random * range) + min;
}

bool condition(float temp) {
    return (temp > 2);
}

void swap(float *xp, float *yp) {
    float temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void in_bubbleSort(float arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

void de_bubbleSort(float arr[], int n) {
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

//----------------------------------------------------------------------------------------------------------------------

void print_stack(stack<float> &temp) {
    int size = temp.size();
    float data[size];

    for (int i = 0; i < size; i++) {
        cout << fixed << showpoint << setprecision(5) << temp.top() << "  ";
        data[i] = temp.top();
        temp.pop();
    }
    for (int i = 0; i < size; i++)
        temp.push(data[size - i - 1]);

    cout << endl;
}

void add_n_random_to_stack(stack<float> &temp, int n) {
    for (int i = 0; i < n; i++)
        temp.push(RandomFloat(0, 10));
}

void delete_n_top_from_stack(stack<float> &temp, int n) {
    for (int i = 0; i < n; i++)
        temp.pop();
}

void stack_change(stack<float> &s1, stack<float> &s2, int pos, int n) {
    auto temp = new float[pos];
    int s2_size = s2.size();

    for (int i = 0; i < pos; i++) {
        temp[i] = s1.top();
        s1.pop();
    }

    delete_n_top_from_stack(s1, n);
    auto data_s2 = new float[s2.size()];

    for (int i = 0; i < s2_size; i++) {
        data_s2[i] = s2.top();
        s2.pop();
    }
    for (int i = 0; i < s2_size; i++) {
        s2.push(data_s2[s2_size - i - 1]);
        s1.push(data_s2[s2_size - i - 1]);
    }
    for (int i = 0; i < pos; i++)
        s1.push(temp[pos - i - 1]);

    delete[] temp;
    delete[] data_s2;
}

void sort_stack_by_decrease(stack<float> &temp) {
    int size = temp.size();

    auto arr = new float[size];

    for (int i = 0; i < size; i++) {
        arr[i] = temp.top();
        temp.pop();
    }

    de_bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
        temp.push(arr[size - i - 1]);

    delete[] arr;
}

void sort_stack_by_increase(stack<float> &temp) {
    int size = temp.size();

    auto arr = new float[size];

    for (int i = 0; i < size; i++) {
        arr[i] = temp.top();
        temp.pop();
    }

    in_bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
        temp.push(arr[size - i - 1]);

    delete[] arr;
}

float *search_for_el_in_stack(stack<float> &temp) {
    int size = temp.size();
    auto arr = new float[size];

    for (int i = 0; i < size; i++) {
        arr[i] = temp.top();
        temp.pop();
    }

    for (int i = 0; i < size; i++)
        temp.push(arr[size - i - 1]);

    for (int i = 0; i < size; i++)
        if (condition(arr[i]))
            return &(arr[i]);


    delete[] arr;
    return nullptr;
}

void add_stacks(stack<float> &s1, stack<float> &s2, queue<float> &q) {
    int size1 = s1.size();
    int size2 = s2.size();

    auto temp1 = new float[size1];
    auto temp2 = new float[size2];


    for (int i = 0; i < size1; i++) {
        temp1[i] = s1.top();
        q.push(s1.top());
        s1.pop();
    }

    for (int i = 0; i < size1; i++)
        s1.push(temp1[size1 - i - 1]);


    for (int i = 0; i < size2; i++) {
        temp2[i] = s2.top();
        q.push(s2.top());
        s2.pop();
    }

    for (int i = 0; i < size2; i++)
        s2.push(temp2[size2 - i - 1]);


    delete[] temp1;
    delete[] temp2;
}

string stack_to_str(stack<float> &temp) {
    ostringstream stream;
    int size = temp.size();
    float data[size];

    for (int i = 0; i < size; i++) {
        stream << fixed << showpoint << setprecision(5) << temp.top() << "  ";
        data[i] = temp.top();
        temp.pop();
    }
    for (int i = 0; i < size; i++)
        temp.push(data[size - i - 1]);

    string str = stream.str();
    return str;

}

//----------------------------------------------------------------------------------------------------------------------

void from_stack_to_queue(stack<float> &s, queue<float> &q) {
    int size = s.size();
    auto arr = new float[size];

    for (int i = 0; i < size; i++) {
        q.push(s.top());
        arr[i] = s.top();
        s.pop();
    }

    for (int i = 0; i < size; i++)
        s.push(arr[size - i - 1]);

    delete[] arr;
}

void print_queue(queue<float> &temp) {
    int size = temp.size();
    auto arr = new float[size];


    for (int i = 0; i < size; i++) {
        cout << fixed << showpoint << setprecision(5) << temp.front() << "  ";
        arr[i] = temp.front();
        temp.pop();
    }
    for (int i = 0; i < size; i++)
        temp.push(arr[i]);

    cout << endl;

    delete[] arr;
}

void sort_queue_by_increase(queue<float> &temp) {
    int size = temp.size();

    auto arr = new float[size];

    for (int i = 0; i < size; i++) {
        arr[i] = temp.front();
        temp.pop();
    }

    in_bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
        temp.push(arr[i]);

    delete[] arr;
}

int number_of_el_in_queue(queue<float> &temp) {
    int size = temp.size();
    auto arr = new float[size];

    int elements = 0;

    for (int i = 0; i < size; i++) {
        arr[i] = temp.front();
        if (condition(arr[i]))
            elements++;
        temp.pop();
    }

    for (int i = 0; i < size; i++)
        temp.push(arr[i]);

    delete[] arr;
    return elements;
}

string queue_to_str(queue<float> &temp){
    ostringstream stream;
    int size = temp.size();
    auto arr = new float[size];


    for (int i = 0; i < size; i++) {
        stream << fixed << showpoint << setprecision(5) << temp.front() << "  ";
        arr[i] = temp.front();
        temp.pop();
    }
    for (int i = 0; i < size; i++)
        temp.push(arr[i]);

    delete[] arr;;
    string str = stream.str();
    return str;
}
