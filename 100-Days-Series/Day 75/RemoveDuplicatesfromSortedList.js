class LinkedList {
    constructor(data) {
        this.data = data;
        this.next = null;
    }
}

class RemoveDuplicatesFromSortedList {
    constructor() {
        this.head = null; // Head of the linked list
    }

    // Method to add a new node
    addNode(data) {
        const newNode = new LinkedList(data);
        if (this.head === null) {
            this.head = newNode;
        } else {
            let temp = this.head;
            while (temp.next !== null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
    }

    // Method to traverse the linked list
    traverse() {
        if (this.head === null) {
            console.log("Linked List is Empty");
        } else {
            let temp = this.head;
            while (temp !== null) {
                console.log("Data is " + temp.data);
                console.log("------------------------------");
                temp = temp.next;
            }
        }
    }

    // Method to remove duplicates
    removeDuplicates() {
        if (this.head === null) {
            console.log("Linked List is Empty");
        } else {
            let current = this.head;
            while (current.next !== null) {
                if (current.data === current.next.data) {
                    current.next = current.next.next;
                } else {
                    current = current.next;
                }
            }
        }
    }
}

// Main Functionality
const list = new RemoveDuplicatesFromSortedList();

list.addNode(10)
list.addNode(20)
list.addNode(20)
list.addNode(20)
list.addNode(30)
list.addNode(40)
list.addNode(50)
list.traverse()
console.log("After Removing Duplicate Node");
list.removeDuplicates();
list.traverse();