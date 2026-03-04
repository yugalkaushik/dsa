class Solution {
public:
    unordered_map<string,string> umap;
    string baseUrl = "http://tinyurl.com/";
    int id = 0;

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        id++;
        string key = to_string(id);
        umap[key] = longUrl;
        return baseUrl + key;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string key = shortUrl.substr(baseUrl.size());
        return umap[key];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));

// tc: O(1)
// sc: O(n)
// Approach:
// 1. Use an unordered map to store the mapping of a unique key (generated from an incrementing id) to the original long URL.
// 2. In the encode function, increment the id and convert it to a string to create a unique key. Store the mapping of this key to the long URL in the unordered map and return the shortened URL by concatenating the base URL with the key.
// 3. In the decode function, extract the key from the shortened URL by removing the base URL, and then look up the original long URL in the unordered map using this key. Return the original long URL. 