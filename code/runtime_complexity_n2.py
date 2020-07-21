# read in n
n = int(input())

# O(n) algorithm
result = 0;
for i in range(n):
    for j in range(n):
        result = result + i * j

# output the result from our algorithm
print(result)