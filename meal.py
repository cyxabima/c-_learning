def main():
    time_str = input("What time is it? ")
    total_hours = convert(time_str)
    print(total_hours)
    if 7 <= total_hours < 8:
        print('breakfast time')
    elif 12 <= total_hours < 13:
        print('lunch time')
    elif 18 <= total_hours < 19:
        print('dinner time')


def convert(time):
    hour, minutes = time.split(":")
    total_hours = int(hour) + (int(minutes) / 60)
    return total_hours


if __name__ == "__main__":
    main()
