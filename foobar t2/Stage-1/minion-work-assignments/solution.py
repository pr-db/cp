def solution(data, n):
    data.sort()
    maxi = max(data)
    hs = [0]*(maxi+1)
    for i in range(0, len(data), 1):
        hs[data[i]] += 1
    d = data[:]
    for i in range(0, len(d), 1):
        if hs[d[i]] > n:
            while(1):
                try:
                    data.remove(d[i])
                    hs[d[i]] -= 1
                except:
                    break
    return data


data = solution([1, 2, 2, 3, 3, 3, 4, 5, 5], 1)
print(data)
