def solution(x,y):
	if(len(x)>len(y)):
		return sum(x)-sum(y)
	else:
		return sum(y)-sum(x)
