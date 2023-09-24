def knapsack(profit,weight,capacity,n):
    if n == 0 or capacity == 0:
        return 0
    if weight[n-1]>capacity:
        return knapsack(profit, weight, capacity,n-1)
    else:
        return max(profit[n-1]+knapsack(profit,weight,capacity-weight[n-1],n-1),knapsack(profit,weight,capacity,n-1))
                

capacity = 4
profit = [1,2,3]
weight = [4,5,1]
n = len(weight)
print(knapsack(profit, weight, capacity, n))
                
        