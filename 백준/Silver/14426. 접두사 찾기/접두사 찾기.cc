#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// 트라이 노드 구조 정의
struct TrieNode
{
    unordered_map<char, TrieNode *> children; // 자식 노드들
    bool isEndOfWord;                         // 단어의 끝 여부

    TrieNode() : isEndOfWord(false) {}
};

// 트라이 클래스 정의
class Trie
{
private:
    TrieNode *root;

public:
    Trie()
    {
        root = new TrieNode();
    }

    // 단어 삽입
    void insert(const string &word)
    {
        TrieNode *current = root;
        for (char ch : word)
        {
            // 문자가 자식 노드에 없다면 새 노드 생성
            if (current->children.find(ch) == current->children.end())
            {
                current->children[ch] = new TrieNode();
            }
            current = current->children[ch];
        }
        current->isEndOfWord = true; // 단어 끝 표시
    }

    // 단어 검색
    bool search(const string &word)
    {
        TrieNode *current = root;
        for (char ch : word)
        {
            if (current->children.find(ch) == current->children.end())
            {
                return false;
            }
            current = current->children[ch];
        }
        return current->isEndOfWord; // 단어 끝 여부 확인
    }

    // 접두사 검색
    bool startsWith(const string &prefix)
    {
        TrieNode *current = root;
        for (char ch : prefix)
        {
            if (current->children.find(ch) == current->children.end())
            {
                return false;
            }
            current = current->children[ch];
        }
        return true; // 접두사가 존재
    }

    // 메모리 해제 (재귀적으로 모든 노드 삭제)
    void clear(TrieNode *node)
    {
        for (auto &pair : node->children)
        {
            clear(pair.second);
        }
        delete node;
    }

    // 특정 단어로 시작하는 다른 단어가 있는지 확인
    bool hasOtherWordsWithPrefix(const string &word)
    {
        TrieNode *current = root;
        for (char ch : word)
        {
            if (current->children.find(ch) == current->children.end())
            {
                return false;
            }
            current = current->children[ch];
        }
        // 현재 노드의 자식 노드가 있으면 다른 단어가 존재
        return !current->children.empty();
    }

    // 소멸자
    ~Trie()
    {
        clear(root);
    }
};

int main()
{
    int t, n;
    Trie trie;
    string str;
    int cnt = 0;
    bool inconsistent = false;

    cin >> t >> n;

    while (t--)
    {
        cin >> str;
        trie.insert(str);
    }

    while(n--)
    {
        cin >> str;
        if (trie.startsWith(str))
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}