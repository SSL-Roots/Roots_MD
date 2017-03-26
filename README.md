# Roots_MD
RootsMotorDriverプログラム
■通信関係
Main MBEDからCAN通信により受信

ID:1AA
DL:8
内容：
signed short OrderMot1Vel 車輪１の指示速度
signed short OrderMot2Vel 車輪2の指示速度
signed short OrderMot3Vel 車輪3の指示速度
signed short OrderMot4Vel 車輪4の指示速度

#define MOT_NUM により各MDの車輪への割り当てを決定する
