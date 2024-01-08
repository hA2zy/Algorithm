T, S = map(int, input().split())

if 0 < T and T <= 11 and S == 1:
    print("280")
elif T > 0 and T >= 12 and T <= 16 and S == 0:
    print("320")
else:
    print("280")
