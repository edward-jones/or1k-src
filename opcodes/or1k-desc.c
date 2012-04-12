/* CPU data for or1k.

THIS FILE IS MACHINE GENERATED WITH CGEN.

Copyright 1996-2010 Free Software Foundation, Inc.

This file is part of the GNU Binutils and/or GDB, the GNU debugger.

   This file is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3, or (at your option)
   any later version.

   It is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
   or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public
   License for more details.

   You should have received a copy of the GNU General Public License along
   with this program; if not, write to the Free Software Foundation, Inc.,
   51 Franklin Street - Fifth Floor, Boston, MA 02110-1301, USA.

*/

#include "sysdep.h"
#include <stdio.h>
#include <stdarg.h>
#include "ansidecl.h"
#include "bfd.h"
#include "symcat.h"
#include "or1k-desc.h"
#include "or1k-opc.h"
#include "opintl.h"
#include "libiberty.h"
#include "xregex.h"

/* Attributes.  */

static const CGEN_ATTR_ENTRY bool_attr[] =
{
  { "#f", 0 },
  { "#t", 1 },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY MACH_attr[] ATTRIBUTE_UNUSED =
{
  { "base", MACH_BASE },
  { "or32", MACH_OR32 },
  { "max", MACH_MAX },
  { 0, 0 }
};

static const CGEN_ATTR_ENTRY ISA_attr[] ATTRIBUTE_UNUSED =
{
  { "ORBIS32", ISA_ORBIS32 },
  { "ORFPX32", ISA_ORFPX32 },
  { "max", ISA_MAX },
  { 0, 0 }
};

const CGEN_ATTR_TABLE or1k_cgen_ifield_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "RESERVED", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE or1k_cgen_hardware_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "CACHE-ADDR", &bool_attr[0], &bool_attr[0] },
  { "PC", &bool_attr[0], &bool_attr[0] },
  { "PROFILE", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE or1k_cgen_operand_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "PCREL-ADDR", &bool_attr[0], &bool_attr[0] },
  { "ABS-ADDR", &bool_attr[0], &bool_attr[0] },
  { "SIGN-OPT", &bool_attr[0], &bool_attr[0] },
  { "SIGNED", &bool_attr[0], &bool_attr[0] },
  { "NEGATIVE", &bool_attr[0], &bool_attr[0] },
  { "RELAX", &bool_attr[0], &bool_attr[0] },
  { "SEM-ONLY", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

const CGEN_ATTR_TABLE or1k_cgen_insn_attr_table[] =
{
  { "MACH", & MACH_attr[0], & MACH_attr[0] },
  { "ISA", & ISA_attr[0], & ISA_attr[0] },
  { "ALIAS", &bool_attr[0], &bool_attr[0] },
  { "VIRTUAL", &bool_attr[0], &bool_attr[0] },
  { "UNCOND-CTI", &bool_attr[0], &bool_attr[0] },
  { "COND-CTI", &bool_attr[0], &bool_attr[0] },
  { "SKIP-CTI", &bool_attr[0], &bool_attr[0] },
  { "DELAY-SLOT", &bool_attr[0], &bool_attr[0] },
  { "RELAXABLE", &bool_attr[0], &bool_attr[0] },
  { "RELAXED", &bool_attr[0], &bool_attr[0] },
  { "NO-DIS", &bool_attr[0], &bool_attr[0] },
  { "PBB", &bool_attr[0], &bool_attr[0] },
  { "NOT-IN-DELAY-SLOT", &bool_attr[0], &bool_attr[0] },
  { 0, 0, 0 }
};

/* Instruction set variants.  */

static const CGEN_ISA or1k_cgen_isa_table[] = {
  { "ORBIS32", 32, 32, 32, 32 },
  { "ORFPX32", 32, 32, 65535, 0 },
  { 0, 0, 0, 0, 0 }
};

/* Machine variants.  */

static const CGEN_MACH or1k_cgen_mach_table[] = {
  { "or32", "or1k", MACH_OR32, 0 },
  { 0, 0, 0, 0 }
};

static CGEN_KEYWORD_ENTRY or1k_cgen_opval_h_gr_entries[] =
{
  { "r0", 0, {0, {{{0, 0}}}}, 0, 0 },
  { "r1", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "r2", 2, {0, {{{0, 0}}}}, 0, 0 },
  { "r3", 3, {0, {{{0, 0}}}}, 0, 0 },
  { "r4", 4, {0, {{{0, 0}}}}, 0, 0 },
  { "r5", 5, {0, {{{0, 0}}}}, 0, 0 },
  { "r6", 6, {0, {{{0, 0}}}}, 0, 0 },
  { "r7", 7, {0, {{{0, 0}}}}, 0, 0 },
  { "r8", 8, {0, {{{0, 0}}}}, 0, 0 },
  { "r9", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "r10", 10, {0, {{{0, 0}}}}, 0, 0 },
  { "r11", 11, {0, {{{0, 0}}}}, 0, 0 },
  { "r12", 12, {0, {{{0, 0}}}}, 0, 0 },
  { "r13", 13, {0, {{{0, 0}}}}, 0, 0 },
  { "r14", 14, {0, {{{0, 0}}}}, 0, 0 },
  { "r15", 15, {0, {{{0, 0}}}}, 0, 0 },
  { "r16", 16, {0, {{{0, 0}}}}, 0, 0 },
  { "r17", 17, {0, {{{0, 0}}}}, 0, 0 },
  { "r18", 18, {0, {{{0, 0}}}}, 0, 0 },
  { "r19", 19, {0, {{{0, 0}}}}, 0, 0 },
  { "r20", 20, {0, {{{0, 0}}}}, 0, 0 },
  { "r21", 21, {0, {{{0, 0}}}}, 0, 0 },
  { "r22", 22, {0, {{{0, 0}}}}, 0, 0 },
  { "r23", 23, {0, {{{0, 0}}}}, 0, 0 },
  { "r24", 24, {0, {{{0, 0}}}}, 0, 0 },
  { "r25", 25, {0, {{{0, 0}}}}, 0, 0 },
  { "r26", 26, {0, {{{0, 0}}}}, 0, 0 },
  { "r27", 27, {0, {{{0, 0}}}}, 0, 0 },
  { "r28", 28, {0, {{{0, 0}}}}, 0, 0 },
  { "r29", 29, {0, {{{0, 0}}}}, 0, 0 },
  { "r30", 30, {0, {{{0, 0}}}}, 0, 0 },
  { "r31", 31, {0, {{{0, 0}}}}, 0, 0 },
  { "lr", 9, {0, {{{0, 0}}}}, 0, 0 },
  { "sp", 1, {0, {{{0, 0}}}}, 0, 0 },
  { "fp", 2, {0, {{{0, 0}}}}, 0, 0 }
};

CGEN_KEYWORD or1k_cgen_opval_h_gr =
{
  & or1k_cgen_opval_h_gr_entries[0],
  35,
  0, 0, 0, 0, ""
};


/* The hardware table.  */

#define A(a) (1 << CGEN_HW_##a)

const CGEN_HW_ENTRY or1k_cgen_hw_table[] =
{
  { "h-memory", HW_H_MEMORY, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-sint", HW_H_SINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-uint", HW_H_UINT, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-addr", HW_H_ADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-iaddr", HW_H_IADDR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } } },
  { "h-pc", HW_H_PC, CGEN_ASM_NONE, 0, { 0|A(PROFILE)|A(PC), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-gr", HW_H_GR, CGEN_ASM_KEYWORD, (PTR) & or1k_cgen_opval_h_gr, { 0|A(PROFILE), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-spr", HW_H_SPR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-sys-sr", HW_H_SYS_SR, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-sys-esr0", HW_H_SYS_ESR0, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-sys-epcr0", HW_H_SYS_EPCR0, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-mac-maclo", HW_H_MAC_MACLO, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-mac-machi", HW_H_MAC_MACHI, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-sys-sr-f", HW_H_SYS_SR_F, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-sys-sr-cy", HW_H_SYS_SR_CY, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-sys-sr-ov", HW_H_SYS_SR_OV, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-sys-fpcsr-rm", HW_H_SYS_FPCSR_RM, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-delay-insn", HW_H_DELAY_INSN, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-simm16", HW_H_SIMM16, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-uimm16", HW_H_UIMM16, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { "h-uimm6", HW_H_UIMM6, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
  { 0, 0, CGEN_ASM_NONE, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } }
};

#undef A


/* The instruction field table.  */

#define A(a) (1 << CGEN_IFLD_##a)

const CGEN_IFLD or1k_cgen_ifld_table[] =
{
  { OR1K_F_NIL, "f-nil", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { OR1K_F_ANYOF, "f-anyof", 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
  { OR1K_F_OPCODE, "f-opcode", 0, 32, 31, 6, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_R1, "f-r1", 0, 32, 25, 5, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_R2, "f-r2", 0, 32, 20, 5, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_R3, "f-r3", 0, 32, 15, 5, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_OP_25_2, "f-op-25-2", 0, 32, 25, 2, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_OP_25_5, "f-op-25-5", 0, 32, 25, 5, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_OP_16_1, "f-op-16-1", 0, 32, 16, 1, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_OP_7_4, "f-op-7-4", 0, 32, 7, 4, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_OP_3_4, "f-op-3-4", 0, 32, 3, 4, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_OP_9_2, "f-op-9-2", 0, 32, 9, 2, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_OP_9_4, "f-op-9-4", 0, 32, 9, 4, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_OP_7_8, "f-op-7-8", 0, 32, 7, 8, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_OP_7_2, "f-op-7-2", 0, 32, 7, 2, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_25_26, "f-resv-25-26", 0, 32, 25, 26, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_25_10, "f-resv-25-10", 0, 32, 25, 10, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_23_8, "f-resv-23-8", 0, 32, 23, 8, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_20_5, "f-resv-20-5", 0, 32, 20, 5, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_20_4, "f-resv-20-4", 0, 32, 20, 4, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_15_8, "f-resv-15-8", 0, 32, 15, 8, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_15_6, "f-resv-15-6", 0, 32, 15, 6, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_10_11, "f-resv-10-11", 0, 32, 10, 11, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_10_7, "f-resv-10-7", 0, 32, 10, 7, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_10_3, "f-resv-10-3", 0, 32, 10, 3, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_10_1, "f-resv-10-1", 0, 32, 10, 1, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_7_4, "f-resv-7-4", 0, 32, 7, 4, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_RESV_5_2, "f-resv-5-2", 0, 32, 5, 2, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_IMM16_25_5, "f-imm16-25-5", 0, 32, 25, 5, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_IMM16_10_11, "f-imm16-10-11", 0, 32, 10, 11, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_DISP26, "f-disp26", 0, 32, 25, 26, { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_UIMM16, "f-uimm16", 0, 32, 15, 16, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_SIMM16, "f-simm16", 0, 32, 15, 16, { 0|A(SIGN_OPT), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_UIMM6, "f-uimm6", 0, 32, 5, 6, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_UIMM16_SPLIT, "f-uimm16-split", 0, 0, 0, 0,{ 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { OR1K_F_SIMM16_SPLIT, "f-simm16-split", 0, 0, 0, 0,{ 0|A(SIGN_OPT)|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
  { 0, 0, 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } }
};

#undef A



/* multi ifield declarations */

const CGEN_MAYBE_MULTI_IFLD OR1K_F_UIMM16_SPLIT_MULTI_IFIELD [];
const CGEN_MAYBE_MULTI_IFLD OR1K_F_SIMM16_SPLIT_MULTI_IFIELD [];


/* multi ifield definitions */

const CGEN_MAYBE_MULTI_IFLD OR1K_F_UIMM16_SPLIT_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_IMM16_25_5] } },
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_IMM16_10_11] } },
    { 0, { (const PTR) 0 } }
};
const CGEN_MAYBE_MULTI_IFLD OR1K_F_SIMM16_SPLIT_MULTI_IFIELD [] =
{
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_IMM16_25_5] } },
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_IMM16_10_11] } },
    { 0, { (const PTR) 0 } }
};

