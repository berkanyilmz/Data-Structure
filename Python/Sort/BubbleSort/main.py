def bubbleSort(array:list):
    for i in range(len(array)):
        for j in range(len(array)-1):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]

if __name__ == '__main__':
    #arr = [34, 56, 13, 97, 35, 0, 12, 78, 95, 72]
    arr = [5,4,3,2,1]
    bubbleSort(arr)
    print(arr)