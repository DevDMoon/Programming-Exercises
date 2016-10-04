# -1 NO 101 NO 20 YES 10 YES
#
#
#

def main():
    

    parts = input()

    
    if parts >= 1 and parts <= 100:
            if parts % 2 == 0:
                print ("YES")
                return

    print("NO")


if __name__ == '__main__':
    main()