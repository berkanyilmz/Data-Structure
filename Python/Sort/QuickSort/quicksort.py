def quickSort(arr:list, beg, end):
    if beg < end:
        pivot = divide(arr, beg, end)
        quickSort(arr, beg, pivot-1)
        quickSort(arr, pivot+1, end)

def divide(arr:list, beg, end):
    x = arr[end]
    i = beg - 1
    for j in range(beg, end):
        if arr[j] <= x:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]
    arr[i+1], arr[end] = arr[end], arr[i+1]
    return i+1