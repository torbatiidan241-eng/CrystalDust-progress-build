/* Generated automatically by the program `genoutput'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "flags.h"
#include "rtl.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-flags.h"
#include "insn-attr.h"

#include "insn-codes.h"

#include "recog.h"

#include "tree.h"
#include "output.h"

static char *
output_1 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_1[] = {
    "add\t%0, %1, #0",
    "mov\t%0, %1",
    "#",
    "#",
    "ldmia\t%1, {%0}",
    "stmia\t%0, {%1}",
    "ldr\t%0, %1",
    "str\t%1, %0",
    "mov\t%0, %1",
    "mov\t%0, %1",
  };
  return strings_1[which_alternative];
}

static char *
output_5 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_5[] = {
    "add\t%0, %1, #0",
    "ldrh\t%0, %1",
    "strh\t%1, %0",
    "mov\t%0, %1",
    "mov\t%0, %1",
    "mov\t%0, %1",
  };
  return strings_5[which_alternative];
}

static char *
output_7 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_7[] = {
    "add\t%0, %1, #0",
    "ldrb\t%0, %1",
    "strb\t%1, %0",
    "mov\t%0, %1",
    "mov\t%0, %1",
    "mov\t%0, %1",
  };
  return strings_7[which_alternative];
}

static char *
output_9 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  switch (which_alternative)
    {
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0, %1, #0\n\tadd\t%H0, %H1, #0";
      return "add\t%H0, %H1, #0\n\tadd\t%0, %1, #0";
    case 1:
      return "mov\t%Q0, %1\n\tmov\t%R0, #0";
    case 2:
      operands[1] = GEN_INT (- INTVAL (operands[1]));
      return "mov\t%Q0, %1\n\tneg\t%Q0, %Q0\n\tasr\t%R0, %Q0, #31";
    case 3:
      return "ldmia\t%1, {%0, %H0}";
    case 4:
      return "stmia\t%0, {%1, %H1}";
    case 5:
      return thumb_load_double_from_address (operands);
    case 6:
      operands[2] = gen_rtx (MEM, SImode, plus_constant (XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 7:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
}
}

static char *
output_11 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

  switch (which_alternative)
    {
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0, %1, #0\n\tadd\t%H0, %H1, #0";
      return "add\t%H0, %H1, #0\n\tadd\t%0, %1, #0";
    case 1:
      return "ldmia\t%1, {%0, %H0}";
    case 2:
      return "stmia\t%0, {%1, %H1}";
    case 3:
      return thumb_load_double_from_address (operands);
    case 4:
      operands[2] = gen_rtx (MEM, SImode, plus_constant (XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 5:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }

}

static char *
output_13 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_13[] = {
    "add\t%0, %1, #0",
    "ldmia\t%1, {%0}",
    "stmia\t%0, {%1}",
    "ldr\t%0, %1",
    "str\t%1, %0",
    "mov\t%0, %1",
    "mov\t%0, %1",
  };
  return strings_13[which_alternative];
}

static char *
output_19 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  rtx ops[4];
  /* This code used to try to use 'V', and fix the address only if it was
     offsettable, but this fails for e.g. REG+48 because 48 is outside the
     range of QImode offsets, and offsettable_address_p does a QImode
     address check.  */

  if (GET_CODE (XEXP (operands[1], 0)) == PLUS)
    {
      ops[1] = XEXP (XEXP (operands[1], 0), 0);
      ops[2] = XEXP (XEXP (operands[1], 0), 1);
    }
  else
    {
      ops[1] = XEXP (operands[1], 0);
      ops[2] = const0_rtx;
    }
  if (GET_CODE (ops[2]) == REG)
    return "ldrsh\t%0, %1";

  ops[0] = operands[0];
  ops[3] = operands[2];
  output_asm_insn ("mov\t%3, %2\n\tldrsh\t%0, [%1, %3]", ops);
  return "";
}
}

