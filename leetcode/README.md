**这个文件提供有些Leetcode题的思路，很简洁。因为仅仅是自己为自己写的reminder，思路并不新颖，而且有些地方写得很含糊，别人看了或许并不懂。。。所以如果想了解题目的详细过程，网上很多大神有不错的方案，可去看看 **

# Leetcode
316. Remove Duplicate Letters
    Idea: 贪心策略--遍历字符串时，如果当前的字符 X 比结果串的尾字符 Y 小时，检查如果后面Y还出现，就把尾字符Y换成X。让结果串尽可能“小”，主要通过尽可能让当前字符“延迟”加入结果串的方式实现。