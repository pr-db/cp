def count(l):
    a = 0
    for i in l:
        if (i < 0):
            a += 1
    return a


def multiply(s1, s2):
    s1 = str(s1)
    s2 = str(s2)
    i1 = 0
    i2 = 0
    ans_s = [0] * (len(s1)+len(s2))
    for i in range(len(s1)-1, -1, -1):
        carry = 0
        i2 = 0
        for j in range(len(s2)-1, -1, -1):

            summ = int(s1[i])*int(s2[j]) + ans_s[i1 + i2] + carry
            carry = int(summ / 10)
            ans_s[i1+i2] = summ % 10
            i2 += 1
            ans_s[i1+i2] += carry
        i1 += 1
    for i in range(len(ans_s)-1, -1, -1):

        if ans_s[i] == 0:
            del ans_s[i]
        else:
            break
    result = [-1]
    for i in reversed(ans_s):
        result.append(i)
    result.remove(-1)
    s = ''.join(map(str, result))
    return s


def solution(xs):
    a = count(xs)
    ans = 1
    if(a % 2 == 0):
        for i in xs:
            if(i != 0):
                ans = multiply(abs(int(ans)), abs(int(i)))
        return ans
    else:
        xs.sort()
        for i in xs:
            if (xs[xs.index(i)+1] >= 0):
                xs.remove(i)
        for i in xs:
            if(i != 0):
                ans = multiply(abs(int(ans)), abs(int(i)))
        return ans


xs = [2, 0, 2, 2, 0]
ans = solution(xs)

print(ans)
