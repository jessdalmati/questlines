class Quest: 
    def __init__(self, desc, index):
        self.desc = desc
        self.index = index

    def __str__(self) -> str:
        return str(self.index) + "\t" + self.desc
