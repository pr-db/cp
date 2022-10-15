def solution(l):
    ct = [0] * len(l)
    j = 0
    fct = 0
    while(j < len(l)):
        for i in range(0, j, 1):
            if l[j] % l[i] == 0 and j != i:
                ct[j] += 1
                fct += ct[i]
        j += 1
    return fct


l = [1, 2, 4, 8, 9, 10]
ans = solution(l)
print(ans)
