# def add(x, y):
#     sx = str(x)[::-1]
#     sy = str(y)[::-1]

#     sxy = [0]*(max(len(sx), len(sy))+1)
#     car = [0]*(max(len(sx), len(sy))+1)
#     ans = ""
#     if(len(sx) > len(sy)):
#         for i in range(0, len(sy), 1):
#             car[i+1] = int((int(sx[i])+int(sy[i]))/10)
#             sxy[i] = int((int(sx[i])+int(sy[i])) % 10)+car[i]
#         for i in range(len(sy), len(sx), 1):
#             sxy[i] = int(sx[i]) + car[i]

#     else:
#         for i in range(0, len(sx), -1):
#             car[i+1] = int((int(sx[i])+int(sy[i]))/10)
#             sxy[i] = int((int(sx[i])+int(sy[i])) % 10)+car[i]
#         for i in range(len(sy), len(sx), 1):
#             sxy[i] = int(sx[i])+car[i]
#         print(i)
#     sxy.reverse()
#     if(sxy[0] == 0):
#         sxy.remove(0)

#     ans = ''.join(map(str, sxy))
#     return ans

def solution(x, y):
    num = 1
    for i in range(2, x+y, 1):
        if(i <= x):
            num += i
        else:
            num += i-1
    return str(num)

num = solution(8, 6)
print(num)
