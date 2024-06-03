def binarySearch(arr, x):
    #return the left most index >= x
    l, r = 0, len(arr) - 1
    while l <= r:
        mid = (l + r) // 2
        if arr[mid] >= x:
            r = mid - 1
        else:
            l = mid + 1
    return l

def variantsCount(n, s0, k, b, m, a):
    s = [s0]
    for i in range(1, n):
        s.append(((k * s[i - 1] + b) % m + 1) + s[i-1])
    s.sort()
    ans = 0
    l = n - 1
    for i in range(n):
        while(s[i] * s[l] > a):
            l-=1
        # print(s[i], s[l])
        # ans += l+1
        if s[i] * s[l] <= a:
            ans += l+1
    return ans
    # return 1
# print(variantsCount(3, 1, 1, 1, 2, 4))
print(variantsCount(100, 9507446,279028249,366009408,10000000,37537747383873671))
# print(variantsCount(6400, 144004, 734447009, 641444128, 156250, 133569786650168926))