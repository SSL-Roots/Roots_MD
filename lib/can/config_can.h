/* 
 * File:   config_can.h
 * Author: y.kek.na0710
 *
 * Created on 2017/03/26, 19:23
 */

#ifndef CONFIG_CAN_H
#define	CONFIG_CAN_H


/* 受信データ置換後*/
typedef struct {
    signed short Mot1OrderVel;
    signed short Mot2OrderVel;
    signed short Mot3OrderVel;
    signed short Mot4OrderVel;
} OrderMotVel;

OrderMotVel order;

/* CAN関係 */

#define NUM_OF_ECAN_BUFFERS 32

/* 設定 */
#define NORMAL_MODE             0x0
#define DISABLE_MODE            0x1
#define LOOPBACK_MODE           0x2
#define LISTENONLY_MODE         0x3
#define CONFIG_MODE             0x4
#define LISTENALLMESSAGE_MODE   0x7

#define BUFFER_WINDOW           0x0
#define FILTER_WINDOW           0x1

#define SJW_1TQ                 0x0
#define SJW_2TQ                 0x1
#define SJW_3TQ                 0x2
#define SJW_4TQ                 0x3

#define CAN_BAUD_PRESCALE(x)    (x - 1)
#define CAN_SEGMENT_BIT(x)      (x - 1)

/*FP = Fosc/2 */
#define FCAN_IS_2FP             0x1
#define FCAN_IS_FP              0x0

#define NO_WAKEUP_FIL           0x0
#define WAKEUP_FIL              0x1

#define FREE_PROGRAMMABLE       0x1

#define BUSLINE_SAMPLING_3      0x1
#define BUSLINE_SAMPLING_1      0x0

#define DMA_BUF_SIZE_4          0x0
#define DMA_BUF_SIZE_6          0x1
#define DMA_BUF_SIZE_8          0x2
#define DMA_BUF_SIZE_12         0x3
#define DMA_BUF_SIZE_16         0x4
#define DMA_BUF_SIZE_24         0x5
#define DMA_BUF_SIZE_32         0x6

#define DMA_TRANS_SIZE_BYTE     0x1
#define DMA_TRANS_SIZE_WORD     0x0

#define DMA_TRANS_DIR_READ      0x0
#define DMA_TRANS_DIR_WRITE     0x1

#define DMA_PERI_INDIRECT_ADDRES 0x2

#define DMA_CONTINU_DIS_PINPON  0x0
#define DMA_ONESHOT_DIS_PINPON  0x1
#define DMA_CONTINU_ENA_PINPON  0x2
#define DMA_ONESHOT_ENA_PINPON  0x3

#define DMA_MODULE_CAN          0x22

#define DMA_CH_ON               0x1
#define DMA_CH_OFF              0x0

#define MASK_REG0_SELECT        0x0
#define MASK_REG1_SELECT        0x1
#define MASK_REG2_SELECT        0x2

#define STANDARD_ADDRESS        0x0
#define EXTENDED_ADDRESS        0x1



#endif	/* CONFIG_CAN_H */

