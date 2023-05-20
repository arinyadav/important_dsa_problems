class TrieNode{
public:
char data;
TrieNode* children[26];
int childcount;
bool isterminal;

TrieNode(char ch)
{
    data=ch;
    for(int i=0;i<26;i++)
    {
        children[i]=NULL;
    }
    childcount=0;
    isterminal=false;
}
};
class Trie
 {
    public:
    TrieNode* root;
    Trie(char ch)
    {
      root=new TrieNode(ch);
    }
    void insertUtil( TrieNode* root,string word)
    {
        if(word.length()==0)
        {
            root->isterminal=true;
            return;
        }
        int index=word[0]-'a';
        TrieNode* child;

        if(root->children[index]!=NULL)
        child=root->children[index];

        else
        {
        child=new TrieNode(word[0]);
        root->childcount++;
        root->children[index]=child;
        }
        insertUtil(child,word.substr(1));
    }
      void insertWord(string word) {
          insertUtil(root,word);
      }

    void lcp(string str,string &ans) {
        for(int i=0;i<str.length();i++){
            char ch=str[i];
            if(root->childcount==1){
            ans.push_back(ch);
            int index=ch-'a';
            root=root->children[index];
            }
            else
            break;
            if(root->isterminal)
            break;

        }
    }
     };
string longestCommonPrefix(vector<string> &arr, int n)
{
   Trie* t=new Trie('\0');
int n=strs.size();
   //insert all string in trie
   for(int i=0;i<n;i++) {
       t->insertWord(strs[i]);
   }
   string first=strs[0];
   string ans="";

   t->lcp(first,ans);
   return ans;
}
