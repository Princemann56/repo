
struct Transaction {
    string name;
    int time;
    int amount;
    string city;

    Transaction() {}

    Transaction(string & s) {
        build(s);
    }

    void build(string & s) {
        int i = 0, n = s.size();
        time = amount = 0;
        while (s[i] != ',')
            name.push_back(s[i++]);
        ++i;
        while (s[i] != ',')
            time = time * 10 + s[i++]-'0';
        ++i;
        while (s[i] != ',')
            amount = amount * 10 + s[i++]-'0';
        ++i;
        while (i < n)
            city.push_back(s[i++]);
    }

    string toString() {
        return name+","+to_string(time)+","+to_string(amount) + "," + city;
    }
};
class Solution {
public:
    vector<string> invalidTransactions(vector<string>& transactions) {
        // query transaction with name s within 60 minutes but with diff places
        vector<Transaction> v;
        vector<string> ans;
        for (string & s: transactions)
            v.emplace_back(s);
        ::sort(begin(v), end(v), [](Transaction & t1, Transaction & t2){return t1.time < t2.time;});
        int l = 0, r = 0, n = v.size();

        for (int i = 0; i < n; ++i) {
            while (r < n && v[r].time <= v[i].time + 60) { add(v[r++]); }
            while (l < i && v[l].time < v[i].time - 60)  { remove(v[l++]);}
            if (v[i].amount >= 1000) {
                ans.push_back(v[i].toString());
            } else if (mp[v[i].name][v[i].city] != name2count[v[i].name]) {
                ans.push_back(v[i].toString());
            }
        }
        return ans;
    }

    void add(Transaction & t) {
        mp[t.name][t.city] += 1;
        name2count[t.name] += 1;
    }

    void remove(Transaction & t) {
        mp[t.name][t.city] -= 1;
        name2count[t.name] -= 1;
    }

    unordered_map<string, unordered_map<string, int>> mp;
    unordered_map<string, int> name2count;
};