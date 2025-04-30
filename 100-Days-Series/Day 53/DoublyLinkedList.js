class DoublyLL {
    constructor(data) {
        this.data = data;
        this.prev = null;
        this.next = null;
    }
}
class DoublyLinkedList {
    constructor() {
        this.start = null;
        this.end = null;
    }
    // Add a node at the beginning
    addAtBegin(data) {
        const newNode = new DoublyLL(data);

        if (this.start === null) {
            this.start = this.end = newNode;
            this.start.prev = this.end;
            this.end.next = this.start;
        } else {
            newNode.next = this.start;
            newNode.prev = this.end;
            this.start.prev = newNode;
            this.start = newNode;
            this.end.next = this.start;
        }
        console.log(`Node with data ${data} added at the beginning.`);
    }
    // Add a node at the end
    addAtEnd(data) {
        const newNode = new DoublyLL(data);

        if (this.start === null) {
            this.start = this.end = newNode;
            this.start.prev = this.end;
            this.end.next = this.start;
        } else {
            newNode.prev = this.end;
            newNode.next = this.start;
            this.end.next = newNode;
            this.end = newNode;
            this.start.prev = this.end;
        }
        console.log(`Node with data ${data} added at the end.`);
    }
    // Add a node in the middle after a specified node
    addInMiddle(afterData, data) {
        if (this.start === null) {
            console.log("Doubly Linked List is empty!");
            return;
        }
        let temp = this.start;
        do {
            if (temp.data === afterData) {
                const newNode = new DoublyLL(data);
                newNode.next = temp.next;
                newNode.prev = temp;

                temp.next.prev = newNode;
                temp.next = newNode;

                if (temp === this.end) {
                    this.end = newNode;
                }

                console.log(`Node with data ${data} added after ${afterData}.`);
                return;
            }
            temp = temp.next;
        } while (temp !== this.start);

        console.log(`Node with data ${afterData} not found!`);
    }
    // Traverse from start to end
    traverseHeadToEnd() {
        if (this.start === null) {
            console.log("Doubly Linked List is empty!");
            return;
        }

        let temp = this.start;
        console.log("Traverse Head to End:");
        do {
            console.log(`Data: ${temp.data}`);
            temp = temp.next;
        } while (temp !== this.start);
        console.log("-----------------------");
    }
    // Traverse from end to start
    traverseEndToHead() {
        if (this.start === null) {
            console.log("Doubly Linked List is empty!");
            return;
        }

        let temp = this.end;
        console.log("Traverse End to Head:");
        do {
            console.log(`Data: ${temp.data}`);
            temp = temp.prev;
        } while (temp !== this.end);
        console.log("-----------------------");
    }
}
// Main Execution
const dll = new DoublyLinkedList();
dll.addAtBegin(10);
dll.addAtEnd(20);
dll.addAtEnd(30);
dll.addInMiddle(20, 25);
dll.addAtBegin(5);
dll.addAtEnd(35);

dll.traverseHeadToEnd();
dll.traverseEndToHead();