static char *
output_21 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  rtx ops[3];

  if (which_alternative == 0)
    return "ldrsb\t%0, %1";
  ops[0] = operands[0];
  if (GET_CODE (XEXP (operands[1], 0)) == PLUS)
    {
      ops[1] = XEXP (XEXP (operands[1], 0), 0);
      ops[2] = XEXP (XEXP (operands[1], 0), 1);
      
      if (GET_CODE (ops[1]) == REG && GET_CODE (ops[2]) == REG)
        output_asm_insn ("ldrsb\t%0, [%1, %2]", ops);
      else if (GET_CODE (ops[1]) == REG)
        {
          if (REGNO (ops[1]) == REGNO (operands[0]))
            output_asm_insn ("ldrb\t%0, [%1, %2]\n\tlsl\t%0, %0, #24\n\tasr\t%0, %0, #24", ops);
	  else
            output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
	}
      else
        {
          if (REGNO (ops[2]) == REGNO (operands[0]))
            output_asm_insn ("ldrb\t%0, [%2, %1]\n\tlsl\t%0, %0, #24\n\tasr\t%0, %0, #24", ops);
	  else
            output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
        }
    }
  else if (REGNO (operands[0]) == REGNO (XEXP (operands[1], 0)))
    {
      output_asm_insn ("ldrb\t%0, [%0, #0]\n\tlsl\t%0, %0, #24\n\tasr\t%0, %0, #24", ops);
    }
  else
    {
      ops[1] = XEXP (operands[1], 0);
      ops[2] = const0_rtx;
      output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
    }
  return "";
}
}

static char *
output_24 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_move_mem_multiple (3, operands);
}

static char *
output_25 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_move_mem_multiple (2, operands);
}

static char *
output_27 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

   static char *asms[] = 
{
  "add\t%0, %0, %2",
  "sub\t%0, %0, #%n2",
  "add\t%0, %1, %2",
  "add\t%0, %0, %2",
  "add\t%0, %0, %2",
  "add\t%0, %1, %2",
  "add\t%0, %1, %2"
};
  if (which_alternative == 2 && GET_CODE (operands[2]) == CONST_INT
      && INTVAL (operands[2]) < 0)
    return "sub\t%0, %1, #%n2";
  return asms[which_alternative];

}

static char *
output_31 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  if (which_alternative < 2)
    return "mov\t%0, %1\n\tmul\t%0, %0, %2";
  else
    return "mul\t%0, %0, %2";
}
}

static char *
output_39 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_39[] = {
    "lsl\t%0, %1, %2",
    "lsl\t%0, %0, %2",
  };
  return strings_39[which_alternative];
}

static char *
output_40 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_40[] = {
    "asr\t%0, %1, %2",
    "asr\t%0, %0, %2",
  };
  return strings_40[which_alternative];
}

static char *
output_41 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_41[] = {
    "lsr\t%0, %1, %2",
    "lsr\t%0, %0, %2",
  };
  return strings_41[which_alternative];
}

static char *
output_44 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
  static /*const*/ char *const strings_44[] = {
    "cmp\t%0, %1",
    "cmp\t%0, %1",
    "cmp\t%0, %1",
  };
  return strings_44[which_alternative];
}

static char *
output_47 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

  if (get_attr_length (insn) == 2)
    return "b\t%l0";
  return "bl\t%l0\t%@ far jump";

}

static char *
output_58 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

  switch (get_attr_length (insn))
    {
    case 2:  return "b%d1\t%l0\t%@cond_branch";
    case 4:  return "b%D1\t.LCB%=\n\tb\t%l0\t%@long jump\n.LCB%=:";
    default: return "b%D1\t.LCB%=\n\tbl\t%l0\t%@far jump\n.LCB%=:";
    }

}

