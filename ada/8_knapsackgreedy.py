def knapsack(profit,weight,capacity):
    
    ratio = [p/w for p,w in zip(profit,weight)]
    print("ratio:",ratio)
    n = len(weight)
    new = list(range(n))
    new.sort(key= lambda i: ratio[i],reverse=True)
    print("new:",new)
    max_profit = 0
    fractions = [0]*n
    for i in new:
        if weight[i] <= capacity:
            max_profit += profit[i]
            capacity -= weight[i]
            fractions[i] = 1
        else:
            fractions[i] = capacity / weight[i]
            max_profit += profit[i]*fractions[i]  
            break
    print("fractions:",fractions)
    return max_profit



a = knapsack([25,24,15],[18,15,10],20)
# a = knapsack([5,10,15,7,8,9,4],[1,3,5,4,1,3,2],15)

print(a)