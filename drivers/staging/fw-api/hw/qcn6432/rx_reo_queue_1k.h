/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _RX_REO_QUEUE_1K_H_
#define _RX_REO_QUEUE_1K_H_
#if !defined(__ASSEMBLER__)
#endif

#include "uniform_descriptor_header.h"
#define NUM_OF_DWORDS_RX_REO_QUEUE_1K 32


struct rx_reo_queue_1k {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   uniform_descriptor_header                                 descriptor_header;
             uint32_t rx_bitmap_319_288                                       : 32; // [31:0]
             uint32_t rx_bitmap_351_320                                       : 32; // [31:0]
             uint32_t rx_bitmap_383_352                                       : 32; // [31:0]
             uint32_t rx_bitmap_415_384                                       : 32; // [31:0]
             uint32_t rx_bitmap_447_416                                       : 32; // [31:0]
             uint32_t rx_bitmap_479_448                                       : 32; // [31:0]
             uint32_t rx_bitmap_511_480                                       : 32; // [31:0]
             uint32_t rx_bitmap_543_512                                       : 32; // [31:0]
             uint32_t rx_bitmap_575_544                                       : 32; // [31:0]
             uint32_t rx_bitmap_607_576                                       : 32; // [31:0]
             uint32_t rx_bitmap_639_608                                       : 32; // [31:0]
             uint32_t rx_bitmap_671_640                                       : 32; // [31:0]
             uint32_t rx_bitmap_703_672                                       : 32; // [31:0]
             uint32_t rx_bitmap_735_704                                       : 32; // [31:0]
             uint32_t rx_bitmap_767_736                                       : 32; // [31:0]
             uint32_t rx_bitmap_799_768                                       : 32; // [31:0]
             uint32_t rx_bitmap_831_800                                       : 32; // [31:0]
             uint32_t rx_bitmap_863_832                                       : 32; // [31:0]
             uint32_t rx_bitmap_895_864                                       : 32; // [31:0]
             uint32_t rx_bitmap_927_896                                       : 32; // [31:0]
             uint32_t rx_bitmap_959_928                                       : 32; // [31:0]
             uint32_t rx_bitmap_991_960                                       : 32; // [31:0]
             uint32_t rx_bitmap_1023_992                                      : 32; // [31:0]
             uint32_t reserved_24                                             : 32; // [31:0]
             uint32_t reserved_25                                             : 32; // [31:0]
             uint32_t reserved_26                                             : 32; // [31:0]
             uint32_t reserved_27                                             : 32; // [31:0]
             uint32_t reserved_28                                             : 32; // [31:0]
             uint32_t reserved_29                                             : 32; // [31:0]
             uint32_t reserved_30                                             : 32; // [31:0]
             uint32_t reserved_31                                             : 32; // [31:0]
#else
             struct   uniform_descriptor_header                                 descriptor_header;
             uint32_t rx_bitmap_319_288                                       : 32; // [31:0]
             uint32_t rx_bitmap_351_320                                       : 32; // [31:0]
             uint32_t rx_bitmap_383_352                                       : 32; // [31:0]
             uint32_t rx_bitmap_415_384                                       : 32; // [31:0]
             uint32_t rx_bitmap_447_416                                       : 32; // [31:0]
             uint32_t rx_bitmap_479_448                                       : 32; // [31:0]
             uint32_t rx_bitmap_511_480                                       : 32; // [31:0]
             uint32_t rx_bitmap_543_512                                       : 32; // [31:0]
             uint32_t rx_bitmap_575_544                                       : 32; // [31:0]
             uint32_t rx_bitmap_607_576                                       : 32; // [31:0]
             uint32_t rx_bitmap_639_608                                       : 32; // [31:0]
             uint32_t rx_bitmap_671_640                                       : 32; // [31:0]
             uint32_t rx_bitmap_703_672                                       : 32; // [31:0]
             uint32_t rx_bitmap_735_704                                       : 32; // [31:0]
             uint32_t rx_bitmap_767_736                                       : 32; // [31:0]
             uint32_t rx_bitmap_799_768                                       : 32; // [31:0]
             uint32_t rx_bitmap_831_800                                       : 32; // [31:0]
             uint32_t rx_bitmap_863_832                                       : 32; // [31:0]
             uint32_t rx_bitmap_895_864                                       : 32; // [31:0]
             uint32_t rx_bitmap_927_896                                       : 32; // [31:0]
             uint32_t rx_bitmap_959_928                                       : 32; // [31:0]
             uint32_t rx_bitmap_991_960                                       : 32; // [31:0]
             uint32_t rx_bitmap_1023_992                                      : 32; // [31:0]
             uint32_t reserved_24                                             : 32; // [31:0]
             uint32_t reserved_25                                             : 32; // [31:0]
             uint32_t reserved_26                                             : 32; // [31:0]
             uint32_t reserved_27                                             : 32; // [31:0]
             uint32_t reserved_28                                             : 32; // [31:0]
             uint32_t reserved_29                                             : 32; // [31:0]
             uint32_t reserved_30                                             : 32; // [31:0]
             uint32_t reserved_31                                             : 32; // [31:0]
#endif
};


