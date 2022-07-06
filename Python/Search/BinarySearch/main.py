def binarySearch(arr:list, val:int):
    size = len(arr)
    beg = 0
    end = size - 1
    mid = int ((beg + end) / 2)

    while beg < end:
        if arr[mid] is val:
            return mid
        elif arr[mid] < val:
            beg = mid + 1
        else:
            end = mid - 1
        mid = int((beg + end) / 2)

    return -1



def binarySearchRecursive(arr:list, beg, mid, end, val:int):
    if beg <= end:
        if val == arr[mid]:
            return mid
        elif val < arr[mid]:
            end = mid - 1
        else:
            beg = mid + 1
        mid = int((beg + end) / 2)
        return binarySearchRecursive(arr, beg, mid, end, val)
    return -1




arr = list()

for i in range(15):
    arr.append((2*i) - 1)

index = binarySearch(arr, 13)
print('Index : {}'.format(index))

mid = int(len(arr) / 2)
index = binarySearchRecursive(arr, 0, mid, len(arr)-1, 17)
print('Index : {}'.format(index))