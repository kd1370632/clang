/* stack02.c スタック構造を使用した出口探索プログラム */
/* ヘッダファイル */
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* スタート地点の座標 */
const int SX = 1;
const int SY = 1;
/* ゴール地点の座標 */
const int GX = 8;
const int GY = 1;
/* 迷路データ */
int map[7][10] = {
{1,1,1,1,1,1,1,1,1,1},
{1,0,0,0,0,0,1,0,0,1},
{1,0,1,0,1,0,0,0,1,1},
{1,0,0,1,0,0,0,1,0,1},
{1,1,0,1,0,1,0,1,0,1},
{1,0,0,0,0,1,0,0,0,1},
{1,1,1,1,1,1,1,1,1,1},
};
#define STACKSIZE 46 //スタックサイズ ※教科書から変更
int stack[STACKSIZE]; //スタック領域用配列
int sp = 0; //スタックポインタ(配列の添え字)
/* 関数プロトタイプ */
void DrawMaze(int x, int y);
int push(int d);
int pop(int* pd);
int susumu(int x, int y);
/* メイン関数(エントリポイント) */
main()
{
	// 初期の状態を表示
	system("cls"); // 画面クリア
	printf("初期の状態を表示\n");
	DrawMaze(-1, -1); // 迷路表示(探索中では無いので引数はダミー(-1)を設定)
	printf("「Enter」キー:処理続行\n");
	getch(); // Enterキーが押されるまで一時停止
	susumu(SX, SY); /* 経路探索関数をコール */
	// 最後の状態を表示
	system("cls"); // 画面クリア
	printf("最後の状態を表示\n");
	DrawMaze(-1, -1); // 迷路表示(探索中では無いので引数はダミー(-1)を設定)
}
/* 迷路描画関数 ※教科書から変更(引数を追加:探索中の座標位置) */
void DrawMaze(int x, int y)
{
	int i, j;
	for (i = 0; i < 7; i++) { // 行数分の繰返し
		for (j = 0; j < 10; j++) { // 列数分の繰返し
			// 迷路描画
			if (i == y && j == x) {
				printf("人"); //探索中の位置
			}
			else if (i == SY && j == SX) {
				printf("S"); // スタート地点 ※全角のS
			}
			else if (i == GY && j == GX) {
				printf("G"); // ゴール地点 ※全角のG

			}
			else if (map[i][j] == 1) {
				printf("四"); // 壁:■だとうまく動かないので四で代用
			}
			else if (map[i][j] == 2) {
				printf("・"); // 通ったところの目印
			}
			else {
				printf(" "); // 通路
			}
		}
		printf("\n");
	}
	return;
}
/* スタックにデータを積む(プッシュする)関数 */
int push(int d)
{
	if (sp == STACKSIZE) { return -1; } //スタックが一杯のとき
	stack[sp] = d;
	sp++;
	return 0;
}
/* スタックからデータを取り出す(ポップする)関数 */
int pop(int* pd)
{
	if (sp == 0) { return -1; } //スタックが空のとき
	sp--;
	*pd = stack[sp];
	stack[sp] = 0; //確認しやすくするため
	return 0;
}
/* 道を進む関数 */
int susumu(int x, int y)
{
	int i;
	while (1) {
		// 探索途中の状況を表示
		system("cls"); // 画面クリア
		printf("探索途中の状況を表示 「人」が探索中の位置\n");
		DrawMaze(x, y); // 迷路表示(途中経過)
		printf("「Enter」キー:処理続行\n");
		getch(); // Enterキーが押されるまで一時停止
		map[y][x] = 2; //通ったところの目印として2を置く ※教科書から変更
		if (x == GX && y == GY) { return 0; } //ゴールした時
		/* スタックに現在の座標を格納する */
		push(x);
		push(y);
		/* スタックの状態を表示 */
		//実行結果が見にくくなるので省略します
		/* 進める方向をチェックする */
		if (map[y - 1][x] == 0) { y -= 1; continue; } //上
		if (map[y + 1][x] == 0) { y += 1; continue; } //下
		if (map[y][x - 1] == 0) { x -= 1; continue; } //左
		if (map[y][x + 1] == 0) { x += 1; continue; } //右
		/* 上下左右どこにもいけなかったとき *
		/* スタックから座標を取り出す(現在の座標) */
		pop(&y);
		pop(&x);

		/* スタックから座標を取り出す(1つ前の座標) */
		pop(&y);
		if (pop(&x) == -1) { return -1; } //スタックが空になったとき
		//すなわち、出口に到達できなかったとき
	}
}