/* Description		DESCRIPTOR_HEADER

			Details about which module owns this struct.
			Note that sub field "Buffer_type" shall be set to "Receive_REO_queue_1k_descriptor"
			
*/


/* Description		OWNER

			Consumer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO
			Producer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO 
			
			The owner of this data structure:
			<enum 0 WBM_owned> Buffer Manager currently owns this data
			 structure.
			<enum 1 SW_OR_FW_owned> Software of FW currently owns this
			 data structure.
			<enum 2 TQM_owned> Transmit Queue Manager currently owns
			 this data structure.
			<enum 3 RXDMA_owned> Receive DMA currently owns this data
			 structure.
			<enum 4 REO_owned> Reorder currently owns this data structure.
			
			<enum 5 SWITCH_owned> SWITCH currently owns this data structure.
			
			
			<legal 0-5> 
*/

#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_OWNER_OFFSET                              0x00000000
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_OWNER_LSB                                 0
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_OWNER_MSB                                 3
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_OWNER_MASK                                0x0000000f


/* Description		BUFFER_TYPE

			Consumer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO
			Producer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO 
			
			Field describing what contents format is of this descriptor
			
			
			<enum 0 Transmit_MSDU_Link_descriptor> 
			<enum 1 Transmit_MPDU_Link_descriptor> 
			<enum 2 Transmit_MPDU_Queue_head_descriptor>
			<enum 3 Transmit_MPDU_Queue_ext_descriptor>
			<enum 4 Transmit_flow_descriptor>
			<enum 5 Transmit_buffer> NOT TO BE USED: 
			
			<enum 6 Receive_MSDU_Link_descriptor>
			<enum 7 Receive_MPDU_Link_descriptor>
			<enum 8 Receive_REO_queue_descriptor>
			<enum 9 Receive_REO_queue_1k_descriptor>
			<enum 10 Receive_REO_queue_ext_descriptor>
			
			<enum 11 Receive_buffer>
			
			<enum 12 Idle_link_list_entry>
			
			<legal 0-12> 
*/

#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_BUFFER_TYPE_OFFSET                        0x00000000
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_BUFFER_TYPE_LSB                           4
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_BUFFER_TYPE_MSB                           7
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_BUFFER_TYPE_MASK                          0x000000f0


/* Description		TX_MPDU_QUEUE_NUMBER

			Consumer: TQM/Debug
			Producer: SW (in 'TX_MPDU_QUEUE_HEAD')/TQM (elsewhere)
			
			Field only valid if Buffer_type is any of Transmit_MPDU_*_descriptor
			
			
			Indicates the MPDU queue ID to which this MPDU descriptor
			 belongs
			Used for tracking and debugging
			
			 <legal all>
*/

#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_TX_MPDU_QUEUE_NUMBER_OFFSET               0x00000000
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_TX_MPDU_QUEUE_NUMBER_LSB                  8
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_TX_MPDU_QUEUE_NUMBER_MSB                  27
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_TX_MPDU_QUEUE_NUMBER_MASK                 0x0fffff00


/* Description		RESERVED_0A

			<legal 0>
*/

#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_RESERVED_0A_OFFSET                        0x00000000
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_RESERVED_0A_LSB                           28
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_RESERVED_0A_MSB                           31
#define RX_REO_QUEUE_1K_DESCRIPTOR_HEADER_RESERVED_0A_MASK                          0xf0000000


