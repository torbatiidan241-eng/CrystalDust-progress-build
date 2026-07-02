/* Generated automatically by the program `genpeep'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "insn-config.h"
#include "rtl.h"
#include "regs.h"
#include "output.h"
#include "real.h"
#include "recog.h"
#include "except.h"

extern rtx peep_operand[];

#define operands peep_operand

rtx
peephole (ins1)
     rtx ins1;
{
  rtx insn ATTRIBUTE_UNUSED, x ATTRIBUTE_UNUSED, pat ATTRIBUTE_UNUSED;

  if (NEXT_INSN (ins1)
      && GET_CODE (NEXT_INSN (ins1)) == BARRIER)
    return 0;

  insn = ins1;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L28;
  x = XEXP (pat, 0);
  operands[0] = x;
  if (! register_operand (x, SImode)) goto L28;
  x = XEXP (pat, 1);
  operands[1] = x;
  if (! const_int_operand (x, SImode)) goto L28;
  do { insn = NEXT_INSN (insn);
       if (insn == 0) goto L28; }
  while (GET_CODE (insn) == NOTE
	 || (GET_CODE (insn) == INSN
	     && (GET_CODE (PATTERN (insn)) == USE
		 || GET_CODE (PATTERN (insn)) == CLOBBER)));
  if (GET_CODE (insn) == CODE_LABEL
      || GET_CODE (insn) == BARRIER)
    goto L28;
  pat = PATTERN (insn);
  x = pat;
  if (GET_CODE (x) != SET) goto L28;
  x = XEXP (pat, 0);
  if (!rtx_equal_p (operands[0], x)) goto L28;
  x = XEXP (pat, 1);
  if (GET_CODE (x) != PLUS) goto L28;
  if (GET_MODE (x) != SImode) goto L28;
  x = XEXP (XEXP (pat, 1), 0);
  if (!rtx_equal_p (operands[0], x)) goto L28;
  x = XEXP (XEXP (pat, 1), 1);
  operands[2] = x;
  if (! register_operand (x, SImode)) goto L28;
  if (! (REGNO (operands[2]) == STACK_POINTER_REGNUM 
   && (HOST_WIDE_UINT) (INTVAL (operands[1])) < 1024
   && (INTVAL (operands[1]) & 3) == 0)) goto L28;
  PATTERN (ins1) = gen_rtx_PARALLEL (VOIDmode, gen_rtvec_v (3, operands));
  INSN_CODE (ins1) = 28;
  delete_for_peephole (NEXT_INSN (ins1), insn);
  return NEXT_INSN (insn);
 L28:

  return 0;
}

rtx peep_operand[3];
