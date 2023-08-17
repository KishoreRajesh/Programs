from class_object import questions

Questions = [
    "What is My Name ?\n a)king\n b)kishore\n c)Raja\n\n",
    "what is My Age ?\n a)12\n b)15\n c)18\n\n",
    "What is my birth Year ?\n a)2005\n b)1997\n c)2000\n\n",
]

Questions1 = [
    questions(Questions[0],"b"),
    questions(Questions[1],"c"),
    questions(Questions[2],"a"),
]

def test(mcq):
    score = 0
    for question in mcq:
        answer = input(mcq)
        if answer == questions.answer:
            score += 1
    print("You scored " + str(score) + "/" +str(len(Questions1)))

test(Questions1)