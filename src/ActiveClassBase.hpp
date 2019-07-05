/*!------------------------------------------------
@file       ActiveClassBase.h
@brief      
@attention  なし
--------------------------------------------------*/

#ifndef ACTIVECLASSBASE_H_
#define ACTIVECLASSBASE_H_

// インクルードファイル ================================
#include <iostream>
#include <pthread.h>

// クラスの前方宣言 ====================================

// マクロの宣言 ========================================

// 型の宣言 ============================================

// クラス定義 ==========================================
/*!--------------------------------------------------
@class       ActiveClassBase.h
@brief      
@note       
@attention  なし
@see        なし
--------------------------------------------------*/
template <typename T>
class ActiveClassBase {
 public:
  //! Constructor
  ActiveClassBase() : object_(NULL) {};
  //! Destructor
  virtual ~ActiveClassBase(){
    pthread_cancel(threadId_);
    pthread_join(threadId_, NULL);
  };

  void setObject(void* object) {
    object_ = object;
  }

  void startBehavior(){
    pthread_mutex_init(&(this->mutex_), NULL);
    pthread_create(&(this->threadId_), NULL, &ActiveClassBase::run, object_);
  };

 protected:
  pthread_t threadId_;
  pthread_mutex_t mutex_;
  void* object_;

  static void* run(void* args) {
    static_cast<T*>(args)->exec();
    return (void*)NULL;
  }

  virtual void exec() = 0;

 private:
};

#endif  // ACTIVECLASSBASE_H_