/* The operand table.  */

#define A(a) (1 << CGEN_OPERAND_##a)
#define OPERAND(op) OR1K_OPERAND_##op

const CGEN_OPERAND or1k_cgen_operand_table[] =
{
/* pc: program counter */
  { "pc", OR1K_OPERAND_PC, HW_H_PC, 0, 0,
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_NIL] } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* sys-sr: supervision register */
  { "sys-sr", OR1K_OPERAND_SYS_SR, HW_H_SYS_SR, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* sys-esr0: exception supervision register 0 */
  { "sys-esr0", OR1K_OPERAND_SYS_ESR0, HW_H_SYS_ESR0, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* sys-epcr0: exception PC register 0 */
  { "sys-epcr0", OR1K_OPERAND_SYS_EPCR0, HW_H_SYS_EPCR0, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* sys-sr-f: SR flag bit */
  { "sys-sr-f", OR1K_OPERAND_SYS_SR_F, HW_H_SYS_SR_F, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* sys-sr-cy: SR carry bit */
  { "sys-sr-cy", OR1K_OPERAND_SYS_SR_CY, HW_H_SYS_SR_CY, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* sys-sr-ov: SR overflow bit */
  { "sys-sr-ov", OR1K_OPERAND_SYS_SR_OV, HW_H_SYS_SR_OV, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* sys-fpcsr-rm: floating point round mode */
  { "sys-fpcsr-rm", OR1K_OPERAND_SYS_FPCSR_RM, HW_H_SYS_FPCSR_RM, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* mac-machi: MAC HI result register */
  { "mac-machi", OR1K_OPERAND_MAC_MACHI, HW_H_MAC_MACHI, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* mac-maclo: MAC LO result register */
  { "mac-maclo", OR1K_OPERAND_MAC_MACLO, HW_H_MAC_MACLO, 0, 0,
    { 0, { (const PTR) 0 } }, 
    { 0|A(SEM_ONLY), { { { (1<<MACH_BASE), 0 } }, { { 1, "\xc0" } } } }  },
/* disp26: pc-rel 26 bit */
  { "disp26", OR1K_OPERAND_DISP26, HW_H_IADDR, 25, 26,
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_DISP26] } }, 
    { 0|A(PCREL_ADDR), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* uimm6: uimm6 */
  { "uimm6", OR1K_OPERAND_UIMM6, HW_H_UIMM6, 5, 6,
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_UIMM6] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* rD: destination register */
  { "rD", OR1K_OPERAND_RD, HW_H_GR, 25, 5,
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_R1] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* rA: source register A */
  { "rA", OR1K_OPERAND_RA, HW_H_GR, 20, 5,
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_R2] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* rB: source register B */
  { "rB", OR1K_OPERAND_RB, HW_H_GR, 15, 5,
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_R3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* simm16: 16-bit signed immediate */
  { "simm16", OR1K_OPERAND_SIMM16, HW_H_SIMM16, 15, 16,
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_SIMM16] } }, 
    { 0|A(SIGN_OPT), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* uimm16: 16-bit unsigned immediate */
  { "uimm16", OR1K_OPERAND_UIMM16, HW_H_UIMM16, 15, 16,
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_UIMM16] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* simm16-split: split 16-bit signed immediate */
  { "simm16-split", OR1K_OPERAND_SIMM16_SPLIT, HW_H_SIMM16, 10, 16,
    { 2, { (const PTR) &OR1K_F_SIMM16_SPLIT_MULTI_IFIELD[0] } }, 
    { 0|A(SIGN_OPT)|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* uimm16-split: split 16-bit unsigned immediate */
  { "uimm16-split", OR1K_OPERAND_UIMM16_SPLIT, HW_H_UIMM16, 10, 16,
    { 2, { (const PTR) &OR1K_F_UIMM16_SPLIT_MULTI_IFIELD[0] } }, 
    { 0|A(VIRTUAL), { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* rDSF: destination register (single floating point mode) */
  { "rDSF", OR1K_OPERAND_RDSF, HW_H_GR, 25, 5,
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_R1] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* rASF: source register A (single floating point mode) */
  { "rASF", OR1K_OPERAND_RASF, HW_H_GR, 20, 5,
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_R2] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* rBSF: source register B (single floating point mode) */
  { "rBSF", OR1K_OPERAND_RBSF, HW_H_GR, 15, 5,
    { 0, { (const PTR) &or1k_cgen_ifld_table[OR1K_F_R3] } }, 
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } }  },
/* sentinel */
  { 0, 0, 0, 0, 0,
    { 0, { (const PTR) 0 } },
    { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } }
};

#undef A


/* The instruction table.  */

#define OP(field) CGEN_SYNTAX_MAKE_FIELD (OPERAND (field))
#define A(a) (1 << CGEN_INSN_##a)

static const CGEN_IBASE or1k_cgen_insn_table[MAX_INSNS] =
{
  /* Special null first entry.
     A `num' value of zero is thus invalid.
     Also, the special `invalid' insn resides here.  */
  { 0, 0, 0, 0, { 0, { { { (1<<MACH_BASE), 0 } }, { { 1, "\x80" } } } } },
/* l.j ${disp26} */
  {
    OR1K_INSN_L_J, "l-j", "l.j", 32,
    { 0|A(NOT_IN_DELAY_SLOT)|A(UNCOND_CTI)|A(DELAY_SLOT), { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.jal ${disp26} */
  {
    OR1K_INSN_L_JAL, "l-jal", "l.jal", 32,
    { 0|A(NOT_IN_DELAY_SLOT)|A(UNCOND_CTI)|A(DELAY_SLOT), { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.jr $rB */
  {
    OR1K_INSN_L_JR, "l-jr", "l.jr", 32,
    { 0|A(NOT_IN_DELAY_SLOT)|A(UNCOND_CTI)|A(DELAY_SLOT), { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.jalr $rB */
  {
    OR1K_INSN_L_JALR, "l-jalr", "l.jalr", 32,
    { 0|A(NOT_IN_DELAY_SLOT)|A(UNCOND_CTI)|A(DELAY_SLOT), { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.bnf ${disp26} */
  {
    OR1K_INSN_L_BNF, "l-bnf", "l.bnf", 32,
    { 0|A(NOT_IN_DELAY_SLOT)|A(COND_CTI)|A(DELAY_SLOT), { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.bf ${disp26} */
  {
    OR1K_INSN_L_BF, "l-bf", "l.bf", 32,
    { 0|A(NOT_IN_DELAY_SLOT)|A(COND_CTI)|A(DELAY_SLOT), { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.trap ${uimm16} */
  {
    OR1K_INSN_L_TRAP, "l-trap", "l.trap", 32,
    { 0|A(UNCOND_CTI), { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sys ${uimm16} */
  {
    OR1K_INSN_L_SYS, "l-sys", "l.sys", 32,
    { 0|A(NOT_IN_DELAY_SLOT)|A(UNCOND_CTI), { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.rfe */
  {
    OR1K_INSN_L_RFE, "l-rfe", "l.rfe", 32,
    { 0|A(NOT_IN_DELAY_SLOT)|A(UNCOND_CTI), { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.nop ${uimm16} */
  {
    OR1K_INSN_L_NOP_IMM, "l-nop-imm", "l.nop", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.nop */
  {
    OR1K_INSN_L_NOP, "l-nop", "l.nop", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.movhi $rD,$uimm16 */
  {
    OR1K_INSN_L_MOVHI, "l-movhi", "l.movhi", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.macrc $rD */
  {
    OR1K_INSN_L_MACRC, "l-macrc", "l.macrc", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.mfspr $rD,$rA,${uimm16} */
  {
    OR1K_INSN_L_MFSPR, "l-mfspr", "l.mfspr", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.mtspr $rA,$rB,${uimm16-split} */
  {
    OR1K_INSN_L_MTSPR, "l-mtspr", "l.mtspr", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.lwz $rD,${simm16}($rA) */
  {
    OR1K_INSN_L_LWZ, "l-lwz", "l.lwz", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.lws $rD,${simm16}($rA) */
  {
    OR1K_INSN_L_LWS, "l-lws", "l.lws", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.lbz $rD,${simm16}($rA) */
  {
    OR1K_INSN_L_LBZ, "l-lbz", "l.lbz", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.lbs $rD,${simm16}($rA) */
  {
    OR1K_INSN_L_LBS, "l-lbs", "l.lbs", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.lhz $rD,${simm16}($rA) */
  {
    OR1K_INSN_L_LHZ, "l-lhz", "l.lhz", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.lhs $rD,${simm16}($rA) */
  {
    OR1K_INSN_L_LHS, "l-lhs", "l.lhs", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sw ${simm16-split}($rA),$rB */
  {
    OR1K_INSN_L_SW, "l-sw", "l.sw", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sb ${simm16-split}($rA),$rB */
  {
    OR1K_INSN_L_SB, "l-sb", "l.sb", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sh ${simm16-split}($rA),$rB */
  {
    OR1K_INSN_L_SH, "l-sh", "l.sh", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sll $rD,$rA,$rB */
  {
    OR1K_INSN_L_SLL, "l-sll", "l.sll", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.slli $rD,$rA,${uimm6} */
  {
    OR1K_INSN_L_SLLI, "l-slli", "l.slli", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.srl $rD,$rA,$rB */
  {
    OR1K_INSN_L_SRL, "l-srl", "l.srl", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.srli $rD,$rA,${uimm6} */
  {
    OR1K_INSN_L_SRLI, "l-srli", "l.srli", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sra $rD,$rA,$rB */
  {
    OR1K_INSN_L_SRA, "l-sra", "l.sra", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.srai $rD,$rA,${uimm6} */
  {
    OR1K_INSN_L_SRAI, "l-srai", "l.srai", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.ror $rD,$rA,$rB */
  {
    OR1K_INSN_L_ROR, "l-ror", "l.ror", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.rori $rD,$rA,${uimm6} */
  {
    OR1K_INSN_L_RORI, "l-rori", "l.rori", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.add $rD,$rA,$rB */
  {
    OR1K_INSN_L_ADD, "l-add", "l.add", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sub $rD,$rA,$rB */
  {
    OR1K_INSN_L_SUB, "l-sub", "l.sub", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.and $rD,$rA,$rB */
  {
    OR1K_INSN_L_AND, "l-and", "l.and", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.or $rD,$rA,$rB */
  {
    OR1K_INSN_L_OR, "l-or", "l.or", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.xor $rD,$rA,$rB */
  {
    OR1K_INSN_L_XOR, "l-xor", "l.xor", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.addc $rD,$rA,$rB */
  {
    OR1K_INSN_L_ADDC, "l-addc", "l.addc", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.mul $rD,$rA,$rB */
  {
    OR1K_INSN_L_MUL, "l-mul", "l.mul", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.mulu $rD,$rA,$rB */
  {
    OR1K_INSN_L_MULU, "l-mulu", "l.mulu", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.div $rD,$rA,$rB */
  {
    OR1K_INSN_L_DIV, "l-div", "l.div", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.divu $rD,$rA,$rB */
  {
    OR1K_INSN_L_DIVU, "l-divu", "l.divu", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.ff1 $rD,$rA */
  {
    OR1K_INSN_L_FF1, "l-ff1", "l.ff1", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.fl1 $rD,$rA */
  {
    OR1K_INSN_L_FL1, "l-fl1", "l.fl1", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.andi $rD,$rA,$uimm16 */
  {
    OR1K_INSN_L_ANDI, "l-andi", "l.andi", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.ori $rD,$rA,$uimm16 */
  {
    OR1K_INSN_L_ORI, "l-ori", "l.ori", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.xori $rD,$rA,$simm16 */
  {
    OR1K_INSN_L_XORI, "l-xori", "l.xori", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.addi $rD,$rA,$simm16 */
  {
    OR1K_INSN_L_ADDI, "l-addi", "l.addi", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.addic $rD,$rA,$simm16 */
  {
    OR1K_INSN_L_ADDIC, "l-addic", "l.addic", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.muli $rD,$rA,$simm16 */
  {
    OR1K_INSN_L_MULI, "l-muli", "l.muli", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.exths $rD,$rA */
  {
    OR1K_INSN_L_EXTHS, "l-exths", "l.exths", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.extbs $rD,$rA */
  {
    OR1K_INSN_L_EXTBS, "l-extbs", "l.extbs", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.exthz $rD,$rA */
  {
    OR1K_INSN_L_EXTHZ, "l-exthz", "l.exthz", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.extbz $rD,$rA */
  {
    OR1K_INSN_L_EXTBZ, "l-extbz", "l.extbz", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.extws $rD,$rA */
  {
    OR1K_INSN_L_EXTWS, "l-extws", "l.extws", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.extwz $rD,$rA */
  {
    OR1K_INSN_L_EXTWZ, "l-extwz", "l.extwz", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.cmov $rD,$rA,$rB */
  {
    OR1K_INSN_L_CMOV, "l-cmov", "l.cmov", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfgtu $rA,$rB */
  {
    OR1K_INSN_L_SFGTU, "l-sfgtu", "l.sfgtu", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfgeu $rA,$rB */
  {
    OR1K_INSN_L_SFGEU, "l-sfgeu", "l.sfgeu", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfltu $rA,$rB */
  {
    OR1K_INSN_L_SFLTU, "l-sfltu", "l.sfltu", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfleu $rA,$rB */
  {
    OR1K_INSN_L_SFLEU, "l-sfleu", "l.sfleu", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfgts $rA,$rB */
  {
    OR1K_INSN_L_SFGTS, "l-sfgts", "l.sfgts", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfges $rA,$rB */
  {
    OR1K_INSN_L_SFGES, "l-sfges", "l.sfges", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sflts $rA,$rB */
  {
    OR1K_INSN_L_SFLTS, "l-sflts", "l.sflts", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfles $rA,$rB */
  {
    OR1K_INSN_L_SFLES, "l-sfles", "l.sfles", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfgtui $rA,$uimm16 */
  {
    OR1K_INSN_L_SFGTUI, "l-sfgtui", "l.sfgtui", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfgeui $rA,$uimm16 */
  {
    OR1K_INSN_L_SFGEUI, "l-sfgeui", "l.sfgeui", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfltui $rA,$uimm16 */
  {
    OR1K_INSN_L_SFLTUI, "l-sfltui", "l.sfltui", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfleui $rA,$uimm16 */
  {
    OR1K_INSN_L_SFLEUI, "l-sfleui", "l.sfleui", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfgtsi $rA,${simm16} */
  {
    OR1K_INSN_L_SFGTSI, "l-sfgtsi", "l.sfgtsi", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfgesi $rA,${simm16} */
  {
    OR1K_INSN_L_SFGESI, "l-sfgesi", "l.sfgesi", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfltsi $rA,${simm16} */
  {
    OR1K_INSN_L_SFLTSI, "l-sfltsi", "l.sfltsi", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sflesi $rA,${simm16} */
  {
    OR1K_INSN_L_SFLESI, "l-sflesi", "l.sflesi", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfeq $rA,$rB */
  {
    OR1K_INSN_L_SFEQ, "l-sfeq", "l.sfeq", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfeqi $rA,$simm16 */
  {
    OR1K_INSN_L_SFEQI, "l-sfeqi", "l.sfeqi", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfne $rA,$rB */
  {
    OR1K_INSN_L_SFNE, "l-sfne", "l.sfne", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.sfnei $rA,$simm16 */
  {
    OR1K_INSN_L_SFNEI, "l-sfnei", "l.sfnei", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.mac $rA,$rB */
  {
    OR1K_INSN_L_MAC, "l-mac", "l.mac", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.msb $rA,$rB */
  {
    OR1K_INSN_L_MSB, "l-msb", "l.msb", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* l.maci $rA,${simm16} */
  {
    OR1K_INSN_L_MACI, "l-maci", "l.maci", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.add.s $rDSF,$rASF,$rBSF */
  {
    OR1K_INSN_LF_ADD_S, "lf-add-s", "lf.add.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.sub.s $rDSF,$rASF,$rBSF */
  {
    OR1K_INSN_LF_SUB_S, "lf-sub-s", "lf.sub.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.mul.s $rDSF,$rASF,$rBSF */
  {
    OR1K_INSN_LF_MUL_S, "lf-mul-s", "lf.mul.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.div.s $rDSF,$rASF,$rBSF */
  {
    OR1K_INSN_LF_DIV_S, "lf-div-s", "lf.div.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.rem.s $rDSF,$rASF,$rBSF */
  {
    OR1K_INSN_LF_REM_S, "lf-rem-s", "lf.rem.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.itof.s $rDSF,$rA */
  {
    OR1K_INSN_LF_ITOF_S, "lf-itof-s", "lf.itof.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.ftoi.s $rD,$rASF */
  {
    OR1K_INSN_LF_FTOI_S, "lf-ftoi-s", "lf.ftoi.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.sfeq.s $rASF,$rBSF */
  {
    OR1K_INSN_LF_EQ_S, "lf-eq-s", "lf.sfeq.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.sfne.s $rASF,$rBSF */
  {
    OR1K_INSN_LF_NE_S, "lf-ne-s", "lf.sfne.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.sfge.s $rASF,$rBSF */
  {
    OR1K_INSN_LF_GE_S, "lf-ge-s", "lf.sfge.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.sfgt.s $rASF,$rBSF */
  {
    OR1K_INSN_LF_GT_S, "lf-gt-s", "lf.sfgt.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.sflt.s $rASF,$rBSF */
  {
    OR1K_INSN_LF_LT_S, "lf-lt-s", "lf.sflt.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.sfle.s $rASF,$rBSF */
  {
    OR1K_INSN_LF_LE_S, "lf-le-s", "lf.sfle.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
/* lf.madd.s $rDSF,$rASF,$rBSF */
  {
    OR1K_INSN_LF_MADD_S, "lf-madd-s", "lf.madd.s", 32,
    { 0, { { { (1<<MACH_OR32), 0 } }, { { 1, "\x80" } } } }
  },
};

#undef OP
#undef A

/* Initialize anything needed to be done once, before any cpu_open call.  */

static void
init_tables (void)
{
}

static const CGEN_MACH * lookup_mach_via_bfd_name (const CGEN_MACH *, const char *);
static void build_hw_table      (CGEN_CPU_TABLE *);
static void build_ifield_table  (CGEN_CPU_TABLE *);
static void build_operand_table (CGEN_CPU_TABLE *);
static void build_insn_table    (CGEN_CPU_TABLE *);
static void or1k_cgen_rebuild_tables (CGEN_CPU_TABLE *);

/* Subroutine of or1k_cgen_cpu_open to look up a mach via its bfd name.  */

static const CGEN_MACH *
lookup_mach_via_bfd_name (const CGEN_MACH *table, const char *name)
{
  while (table->name)
    {
      if (strcmp (name, table->bfd_name) == 0)
	return table;
      ++table;
    }
  abort ();
}

/* Subroutine of or1k_cgen_cpu_open to build the hardware table.  */

static void
build_hw_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_HW_ENTRY *init = & or1k_cgen_hw_table[0];
  /* MAX_HW is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_HW_ENTRY **selected =
    (const CGEN_HW_ENTRY **) xmalloc (MAX_HW * sizeof (CGEN_HW_ENTRY *));

  cd->hw_table.init_entries = init;
  cd->hw_table.entry_size = sizeof (CGEN_HW_ENTRY);
  memset (selected, 0, MAX_HW * sizeof (CGEN_HW_ENTRY *));
  /* ??? For now we just use machs to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_HW_ATTR_VALUE (&init[i], CGEN_HW_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->hw_table.entries = selected;
  cd->hw_table.num_entries = MAX_HW;
}

/* Subroutine of or1k_cgen_cpu_open to build the hardware table.  */

static void
build_ifield_table (CGEN_CPU_TABLE *cd)
{
  cd->ifld_table = & or1k_cgen_ifld_table[0];
}

/* Subroutine of or1k_cgen_cpu_open to build the hardware table.  */

static void
build_operand_table (CGEN_CPU_TABLE *cd)
{
  int i;
  int machs = cd->machs;
  const CGEN_OPERAND *init = & or1k_cgen_operand_table[0];
  /* MAX_OPERANDS is only an upper bound on the number of selected entries.
     However each entry is indexed by it's enum so there can be holes in
     the table.  */
  const CGEN_OPERAND **selected = xmalloc (MAX_OPERANDS * sizeof (* selected));

  cd->operand_table.init_entries = init;
  cd->operand_table.entry_size = sizeof (CGEN_OPERAND);
  memset (selected, 0, MAX_OPERANDS * sizeof (CGEN_OPERAND *));
  /* ??? For now we just use mach to determine which ones we want.  */
  for (i = 0; init[i].name != NULL; ++i)
    if (CGEN_OPERAND_ATTR_VALUE (&init[i], CGEN_OPERAND_MACH)
	& machs)
      selected[init[i].type] = &init[i];
  cd->operand_table.entries = selected;
  cd->operand_table.num_entries = MAX_OPERANDS;
}

/* Subroutine of or1k_cgen_cpu_open to build the hardware table.
   ??? This could leave out insns not supported by the specified mach/isa,
   but that would cause errors like "foo only supported by bar" to become
   "unknown insn", so for now we include all insns and require the app to
   do the checking later.
   ??? On the other hand, parsing of such insns may require their hardware or
   operand elements to be in the table [which they mightn't be].  */

static void
build_insn_table (CGEN_CPU_TABLE *cd)
{
  int i;
  const CGEN_IBASE *ib = & or1k_cgen_insn_table[0];
  CGEN_INSN *insns = xmalloc (MAX_INSNS * sizeof (CGEN_INSN));

  memset (insns, 0, MAX_INSNS * sizeof (CGEN_INSN));
  for (i = 0; i < MAX_INSNS; ++i)
    insns[i].base = &ib[i];
  cd->insn_table.init_entries = insns;
  cd->insn_table.entry_size = sizeof (CGEN_IBASE);
  cd->insn_table.num_init_entries = MAX_INSNS;
}

/* Subroutine of or1k_cgen_cpu_open to rebuild the tables.  */

static void
or1k_cgen_rebuild_tables (CGEN_CPU_TABLE *cd)
{
  int i;
  CGEN_BITSET *isas = cd->isas;
  unsigned int machs = cd->machs;

  cd->int_insn_p = CGEN_INT_INSN_P;

  /* Data derived from the isa spec.  */
#define UNSET (CGEN_SIZE_UNKNOWN + 1)
  cd->default_insn_bitsize = UNSET;
  cd->base_insn_bitsize = UNSET;
  cd->min_insn_bitsize = 65535; /* Some ridiculously big number.  */
  cd->max_insn_bitsize = 0;
  for (i = 0; i < MAX_ISAS; ++i)
    if (cgen_bitset_contains (isas, i))
      {
	const CGEN_ISA *isa = & or1k_cgen_isa_table[i];

	/* Default insn sizes of all selected isas must be
	   equal or we set the result to 0, meaning "unknown".  */
	if (cd->default_insn_bitsize == UNSET)
	  cd->default_insn_bitsize = isa->default_insn_bitsize;
	else if (isa->default_insn_bitsize == cd->default_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->default_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Base insn sizes of all selected isas must be equal
	   or we set the result to 0, meaning "unknown".  */
	if (cd->base_insn_bitsize == UNSET)
	  cd->base_insn_bitsize = isa->base_insn_bitsize;
	else if (isa->base_insn_bitsize == cd->base_insn_bitsize)
	  ; /* This is ok.  */
	else
	  cd->base_insn_bitsize = CGEN_SIZE_UNKNOWN;

	/* Set min,max insn sizes.  */
	if (isa->min_insn_bitsize < cd->min_insn_bitsize)
	  cd->min_insn_bitsize = isa->min_insn_bitsize;
	if (isa->max_insn_bitsize > cd->max_insn_bitsize)
	  cd->max_insn_bitsize = isa->max_insn_bitsize;
      }

  /* Data derived from the mach spec.  */
  for (i = 0; i < MAX_MACHS; ++i)
    if (((1 << i) & machs) != 0)
      {
	const CGEN_MACH *mach = & or1k_cgen_mach_table[i];

	if (mach->insn_chunk_bitsize != 0)
	{
	  if (cd->insn_chunk_bitsize != 0 && cd->insn_chunk_bitsize != mach->insn_chunk_bitsize)
	    {
	      fprintf (stderr, "or1k_cgen_rebuild_tables: conflicting insn-chunk-bitsize values: `%d' vs. `%d'\n",
		       cd->insn_chunk_bitsize, mach->insn_chunk_bitsize);
	      abort ();
	    }

 	  cd->insn_chunk_bitsize = mach->insn_chunk_bitsize;
	}
      }

  /* Determine which hw elements are used by MACH.  */
  build_hw_table (cd);

  /* Build the ifield table.  */
  build_ifield_table (cd);

  /* Determine which operands are used by MACH/ISA.  */
  build_operand_table (cd);

  /* Build the instruction table.  */
  build_insn_table (cd);
}

/* Initialize a cpu table and return a descriptor.
   It's much like opening a file, and must be the first function called.
   The arguments are a set of (type/value) pairs, terminated with
   CGEN_CPU_OPEN_END.

   Currently supported values:
   CGEN_CPU_OPEN_ISAS:    bitmap of values in enum isa_attr
   CGEN_CPU_OPEN_MACHS:   bitmap of values in enum mach_attr
   CGEN_CPU_OPEN_BFDMACH: specify 1 mach using bfd name
   CGEN_CPU_OPEN_ENDIAN:  specify endian choice
   CGEN_CPU_OPEN_END:     terminates arguments

   ??? Simultaneous multiple isas might not make sense, but it's not (yet)
   precluded.  */

CGEN_CPU_DESC
or1k_cgen_cpu_open (enum cgen_cpu_open_arg arg_type, ...)
{
  CGEN_CPU_TABLE *cd = (CGEN_CPU_TABLE *) xmalloc (sizeof (CGEN_CPU_TABLE));
  static int init_p;
  CGEN_BITSET *isas = 0;  /* 0 = "unspecified" */
  unsigned int machs = 0; /* 0 = "unspecified" */
  enum cgen_endian endian = CGEN_ENDIAN_UNKNOWN;
  va_list ap;

  if (! init_p)
    {
      init_tables ();
      init_p = 1;
    }

  memset (cd, 0, sizeof (*cd));

  va_start (ap, arg_type);
  while (arg_type != CGEN_CPU_OPEN_END)
    {
      switch (arg_type)
	{
	case CGEN_CPU_OPEN_ISAS :
	  isas = va_arg (ap, CGEN_BITSET *);
	  break;
	case CGEN_CPU_OPEN_MACHS :
	  machs = va_arg (ap, unsigned int);
	  break;
	case CGEN_CPU_OPEN_BFDMACH :
	  {
	    const char *name = va_arg (ap, const char *);
	    const CGEN_MACH *mach =
	      lookup_mach_via_bfd_name (or1k_cgen_mach_table, name);

	    machs |= 1 << mach->num;
	    break;
	  }
	case CGEN_CPU_OPEN_ENDIAN :
	  endian = va_arg (ap, enum cgen_endian);
	  break;
	default :
	  fprintf (stderr, "or1k_cgen_cpu_open: unsupported argument `%d'\n",
		   arg_type);
	  abort (); /* ??? return NULL? */
	}
      arg_type = va_arg (ap, enum cgen_cpu_open_arg);
    }
  va_end (ap);

  /* Mach unspecified means "all".  */
  if (machs == 0)
    machs = (1 << MAX_MACHS) - 1;
  /* Base mach is always selected.  */
  machs |= 1;
  if (endian == CGEN_ENDIAN_UNKNOWN)
    {
      /* ??? If target has only one, could have a default.  */
      fprintf (stderr, "or1k_cgen_cpu_open: no endianness specified\n");
      abort ();
    }

  cd->isas = cgen_bitset_copy (isas);
  cd->machs = machs;
  cd->endian = endian;
  /* FIXME: for the sparc case we can determine insn-endianness statically.
     The worry here is where both data and insn endian can be independently
     chosen, in which case this function will need another argument.
     Actually, will want to allow for more arguments in the future anyway.  */
  cd->insn_endian = endian;

  /* Table (re)builder.  */
  cd->rebuild_tables = or1k_cgen_rebuild_tables;
  or1k_cgen_rebuild_tables (cd);

  /* Default to not allowing signed overflow.  */
  cd->signed_overflow_ok_p = 0;
  
  return (CGEN_CPU_DESC) cd;
}

/* Cover fn to or1k_cgen_cpu_open to handle the simple case of 1 isa, 1 mach.
   MACH_NAME is the bfd name of the mach.  */

CGEN_CPU_DESC
or1k_cgen_cpu_open_1 (const char *mach_name, enum cgen_endian endian)
{
  return or1k_cgen_cpu_open (CGEN_CPU_OPEN_BFDMACH, mach_name,
			       CGEN_CPU_OPEN_ENDIAN, endian,
			       CGEN_CPU_OPEN_END);
}

/* Close a cpu table.
   ??? This can live in a machine independent file, but there's currently
   no place to put this file (there's no libcgen).  libopcodes is the wrong
   place as some simulator ports use this but they don't use libopcodes.  */

void
or1k_cgen_cpu_close (CGEN_CPU_DESC cd)
{
  unsigned int i;
  const CGEN_INSN *insns;

  if (cd->macro_insn_table.init_entries)
    {
      insns = cd->macro_insn_table.init_entries;
      for (i = 0; i < cd->macro_insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX ((insns)))
	  regfree (CGEN_INSN_RX (insns));
    }

  if (cd->insn_table.init_entries)
    {
      insns = cd->insn_table.init_entries;
      for (i = 0; i < cd->insn_table.num_init_entries; ++i, ++insns)
	if (CGEN_INSN_RX (insns))
	  regfree (CGEN_INSN_RX (insns));
    }  

  if (cd->macro_insn_table.init_entries)
    free ((CGEN_INSN *) cd->macro_insn_table.init_entries);

  if (cd->insn_table.init_entries)
    free ((CGEN_INSN *) cd->insn_table.init_entries);

  if (cd->hw_table.entries)
    free ((CGEN_HW_ENTRY *) cd->hw_table.entries);

  if (cd->operand_table.entries)
    free ((CGEN_HW_ENTRY *) cd->operand_table.entries);

  free (cd);
}
