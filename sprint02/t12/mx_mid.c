int mx_mid(int a, int b, int c) {
    int temp;
    
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    return b;
}
