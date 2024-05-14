from Quest import Quest

class Questline:
    def __init__(self, name):
        self.quests = []
        self.name = name 
    
    def addQuest(self, desc):
       self.quests.append(Quest(desc, len(self.quests)))

    def __str__(self) -> str:
        s = self.name + "\n"
        for quest in self.quests:
            s += str(quest) + "\n"
        return s