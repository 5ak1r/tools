fact :: Int -> Int
fact n | n == 0 = 1
       | n /= 0 = n * fact (n - 1)

main :: IO()
main = do
    putStrLn "The factorial of 10 is"
    print (fact 10)