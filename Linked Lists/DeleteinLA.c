

#include <stdio.h>

int main() {
    int arr[100];
    int size, i, index;


    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

  
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

   
    printf("Enter the index of the element to delete (0 to %d): ", size - 1);
    scanf("%d", &index);

   
    if (index < 0 || index >= size) 
{
        printf("Error: Invalid index. Deletion is not possible.\n");
    }
 else 
{
        //  Shift elements to the left
        for (i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
