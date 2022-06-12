class TrieNode{
public:
    // initialize data structure
    bool isWord ;
    TrieNode *children[26] ;
    
    TrieNode () {
        isWord = false ;
        for (int i=0; i<26; i++)
            children[i] = NULL ;
    }
};

class Trie {
public:
    Trie() {
        root = new TrieNode() ;
    }
    
    void insert(string word) {
        int wordLength = word.length();
        int k = 0;
        TrieNode *cur = root;
        
        for (int i=0; i<wordLength; i++){
            k = word[i] - 'a' ; // ascii
            if (cur->children[k] == NULL)
                cur->children[k] = new TrieNode() ;
            cur = cur->children[k] ;
        }
        cur->isWord = true ; // mark as a word
    }
    
    // return if the word is in the trie
    bool search(string word) {
        int wordLength = word.length() ;
        int k = 0;
        TrieNode *cur = root ;
        for (int i=0; i<wordLength; i++){
            k = word[i] - 'a' ;
            cur = cur->children[k] ;
            
            if (cur == NULL)
                return false ;
        }
        return cur->isWord ;
    }
    
    bool startsWith(string prefix) {
        int wordLength = prefix.length() ;
        int k = 0;
        TrieNode *cur = root ;
        
        for (int i=0; i<wordLength; i++){
            k = prefix[i] - 'a' ;
            cur = cur->children[k] ;
            
            if (cur == NULL)
                return false ;
        }
        return true;
    }
private:
    TrieNode *root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
