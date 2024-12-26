def main():
    camelCase = input("camelCase: ")
    snake_case = snake_converter(camelCase)
    print("snake_case:", snake_case)


def snake_converter(camelCase: str):
    new_str = ""
    for char in camelCase:
        if char.isupper():
            new_str += "_"
        new_str += char

    new_str = new_str.lower()
    return new_str


main()
