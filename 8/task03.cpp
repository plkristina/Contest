#include <vector>

int* new_array(int len, int value) {
    int *array = new int;
    for (int i = 0; i < len; ++i) {
        array[i] = value;
    }
    return array;
}

int set_new_length(int** array, int old_len, int new_len) {
    int* arr = new int[old_len];
    for (int i = 0; i < old_len; ++i) {
        arr[i] = (*array)[i];
    }
    *array = new int[new_len];
    for(int i = 0; i < new_len; ++i) {
        if (i > old_len) {
            array[i] = 0;
        } else {
            (*array)[i] = arr[i];
        }
    }
    return new_len;
}

int merge(int** dest_array, int len_dest_array, const int* src_array, int len_src_array) {
    int k = 0;
    std::vector<int> arr(len_dest_array);
    while (len_src_array != 0) {
        if (len_dest_array <= 0) {
            arr.push_back(src_array[k]);
        } else {
            arr[k] = src_array[k];
        }
        ++k;
        --len_src_array;
        --len_dest_array;
    }
    int *ar = new int;
    for (int i = 0; i < arr.size(); ++i) {
        ar[i]  = arr[i];
    }
    **dest_array = *ar;
    return arr.size();
}

int dot(const int* a, const int* b, int len) {
    int sum = 0;
    if (len == 0) {
        return 0;
    }
    for (int i = 0; i < len; ++i) {
        sum += (a[i] * b[i]);
    }
    return sum;
}

int* find(int* array, int len, int value) {
    for (int i = 0; i < len; ++i) {
        if (array[i] == value) {
            return &array[i];
        }
    }
    return nullptr;
}

void delete_array(int** array) {
    if (*array == nullptr) {
        delete [] array;
        *array = nullptr;
    }
}
