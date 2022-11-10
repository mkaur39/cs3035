def outer_func(name):
    def inner_func():
        print(f"Where's {name}???")
    inner_func()


outer_func("Waldo")

