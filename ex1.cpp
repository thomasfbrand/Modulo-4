#include iostream
#include string

int total = 0;

int main(int medida, int min, int max) {
    int total = 0;
    total = (medida - min) * 100 / (max - min);
    return total;
}

