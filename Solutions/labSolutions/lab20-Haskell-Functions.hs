--1
takeFromList ns n = ns!! n

--2
area l w = 1/2*l*w

--3
makelist n = [1..n]

--4
checkNum a b c = c == sqrt(a^2 + b^2)

--5
checkTriplets a b c = (a^2 + b^2 == c^2) || (b^2 + c^2 == a^2) || (a^2 + c^2 == b^2)

--6
fact n = product [1..n]

--7
func list a  =["slap" ++ x | x <- take a (cycle list)]

--8
--step1
listCreate = [[x,y,z] | x <- [1..14], y <- [1..15], z <- [1..15]
--step2
listCreate = [[x,y,z] | x <- [1..15], y <- [1..15], z <- [1..15],x <= y, y<=z]
--step3

