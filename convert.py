
def convert(s):
    # Your code goes here.
    type = s[0]
    multiplier = 10
    number_str = s[1:]

    if type == "o":
        multiplier = 8
    elif type == "b":
        multiplier = 2

    num_lst = [int(number) * multiplier for number in number_str]
    return sum(num_lst)


if __name__ == "__main__":

    # Ignore this area. Only write the convert function.

    num = input()

    result = convert(num)
    print(result)



