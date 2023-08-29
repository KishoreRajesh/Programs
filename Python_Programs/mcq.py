from class_object import questions

Questions_prompt = [
    "What is My Name ?\n a)king\n b)kishore\n c)Raja\n\n",
    "what is My Age ?\n a)12\n b)15\n c)18\n\n",
    "What is my birth Year ?\n a)2005\n b)1997\n c)2000\n\n",
]

Questions= [
    questions(Questions_prompt[0],"b"),
    questions(Questions_prompt[1],"c"),
    questions(Questions_prompt[2],"a"),
]

def test(questions):
    score = 0
    for question in Questions:
        answer = input(Questions_prompt)
        if answer == questions.answer:
            score += 1
    print("You scored " + str(score) + "/" +str(len(Questions)))

test(questions)