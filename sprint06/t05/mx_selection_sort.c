int mx_strcmp(const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char** arr, int size) {
    int count = 0;

    for (int i = 0; i < size - 1; i++) {
        int jmin = i;

        for (int j = i + 1; j < size; j++)
            if (mx_strlen(arr[j]) < mx_strlen(arr[jmin]))
                jmin = j;
            else if (mx_strlen(arr[j]) == mx_strlen(arr[jmin]))
                if (mx_strcmp(arr[j], arr[jmin]) < 0)
                    jmin = j;


        if (jmin != i) {
            char* temp = arr[i];
            arr[i] = arr[jmin];
            arr[jmin] = temp;
            count += 1;
        }
    }

    return count;
}
