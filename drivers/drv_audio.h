/*
 * @File:   drv_audio.h 
 * @Author: liuguang 
 * @Date:   2018-08-27 23:48:19 
 * 
 * @LICENSE: 
 * The code owner is liuguang. Other personnel may 
 * not be used or modified.
 * 
 * Change Logs: 
 * Date           Author       Notes 
 * 2018-08-27     liuguang     The first version. 
 */ 
 
#ifndef __DRV_AUDIO_H_

#define __DRV_AUDIO_H_

#include "rtthread.h" 
#include "rtdevice.h" 

/** CS43l22 Registers  **/ 
#define   CS43L22_REG_ID                  0x01
#define   CS43L22_REG_POWER_CTL1          0x02
#define   CS43L22_REG_POWER_CTL2          0x04
#define   CS43L22_REG_CLOCKING_CTL        0x05
#define   CS43L22_REG_INTERFACE_CTL1      0x06
#define   CS43L22_REG_INTERFACE_CTL2      0x07
#define   CS43L22_REG_PASSTHR_A_SELECT    0x08
#define   CS43L22_REG_PASSTHR_B_SELECT    0x09
#define   CS43L22_REG_ANALOG_ZC_SR_SETT   0x0A
#define   CS43L22_REG_PASSTHR_GANG_CTL    0x0C
#define   CS43L22_REG_PLAYBACK_CTL1       0x0D
#define   CS43L22_REG_MISC_CTL            0x0E
#define   CS43L22_REG_PLAYBACK_CTL2       0x0F
#define   CS43L22_REG_PASSTHR_A_VOL       0x14
#define   CS43L22_REG_PASSTHR_B_VOL       0x15
#define   CS43L22_REG_PCMA_VOL            0x1A
#define   CS43L22_REG_PCMB_VOL            0x1B
#define   CS43L22_REG_BEEP_FREQ_ON_TIME   0x1C
#define   CS43L22_REG_BEEP_VOL_OFF_TIME   0x1D
#define   CS43L22_REG_BEEP_TONE_CFG       0x1E
#define   CS43L22_REG_TONE_CTL            0x1F
#define   CS43L22_REG_MASTER_A_VOL        0x20
#define   CS43L22_REG_MASTER_B_VOL        0x21
#define   CS43L22_REG_HEADPHONE_A_VOL     0x22
#define   CS43L22_REG_HEADPHONE_B_VOL     0x23
#define   CS43L22_REG_SPEAKER_A_VOL       0x24
#define   CS43L22_REG_SPEAKER_B_VOL       0x25
#define   CS43L22_REG_CH_MIXER_SWAP       0x26
#define   CS43L22_REG_LIMIT_CTL1          0x27
#define   CS43L22_REG_LIMIT_CTL2          0x28
#define   CS43L22_REG_LIMIT_ATTACK_RATE   0x29
#define   CS43L22_REG_OVF_CLK_STATUS      0x2E
#define   CS43L22_REG_BATT_COMPENSATION   0x2F
#define   CS43L22_REG_VP_BATTERY_LEVEL    0x30
#define   CS43L22_REG_SPEAKER_STATUS      0x31
#define   CS43L22_REG_TEMPMONITOR_CTL     0x32
#define   CS43L22_REG_THERMAL_FOLDBACK    0x33
#define   CS43L22_REG_CHARGE_PUMP_FREQ    0x34

#endif
