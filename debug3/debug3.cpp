﻿// debug3.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
using namespace std;

int main()
{
	cout << "範囲を入力して下さい。" << endl;//最初は200でやってた。提出するつもりなかったからめっちゃざつ。
	int size = 0;
	cin >> size;
	int *b;
	b = new int[size];
	for (int j = 1; j < size; j+=2)
	{
		b[j] = 0;
		for (int i = 1; i <= j; i+=2)
		{
			if (j % i == 0)
			{
				b[j]++;
			}
		}
	}
	int m = 0;
	for (int i = 0; i < size; i++)
	{
		if (b[i]==8)
		{
			m++;
		}
	}
	cout << m << endl;
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
