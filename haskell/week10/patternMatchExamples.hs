--some pattern matching examples:

--pattern matching with tuples
addVector:: (Num a) => (a,a) -> (a,a) -> (a,a)
addVector (x1, y1) (x2, y2) = (x1 + x2, y1 + y2)

--pattern matching with wildcard characters (tuples)
firstElem:: (a,a) -> a
firstElem (x,_) = x

--pattern matching with wildcard characters (list)
firstElemList :: (Num a) => [a] -> a
firstElemList [] = error "This is an empty list" --error handling
firstElemList (x:_) = x

main = do
    let a = (10,10)
    let b = (1,1)
    let list1 = [1,2,3,4,5]
    let list2 = []
    
    print ("This" ++ show(addVector a b))
    print (firstElem a)
    print (firstElemList list1)
    print (firstElemList list2)
