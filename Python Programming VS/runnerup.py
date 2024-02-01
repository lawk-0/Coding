if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    print(sorted(set(arr))[-2])
    #Note- set() removes duplicates entry from a list, sorted() arrange the list in ascending order. list[-n] is the nth index value from the other end.