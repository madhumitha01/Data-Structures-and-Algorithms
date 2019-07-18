def main():
    a = input("Enter the string:")
    b = input("Enter the sub string:")
    if a.find(b) is -1:
        print(False)
    else:
        print(True)


if __name__ == '__main__':
    main()
