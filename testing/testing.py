print "Start"
arrFlg = 1
while 1:
    string = raw_input("get the string: \n")
    arrFlg = 1
    # print "the string is: %s" %(string)
    if arrFlg == 1:
        for i in range(0, 5, 1):
            print string[i],
        print "\n",
        arrFlg = 0
