#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool borderSafe(int x, int y, vector<vector<bool>>& b_copy) {
        if (x < 0 || y < 0 || x >= b_copy.size() || y >= b_copy[0].size()) {
            return false;
        }
        return true;
    }

    bool dfs(int wordLen, int depth, int i, int j, vector<vector<bool>>& b_copy, string word, vector<vector<char>>& board) {
        vector<int> di = {-1, 1, 0, 0};
        vector<int> dj = {0, 0, -1, 1};

        if (depth == wordLen - 1){
            for (int k = 0; k < 4; k++){
                int x = i + di[k];
                int y = j + dj[k];
                if (borderSafe(x, y, b_copy) && !b_copy[x][y] && board[x][y] == word[depth]){
                    return true;
                }
            }
            return false;
        }
            
        for(int k = 0; k < 4; k++){
            int x = i + di[k];
            int y = j + dj[k];

            if (borderSafe(x, y, b_copy) && !b_copy[x][y] && board[x][y] == word[depth]){
                b_copy[x][y] = true;
                if (dfs(wordLen, depth + 1, x, y, b_copy, word, board)) return true;
                b_copy[x][y] = false;
            }
        }
        return false;
    }



    bool exist(vector<vector<char>>& board, string word) {
        int wordLen = word.length();
        int m = board.size();
        int n = board[0].size();
        vector<vector<bool>> b_copy(m, vector<bool>(n));

        

        vector<int> boardFreq(52, 0);
        vector<int> wordFreq(52, 0);
        for (auto i : word)
            isupper(i) ? wordFreq[int(i) - 65]++ : wordFreq[int(i) - 97 + 26]++;
        for (auto j : board)
            for (auto i : j)
                isupper(i) ? boardFreq[int(i) - 65]++ : boardFreq[int(i) - 97 + 26]++;
        for (int i = 0; i < 52; i++)
            if (boardFreq[i] < wordFreq[i])
                return false;
        
        int fcount = isupper(word.front()) ? wordFreq[int(word.front())-65] : wordFreq[int(word.front())-97+26];
        int lcount = isupper(word.back()) ? wordFreq[int(word.back())-65] : wordFreq[int(word.back())-97+26];
        if(fcount > lcount)
            reverse(word.begin(), word.end());


        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                b_copy[i][j] = false;
            }
        }

        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (board[i][j] == word[0]) {
                    b_copy[i][j] = true;
                    if (wordLen == 1) return true;
                    if (dfs(wordLen, 1, i, j, b_copy, word, board)) return true;
                    b_copy[i][j] = false;
                }
            }
        }
        return false;
    }
};
