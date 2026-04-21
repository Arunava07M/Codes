#Binary Search

def binarySearch(n,tar):
    start = 0
    end = len(n) - 1
    while(start <= end):
        mid = start + (end - start)// 2
        if(tar == n[mid]):
            print(f"target found at index {mid}")
            break
        elif(tar > n[mid]):
            start = mid + 1
        else:
            end = mid - 1
    
n = [99,56,78,43,27]
n.sort()
tar = 78
binarySearch(n,tar)