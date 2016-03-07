# description :Fabonacci with DP
# author      : mengguoru
# date        : 2016/02/09

arr1 = [0]*20
arr1[0],arr1[1] = 1,1
# print(arr1) # [1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]
def Fabonacci_DP(n):
	global arr1
	if(arr1[n]==0):
		arr1[n] = Fabonacci_DP(n-2)+Fabonacci_DP(n-1)
	return arr1[n]

print('Fabonacci_DP 5th:',Fabonacci_DP(5))
# print(arr1) # [1, 1, 2, 3, 5, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0]