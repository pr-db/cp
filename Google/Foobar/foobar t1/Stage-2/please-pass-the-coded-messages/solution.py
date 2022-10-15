def convert(l):
    l.sort(reverse=True)
    s = [str(i) for i in l]
    res = int("".join(s))
    return res


def remove(l, e1, e2):
    if(e1 >= 0 and e2 >= 0):
        l.remove(e1)
        l.remove(e2)
        return l
    elif(e1 >= 0):
        l.remove(e1)
        return l


def solution(l):
    l.sort()
    if(sum(l) % 3 == 0):
        ans = convert(l)
        return ans
    elif (sum(l) % 3 == 1):
        rem2 = [0]*2
        for i in l:
            if(i % 3 == 1):
                l = remove(l, i, -1)
                ans = convert(l)
                return ans
            elif(i % 3 == 2):
                if(rem2[0] == 0):
                    #l = remove(l, i, -1)
                    rem2[0] = i
                elif(rem2[1] == 0):
                    #l = remove(l, i, -1)
                    rem2[1] = i
        if(rem2[0] != 0 and rem2[1] != 0):
            l = remove(l, rem2[0], rem2[1])
            ans = convert(l)
            return ans

    elif (sum(l) % 3 == 2):
        rem2 = [-1]*2
        for i in l:
            if(i % 3 == 2):
                l = remove(l, i, -1)
                ans = convert(l)
                return ans
            elif(i % 3 == 1):
                if(rem2[0] == 0):
                    #l = remove(l, i, -1)
                    rem2[0] = i
                elif(rem2[1] == 0):
                    #l = remove(l, i, -1)
                    rem2[1] = i
        if(rem2[0] != -1 and rem2[1] != -1):
            l = remove(l, rem2[0], rem2[1])
            ans = convert(l)
            return ans


l = [4,3,2,1]
ans = solution(l)
print(ans)
