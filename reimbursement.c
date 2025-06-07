#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        return 1;
    }

    double days = atof(argv[1]);
    double miles = atof(argv[2]);
    double receipts = atof(argv[3]);

    double result = days * 100.0 + miles * 0.5 + receipts;

    printf("%.2f\n", result);
    return 0;
}
