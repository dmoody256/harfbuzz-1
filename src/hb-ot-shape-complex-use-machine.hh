
#line 1 "hb-ot-shape-complex-use-machine.rl"
/*
 * Copyright © 2015  Mozilla Foundation.
 * Copyright © 2015  Google, Inc.
 *
 *  This is part of HarfBuzz, a text shaping library.
 *
 * Permission is hereby granted, without written agreement and without
 * license or royalty fees, to use, copy, modify, and distribute this
 * software and its documentation for any purpose, provided that the
 * above copyright notice and the following two paragraphs appear in
 * all copies of this software.
 *
 * IN NO EVENT SHALL THE COPYRIGHT HOLDER BE LIABLE TO ANY PARTY FOR
 * DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES
 * ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION, EVEN
 * IF THE COPYRIGHT HOLDER HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH
 * DAMAGE.
 *
 * THE COPYRIGHT HOLDER SPECIFICALLY DISCLAIMS ANY WARRANTIES, INCLUDING,
 * BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
 * FITNESS FOR A PARTICULAR PURPOSE.  THE SOFTWARE PROVIDED HEREUNDER IS
 * ON AN "AS IS" BASIS, AND THE COPYRIGHT HOLDER HAS NO OBLIGATION TO
 * PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS.
 *
 * Mozilla Author(s): Jonathan Kew
 * Google Author(s): Behdad Esfahbod
 */

#ifndef HB_OT_SHAPE_COMPLEX_USE_MACHINE_HH
#define HB_OT_SHAPE_COMPLEX_USE_MACHINE_HH

#include "hb.hh"
#include "hb-ot-shape-complex-machine-index.hh"


#line 39 "hb-ot-shape-complex-use-machine.hh"
static const unsigned char _use_syllable_machine_trans_keys[] = {
	12u, 44u, 1u, 15u, 1u, 1u, 12u, 44u, 0u, 44u, 8u, 44u, 8u, 44u, 1u, 15u, 
	1u, 1u, 8u, 44u, 8u, 39u, 8u, 26u, 8u, 26u, 8u, 26u, 8u, 39u, 8u, 39u, 
	8u, 39u, 8u, 44u, 8u, 44u, 8u, 44u, 8u, 44u, 8u, 44u, 8u, 44u, 8u, 44u, 
	8u, 44u, 1u, 39u, 13u, 13u, 4u, 4u, 8u, 44u, 41u, 42u, 42u, 42u, 8u, 44u, 
	8u, 44u, 8u, 39u, 8u, 26u, 8u, 26u, 8u, 26u, 8u, 39u, 8u, 39u, 8u, 39u, 
	8u, 44u, 8u, 44u, 8u, 44u, 8u, 44u, 8u, 44u, 8u, 44u, 8u, 44u, 8u, 44u, 
	1u, 39u, 1u, 15u, 4u, 4u, 13u, 13u, 12u, 44u, 1u, 44u, 8u, 44u, 41u, 42u, 
	42u, 42u, 1u, 5u, 0
};

static const char _use_syllable_machine_key_spans[] = {
	33, 15, 1, 33, 45, 37, 37, 15, 
	1, 37, 32, 19, 19, 19, 32, 32, 
	32, 37, 37, 37, 37, 37, 37, 37, 
	37, 39, 1, 1, 37, 2, 1, 37, 
	37, 32, 19, 19, 19, 32, 32, 32, 
	37, 37, 37, 37, 37, 37, 37, 37, 
	39, 15, 1, 1, 33, 44, 37, 2, 
	1, 5
};

static const short _use_syllable_machine_index_offsets[] = {
	0, 34, 50, 52, 86, 132, 170, 208, 
	224, 226, 264, 297, 317, 337, 357, 390, 
	423, 456, 494, 532, 570, 608, 646, 684, 
	722, 760, 800, 802, 804, 842, 845, 847, 
	885, 923, 956, 976, 996, 1016, 1049, 1082, 
	1115, 1153, 1191, 1229, 1267, 1305, 1343, 1381, 
	1419, 1459, 1475, 1477, 1479, 1513, 1558, 1596, 
	1599, 1601
};

