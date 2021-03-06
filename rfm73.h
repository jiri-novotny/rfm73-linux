#ifndef _RFM73_H_
#define _RFM73_H_

#include <linux/sockios.h>

#define EN_DYN_PL             1

#define DEVICE_RX             0x0F
#define DEVICE_TX             0x0E

#define R_REGISTER            0x00
#define W_REGISTER            0x20
#define R_RX_PAYLOAD          0x61
#define W_TX_PAYLOAD          0xA0
#define FLUSH_TX              0xE1
#define FLUSH_RX              0xE2
#define REUSE_TX_PL           0xE3
#define ACTIVATE              0x50
#define R_RX_PL_WID           0x60
#define W_ACK_PAYLOAD         0xA8
#define W_TX_PAYLOAD_NOACK    0xB0
#define NOP                   0xFF

#define IRQ_RX_DATA_READY     0x40
#define IRQ_TX_DATA_SENT      0x20
#define IRQ_MAX_RT            0x10
#define IRQ_TX_FIFO_FULL      0x01

#define CONFIG                0x00
#define EN_AA                 0x01
#define EN_RXADDR             0x02
#define SETUP_AW              0x03
#define SETUP_RETR            0x04
#define RF_CH                 0x05
#define RF_SETUP              0x06
#define STATUS                0x07
#define OBSERVE_TX            0x08
#define CD                    0x09
#define RX_ADDR_P0            0x0A
#define RX_ADDR_P1            0x0B
#define RX_ADDR_P2            0x0C
#define RX_ADDR_P3            0x0D
#define RX_ADDR_P4            0x0E
#define RX_ADDR_P5            0x0F
#define TX_ADDR               0x10
#define RX_PW_P0              0x11
#define RX_PW_P1              0x12
#define RX_PW_P2              0x13
#define RX_PW_P3              0x14
#define RX_PW_P4              0x15
#define RX_PW_P5              0x16
#define FIFO_STATUS           0x17
#define DYNPD                 0x1C
#define FEATURE               0x1D

#define BANK1_ENTRIES         14

#define ETH_P_NONE	          0x00FF

//netdev driver ioctl commands
#define GET_CHANNEL           SIOCDEVPRIVATE //...+15
#define SET_CHANNEL           SIOCDEVPRIVATE + 1 //...+15
#define GET_REG               SIOCDEVPRIVATE + 2 //...+15
#define SET_REG               SIOCDEVPRIVATE + 3 //...+15

#endif /* _RFM73_H_ */