static char *
output_59 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

  switch (get_attr_length (insn))
    {
    case 2:  return "b%D1\t%l0\t%@cond_branch_reversed";
    case 4:  return "b%d1\t.LCBR%=\n\tb\t%l0\t%@long jump\n.LCBR%=:";
    default: return "b%d1\t.LCBR%=\n\tbl\t%l0\t%@far jump\n.LCBR%=:";
    }
  return "";

}

static char *
output_72 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

  return thumb_unexpanded_epilogue ();

}

static char *
output_73 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  switch (GET_MODE_CLASS (GET_MODE (operands[0])))
    {
    case MODE_FLOAT:
    {
      int i;
      union real_extract u;
      for (i = 0; i < sizeof (REAL_VALUE_TYPE) / sizeof (HOST_WIDE_INT); i++)
        u.i[i] = XWINT(operands[0], 2 + i);
      assemble_real (u.d, GET_MODE (operands[0]));
      break;
    }
    default:
      assemble_integer (operands[0], 4, 1);
      break;
    }
  return "";
}
}

static char *
output_74 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  switch (GET_MODE_CLASS (GET_MODE (operands[0])))
    {
    case MODE_FLOAT:
    {
      int i;
      union real_extract u;
      for (i = 0; i < sizeof (REAL_VALUE_TYPE) / sizeof (HOST_WIDE_INT); i++)
        u.i[i] = XWINT(operands[0], 2 + i);
      assemble_real (u.d, GET_MODE (operands[0]));
      break;
    }
    default:
      assemble_integer (operands[0], 8, 1);
      break;
    }
  return "";
}
}

static char *
output_75 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

  /* Nothing to do (currently).  */
  return "";

}

static char *
output_76 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

   assemble_align (32);
   return "";

}

char * const insn_template[] =
  {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "ldrh\t%0, %1",
    0,
    "ldrb\t%0, %1",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "add\t%Q0, %Q0, %Q2\n\tadc\t%R0, %R0, %R2",
    0,
    "add\t%0, %2, %1",
    "sub\t%Q0, %Q0, %Q2\n\tsbc\t%R0, %R0, %R2",
    "sub\t%0, %1, %2",
    0,
    "neg\t%0, %1",
    0,
    "and\t%0, %0, %2",
    "bic\t%0, %0, %1",
    "orr\t%0, %0, %2",
    "eor\t%0, %0, %2",
    "mvn\t%0, %1",
    0,
    0,
    0,
    "ror\t%0, %0, %2",
    0,
    0,
    "cmp\t%0, #0",
    "cmn\t%0, %1",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    "mov\tpc, %0",
    "mov\tpc, %0",
    0,
    "bl\t_call_via_%0",
    0,
    "bl\t_call_via_%1",
    "bl\t%a0",
    "bl\t%a1",
    "mov\tr8, r8",
    "",
    0,
    0,
    0,
    0,
    0,
    0,
    0,
  };

char *(*const insn_outfun[])() =
  {
    0,
    output_1,
    0,
    0,
    0,
    output_5,
    0,
    output_7,
    0,
    output_9,
    0,
    output_11,
    0,
    output_13,
    0,
    0,
    0,
    0,
    0,
    output_19,
    0,
    output_21,
    0,
    0,
    output_24,
    output_25,
    0,
    output_27,
    0,
    0,
    0,
    output_31,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_39,
    output_40,
    output_41,
    0,
    0,
    output_44,
    0,
    0,
    output_47,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_58,
    output_59,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    output_72,
    output_73,
    output_74,
    output_75,
    output_76,
  };

