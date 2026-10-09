// 练习3，实现库函数strstr
char* my_strstr(char *s, char *p) {
    /**
     * 在字符串s中搜索字符串p，如果存在就返回第一次找到的地址，不存在就返回空指针(0)。
     * 例如：
     * s = "123456", p = "34"，应该返回指向字符'3'的指针。
     */

    // IMPLEMENT YOUR CODE HERE
    for (int i = 0; s[i] != '\0'; i++) {
        int j = 0;
        for (; p[j] != '\0' && s[i + j] == p[j]; j++);
        if (p[j] == '\0') {
            return &s[i];
        }
    }