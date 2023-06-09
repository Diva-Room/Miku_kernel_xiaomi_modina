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

#ifndef _MACTX_HT_SIG_H_
#define _MACTX_HT_SIG_H_
#if !defined(__ASSEMBLER__)
#endif

#include "ht_sig_info.h"
#define NUM_OF_DWORDS_MACTX_HT_SIG 2

#define NUM_OF_QWORDS_MACTX_HT_SIG 1


struct mactx_ht_sig {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   ht_sig_info                                               mactx_ht_sig_info_details;
#else
             struct   ht_sig_info                                               mactx_ht_sig_info_details;
#endif
};


/* Description		MACTX_HT_SIG_INFO_DETAILS

			See detailed description of the STRUCT
*/


/* Description		MCS

			Modulation Coding Scheme:
			0-7 are used for single stream
			8-15 are used for 2 streams
			16-23 are used for 3 streams
			24-31 are used for 4 streams
			32 is used for duplicate HT20 (unsupported)
			33-76 is used for unequal modulation (unsupported)
			77-127 is reserved.
			<legal 0-31>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_MCS_OFFSET                           0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_MCS_LSB                              0
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_MCS_MSB                              6
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_MCS_MASK                             0x000000000000007f


/* Description		CBW

			Packet bandwidth:
			<enum 0     ht_20_mhz>
			<enum 1     ht_40_mhz>
			<legal 0-1>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_CBW_OFFSET                           0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_CBW_LSB                              7
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_CBW_MSB                              7
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_CBW_MASK                             0x0000000000000080


/* Description		LENGTH

			This is the MPDU or A-MPDU length in octets of the PPDU
			<legal all>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_LENGTH_OFFSET                        0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_LENGTH_LSB                           8
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_LENGTH_MSB                           23
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_LENGTH_MASK                          0x0000000000ffff00


/* Description		RESERVED_0

			This field is not part of HT-SIG
			Reserved: Should be set to 0 by the MAC and ignored by the
			 PHY <legal 0>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RESERVED_0_OFFSET                    0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RESERVED_0_LSB                       24
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RESERVED_0_MSB                       31
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RESERVED_0_MASK                      0x00000000ff000000


/* Description		SMOOTHING

			Field indicates if smoothing is needed
			E_num 0     do_smoothing Unsupported setting: indicates 
			smoothing is often used for beamforming 
			<enum 1     no_smoothing> Indicates no smoothing is used
			
			<legal 1>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SMOOTHING_OFFSET                     0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SMOOTHING_LSB                        32
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SMOOTHING_MSB                        32
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SMOOTHING_MASK                       0x0000000100000000


/* Description		NOT_SOUNDING

			E_num 0     sounding Unsupported setting: indicates sounding
			 is used
			<enum 1     no_sounding>  Indicates no sounding is used
			<legal 1>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_NOT_SOUNDING_OFFSET                  0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_NOT_SOUNDING_LSB                     33
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_NOT_SOUNDING_MSB                     33
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_NOT_SOUNDING_MASK                    0x0000000200000000


/* Description		HT_RESERVED

			Reserved: Should be set to 1 by the MAC and ignored by the
			 PHY 
			<legal 1>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_HT_RESERVED_OFFSET                   0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_HT_RESERVED_LSB                      34
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_HT_RESERVED_MSB                      34
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_HT_RESERVED_MASK                     0x0000000400000000


/* Description		AGGREGATION

			<enum 0     mpdu> Indicates MPDU format
			<enum 1     a_mpdu> Indicates A-MPDU format
			<legal 0-1>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_AGGREGATION_OFFSET                   0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_AGGREGATION_LSB                      35
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_AGGREGATION_MSB                      35
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_AGGREGATION_MASK                     0x0000000800000000


/* Description		STBC

			<enum 0     no_stbc> Indicates no STBC
			<enum 1     1_str_stbc> Indicates 1 stream STBC
			E_num 2     2_str_stbc Indicates 2 stream STBC (Unsupported)
			
			<legal 0-1>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_STBC_OFFSET                          0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_STBC_LSB                             36
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_STBC_MSB                             37
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_STBC_MASK                            0x0000003000000000


/* Description		FEC_CODING

			<enum 0     ht_bcc>  Indicates BCC coding
			<enum 1     ht_ldpc>  Indicates LDPC coding
			<legal 0-1>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_FEC_CODING_OFFSET                    0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_FEC_CODING_LSB                       38
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_FEC_CODING_MSB                       38
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_FEC_CODING_MASK                      0x0000004000000000


/* Description		SHORT_GI

			<enum 0     ht_normal_gi>  Indicates normal guard interval
			
			<enum 1     ht_short_gi>  Indicates short guard interval
			
			<legal 0-1>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SHORT_GI_OFFSET                      0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SHORT_GI_LSB                         39
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SHORT_GI_MSB                         39
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SHORT_GI_MASK                        0x0000008000000000


/* Description		NUM_EXT_SP_STR

			Number of extension spatial streams: (Used for TxBF)
			<enum 0     0_ext_sp_str>  No extension spatial streams
			E_num 1     1_ext_sp_str  Not supported: 1 extension spatial
			 streams
			E_num 2     2_ext_sp_str  Not supported:  2 extension spatial
			 streams
			<legal 0>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_NUM_EXT_SP_STR_OFFSET                0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_NUM_EXT_SP_STR_LSB                   40
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_NUM_EXT_SP_STR_MSB                   41
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_NUM_EXT_SP_STR_MASK                  0x0000030000000000


/* Description		CRC

			The CRC protects the HT-SIG (HT-SIG[0][23:0] and HT-SIG[1][9:0]. 
			The generator polynomial is G(D) = D8 + D2 + D + 1.  <legal
			 all>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_CRC_OFFSET                           0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_CRC_LSB                              42
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_CRC_MSB                              49
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_CRC_MASK                             0x0003fc0000000000


/* Description		SIGNAL_TAIL

			The 6 bits of tail is always set to 0 is used to flush the
			 BCC encoder and decoder.  <legal 0>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SIGNAL_TAIL_OFFSET                   0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SIGNAL_TAIL_LSB                      50
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SIGNAL_TAIL_MSB                      55
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_SIGNAL_TAIL_MASK                     0x00fc000000000000


/* Description		RESERVED_1

			This field is not part of HT-SIG:
			Reserved: Should be set to 0 by the MAC and ignored by the
			 PHY.  <legal 0>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RESERVED_1_OFFSET                    0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RESERVED_1_LSB                       56
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RESERVED_1_MSB                       62
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RESERVED_1_MASK                      0x7f00000000000000


/* Description		RX_INTEGRITY_CHECK_PASSED

			TX side: Set to 0
			RX side: Set to 1 if PHY determines the HT-SIG CRC check
			 has passed, else set to 0
			
			<legal all>
*/

#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_OFFSET     0x0000000000000000
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_LSB        63
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MSB        63
#define MACTX_HT_SIG_MACTX_HT_SIG_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MASK       0x8000000000000000



#endif   // MACTX_HT_SIG