static const char _use_syllable_machine_indicies[] = {
	1, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	1, 0, 3, 2, 2, 2, 2, 2, 
	2, 2, 2, 2, 2, 2, 2, 2, 
	4, 2, 3, 2, 6, 5, 5, 5, 
	5, 5, 5, 5, 5, 5, 5, 5, 
	5, 5, 5, 5, 5, 5, 5, 5, 
	5, 5, 5, 5, 5, 5, 5, 5, 
	5, 5, 5, 5, 6, 5, 7, 8, 
	9, 7, 10, 11, 9, 9, 12, 9, 
	9, 3, 13, 14, 9, 15, 7, 7, 
	16, 17, 9, 9, 18, 19, 20, 21, 
	22, 23, 24, 18, 25, 26, 27, 28, 
	29, 30, 9, 31, 32, 33, 9, 34, 
	35, 36, 37, 9, 39, 38, 38, 40, 
	1, 38, 38, 41, 38, 38, 38, 38, 
	38, 38, 42, 43, 44, 45, 46, 47, 
	48, 42, 49, 8, 50, 51, 52, 53, 
	38, 54, 55, 56, 38, 38, 38, 38, 
	57, 38, 39, 38, 38, 40, 1, 38, 
	38, 41, 38, 38, 38, 38, 38, 38, 
	42, 43, 44, 45, 46, 47, 48, 42, 
	49, 50, 50, 51, 52, 53, 38, 54, 
	55, 56, 38, 38, 38, 38, 57, 38, 
	40, 58, 58, 58, 58, 58, 58, 58, 
	58, 58, 58, 58, 58, 58, 59, 58, 
	40, 58, 39, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	42, 43, 44, 45, 46, 38, 38, 38, 
	38, 38, 38, 51, 52, 53, 38, 54, 
	55, 56, 38, 38, 38, 38, 43, 38, 
	39, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 43, 
	44, 45, 46, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 54, 55, 56, 
	38, 39, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	38, 44, 45, 46, 38, 39, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 45, 46, 
	38, 39, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 46, 38, 39, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 44, 45, 46, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 54, 55, 56, 38, 39, 38, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 44, 45, 
	46, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 55, 56, 38, 39, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 44, 
	45, 46, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 56, 38, 
	39, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 43, 
	44, 45, 46, 38, 38, 38, 38, 38, 
	38, 51, 52, 53, 38, 54, 55, 56, 
	38, 38, 38, 38, 43, 38, 39, 38, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 43, 44, 45, 
	46, 38, 38, 38, 38, 38, 38, 38, 
	52, 53, 38, 54, 55, 56, 38, 38, 
	38, 38, 43, 38, 39, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 43, 44, 45, 46, 38, 
	38, 38, 38, 38, 38, 38, 38, 53, 
	38, 54, 55, 56, 38, 38, 38, 38, 
	43, 38, 39, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	42, 43, 44, 45, 46, 38, 48, 42, 
	38, 38, 38, 51, 52, 53, 38, 54, 
	55, 56, 38, 38, 38, 38, 43, 38, 
	39, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 42, 43, 
	44, 45, 46, 38, 60, 42, 38, 38, 
	38, 51, 52, 53, 38, 54, 55, 56, 
	38, 38, 38, 38, 43, 38, 39, 38, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 38, 38, 42, 43, 44, 45, 
	46, 38, 38, 42, 38, 38, 38, 51, 
	52, 53, 38, 54, 55, 56, 38, 38, 
	38, 38, 43, 38, 39, 38, 38, 38, 
	38, 38, 38, 38, 38, 38, 38, 38, 
	38, 38, 42, 43, 44, 45, 46, 47, 
	48, 42, 38, 38, 38, 51, 52, 53, 
	38, 54, 55, 56, 38, 38, 38, 38, 
	43, 38, 39, 38, 38, 40, 1, 38, 
	38, 41, 38, 38, 38, 38, 38, 38, 
	42, 43, 44, 45, 46, 47, 48, 42, 
	49, 38, 50, 51, 52, 53, 38, 54, 
	55, 56, 38, 38, 38, 38, 57, 38, 
	40, 58, 58, 58, 58, 58, 58, 39, 
	58, 58, 58, 58, 58, 58, 59, 58, 
	58, 58, 58, 58, 58, 58, 43, 44, 
	45, 46, 58, 58, 58, 58, 58, 58, 
	58, 58, 58, 58, 54, 55, 56, 58, 
	62, 61, 10, 63, 39, 38, 38, 40, 
	1, 38, 38, 41, 38, 38, 38, 38, 
	38, 38, 42, 43, 44, 45, 46, 47, 
	48, 42, 49, 8, 50, 51, 52, 53, 
	38, 54, 55, 56, 38, 17, 64, 38, 
	57, 38, 17, 64, 65, 64, 65, 12, 
	66, 66, 3, 6, 66, 66, 67, 66, 
	66, 66, 66, 66, 66, 18, 19, 20, 
	21, 22, 23, 24, 18, 25, 27, 27, 
	28, 29, 30, 66, 31, 32, 33, 66, 
	66, 66, 66, 37, 66, 12, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 18, 19, 20, 21, 22, 
	66, 66, 66, 66, 66, 66, 28, 29, 
	30, 66, 31, 32, 33, 66, 66, 66, 
	66, 19, 66, 12, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 19, 20, 21, 22, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	31, 32, 33, 66, 12, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 20, 21, 22, 66, 
	12, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 21, 22, 66, 12, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 22, 66, 
	12, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	20, 21, 22, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 31, 32, 33, 
	66, 12, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 20, 21, 22, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 32, 
	33, 66, 12, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 20, 21, 22, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 33, 66, 12, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 19, 20, 21, 22, 66, 66, 
	66, 66, 66, 66, 28, 29, 30, 66, 
	31, 32, 33, 66, 66, 66, 66, 19, 
	66, 12, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	19, 20, 21, 22, 66, 66, 66, 66, 
	66, 66, 66, 29, 30, 66, 31, 32, 
	33, 66, 66, 66, 66, 19, 66, 12, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 19, 20, 
	21, 22, 66, 66, 66, 66, 66, 66, 
	66, 66, 30, 66, 31, 32, 33, 66, 
	66, 66, 66, 19, 66, 12, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 18, 19, 20, 21, 22, 
	66, 24, 18, 66, 66, 66, 28, 29, 
	30, 66, 31, 32, 33, 66, 66, 66, 
	66, 19, 66, 12, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 18, 19, 20, 21, 22, 66, 68, 
	18, 66, 66, 66, 28, 29, 30, 66, 
	31, 32, 33, 66, 66, 66, 66, 19, 
	66, 12, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 18, 
	19, 20, 21, 22, 66, 66, 18, 66, 
	66, 66, 28, 29, 30, 66, 31, 32, 
	33, 66, 66, 66, 66, 19, 66, 12, 
	66, 66, 66, 66, 66, 66, 66, 66, 
	66, 66, 66, 66, 66, 18, 19, 20, 
	21, 22, 23, 24, 18, 66, 66, 66, 
	28, 29, 30, 66, 31, 32, 33, 66, 
	66, 66, 66, 19, 66, 12, 66, 66, 
	3, 6, 66, 66, 67, 66, 66, 66, 
	66, 66, 66, 18, 19, 20, 21, 22, 
	23, 24, 18, 25, 66, 27, 28, 29, 
	30, 66, 31, 32, 33, 66, 66, 66, 
	66, 37, 66, 3, 66, 66, 66, 66, 
	66, 66, 12, 66, 66, 66, 66, 66, 
	66, 4, 66, 66, 66, 66, 66, 66, 
	66, 19, 20, 21, 22, 66, 66, 66, 
	66, 66, 66, 66, 66, 66, 66, 31, 
	32, 33, 66, 3, 69, 69, 69, 69, 
	69, 69, 69, 69, 69, 69, 69, 69, 
	69, 4, 69, 70, 66, 14, 66, 6, 
	69, 69, 69, 69, 69, 69, 69, 69, 
	69, 69, 69, 69, 69, 69, 69, 69, 
	69, 69, 69, 69, 69, 69, 69, 69, 
	69, 69, 69, 69, 69, 69, 69, 6, 
	69, 8, 66, 66, 66, 8, 66, 66, 
	12, 66, 66, 3, 6, 14, 66, 67, 
	66, 66, 66, 66, 66, 66, 18, 19, 
	20, 21, 22, 23, 24, 18, 25, 26, 
	27, 28, 29, 30, 66, 31, 32, 33, 
	66, 34, 35, 66, 37, 66, 12, 66, 
	66, 3, 6, 66, 66, 67, 66, 66, 
	66, 66, 66, 66, 18, 19, 20, 21, 
	22, 23, 24, 18, 25, 26, 27, 28, 
	29, 30, 66, 31, 32, 33, 66, 66, 
	66, 66, 37, 66, 34, 35, 66, 35, 
	66, 8, 69, 69, 69, 8, 69, 0
};

