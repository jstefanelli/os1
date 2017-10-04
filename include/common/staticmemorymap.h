#ifndef __JPS_COMMON_MMAP_H
#define __JPS_COMMON_MMAP_H

#define KERNEL_INIT_ADDR 0x8E00
#define KERNEL_BUFF_START KERNEL_INIT_ADDR
#define KERNEL_BUFF_SIZE (0x17 * 0x200)
#define KERNEL_BUFF_END (KERNEL_BUFF_START + KERNEL_BUFF_SIZE)

#define FLOPPY_BUFF_SIZE 0x10000
#define FLOPPY_BUFF_START 0x20000
#define FLOPPY_BUFF_END (FLOPPY_BUFF_START + FLOPPY_BUFF_SIZE)

#define FAT_DIR_BUFF_START FLOPPY_BUFF_END
#define FAT_DIR_BUFF_SIZE 0x400
#define FAT_DIR_BUFF_END (FAT_DIR_BUFF_START + FAT_DIR_BUFF_SIZE)

#define SHELL_INIT_ADDR 0x40000
#define SHELL_BUFF_SIZE 0x1000
#define SHELL_BUFF_START SHELL_INIT_ADDR
#define SHELL_BUFF_END (SHELL_BUFF_START + SHELL_BUFF_SIZE)

#define ELFL_INIT_ADDR 0x50000
#define ELFL_BUFF_SIZE 0x4400
#define ELFL_BUFF_START ELFL_INIT_ADDR
#define ELFL_BUFF_END (ELFL_BUFF_START + ELFL_BUFF_SIZE)

#define KEYB_BUFF_SIZE 0x400
#define KEYB_BUFF_START (FAT_DIR_BUFF_END)
#define KEYB_BUFF_END (KEYB_BUFF_START + KEYB_BUFF_SIZE)

#define ELF_BUFF_SIZE 0x20000
#define ELF_BUFF_START 0x100000
#define ELF_BUFF_END (ELF_BUFF_START + ELF_BUFF_SIZE)

#define EXE_BUFF_START 0x120000

#define VIDEO_MEM_START 0xA0000
#define VIDEO_MEM_SIZE 0x60000
#define VIDEO_MEM_END (VIDEO_MEM_START + VIDEO_MEM_SIZE)

#define VIDEO_MEM_CHAR_START 0xb8000
#define VIDEO_MEM_CHAR_SIZE (80 * 25 * 2)
#define VIDEO_MEM_CHAR_END (VIDEO_MEM_CHAR_SIZE + VIDEO_MEM_CHAR_END)

#endif
