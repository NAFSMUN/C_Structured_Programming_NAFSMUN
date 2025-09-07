

int main() {
    for(int i = 1; i <= 4; i++) {           // Outer loop (lines)
        for(int j = 1; j <= i; j++) {       // Inner loop (numbers in each line)
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
