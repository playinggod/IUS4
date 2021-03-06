#ifndef __I2C__H
#define __I2C__H

bit get_ack( unsigned char address );
bit receive_block(unsigned char address, unsigned char addr, unsigned char xdata * block,unsigned char len);
bit transmit_block(unsigned char address, unsigned char addr, unsigned char xdata * block,unsigned char len);

#endif
