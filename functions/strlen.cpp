// 练习1，实现库函数strlen
int my_strlen(char *str) {
    /**
     * 统计字符串的长度，太简单了。
     */

    // IMPLEMENT YOUR CODE HERE
    int digit = 0;
    for (int i = 0; str[i] != '\0'; i ++){
        digit ++;
    }
    return digit;
}