rtx (*const insn_gen_function[]) () =
  {
    gen_movsi,
    0,
    0,
    0,
    gen_movhi,
    0,
    gen_movqi,
    0,
    gen_movdi,
    0,
    gen_movdf,
    0,
    gen_movsf,
    0,
    gen_zero_extendhisi2,
    0,
    gen_zero_extendqisi2,
    0,
    gen_extendhisi2,
    0,
    gen_extendqisi2,
    0,
    gen_extzv,
    gen_movstrqi,
    gen_movmem12b,
    gen_movmem8b,
    gen_adddi3,
    gen_addsi3,
    0,
    gen_subdi3,
    gen_subsi3,
    gen_mulsi3,
    gen_negsi2,
    gen_andsi3,
    0,
    gen_bicsi3,
    gen_iorsi3,
    gen_xorsi3,
    gen_one_cmplsi2,
    gen_ashlsi3,
    gen_ashrsi3,
    gen_lshrsi3,
    gen_rotrsi3,
    gen_cmpsi,
    0,
    gen_tstsi,
    gen_cmnsi,
    gen_jump,
    gen_beq,
    gen_bne,
    gen_bge,
    gen_ble,
    gen_bgt,
    gen_blt,
    gen_bgeu,
    gen_bleu,
    gen_bgtu,
    gen_bltu,
    0,
    0,
    gen_indirect_jump,
    gen_tablejump,
    gen_call,
    0,
    gen_call_value,
    0,
    0,
    0,
    gen_nop,
    gen_blockage,
    gen_prologue,
    gen_epilogue,
    0,
    gen_consttable_4,
    gen_consttable_8,
    gen_consttable_end,
    gen_align_4,
  };

char *insn_name[] =
  {
    "movsi",
    "*movsi_insn",
    "*movsi_insn+1",
    "movhi-1",
    "movhi",
    "*movhi_insn",
    "movqi",
    "*movqi_insn",
    "movdi",
    "*movdi_insn",
    "movdf",
    "*movdf_insn",
    "movsf",
    "*movsf_insn",
    "zero_extendhisi2",
    "*zero_extendhisi2_insn",
    "zero_extendqisi2",
    "*zero_extendqisi2_insn",
    "extendhisi2",
    "*extendhisi2_insn",
    "extendqisi2",
    "*extendqisi2_insn",
    "extzv",
    "movstrqi",
    "movmem12b",
    "movmem8b",
    "adddi3",
    "addsi3",
    "addsi3+1",
    "subdi3",
    "subsi3",
    "mulsi3",
    "negsi2",
    "andsi3",
    "*andsi3_insn",
    "bicsi3",
    "iorsi3",
    "xorsi3",
    "one_cmplsi2",
    "ashlsi3",
    "ashrsi3",
    "lshrsi3",
    "rotrsi3",
    "cmpsi",
    "*cmpsi_insn",
    "tstsi",
    "cmnsi",
    "jump",
    "beq",
    "bne",
    "bge",
    "ble",
    "bgt",
    "blt",
    "bgeu",
    "bleu",
    "bgtu",
    "bltu",
    "*cond_branch",
    "*cond_branch_reversed",
    "indirect_jump",
    "tablejump",
    "call",
    "*call_indirect",
    "call_value",
    "*call_value_indirect",
    "*call_insn",
    "*call_value_insn",
    "nop",
    "blockage",
    "prologue",
    "epilogue",
    "*epilogue_insns",
    "consttable_4",
    "consttable_8",
    "consttable_end",
    "align_4",
  };
char **insn_name_ptr = insn_name;

const int insn_n_operands[] =
  {
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    2,
    3,
    3,
    2,
    2,
    4,
    4,
    5,
    4,
    3,
    3,
    3,
    3,
    3,
    3,
    2,
    3,
    3,
    3,
    3,
    3,
    2,
    3,
    3,
    3,
    3,
    2,
    2,
    1,
    2,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    2,
    2,
    1,
    2,
    2,
    2,
    3,
    3,
    2,
    3,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    0,
    0,
  };

const int insn_n_dups[] =
  {
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    2,
    0,
    8,
    6,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
  };

