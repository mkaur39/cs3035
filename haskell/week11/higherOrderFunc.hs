applyTwice :: (a -> a) -> a -> a
applyTwice f x = f (f x)

--load program in interactive shell for output
