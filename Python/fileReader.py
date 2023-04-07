fname = input('Enter file name:',)
try:
    fhandle = open(fname)
except:
    print(fname, " cannot be opened\nTry entering the path of the file")
    quit()

file = fhandle.read()
print(file)

fhandle.close