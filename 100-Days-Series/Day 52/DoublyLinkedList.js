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

    // Function to add new nodes
    addNode(data) {
        const newNode = new DoublyLL(data);

        if (this.start === null) {
            this.start = this.end = newNode;
            this.start.prev = newNode;
            this.end.next = newNode;
        } else {
            newNode.prev = this.end;
            newNode.next = this.start;
            this.end.next = newNode;
            this.end = newNode;
            this.start.prev = this.end;
        }
        console.log("New Node Added");
    }

    // Function to traverse or display from start to end nodes
    traverseHeadToEnd() {
        if (this.start === null) {
            console.log("Doubly Linked List is empty!");
        } else {
            let temp = this.start;
            do {
                console.log(`Data is ${temp.data}`);
                console.log("-----------------------");
                temp = temp.next;
            } while (temp !== this.start);
        }
    }

    // Function to traverse or display from end to start nodes
    traverseEndToHead() {
        if (this.start === null) {
            console.log("Doubly Linked List is empty!");
        } else {
            let temp = this.end;
            do {
                console.log(`Data is ${temp.data}`);
                console.log("----------------------");
                temp = temp.prev;
            } while (temp !== this.end);
        }
    }

    // Function to delete a node
    delNode(data) {
        if (this.start === null) {
            console.log("Doubly Linked List is empty!");
            return;
        }

        let temp = this.start;
        let found = false;

        do {
            if (temp.data === data) {
                found = true;
                if (temp === this.start && temp === this.end) {
                    // Only one node in the list
                    this.start = this.end = null;
                } else if (temp === this.start) {
                    this.start = this.start.next;
                    this.start.prev = this.end;
                    this.end.next = this.start;
                } else if (temp === this.end) {
                    this.end = this.end.prev;
                    this.end.next = this.start;
                    this.start.prev = this.end;
                } else {
                    temp.prev.next = temp.next;
                    temp.next.prev = temp.prev;
                }
                console.log(`Node with data ${data} deleted.`);
                break;
            }
            temp = temp.next;
        } while (temp !== this.start);

        if (!found) {
            console.log(`Node with data ${data} not found!`);
        }
    }
}

// Main Execution
const dll = new DoublyLinkedList();
dll.addNode(10);
dll.addNode(20);
dll.addNode(30);
dll.addNode(40);
dll.addNode(50);
dll.addNode(60);
console.log("Traverse Head to End:");
dll.traverseHeadToEnd();
console.log("Traverse End to Head:");
dll.traverseEndToHead();
console.log("Delete Node 30:");
dll.delNode(30);
console.log("Traverse Head to End after deletion:");
dll.traverseHeadToEnd();
