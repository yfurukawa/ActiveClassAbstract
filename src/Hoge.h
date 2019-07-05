/*!------------------------------------------------
@file       Hoge.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef HOGE_H_
#define HOGE_H_

// インクルードファイル ================================
#include "ActiveClassBase.hpp"

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       Hoge.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class Hoge : public ActiveClassBase<Hoge> {
 public:
  //! Constructor
  Hoge();
  //! Destructor
  virtual ~Hoge();
  virtual void exec();

 protected:
 private:
};

#endif  // HOGE_H_
