def selectionSort(arr:list):
    size = len(arr)
    for i in range(size):
        index = i
        for j in range(i+1, size):
            if arr[j] < arr[index]:
                index = j
        if index != i:
            arr[i], arr[index] = (arr[index], arr[i])


if __name__ == '__main__':
    array = [34, 56, 13, 97, 35, 0, 12, 78, 95, 72]
    selectionSort(array)
    print(array)