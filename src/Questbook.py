from Questline import Questline

class Questbook:
    def __init__(self):
        self.questlines = {}
    
    def addQuestline(self, name):
        self.questlines[name] = Questline(name)
    
    def addQuest(self, desc, questline):
        self.questlines[questline].addQuest(desc)
    
    def getQuest(self, questline):
        return self.questlines[questline]
