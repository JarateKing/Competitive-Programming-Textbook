# read in integers on same line
a, b = [int(x) for x in input().split()]

# print the right answer
if (a > b):
    print('Alice')
elif (a < b):
    print('Owen')
else:
    print('Tie')