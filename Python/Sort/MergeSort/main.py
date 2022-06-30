def merge(arr:list, beg, mid, end):
    beg = int(beg)
    mid = int(mid)
    end = int(end)
    n1 = mid - beg + 1
    n2 = end - mid

    leftArray = list()
    rightArray = list()

    for i in range(n1):
        leftArray.append(arr[beg+i])

    for j in range(n2):
        rightArray.append(arr[mid+1+j])

    i = 0
    j = 0
    k = beg

    while (i < n1) and (j < n2):
        if leftArray[i] < rightArray[j]:
            arr[k] = leftArray[i]
            i += 1
        else:
            arr[k] = rightArray[j]
            j += 1
        k += 1

    while i < n1:
        arr[k] = leftArray[i]
        i += 1
        k += 1

    while j < n2:
        arr[k] = rightArray[j]
        j += 1
        k += 1


def mergeSort(arr:list, beg, end):
    if beg < end:
        mid = int(beg + end) / 2
        mergeSort(arr, beg, mid)
        mergeSort(arr, mid+1, end)
        merge(arr, beg, mid, end)


def printList(arr:list):
    for i in arr:
        print(i, end=" ")
    print()


if __name__ == '__main__':
    arr = [5,3,1,4,2]
    printList(arr)
    mergeSort(arr, 0, len(arr)-1)
    printList(arr)