/* Description		RX_BITMAP_319_288

			When a bit is set, the corresponding frame is currently 
			held in the re-order queue.
			The bitmap  is Fully managed by HW. 
			SW shall init this to 0, and then never ever change it
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_319_288_OFFSET                                    0x00000004
#define RX_REO_QUEUE_1K_RX_BITMAP_319_288_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_319_288_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_319_288_MASK                                      0xffffffff


/* Description		RX_BITMAP_351_320

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_351_320_OFFSET                                    0x00000008
#define RX_REO_QUEUE_1K_RX_BITMAP_351_320_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_351_320_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_351_320_MASK                                      0xffffffff


/* Description		RX_BITMAP_383_352

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_383_352_OFFSET                                    0x0000000c
#define RX_REO_QUEUE_1K_RX_BITMAP_383_352_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_383_352_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_383_352_MASK                                      0xffffffff


/* Description		RX_BITMAP_415_384

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_415_384_OFFSET                                    0x00000010
#define RX_REO_QUEUE_1K_RX_BITMAP_415_384_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_415_384_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_415_384_MASK                                      0xffffffff


/* Description		RX_BITMAP_447_416

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_447_416_OFFSET                                    0x00000014
#define RX_REO_QUEUE_1K_RX_BITMAP_447_416_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_447_416_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_447_416_MASK                                      0xffffffff


/* Description		RX_BITMAP_479_448

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_479_448_OFFSET                                    0x00000018
#define RX_REO_QUEUE_1K_RX_BITMAP_479_448_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_479_448_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_479_448_MASK                                      0xffffffff


/* Description		RX_BITMAP_511_480

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_511_480_OFFSET                                    0x0000001c
#define RX_REO_QUEUE_1K_RX_BITMAP_511_480_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_511_480_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_511_480_MASK                                      0xffffffff


/* Description		RX_BITMAP_543_512

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_543_512_OFFSET                                    0x00000020
#define RX_REO_QUEUE_1K_RX_BITMAP_543_512_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_543_512_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_543_512_MASK                                      0xffffffff


/* Description		RX_BITMAP_575_544

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_575_544_OFFSET                                    0x00000024
#define RX_REO_QUEUE_1K_RX_BITMAP_575_544_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_575_544_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_575_544_MASK                                      0xffffffff


/* Description		RX_BITMAP_607_576

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_607_576_OFFSET                                    0x00000028
#define RX_REO_QUEUE_1K_RX_BITMAP_607_576_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_607_576_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_607_576_MASK                                      0xffffffff


/* Description		RX_BITMAP_639_608

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_639_608_OFFSET                                    0x0000002c
#define RX_REO_QUEUE_1K_RX_BITMAP_639_608_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_639_608_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_639_608_MASK                                      0xffffffff


/* Description		RX_BITMAP_671_640

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_671_640_OFFSET                                    0x00000030
#define RX_REO_QUEUE_1K_RX_BITMAP_671_640_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_671_640_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_671_640_MASK                                      0xffffffff


/* Description		RX_BITMAP_703_672

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_703_672_OFFSET                                    0x00000034
#define RX_REO_QUEUE_1K_RX_BITMAP_703_672_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_703_672_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_703_672_MASK                                      0xffffffff


/* Description		RX_BITMAP_735_704

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_735_704_OFFSET                                    0x00000038
#define RX_REO_QUEUE_1K_RX_BITMAP_735_704_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_735_704_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_735_704_MASK                                      0xffffffff


/* Description		RX_BITMAP_767_736

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_767_736_OFFSET                                    0x0000003c
#define RX_REO_QUEUE_1K_RX_BITMAP_767_736_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_767_736_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_767_736_MASK                                      0xffffffff


/* Description		RX_BITMAP_799_768

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_799_768_OFFSET                                    0x00000040
#define RX_REO_QUEUE_1K_RX_BITMAP_799_768_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_799_768_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_799_768_MASK                                      0xffffffff


/* Description		RX_BITMAP_831_800

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_831_800_OFFSET                                    0x00000044
#define RX_REO_QUEUE_1K_RX_BITMAP_831_800_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_831_800_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_831_800_MASK                                      0xffffffff


/* Description		RX_BITMAP_863_832

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_863_832_OFFSET                                    0x00000048
#define RX_REO_QUEUE_1K_RX_BITMAP_863_832_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_863_832_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_863_832_MASK                                      0xffffffff


/* Description		RX_BITMAP_895_864

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_895_864_OFFSET                                    0x0000004c
#define RX_REO_QUEUE_1K_RX_BITMAP_895_864_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_895_864_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_895_864_MASK                                      0xffffffff


/* Description		RX_BITMAP_927_896

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_927_896_OFFSET                                    0x00000050
#define RX_REO_QUEUE_1K_RX_BITMAP_927_896_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_927_896_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_927_896_MASK                                      0xffffffff


/* Description		RX_BITMAP_959_928

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_959_928_OFFSET                                    0x00000054
#define RX_REO_QUEUE_1K_RX_BITMAP_959_928_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_959_928_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_959_928_MASK                                      0xffffffff


/* Description		RX_BITMAP_991_960

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_991_960_OFFSET                                    0x00000058
#define RX_REO_QUEUE_1K_RX_BITMAP_991_960_LSB                                       0
#define RX_REO_QUEUE_1K_RX_BITMAP_991_960_MSB                                       31
#define RX_REO_QUEUE_1K_RX_BITMAP_991_960_MASK                                      0xffffffff


/* Description		RX_BITMAP_1023_992

			See Rx_bitmap_319_288 description
			<legal all>
*/

