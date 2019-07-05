/*!------------------------------------------------
@file       Fuga.h
@brief      
@attention  なし
--------------------------------------------------*/
#include <unistd.h>
#include "Fuga.h"
#include <iostream>

/*!------------------------------------------------
@brief      デフォルトコンストラクタ
@note       クラスを構築する
@attention  なし
--------------------------------------------------*/
Fuga::Fuga() : count_(0) {
  pthread_create(&(this->threadId_), NULL , &Fuga::run, this);
}

/*!------------------------------------------------
@brief      デフォルトデストラクタ
@note       クラスを破棄する
@attention  なし
--------------------------------------------------*/
Fuga::~Fuga() {
  pthread_cancel( this->threadId_ );
  pthread_join( this->threadId_, NULL );
}

/*!------------------------------------------------
@brief      
@note       
@param[in]  パラメータ名  説明  [単位] (範囲)
@param[out] 
@return     なし
@attention  なし
--------------------------------------------------*/
void Fuga::exec() {
  while(1) {
    std::cout << "Fuga = " << count_++ << std::endl;
    sleep(1);
  }
}
