fib :: Int -> Double
fib n = 
       let s5 = sqrt 5
       in (1 / s5)  * (((1 + s5) / 2) ^ n - ((1 - s5) / 2) ^ n)


main :: IO()
main = do
    print (fib 10)
