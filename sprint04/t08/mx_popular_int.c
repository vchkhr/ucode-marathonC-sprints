int mx_popular_int(const int *arr, int size) {
    int max_freq = 0;
    int ans = -1;

    for (int i = 0; i < size - 1; i++) {
        int curr_freq = 1;

        for (int j = i + 1; j < size - 1; j++)
            if (arr[j] == arr[i])
                curr_freq = curr_freq + 1;

        if (max_freq < curr_freq) {
            max_freq = curr_freq;
            ans = arr[i];
        }
        else if (max_freq == curr_freq && ans >= arr[i])
            ans = arr[i];
    }
    
    return ans;
}
