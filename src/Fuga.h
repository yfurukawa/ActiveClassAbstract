/*!------------------------------------------------
@file       Fuga.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef FUGA_H_
#define FUGA_H_

// インクルードファイル ================================
#include <pthread.h>
#include <iostream>
#include <stdio.h>

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       Fuga.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
class Fuga {
 public:
  //! Constructor
  Fuga();
  //! Destructor
  virtual ~Fuga();
  void exec();

 protected:
 private:
  pthread_mutex_t mutex_;
  pthread_t threadId_;
  int count_;
  static void* run(void* args){
    reinterpret_cast<Fuga*>(args)->exec();
    return (void*)NULL;
  };
};

#endif  // FUGA_H_
