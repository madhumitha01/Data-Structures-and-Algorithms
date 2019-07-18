class Node:
    def __init__(self, x=None, y=None, z=None, p=None):
        self.key = x
        self.left = y
        self.right = z
        self.parent = p
        self.height = 1


class Avl:
    def __init__(self):
        # we are creting a dummy node which contains none value and will be the parent of the our tree node
        self.head = Node()

    def ht(self, p):
        # this is height update function we assuming that height of every node is updated
        if p.left is None and p.right is None:
            return 1
        elif p.left is None and p.right is not None:
            return p.right.height + 1
        elif p.right is None and p.left is not None:
            return p.left.height + 1
        else:
            l = p.left.height
            r = p.right.height
        if l > r:
            return l + 1
        else:
            return r + 1

    def bal(self, p):
        # balance function to find z
        if p.left == None and p.right == None:
            return None
        elif p.left == None and p.right != None:
            if p.height > 2:
                return p
            else:
                return None
        elif p.right == None and p.left != None:
            if p.height > 2:
                return p
            else:
                return None
        else:
            l = p.left.height
            r = p.right.height
        if l - r > 1 or l - r < -1:
            return p
        else:
            return None

    def rotr(self, z):
        y = z.left
        tmp = y.right
        y.right = z
        y.parent = z.parent
        z.left = tmp
        if z.parent == self.head:
            self.head.left = y
        else:
            if z.parent.key > z.key:
                z.parent.left = y
            else:
                z.parent.right = y
        z.parent = y
        if tmp != None:
            tmp.parent = z
        # now we need to update the heights of all the nodes after the rotations
        while z != self.head:
            z.height = self.ht(z)
            z = z.parent

    def rotl(self, z):
        y = z.right
        tmp = y.left
        y.left = z
        y.parent = z.parent
        z.right = tmp
        if z.parent == self.head:
            self.head.left = y
        else:
            if z.key < z.parent.key:
                z.parent.left = y
            else:
                z.parent.right = y
        z.parent = y
        if tmp != None:
            tmp.parent = z
        while z != self.head:
            z.height = self.ht(z)
            z = z.parent

    def search(self, root, x):
        if root == None:
            print(x, "NOT FOUND")
            return None
        else:
            if x > root.key:
                return self.search(root.right, x)
            elif x < root.key:
                return self.search(root.left, x)
            else:
                return root

    def prede(self, root, x):
        # function to find the predesor of the tree
        z = self.search(root, x)
        if z == None or z == self.min(root):
            print("No Predecessor")
            return
        if z.left != None:
            return (self.max(z.left))
        else:
            z = z.parent
            while (z.key > x):
                z = z.parent
            return z

    def suce(self, root, x):
        # function to find the succsessor of the tree
        z = self.search(root, x)
        if z == None or z == self.max(root):
            print("No Successor ")
            return
        if z.right != None:
            return (self.min(z.right))
        else:
            z = z.parent
            while z.key < x:
                z = z.parent
            return z

    def min(self, root):
        while (root.left != None):
            root = root.left
        return root

    def max(self, root):
        while (root.right != None):
            root = root.right
        return root

    def insert(self, root, new):
        # first we do normal binary insert then update height and check height balance then do rotation if needed
        if root == None:
            # if the tree is empty then we are creating a new node make it as tree node
            self.head.left = Node(new, None, None, self.head)
            return
        while root != None:
            paa = root
            if (root.key > new):
                root = root.left
            else:
                root = root.right
        tmp = Node(new, None, None, paa)
        if paa.key > new:
            paa.left = tmp
        else:
            paa.right = tmp
        z = None
        while (tmp.parent.key != None):
            tmp.parent.height = self.ht(tmp.parent)
            if z == None:
                z = self.bal(tmp.parent)
            tmp = tmp.parent

        if z != None:
            if new < z.key:
                y = z.left
                if new < y.key:
                    self.rotr(z)
                else:
                    self.rotl(y)
                    self.rotr(z)
            else:
                y = z.right
                if new > y.key:
                    self.rotl(z)
                else:
                    self.rotr(y)
                    self.rotl(z)

    def preord(self, root):
        if (root == None):
            return
        else:
            print(root.key, "ht =", root.height)

            self.preord(root.left)
            self.preord(root.right)

    def recurse(self, root, tmp):
        # this function is used in deletion because after deletion in tree if the height of tree is reduced
        # then we have to find again z then do roation
        z = None
        while tmp != self.head:
            tmp.height = self.ht(tmp)
            if z == None:
                z = self.bal(tmp)
            tmp = tmp.parent
        if z != None:
            if x < z.key:
                y = z.right
                left, right = 0, 0
                if y.left != None:
                    left = y.left.height
                if y.rc != None:
                    right = y.right.height
                if left > right:
                    x = y.left
                    self.rotr(y)
                    self.rotl(z)
                    self.recurse(self.head.left, x)

                else:
                    x = y.right
                    self.rotl(z)
                    self.recurse(self.head.left, x)
            else:
                y = z.left
                left, right = 0, 0
                if y.left != None:
                    left = y.left.height
                if y.right != None:
                    right = y.right.height
                if left > right:
                    x = y.left
                    self.rotr(z)
                    self.recurse(self.head.left, x)
                else:
                    x = y.right
                    self.rotl(y)
                    self.rotr(z)
                    self.recurse(self.head.left, x)

    def delete(self, root, x):
        old = self.search(root, x)
        if old == None:
            return
        if old.left == None and old.right == None:
            tmp = old.parent
            if tmp.left == old:
                tmp.left = None
            else:
                tmp.right = None
            old.parent = None
            self.recurse(self.head.left, tmp)
        elif old.left == None and old.right != None:
            old.key = old.right.key
            self.delete(old.right, old.right.key)

        elif old.left != None and old.right == None:
            old.key = old.left.key
            self.delete(old.left, old.left.key)

        else:
            new = self.min(old.right)
            old.key = new.key
            self.delete(old.right, new.key)


t = Avl()
t.insert(t.head.left, 15)
t.insert(t.head.left, 5)
t.insert(t.head.left, 16)
t.insert(t.head.left, 18)
t.insert(t.head.left, 20)
t.insert(t.head.left, 17)
t.delete(t.head.left, 16)
t.preord(t.head.left)
print()
"""z=t.suce(t.head.lc,5)
if z!=None:
	print("Successor of 5:",z.key)
z=t.prede(t.head.lc,5)
if z!=None:
	print("Predecessor of 5",z.key)
t.preord(t.head.lc)
print()
print(t.min(t.head.lc).key)"""
"""print("after deleting 8:",end=" ")
t.delete(root,8)
t.preord(root)"""
