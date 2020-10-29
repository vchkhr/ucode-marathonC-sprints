int mx_strlen(const char *s);

int mx_insertion_sort(char** arr, int size) {
    int i = 1;
    int c = 0;

    while (i < size) {
        int j = i;

        while (j > 0 && mx_strlen(arr[j - 1]) > mx_strlen(arr[j])) {
            char* temp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = temp;
            j -= 1;
            c += 1;
        }

        i = j + 1;
    }

    return c;
}
