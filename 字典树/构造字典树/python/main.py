from typing import List


class Trie:

    def __init__(self):
        self.isEnd = False
        self.children = [None] * 26

    def insert(self, word: str) -> None:
        trie = self
        for i in range(len(word)):
            ch = word[i]
            index = ord(ch) - ord("a")
            if not trie.children[index]:
                trie.children[index] = Trie()
            trie = trie.children[index]
        trie.isEnd = True

    def searchTrie(self, word: str) ->"Trie":
        trie = self
        for i in range(len(word)):
            ch = word[i]
            index = ord(ch) - ord("a")
            if not trie.children[index]:
                return None
            trie = trie.children[index]
        return trie

    def search(self, word: str) -> bool:
        trie = self.searchTrie(word)
        return trie is not None and trie.isEnd

    def startsWith(self, prefix: str) -> bool:
        return self.searchTrie(prefix) is not None


class Solution:
    pass


if __name__ == '__main__':
    s = Solution()