char *const insn_operand_constraint[][MAX_RECOG_OPERANDS] =
  {
    { "", "", },
    { "=l,l,l,l,l,>,l,m,*r,*h", "l,I,J,K,>,l,mi,l,*h,*r", },
    { "", "", },
    { "", "", },
    { "", "", },
    { "=l,l,m,*r,*h,l", "l,m,l,*h,*r,I", },
    { "", "", },
    { "=l,l,m,*r,*h,l", "l,m,l,*h,*r,I", },
    { "", "", },
    { "=l,l,l,l,>,l,m,*r", "l,I,J,>,l,mi,l,*r", },
    { "", "", },
    { "=l,l,>,l,m,*r", "l,>,l,mF,l,*r", },
    { "", "", },
    { "=l,l,>,l,m,*r,*h", "l,>,l,mF,l,*h,*r", },
    { "", "", },
    { "=l", "m", },
    { "", "", },
    { "=l", "m", },
    { "", "", "", },
    { "=l", "m", "=&l", },
    { "", "", },
    { "=l,l", "V,m", },
    { "", "", "", "", },
    { "", "", "", "", },
    { "+&l", "+&l", "=&l", "=&l", "=&l", },
    { "+&l", "+&l", "=&l", "=&l", },
    { "=l", "%0", "l", },
    { "=l,l,l,*r,*h,l,!k", "%0,0,l,*0,*0,!k,!k", "I,J,lL,*h,*r,!M,!O", },
    { "=l", "M", "k", },
    { "=l", "0", "l", },
    { "=l", "l", "l", },
    { "=&l,&l,&l", "%l,*h,0", "l,l,l", },
    { "=l", "l", },
    { "", "", "", },
    { "=l", "%0", "l", },
    { "=l", "l", "0", },
    { "=l", "%0", "l", },
    { "=l", "%0", "l", },
    { "=l", "l", },
    { "=l,l", "l,0", "N,l", },
    { "=l,l", "l,0", "N,l", },
    { "=l,l", "l,0", "N,l", },
    { "=l", "0", "l", },
    { "", "", },
    { "l,*r,*h", "lI,*h,*r", },
    { "l", },
    { "l", "l", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", },
    { "", "", },
    { "", "", },
    { "l*r", },
    { "l*r", "", },
    { "", "", },
    { "l*r", "", },
    { "", "", "", },
    { "=l", "l*r", "", },
    { "i", "", },
    { "=l", "i", "", },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { "", },
    { "", },
    { 0 },
    { 0 },
  };

const enum machine_mode insn_operand_mode[][MAX_RECOG_OPERANDS] =
  {
    { SImode, SImode, },
    { SImode, SImode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { HImode, HImode, },
    { HImode, HImode, },
    { QImode, QImode, },
    { QImode, QImode, },
    { DImode, DImode, },
    { DImode, DImode, },
    { DFmode, DFmode, },
    { DFmode, DFmode, },
    { SFmode, SFmode, },
    { SFmode, SFmode, },
    { SImode, HImode, },
    { SImode, HImode, },
    { SImode, QImode, },
    { SImode, QImode, },
    { SImode, HImode, SImode, },
    { SImode, HImode, SImode, },
    { SImode, QImode, },
    { SImode, QImode, },
    { SImode, SImode, SImode, SImode, },
    { BLKmode, BLKmode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, SImode, },
    { SImode, SImode, SImode, SImode, },
    { DImode, DImode, DImode, },
    { SImode, SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { DImode, DImode, DImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, SImode, },
    { SImode, SImode, },
    { SImode, SImode, },
    { SImode, },
    { SImode, SImode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode, VOIDmode, },
    { VOIDmode, VOIDmode, },
    { SImode, },
    { SImode, VOIDmode, },
    { SImode, VOIDmode, },
    { SImode, VOIDmode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode, SImode, VOIDmode, },
    { SImode, SImode, },
    { VOIDmode, VOIDmode, VOIDmode, },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode },
    { VOIDmode, },
    { VOIDmode, },
    { VOIDmode },
    { VOIDmode },
  };

const char insn_operand_strict_low[][MAX_RECOG_OPERANDS] =
  {
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, 0, 0, },
    { 0, 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, },
    { 0, 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0, 0, 0, },
    { 0, 0, },
    { 0, 0, 0, },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0, },
    { 0, },
    { 0 },
    { 0 },
  };

