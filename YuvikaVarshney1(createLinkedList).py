class Node:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


# Do not change code above.


def constructLL(arr: [int]) -> Node:
    # Write your code here
    head=Node()
    head=None
    n=len(arr)
    for i in range(n-1,-1,-1):
        head=addNode(arr[i],head)
    return head

    pass
def addNode(val: int,head: Node):
    temp=Node(val)
    temp.next=head
    head=temp
    return head
