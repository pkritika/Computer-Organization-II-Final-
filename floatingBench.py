import time

#Putting constant values 
dummy_value = 6.2
res = 1.2

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

print(f"Benchmark 2:64-bit Floating point operation benchmark which includes additions, multiplication, and division is: {total_time} seconds")

