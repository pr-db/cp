def solution(l):
#     ct = [0] * len(l)
#     j = 1
#     fct = 0
#     while(j < len(l)):
#         for i in range(0,j,1):
#             if l[j] % l[i] == 0 and j != i:
#                 ct[j] += 1
#                 fct += ct[i]
#             elif l[i] > l[j]:
#                 break
#         j += 1
#     print(ct)
#     return fct
