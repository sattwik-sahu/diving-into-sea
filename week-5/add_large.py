n1, n2 = [input(f"n{i + 1} = ") for i in range(2)]
if len(n1) > len(n2):
    n2 = '0' * (len(n1) - len(n2)) + n2
elif len(n2) > len(n1):
    n2 = '0' * (len(n1) - len(n2)) + n2
print(n1, n2)
s = ''
carry = 0
for i, (d1, d2) in enumerate(zip(n1[::-1], n2[::-1])):
    ds = int(d1) + int(d2) + carry
    s += str(ds % 10)
    carry = int(ds > 10)
    if i == len(n1) - 1 and ds > 10:
        sum += carry
print(s[::-1])
