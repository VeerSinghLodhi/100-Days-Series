class TreeNode:
    """Class representing a node in the binary tree."""
    def __init__(self, data):
        self.data = data  # Node value
        self.left = None  # Pointer to the left child
        self.right = None  # Pointer to the right child


class BinaryTree:
    """Class for binary tree operations."""
    def __init__(self):
        self.root = None  # Root of the binary tree

    def search(self, root, data):
        """Search for the position to insert a new node."""
        parent = None
        while root is not None:
            if root.data == data:
                return None  # Duplicate data not allowed
            elif root.data > data:
                parent = root
                root = root.left  # Move to the left child
            else:
                parent = root
                root = root.right  # Move to the right child
        return parent  # Return the parent of the potential position

    def add_node(self):
        """Add a new node to the binary tree."""
        data = int(input("\nEnter data: "))
        new_node = TreeNode(data)

        if self.root is None:
            # If the tree is empty, make the new node the root
            self.root = new_node
            print("\nNew Data Added")
        else:
            # Search for the correct position to insert the new node
            parent = self.search(self.root, data)
            if parent is None:
                print("\nDuplicate values are not allowed")
            else:
                if parent.data > data:
                    parent.left = new_node  # Insert as the left child
                else:
                    parent.right = new_node  # Insert as the right child
                print("\nNew Data Added")

    def traverse_pre_order(self, root):
        """Pre-Order traversal (Root, Left, Right)."""
        if root is None:
            return
        print(f"Data is {root.data}")
        self.traverse_pre_order(root.left)
        self.traverse_pre_order(root.right)

    def traverse_in_order(self, root):
        """In-Order traversal (Left, Root, Right)."""
        if root is None:
            return
        self.traverse_in_order(root.left)
        print(f"Data is {root.data}")
        self.traverse_in_order(root.right)

    def traverse_post_order(self, root):
        """Post-Order traversal (Left, Right, Root)."""
        if root is None:
            return
        self.traverse_post_order(root.left)
        self.traverse_post_order(root.right)
        print(f"Data is {root.data}")


if __name__ == "__main__":
    tree = BinaryTree()
    while True:
        # Display menu options
        print("\n1. Add New Data")
        print("2. Traverse (Pre Order)")
        print("3. Traverse (In Order)")
        print("4. Traverse (Post Order)")
        print("5. Exit")
        choice = int(input("Select a choice: "))

        # Perform actions based on the user's choice
        if choice == 1:
            tree.add_node()
        elif choice == 2:
            if tree.root is None:
                print("\nTree is Empty...")
            else:
                tree.traverse_pre_order(tree.root)
        elif choice == 3:
            if tree.root is None:
                print("\nTree is Empty...")
            else:
                tree.traverse_in_order(tree.root)
        elif choice == 4:
            if tree.root is None:
                print("\nTree is Empty...")
            else:
                tree.traverse_post_order(tree.root)
        elif choice == 5:
            print("\nExiting...")
            break
        else:
            print("\nInvalid choice")