static const char _use_syllable_machine_trans_targs[] = {
	4, 7, 4, 31, 2, 4, 1, 4, 
	5, 4, 26, 28, 4, 49, 50, 52, 
	53, 29, 32, 33, 34, 35, 36, 43, 
	44, 46, 54, 47, 40, 41, 42, 37, 
	38, 39, 55, 56, 57, 48, 4, 4, 
	6, 0, 9, 10, 11, 12, 13, 20, 
	21, 23, 24, 17, 18, 19, 14, 15, 
	16, 25, 4, 8, 22, 4, 27, 4, 
	30, 4, 4, 3, 45, 4, 51
};

static const char _use_syllable_machine_trans_actions[] = {
	1, 0, 2, 3, 0, 4, 0, 7, 
	8, 9, 0, 8, 10, 11, 0, 11, 
	3, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 3, 3, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 3, 12, 13, 
	8, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 8, 0, 0, 0, 0, 0, 
	0, 0, 14, 0, 0, 15, 0, 16, 
	0, 17, 18, 0, 0, 19, 0
};

static const char _use_syllable_machine_to_state_actions[] = {
	0, 0, 0, 0, 5, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0
};

static const char _use_syllable_machine_from_state_actions[] = {
	0, 0, 0, 0, 6, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0
};

