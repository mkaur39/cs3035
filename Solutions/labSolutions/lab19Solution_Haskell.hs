--find last item in a tuple with 3 items:
last' :: (a,b,c) -> c
last' (_,_,z) = z

--find length of a list recursively
length' :: (Num b) => [a] -> b  
length' [] = 0  
length' (_:x) = 1 + length' x

--using gaurds to find grade
gradeFinder :: (RealFloat a) => a -> a -> String
gradeFinder exam1 exam2
    | (exam1 + exam2)/2 <= 70 = "You get a C"
    | (exam1 + exam2)/2 <= 80 = "You get a B"
    | (exam1 + exam2)/2 <= 90 = "You get an A"
    | otherwise = "Your input is invalid!"

--main code
main = do
    let a = (10,10,11)
    let b = [1,10,100]

    print (last' a)
    print (length' b)
    
    print(gradeFinder 80 75.0)
