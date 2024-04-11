#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary - Searches for a value in an array of integers using the
 *                 binary search algorithm.
 * @array: Pointer to the first element of array.
 * @size: Size of the array.
 * @value: the target.
 *
 * Return: - If array is NULL or value is not present, return -1.
 *         - Else, return the value.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    return (advanced_binary_recur(array, 0, size - 1, value));
}

/**
 * advanced_binary_recur - Searches for a value in an array of integers using
 *                 binary search algorithm.
 * @array: Pointer to the first element of array.
 * @left: left index.
 * @right: right index.
 * @value: the target.
 *
 * Return: - If array is NULL or value is not present, return -1.
 *         - Else, return the value.
 */
int advanced_binary_recur(int *array, size_t left, size_t right, int value)
{
    size_t mid;

    if (right < left)
        return (-1);

    print_array(array, left, right);

    mid = left + (right - left) / 2;
    if (array[mid] == value && (mid == left || array[mid - 1] != value))
        return (mid);

    if (array[mid] >= value)
        right = mid;
    else
        left = mid + 1;

    return (advanced_binary_recur(array, left, right, value));
}

/**
 * print_array - prints the elements of an integer array.
 * @array: Pointer to the first element of array.
 * @start: Start index.
 * @end: End index.
 *
 * Return: None.
 */
void print_array(int *array, size_t start, size_t end)
{
    size_t i;

    printf("Searching in array: ");
    for (i = start; i < end; i++)
        printf("%d, ", array[i]);
    printf("%d\n", array[i]);
}
