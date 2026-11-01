def first_n_primes(count):
    limit = 400000  # 第 30000 个质数是 350377，400000 足够
    while True:
        is_prime = [True] * (limit + 1)
        is_prime[0] = is_prime[1] = False

        for i in range(2, int(limit ** 0.5) + 1):
            if is_prime[i]:
                for j in range(i * i, limit + 1, i):
                    is_prime[j] = False

        primes = [i for i, v in enumerate(is_prime) if v]
        if len(primes) >= count:
            return primes[:count]

        limit *= 2


primes = first_n_primes(30000)

with open("primes_30000.txt", "w", encoding="utf-8") as f:
    f.write(",".join(map(str, primes)))

print("已生成 primes_30000.txt，共", len(primes), "个质数")