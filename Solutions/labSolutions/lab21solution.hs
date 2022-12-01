lengthLongestWord :: [[Char]] -> Int
lengthLongestWord words = maximum [ length word | word <- words]

earlierNames :: [[Char]] -> [Char] -> [[Char]]
earlierNames names name = [x | x <-names, x < name]

showGrade :: ([Char],Int)-> [Char]
showGrade (s,g) = s ++ "scored" ++ show g

showGrades :: [[Char]] -> [Int] -> [[Char]]
showGrades ss gs = [showGrade s | s <- zip ss gs] 

takeFromList :: [Int] -> Int -> Int
takeFromList ns n = ns!! n