#define RX_REO_QUEUE_1K_RX_BITMAP_1023_992_OFFSET                                   0x0000005c
#define RX_REO_QUEUE_1K_RX_BITMAP_1023_992_LSB                                      0
#define RX_REO_QUEUE_1K_RX_BITMAP_1023_992_MSB                                      31
#define RX_REO_QUEUE_1K_RX_BITMAP_1023_992_MASK                                     0xffffffff


/* Description		RESERVED_24

			<legal 0>
*/

#define RX_REO_QUEUE_1K_RESERVED_24_OFFSET                                          0x00000060
#define RX_REO_QUEUE_1K_RESERVED_24_LSB                                             0
#define RX_REO_QUEUE_1K_RESERVED_24_MSB                                             31
#define RX_REO_QUEUE_1K_RESERVED_24_MASK                                            0xffffffff


/* Description		RESERVED_25

			<legal 0>
*/

#define RX_REO_QUEUE_1K_RESERVED_25_OFFSET                                          0x00000064
#define RX_REO_QUEUE_1K_RESERVED_25_LSB                                             0
#define RX_REO_QUEUE_1K_RESERVED_25_MSB                                             31
#define RX_REO_QUEUE_1K_RESERVED_25_MASK                                            0xffffffff


/* Description		RESERVED_26

			<legal 0>
*/

#define RX_REO_QUEUE_1K_RESERVED_26_OFFSET                                          0x00000068
#define RX_REO_QUEUE_1K_RESERVED_26_LSB                                             0
#define RX_REO_QUEUE_1K_RESERVED_26_MSB                                             31
#define RX_REO_QUEUE_1K_RESERVED_26_MASK                                            0xffffffff


/* Description		RESERVED_27

			<legal 0>
*/

#define RX_REO_QUEUE_1K_RESERVED_27_OFFSET                                          0x0000006c
#define RX_REO_QUEUE_1K_RESERVED_27_LSB                                             0
#define RX_REO_QUEUE_1K_RESERVED_27_MSB                                             31
#define RX_REO_QUEUE_1K_RESERVED_27_MASK                                            0xffffffff


/* Description		RESERVED_28

			<legal 0>
*/

#define RX_REO_QUEUE_1K_RESERVED_28_OFFSET                                          0x00000070
#define RX_REO_QUEUE_1K_RESERVED_28_LSB                                             0
#define RX_REO_QUEUE_1K_RESERVED_28_MSB                                             31
#define RX_REO_QUEUE_1K_RESERVED_28_MASK                                            0xffffffff


/* Description		RESERVED_29

			<legal 0>
*/

#define RX_REO_QUEUE_1K_RESERVED_29_OFFSET                                          0x00000074
#define RX_REO_QUEUE_1K_RESERVED_29_LSB                                             0
#define RX_REO_QUEUE_1K_RESERVED_29_MSB                                             31
#define RX_REO_QUEUE_1K_RESERVED_29_MASK                                            0xffffffff


/* Description		RESERVED_30

			<legal 0>
*/

#define RX_REO_QUEUE_1K_RESERVED_30_OFFSET                                          0x00000078
#define RX_REO_QUEUE_1K_RESERVED_30_LSB                                             0
#define RX_REO_QUEUE_1K_RESERVED_30_MSB                                             31
#define RX_REO_QUEUE_1K_RESERVED_30_MASK                                            0xffffffff


/* Description		RESERVED_31

			<legal 0>
*/

#define RX_REO_QUEUE_1K_RESERVED_31_OFFSET                                          0x0000007c
#define RX_REO_QUEUE_1K_RESERVED_31_LSB                                             0
#define RX_REO_QUEUE_1K_RESERVED_31_MSB                                             31
#define RX_REO_QUEUE_1K_RESERVED_31_MASK                                            0xffffffff



#endif   // RX_REO_QUEUE_1K
