#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;

    // ユーザーから配列のサイズを入力
    printf("配列のサイズを入力してください: ");
    scanf("%d", &n);

    // 動的メモリ確保
    arr = (int *)malloc(n * sizeof(int));

    // メモリ確保が成功したかチェック
    if (arr == NULL) {
        printf("メモリの確保に失敗しました。\n");
        return 1;
    }

    // 配列に 1, 2, ..., n の値を代入
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }

    // 配列の内容を出力
    printf("配列の内容: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 動的メモリの解放
    free(arr);

    return 0;
}
