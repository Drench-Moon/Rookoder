// 练习2，实现库函数strcat
void my_strcat(char *str_1, char *str_2) {
    /**
     * 将字符串str_2拼接到str_1之后，我们保证str_1指向的内存空间足够用于添加str_2。
     * 注意结束符'\0'的处理。
     */

    // IMPLEMENT YOUR CODE HERE
    int i = 0;
    for (;str_1[i] != '\0'; i ++);
    for (int j = 0; str_2[j] != '\0'; i ++ ,j ++){
        str_1[i] = str_2[j];
    }
    str_1[i] = '\0';
}