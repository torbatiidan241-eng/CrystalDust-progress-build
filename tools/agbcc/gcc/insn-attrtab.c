/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"

#define operands recog_operand

int
insn_current_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 59:
    case 58:
      extract_insn (insn);
      if ((((insn_addresses[INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])]) - (insn_current_reference_address (insn))) >= (-252)) && (((insn_addresses[INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])]) - (insn_current_reference_address (insn))) <= (254)))
        {
	  return 2;
        }
      else
        {
	  if ((((insn_addresses[INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])]) - (insn_current_reference_address (insn))) >= (-2044)) && (((insn_addresses[INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])]) - (insn_current_reference_address (insn))) <= (2044)))
	    {
	      return 4;
	    }
	  else
	    {
	      return 6;
	    }
        }

    case 47:
      extract_insn (insn);
      if ((((insn_addresses[INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])]) - (insn_current_reference_address (insn))) >= (-2048)) && (((insn_addresses[INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])]) - (insn_current_reference_address (insn))) <= (2044)))
        {
	  return 2;
        }
      else
        {
	  return 4;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_variable_length_p (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 59:
    case 58:
    case 47:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

int
insn_default_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 31:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 4;
        }
      else
        {
	  return 2;
        }

    case 11:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return 2;
        }
      else if (which_alternative == 3)
        {
	  return 6;
        }
      else if (which_alternative == 4)
        {
	  return 4;
        }
      else
        {
	  return 4;
        }

    case 9:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 6;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return 2;
        }
      else if (which_alternative == 5)
        {
	  return 6;
        }
      else if (which_alternative == 6)
        {
	  return 4;
        }
      else
        {
	  return 4;
        }

    case 1:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 2;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return 4;
        }
      else if ((which_alternative == 4) || ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))))
        {
	  return 2;
        }
      else
        {
	  return 2;
        }

    case 74:
    case 29:
    case 26:
      return 8;

    case 72:
      return 42 /* 0x2a */;

    case 69:
      return 0;

    case 59:
    case 58:
      return 6;

    case 73:
    case 67:
    case 66:
    case 65:
    case 63:
    case 25:
    case 24:
    case 19:
    case 47:
      return 4;

    case 21:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 2;
        }
      else
        {
	  return 6;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 2;

    }
}

enum attr_conds
get_attr_conds (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return CONDS_CHANGED;

    }
}

enum attr_far_jump
get_attr_far_jump (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 47:
      if (get_attr_length (insn) == 4)
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case 58:
    case 59:
      if (get_attr_length (insn) == 6)
        {
	  return FAR_JUMP_YES;
        }
      else
        {
	  return FAR_JUMP_NO;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return FAR_JUMP_NO;

    }
}

int length_unit_log = 1;
