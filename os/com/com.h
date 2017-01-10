/*
 * TacOS Source Code
 *    Tokuyama kousen Advanced educational Computer.
 *
 * Copyright (C) 2016 by
 *                      Dept. of Computer Science and Electronic Engineering,
 *                      Tokuyama College of Technology, JAPAN
 *
 *   上記著作権者は，Free Software Foundation によって公開されている GNU 一般公
 * 衆利用許諾契約書バージョン２に記述されている条件を満たす場合に限り，本ソース
 * コード(本ソースコードを改変したものを含む．以下同様)を使用・複製・改変・再配
 * 布することを無償で許諾する．
 *
 *   本ソースコードは＊全くの無保証＊で提供されるものである。上記著作権者および
 * 関連機関・個人は本ソースコードに関して，その適用可能性も含めて，いかなる保証
 * も行わない．また，本ソースコードの利用により直接的または間接的に生じたいかな
 * る損害に関しても，その責任を負わない．
 *
 *
 */

/*
 * com/com.h : com.cmm の外部インタフェース
 *
 * 2016.10.28 新規作成
 *
 * $Id$
 */

public int comLink;                                 // 端末サーバへのリンク番号

public void comMain();                              // 待ち受けルーチン

public int comTec(int port, int value);             // TeCとの通信を行う
public int putSIO(int c);                           // シリアル出力ルーチン
public int getSIO();                                // シリアル入力ルーチン
