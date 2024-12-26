def main():
    due = int(input(""))

    while due >= 0:

        coin = int(input("Insert Coin: "))
        due -= coin
        if due != 0:
            print("Amount Due:", due)
    print("Amount Owed", due)


main()
