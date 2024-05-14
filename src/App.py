from Questbook import Questbook

def main():
    questbook = Questbook()
    questbook.addQuestline("Q01")
    questbook.addQuest("TODO add checks for bad values", "Q01")
    print(questbook.getQuest("Q01"))

if __name__ == '__main__':
    main()