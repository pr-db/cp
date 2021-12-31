def solution(l):
    ct = [0] * len(l)
    j = 0
    fct = 0
    while(j < len(l)):

        for i in range(0,j+1,1):
            if l[j] % l[i] == 0 and j != i:
                ct[j] += 1
                fct += ct[i]
            elif l[i] > l[j]:
                break
        j += 1
    print(ct)
    return fct


l = [1, 1,1,1]
lr = [1, 2, 3, 4, 5, 6]

ans = solution(l)
print(ans)

# l.sort(reverse=True) 
# lr = l[:]
# print (lr)
# l.sort()
# print(lr)