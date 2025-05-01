class TreeNode {
    // Class representing a node in the binary tree
    constructor(data) {
      this.data = data; // Node value
      this.left = null; // Pointer to the left child
      this.right = null; // Pointer to the right child
    }
  }
  
  class BinaryTree {
    // Class for binary tree operations
    constructor() {
      this.root = null; // Root of the binary tree
    }
  
    search(root, data) {
      // Search for the position to insert a new node
      let parent = null;
      while (root !== null) {
        if (root.data === data) {
          return null; // Duplicate data not allowed
        } else if (root.data > data) {
          parent = root;
          root = root.left; // Move to the left child
        } else {
          parent = root;
          root = root.right; // Move to the right child
        }
      }
      return parent; // Return the parent of the potential position
    }
  
    addNode(data) {
      const newNode = new TreeNode(data);
  
      if (this.root === null) {
        // If the tree is empty, make the new node the root
        this.root = newNode;
        console.log("New Data Added");
      } else {
        const parent = this.search(this.root, data);
        if (parent === null) {
          console.log("Duplicate values are not allowed");
        } else {
          if (parent.data > data) {
            parent.left = newNode; // Insert as the left child
          } else {
            parent.right = newNode; // Insert as the right child
          }
          console.log("New Data Added");
        }
      }
    }
  
    traversePreOrder(root) {
      // Pre-Order traversal (Root, Left, Right)
      if (root === null) return;
      console.log("Data is "+root.data);
      this.traversePreOrder(root.left);
      this.traversePreOrder(root.right);
    }
  
    traverseInOrder(root) {
      // In-Order traversal (Left, Root, Right)
      if (root === null) return;
      this.traverseInOrder(root.left);
      console.log("Data is "+root.data);
      this.traverseInOrder(root.right);
    }
  
    traversePostOrder(root) {
      // Post-Order traversal (Left, Right, Root)
      if (root === null) return;
      this.traversePostOrder(root.left);
      this.traversePostOrder(root.right);
      console.log("Data is "+root.data);
    }
  }
  
  // Main execution
  const tree = new BinaryTree();
  
  tree.addNode(15);
  tree.addNode(10);
  tree.addNode(17);
  console.log("Pre Order Traverse...");
  tree.traversePreOrder(tree.root);
  console.log("In Order Traverse...");
  tree.traverseInOrder(tree.root);
  console.log("Post Order Traverse...");
  tree.traversePostOrder(tree.root);