def insertionSort(arr:list):
    size = len(arr)
    for i in range(1, size):
        j = i
        while j != 0 and arr[j] < arr[j-1]:
            arr[j], arr[j-1] = (arr[j-1], arr[j])
            j -= 1


if __name__ == '__main__':
    array = [45, 32, 98, 76, 42, 0,13, 46, 79, 41, 58, 37]
    insertionSort(array)
    print(array)