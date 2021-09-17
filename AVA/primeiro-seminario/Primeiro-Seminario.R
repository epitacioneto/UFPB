#25*P(X >95) + 10*P(X <= 95)

(25*pnorm(95, 100, sqrt(16), lower.tail = F)) + (10*pnorm(95, 100, sqrt(16)))


# Questão 2

lambda <- 1/300
t <- 1000
mu <- lambda * t

#a) 1-P(0 <= X < 3)
1 - ppois(0:2, mu)

#b) P(T=1000)
dpois(1000, lambda = 1/300)

#c) P(0 <= X < 3)
ppois(0:2, mu)


pecas = 25
pecas_def = 5
p <- pecas_def/pecas
f <- 1-p
n = 4
k <- seq(0:30)

y <- choose(n, k)*(p^k)*(f^(n-k))
plot(k, y, "h")
lines(k, y, "p", col="red")

a <- choose(pecas, n)
b <- choose(pecas_def, k)
c <- choose(20, n-k)

func <- b*c/a
#func <- choose(pecas_def, k)
plot(k, func, "b")
lines(k, func, "p", col="red")
