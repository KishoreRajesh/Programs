#REMAKING OF ZOOM ICON👍👍👍

#Let's gooooo.... 


#making 2 types of turtles
from turtle import *
import turtle 

bgcolor("white")

#requirememts of turtle(pen)
shape("turtle")
bgcolor("black")
up()
f=turtle.Turtle()
f.goto(-70,60)
down()


def video_part():  #creating video part        

    f. shape("turtle")       
    f.color("white")
    f.begin_fill()
    f.fd(110)
    f.circle(5,90)
    f.fd(60)
    f.circle(10,25)
    f.fd(20)
    f.circle(10,35)
    f.lt(30)
    f.fd(110)
    f.circle(5,90)
    f.fd(60)
    f.circle(10,25)
    f.fd(20)
    f.circle(10,36)
    f.end_fill()
    f.up()
    f.goto(0,0)
    f.seth(0)
    f.down()
     

def  lens_part(): #creating lens part

    f.color("white")
    f.up()      
    f.goto(55,125)   
    f.down()
    f.begin_fill()
    f.lt(40)
    f.fd(40)
    f.circle(-5,129)
    f.fd(70)
    f.circle(-5,129)
    f.fd(38)
    f.seth(180)
    f.circle(-4,90)
    f.fd(21)
    f.circle(-5,79)
    f.end_fill()
    f.hideturtle()


def zoom(x,y):  #making zoom letter 

#making Z
    color("#2D8CFF")
    begin_fill()
    up()
    goto(x,y)    
    down()
    seth(180)
    fd(85)
    circle(-20,60)
    fd(20)   
    circle(-3,80) 
    seth(0)
    fd(120)
    circle(-33,90)
    rt(40)
    fd(150)
    seth(0)
    fd(85)
    circle(-30,90)
    seth(180)
    fd(130)
    circle(-30,90)  
    rt(41)
    fd(156)
    end_fill()
    up()
    seth(0)
#making O O

    #making blue O
    down()
    for i in range(2):
        up()
        if i ==1:
            goto(315+x,0+y)
            begin_fill()
        else :  
            goto(130+x,0+y)      
            begin_fill() 
        rt(90)
        fd(148)
        down()
        seth(0)
        circle(88)
        end_fill()
        
     #making inner  O
        
        color("black")        
        up()
        lt(90)
        fd(30)
        seth(0)
        down()
        begin_fill()
        circle(56)
        end_fill()
        color("#2D8CFF") 
        
        
#making m   
             
    up()
    goto(415+x,30+y)   
    down()
    rt(50)
    fd(35)   
    seth(45)
    begin_fill()
    circle(-60,110)
    seth(65)
    circle(-60,160)
    seth(270)
    fd(100)
    seth(180)
    circle(-30,90)
    fd(70)
    
    circle(33, 160)
    seth(270)
    fd(110)
    
    seth(180)
    circle(-40,90)
    fd(60)
    
    circle(35, 160)
    seth(270)
    fd(80)
    
    circle(-32,90)
    seth(90)
    fd(172)
    end_fill()
    hideturtle()
 
 
def bg():
#using 2nd turtle
    t=turtle.Turtle()
    t. shape("turtle")

#creating  square blue background 
    t. up()
    t. goto(-160,0)
    t. down()
    t. color("#2D8CFF") 
    t. begin_fill()

    for I in  range(1,5):
        if I ==1:
            t. lt(90)
            t. fd(220)
            t. circle(-50,90)
        elif I == 2:        
            t. fd(240)
        elif I ==3:
            t.circle(-50,90)
            t. fd(220)
        else:
            t.circle(-50,90)
            t.fd(240)
            t. circle(-50,90)
            t.end_fill()
            t.hideturtle()

            
# calling functions  to execute all                
bg()            
video_part()
lens_part()       
zoom(-250,-100)  

done()
