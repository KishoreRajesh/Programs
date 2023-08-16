word = "word"
user_in = ""
count = 0
limit = 5
out_of_limit = False

while user_in != word and not (out_of_limit):
    if count < limit :
        user_in = input( "Enter your guess : " )
        count += 1
    else :
        out_of_limit = True

if out_of_limit :
    print( "Poda da dobakoor.." )
else :
    print( "jaichita Maraa...." )
    