static const short _use_syllable_machine_eof_trans[] = {
	1, 3, 3, 6, 0, 39, 39, 59, 
	59, 39, 39, 39, 39, 39, 39, 39, 
	39, 39, 39, 39, 39, 39, 39, 39, 
	39, 59, 62, 64, 39, 66, 66, 67, 
	67, 67, 67, 67, 67, 67, 67, 67, 
	67, 67, 67, 67, 67, 67, 67, 67, 
	67, 70, 67, 67, 70, 67, 67, 67, 
	67, 70
};

static const int use_syllable_machine_start = 4;
static const int use_syllable_machine_first_final = 4;
static const int use_syllable_machine_error = -1;

static const int use_syllable_machine_en_main = 4;


#line 39 "hb-ot-shape-complex-use-machine.rl"



#line 145 "hb-ot-shape-complex-use-machine.rl"


#define found_syllable(syllable_type) \
  HB_STMT_START { \
    if (0) fprintf (stderr, "syllable %d..%d %s\n", (*ts).second.first, (*te).second.first, #syllable_type); \
    for (unsigned i = (*ts).second.first; i < (*te).second.first; ++i) \
      info[i].syllable() = (syllable_serial << 4) | syllable_type; \
    syllable_serial++; \
    if (unlikely (syllable_serial == 16)) syllable_serial = 1; \
  } HB_STMT_END

static void
find_syllables (hb_buffer_t *buffer)
{
  hb_glyph_info_t *info = buffer->info;
  auto p =
    + hb_iter (info, buffer->len)
    | hb_enumerate
    | hb_filter ([&] (hb_glyph_info_t &i)
		 { return !((i.use_category() == USE_O || i.use_category() == USE_Rsv) && _hb_glyph_info_is_default_ignorable (&i)); },
		 hb_second)
    | hb_filter ([&] (const hb_pair_t<unsigned, hb_glyph_info_t &> p)
                {
		  if (p.second.use_category() == USE_ZWNJ)
		    for (unsigned i = p.first + 1; i < buffer->len; ++i)
		      if (!((info[i].use_category() == USE_O || info[i].use_category() == USE_Rsv)
			    && _hb_glyph_info_is_default_ignorable (&info[i])))
			return !(_hb_glyph_info_is_unicode_mark (&info[i]));
		  return true;
		})
    | hb_enumerate
    | machine_index;
  auto pe = p + p.len ();
  auto eof = +pe;
  auto ts = +p;
  auto te = +p;
  unsigned int act;
  int cs;
  
#line 385 "hb-ot-shape-complex-use-machine.hh"
	{
	cs = use_syllable_machine_start;
	ts = 0;
	te = 0;
	act = 0;
	}

#line 186 "hb-ot-shape-complex-use-machine.rl"


  unsigned int syllable_serial = 1;
  
#line 398 "hb-ot-shape-complex-use-machine.hh"
	{
	int _slen;
	int _trans;
	const unsigned char *_keys;
	const char *_inds;
	if ( p == pe )
		goto _test_eof;
_resume:
	switch ( _use_syllable_machine_from_state_actions[cs] ) {
	case 6:
#line 1 "NONE"
	{ts = p;}
	break;
#line 412 "hb-ot-shape-complex-use-machine.hh"
	}

	_keys = _use_syllable_machine_trans_keys + (cs<<1);
	_inds = _use_syllable_machine_indicies + _use_syllable_machine_index_offsets[cs];

	_slen = _use_syllable_machine_key_spans[cs];
	_trans = _inds[ _slen > 0 && _keys[0] <=( (*p).second.second.use_category()) &&
		( (*p).second.second.use_category()) <= _keys[1] ?
		( (*p).second.second.use_category()) - _keys[0] : _slen ];

_eof_trans:
	cs = _use_syllable_machine_trans_targs[_trans];

	if ( _use_syllable_machine_trans_actions[_trans] == 0 )
		goto _again;

	switch ( _use_syllable_machine_trans_actions[_trans] ) {
	case 8:
#line 1 "NONE"
	{te = p+1;}
	break;
	case 7:
#line 134 "hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (independent_cluster); }}
	break;
	case 13:
#line 136 "hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (standard_cluster); }}
	break;
	case 10:
#line 140 "hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (broken_cluster); }}
	break;
	case 9:
#line 141 "hb-ot-shape-complex-use-machine.rl"
	{te = p+1;{ found_syllable (non_cluster); }}
	break;
	case 14:
#line 135 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (virama_terminated_cluster); }}
	break;
	case 12:
#line 136 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (standard_cluster); }}
	break;
	case 16:
#line 137 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (number_joiner_terminated_cluster); }}
	break;
	case 15:
#line 138 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (numeral_cluster); }}
	break;
	case 17:
#line 139 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (symbol_cluster); }}
	break;
	case 18:
#line 140 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (broken_cluster); }}
	break;
	case 19:
#line 141 "hb-ot-shape-complex-use-machine.rl"
	{te = p;p--;{ found_syllable (non_cluster); }}
	break;
	case 1:
#line 136 "hb-ot-shape-complex-use-machine.rl"
	{{p = ((te))-1;}{ found_syllable (standard_cluster); }}
	break;
	case 4:
#line 140 "hb-ot-shape-complex-use-machine.rl"
	{{p = ((te))-1;}{ found_syllable (broken_cluster); }}
	break;
	case 2:
#line 1 "NONE"
	{	switch( act ) {
	case 7:
	{{p = ((te))-1;} found_syllable (broken_cluster); }
	break;
	case 8:
	{{p = ((te))-1;} found_syllable (non_cluster); }
	break;
	}
	}
	break;
	case 3:
#line 1 "NONE"
	{te = p+1;}
#line 140 "hb-ot-shape-complex-use-machine.rl"
	{act = 7;}
	break;
	case 11:
#line 1 "NONE"
	{te = p+1;}
#line 141 "hb-ot-shape-complex-use-machine.rl"
	{act = 8;}
	break;
#line 510 "hb-ot-shape-complex-use-machine.hh"
	}

_again:
	switch ( _use_syllable_machine_to_state_actions[cs] ) {
	case 5:
#line 1 "NONE"
	{ts = 0;}
	break;
#line 519 "hb-ot-shape-complex-use-machine.hh"
	}

	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	if ( _use_syllable_machine_eof_trans[cs] > 0 ) {
		_trans = _use_syllable_machine_eof_trans[cs] - 1;
		goto _eof_trans;
	}
	}

	}

#line 191 "hb-ot-shape-complex-use-machine.rl"

}

#undef found_syllable

#endif /* HB_OT_SHAPE_COMPLEX_USE_MACHINE_HH */
