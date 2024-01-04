//find the sum of elements in an array
int main() {
    int n, i;
    int sum = 0;
    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    // Declare an array of size n
    int array[n];
    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    // Calculate the sum of elements in the array
    for (i = 0; i < n; i++) {
        sum += array[i];
    }
    // Display the result
    printf("Sum of elements in the array: %d\n", sum);
    return 0;
}
