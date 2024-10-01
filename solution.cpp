class Solution {
public:
	vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
		std::vector<bool> answer;
		int maxCandies = *max_element(candies.begin(), candies.end());
		int test = maxCandies - extraCandies;
		for (int i = 0; i < candies.size(); i++) {
			if (candies[i] >= test) {
				answer.push_back(true);
			}
			else {
				answer.push_back(false);
			}
		} return answer;
	}
};