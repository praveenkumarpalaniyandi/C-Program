
class TrieNode:
    def __init__(self):
        self.children = {}
        self.is_word = False

class Trie:
    def __init__(self):
        self.root = TrieNode()

    def insert(self, word):
        node = self.root
        for char in word:
            if char not in node.children:
                node.children[char] = TrieNode()
            node = node.children[char]
        node.is_word = True

class Solution:
    def exist(self, board, word):
        trie = Trie()
        for w in words:
            trie.insert(w)

        def dfs(i, j, node):
            if node.is_word:
                return True

            if i < 0 or i >= len(board) or j < 0 or j >= len(board[0]) or board[i][j] not in node.children:
                return False

            char = board[i][j]
            board[i][j] = "#"  # mark the cell as visited

            found = dfs(i+1, j, node.children[char]) or \
                    dfs(i-1, j, node.children[char]) or \
                    dfs(i, j+1, node.children[char]) or \
                    dfs(i, j-1, node.children[char])

            board[i][j] = char  # mark the cell as unvisited

            return found

        for i in range(len(board)):
            for j in range(len(board[0])):
                if dfs(i, j, trie.root):
                    return True

        return False
