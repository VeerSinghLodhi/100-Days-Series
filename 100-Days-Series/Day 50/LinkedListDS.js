class LinkedList {
    constructor(data) {
        this.data = data; // Data contained in the node
        this.next = null; // Pointer to the next node
    }
}

class LinkedListDS {
    constructor() {
        this.head = null; // Head pointer to the start of the linked list
    }

    // Add a new node at the beginning of the linked list
    addAtBegin(data) {
        const newNode = new LinkedList(data);
        newNode.next = this.head; // New node points to the current head
        this.head = newNode; // Update head to the new node
        console.log("New Node Added at the Beginning");
    }

    // Add a new node in the middle of the linked list after a specific node
    addAtMiddle(afterNode, data) {
        let res = 0; // Flag to track if the afterNode is found
        const newNode = new LinkedList(data);
        for (let temp = this.head; temp != null; temp = temp.next) {
            if (temp.data == afterNode) {
                newNode.next = temp.next; // New node points to the next of the current node
                temp.next = newNode; // Current node points to the new node
                res = 1;
                console.log("New Node Added in the Middle");
                break;
            }
        }
        if (res == 0) {
            console.log("Data is not found!");
        }
    }

    // Add a new node at the end of the linked list
    addAtEnd(data) {
        const newNode = new LinkedList(data);
        if (this.head == null) {
            this.head = newNode; // Set the new node as head if the list is empty
            newNode.next = null;
        } else {
            let last;
            for (let temp = this.head; temp != null; temp = temp.next) {
                last = temp; // Iterate to the last node
            }
            last.next = newNode; // Last node points to the new node
            newNode.next = null;
        }
        console.log("New Node Added at the End");
    }

    // Traverse and display the data of each node in the linked list
    traverse() {
        if (this.head == null) {
            console.log("Linked List is empty");
        } else {
            for (let temp = this.head; temp != null; temp = temp.next) {
                console.log("Data is " + temp.data);
                console.log("------------------------------");
            }
        }
    }
}

// Example usage
const ll = new LinkedListDS();
ll.addAtEnd(10);
ll.addAtEnd(20);
ll.addAtEnd(30);
console.log("Initial List:");
ll.traverse();

console.log("After adding at the Beginning:");
ll.addAtBegin(40);
ll.traverse();

console.log("After adding in the Middle:");
ll.addAtMiddle(20, 50);
ll.traverse();
