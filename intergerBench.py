import time

#Putting constant values 
dummy_value = 6
res = 3
start = time.time()
# 10^10 additions which is for double precision floating point constants
for i in range(1, 100001):
    for j in range(1, 100001):
        res = dummy_value + dummy_value

# 5 × 10^9 multiplications which is double precision floating point constants
for i in range(1, 100001):
    for j in range(1, 50001):
        res = dummy_value * dummy_value

# 2 × 10^9 divisions which is double precision floating point constants
for i in range(1, 100001):
    for j in range(1, 20001):
        res = dummy_value / dummy_value

# timing to the end
end = time.time()
total_time = end - start



