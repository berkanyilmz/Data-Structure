class Queue:


    def __init__(self):
        self.queue = list()


    def isEmpty(self):
        return len(self.queue) == 0

    def add(self, val):
        self.queue.append(val)
        print('Node added')

    def delete(self):
        if self.isEmpty():
            print('Queue is empty !')
            return None
        else:
            print('Node deleted')
            return self.queue.pop(0)

    def show(self):
        if self.isEmpty():
            print('There is nothing to print')

        else:
            for i in self.queue:
                print(i, end=' ')
            print()