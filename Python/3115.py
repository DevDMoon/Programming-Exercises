import sys


def main():

    T = input()
    numsum = 0
    result = []

    for i in xrange(0,T):
        N = input()
        out = 0
        for b in xrange(0,N):
            

            numa,numb = map(int,sys.stdin.readline().split(' '))

            if(numa + numb > numsum):
                numsum = numa + numb
                out = out + b
            elif (numa + numb < numsum):
                out = out + 1

        result.append(out)
        print ("END")
    for i in xrange(0,len(result)):
        print result[i]

if __name__ == '__main__':
    main()
