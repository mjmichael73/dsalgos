def bubble_sort(arr, n):
    flag = True
    for i in range(n-1):
        flag = False
        for j in range(n-i-1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j+1] = arr[j+1], arr[j]
                flag = True
        if not flag:
            break
    return arr

my_arr = [1, 5, 7, 8, 3, 2]
print(bubble_sort(my_arr, len(my_arr)))