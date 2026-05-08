def SOE(n):
    nums = [True]* (n+1)
    nums[0] = nums[1] = False
    for i in range(2, int(n**0.5) + 1):
        if nums[i]:
            for j in range(i * i, n+1, i):
                nums[j] = False
    return [i for i in range(2,n+1) if nums[i]]

x = int(input("Enter a Natural Number:"))
print(SOE(x))