extern int general_operand ();
extern int nonimmediate_operand ();
extern int s_register_operand ();
extern int memory_operand ();
extern int scratch_operand ();
extern int register_operand ();
extern int const_int_operand ();
extern int nonmemory_operand ();
extern int thumb_cmp_operand ();
extern int comparison_operator ();

int (*const insn_operand_predicate[][MAX_RECOG_OPERANDS])() =
  {
    { general_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { 0, 0, },
    { 0, 0, },
    { general_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { general_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { general_operand, general_operand, },
    { general_operand, general_operand, },
    { general_operand, general_operand, },
    { general_operand, general_operand, },
    { general_operand, general_operand, },
    { nonimmediate_operand, general_operand, },
    { s_register_operand, nonimmediate_operand, },
    { s_register_operand, memory_operand, },
    { s_register_operand, nonimmediate_operand, },
    { s_register_operand, memory_operand, },
    { s_register_operand, nonimmediate_operand, scratch_operand, },
    { s_register_operand, memory_operand, scratch_operand, },
    { s_register_operand, nonimmediate_operand, },
    { s_register_operand, memory_operand, },
    { register_operand, register_operand, const_int_operand, const_int_operand, },
    { general_operand, general_operand, 0, const_int_operand, },
    { register_operand, register_operand, scratch_operand, scratch_operand, scratch_operand, },
    { register_operand, register_operand, scratch_operand, scratch_operand, },
    { s_register_operand, s_register_operand, s_register_operand, },
    { s_register_operand, s_register_operand, nonmemory_operand, },
    { 0, 0, 0, },
    { s_register_operand, s_register_operand, s_register_operand, },
    { s_register_operand, s_register_operand, s_register_operand, },
    { s_register_operand, s_register_operand, s_register_operand, },
    { s_register_operand, s_register_operand, },
    { s_register_operand, s_register_operand, nonmemory_operand, },
    { s_register_operand, s_register_operand, s_register_operand, },
    { s_register_operand, s_register_operand, s_register_operand, },
    { s_register_operand, s_register_operand, s_register_operand, },
    { s_register_operand, s_register_operand, s_register_operand, },
    { s_register_operand, s_register_operand, },
    { s_register_operand, s_register_operand, nonmemory_operand, },
    { s_register_operand, s_register_operand, nonmemory_operand, },
    { s_register_operand, s_register_operand, nonmemory_operand, },
    { s_register_operand, s_register_operand, s_register_operand, },
    { s_register_operand, nonmemory_operand, },
    { s_register_operand, thumb_cmp_operand, },
    { s_register_operand, },
    { s_register_operand, s_register_operand, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, },
    { 0, comparison_operator, },
    { 0, comparison_operator, },
    { s_register_operand, },
    { s_register_operand, 0, },
    { memory_operand, 0, },
    { s_register_operand, 0, },
    { 0, memory_operand, 0, },
    { 0, s_register_operand, 0, },
    { 0, 0, },
    { s_register_operand, 0, 0, },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0 },
    { 0, },
    { 0, },
    { 0 },
    { 0 },
  };

const int insn_n_alternatives[] =
  {
    0,
    10,
    0,
    0,
    0,
    6,
    0,
    6,
    0,
    8,
    0,
    6,
    0,
    7,
    0,
    1,
    0,
    1,
    0,
    1,
    0,
    2,
    0,
    0,
    1,
    1,
    1,
    7,
    1,
    1,
    1,
    3,
    1,
    0,
    1,
    1,
    1,
    1,
    1,
    2,
    2,
    2,
    1,
    0,
    3,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    1,
    1,
    0,
    1,
    0,
    1,
    1,
    1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
  };
