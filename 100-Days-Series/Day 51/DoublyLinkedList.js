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
    // Function for add new nodes.
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
    // Function for traverse or display from end to start nodes.
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
    // Function for traverse or display from end to start nodes.
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
}

// Main Execution
const dll = new DoublyLinkedList();
dll.addNode(10);
dll.addNode(20);
dll.addNode(30);
dll.addNode(40);
dll.addNode(50);
dll.addNode(60);
console.log("Traverse Head to End");
dll.traverseHeadToEnd();
console.log("Traverse End to Head");
dll.traverseEndToHead();
