greater ::Ord(a) => a-> a -> Bool
greater a b 
    | a > b = True
    | otherwise = False

main = do

    print( greater 10 5)
