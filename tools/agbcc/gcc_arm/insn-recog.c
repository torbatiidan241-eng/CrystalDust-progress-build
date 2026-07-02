/* Generated automatically by the program `genrecog'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "real.h"
#include "output.h"
#include "flags.h"

extern rtx gen_split_5 ();
extern rtx gen_split_18 ();
extern rtx gen_split_33 ();
extern rtx gen_split_75 ();
extern rtx gen_split_93 ();
extern rtx gen_split_102 ();
extern rtx gen_split_155 ();
extern rtx gen_split_156 ();
extern rtx gen_split_159 ();
extern rtx gen_split_164 ();
extern rtx gen_split_165 ();
extern rtx gen_split_168 ();
extern rtx gen_split_171 ();
extern rtx gen_split_178 ();
extern rtx gen_split_381 ();
extern rtx gen_split_382 ();
extern rtx gen_split_384 ();
extern rtx gen_split_385 ();

/* `recog' contains a decision tree
   that recognizes whether the rtx X0 is a valid instruction.

   recog returns -1 if the rtx is not valid.
   If the rtx is valid, recog returns a nonnegative number
   which is the insn code number for the pattern that matched.
   This is the same as the order in the machine description of
   the entry that matched.  This number can be used as an index into various
   insn_* tables, such as insn_templates, insn_outfun, and insn_n_operands
   (found in insn-output.c).

   The third argument to recog is an optional pointer to an int.
   If present, recog will accept a pattern if it matches except for
   missing CLOBBER expressions at the end.  In that case, the value
   pointed to by the optional pointer will be set to the number of
   CLOBBERs that need to be added (it should be initialized to zero by
   the caller).  If it is set nonzero, the caller should allocate a
   PARALLEL of the appropriate size, copy the initial entries, and call
   add_clobbers (found in insn-emit.c) to fill in the CLOBBERs.

   The function split_insns returns 0 if the rtl could not
   be split or the split rtl in a SEQUENCE if it can be.*/

#define operands recog_operand

int
recog_1 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case PLUS:
      goto L418;
    case MINUS:
      goto L322;
    case MULT:
      goto L381;
    case AND:
      goto L736;
    case ZERO_EXTRACT:
      goto L683;
    case IOR:
      goto L797;
    case XOR:
      goto L849;
    case NOT:
      goto L1012;
    }
  L975: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x3, SImode))
    {
      ro[3] = x3;
      goto L976;
    }
  goto ret0;

  L418: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != SImode)
    goto ret0;
  if (GET_CODE (x4) == MULT && 1)
    goto L419;
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L79;
    }
  goto ret0;

  L419: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L420;
    }
  goto ret0;

  L420: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L421;
    }
  goto ret0;

  L421: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L422;
    }
  goto ret0;

  L422: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L423;
  goto ret0;

  L423: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L424;
    case CLOBBER:
      goto L441;
    }
  goto ret0;

  L424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L425;
    }
  goto ret0;

  L425: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L426;
  goto ret0;

  L426: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MULT && 1)
    goto L427;
  goto ret0;

  L427: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[2]) && 1)
    goto L428;
  goto ret0;

  L428: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L429;
  goto ret0;

  L429: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[3]) && 1)
    return 46;
  goto ret0;

  L441: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[0] = x2;
      return 47;
    }
  goto ret0;

  L79: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L80;
    }
  goto ret0;

  L80: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L81;
  goto ret0;

  L81: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L82;
  goto ret0;

  L82: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L83;
    }
  goto ret0;

  L83: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L84;
  goto ret0;

  L84: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L85;
  goto ret0;

  L85: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 7;
  goto ret0;

  L322: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L323;
    }
  goto ret0;

  L323: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L324;
    }
  goto ret0;

  L324: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L325;
  goto ret0;

  L325: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L326;
  goto ret0;

  L326: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L327;
    }
  goto ret0;

  L327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L328;
  goto ret0;

  L328: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L329;
  goto ret0;

  L329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 34;
  goto ret0;

  L381: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L382;
    }
  goto L975;

  L382: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L383;
    }
  goto L975;

  L383: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L384;
  x3 = XEXP (x2, 0);
  goto L975;

  L384: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L385;
    case CLOBBER:
      goto L398;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L975;

  L385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L386;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L975;

  L386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MULT && 1)
    goto L387;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L975;

  L387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L388;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L975;

  L388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[1]) && 1)
    return 43;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L975;

  L398: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[0] = x2;
      return 44;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L975;

  L736: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != SImode)
    goto ret0;
  if (GET_CODE (x4) == NOT && 1)
    goto L737;
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L646;
    }
  L658: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      ro[0] = x4;
      goto L659;
    }
  goto ret0;

  L737: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L738;
    }
  goto ret0;

  L738: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L739;
    }
  goto ret0;

  L739: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L740;
  goto ret0;

  L740: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L741;
    case CLOBBER:
      goto L756;
    }
  goto ret0;

  L741: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L742;
    }
  goto ret0;

  L742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == AND && 1)
    goto L743;
  goto ret0;

  L743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == NOT && 1)
    goto L744;
  goto ret0;

  L744: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[2]) && 1)
    goto L745;
  goto ret0;

  L745: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[1]) && 1)
    return 86;
  goto ret0;

  L756: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[0] = x2;
      return 87;
    }
  goto ret0;

  L646: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_not_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L647;
    }
  x4 = XEXP (x3, 0);
  goto L658;

  L647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L648;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L658;

  L648: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L649;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L658;

  L649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L650;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L658;

  L650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == AND && 1)
    goto L651;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L658;

  L651: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L652;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L658;

  L652: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 76;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L658;

  L659: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_not_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L660;
    }
  goto ret0;

  L660: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L661;
  goto ret0;

  L661: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L662;
  goto ret0;

  L662: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 77;
    }
  goto ret0;

  L683: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (memory_operand (x4, QImode))
    {
      ro[0] = x4;
      goto L684;
    }
  goto ret0;

  L684: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && 1)
    {
      ro[1] = x4;
      goto L685;
    }
  goto ret0;

  L685: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 2);
  if (GET_CODE (x4) == CONST_INT && 1)
    {
      ro[2] = x4;
      goto L686;
    }
  goto ret0;

  L686: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L687;
  goto ret0;

  L687: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L688;
  goto ret0;

  L688: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, QImode))
    {
      ro[3] = x2;
      if (0 && INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 8
   && INTVAL (operands[1]) > 0 && INTVAL (operands[1]) <= 8)
	return 79;
      }
  goto ret0;

  L797: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L798;
    }
  goto ret0;

  L798: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L799;
    }
  goto ret0;

  L799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L800;
  goto ret0;

  L800: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L801;
    case CLOBBER:
      goto L814;
    }
  goto ret0;

  L801: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L802;
    }
  goto ret0;

  L802: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == IOR && 1)
    goto L803;
  goto ret0;

  L803: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L804;
  goto ret0;

  L804: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 94;
  goto ret0;

  L814: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[0] = x2;
      return 95;
    }
  goto ret0;

  L849: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L850;
    }
  goto ret0;

  L850: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L851;
    }
  goto ret0;

  L851: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L852;
  goto ret0;

  L852: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L853;
  goto ret0;

  L853: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L854;
    }
  goto ret0;

  L854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == XOR && 1)
    goto L855;
  goto ret0;

  L855: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L856;
  goto ret0;

  L856: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 100;
  goto ret0;

  L1012: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != SImode)
    goto ret0;
  if (shift_operator (x4, SImode))
    {
      ro[3] = x4;
      goto L1013;
    }
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1138;
    }
  goto ret0;

  L1013: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L1014;
    }
  goto ret0;

  L1014: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_rhs_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L1015;
    }
  goto ret0;

  L1015: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1016;
  goto ret0;

  L1016: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L1017;
    case CLOBBER:
      goto L1032;
    }
  goto ret0;

  L1017: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L1018;
    }
  goto ret0;

  L1018: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L1019;
  goto ret0;

  L1019: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[3]) && 1)
    {
      ro[3] = x3;
      goto L1020;
    }
  goto ret0;

  L1020: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L1021;
  goto ret0;

  L1021: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[2]) && 1)
    return 119;
  goto ret0;

  L1032: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[0] = x2;
      return 120;
    }
  goto ret0;

  L1138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1139;
  goto ret0;

  L1139: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L1140;
    case CLOBBER:
      goto L1151;
    }
  goto ret0;

  L1140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L1141;
    }
  goto ret0;

  L1141: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L1142;
  goto ret0;

  L1142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    return 139;
  goto ret0;

  L1151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[0] = x2;
      return 140;
    }
  goto ret0;

  L976: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L977;
    }
  goto ret0;

  L977: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L978;
    }
  goto ret0;

  L978: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L979;
  goto ret0;

  L979: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L980;
    case CLOBBER:
      goto L993;
    }
  goto ret0;

  L980: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L981;
    }
  goto ret0;

  L981: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[3]) && 1)
    {
      ro[3] = x2;
      goto L982;
    }
  goto ret0;

  L982: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L983;
  goto ret0;

  L983: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 116;
  goto ret0;

  L993: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[0] = x2;
      return 117;
    }
  goto ret0;
 ret0: return -1;
}

int
recog_2 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case TRUNCATE:
      goto L469;
    case SMAX:
      goto L888;
    case SMIN:
      goto L901;
    case UMAX:
      goto L914;
    case UMIN:
      goto L927;
    case ABS:
      goto L1070;
    case NEG:
      goto L1081;
    case PLUS:
    case MINUS:
    case AND:
    case IOR:
    case XOR:
      if (shiftable_operator (x2, SImode))
	{
	  ro[4] = x2;
	  goto L953;
	}
    }
  goto ret0;

  L469: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == LSHIFTRT && 1)
    goto L470;
  goto ret0;

  L470: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == MULT && 1)
    goto L471;
  goto ret0;

  L471: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != DImode)
    goto ret0;
  switch (GET_CODE (x5))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L472;
    case ZERO_EXTEND:
      goto L495;
    }
  goto ret0;

  L472: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      ro[1] = x6;
      goto L473;
    }
  goto ret0;

  L473: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode && GET_CODE (x5) == SIGN_EXTEND && 1)
    goto L474;
  goto ret0;

  L474: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      ro[2] = x6;
      goto L475;
    }
  goto ret0;

  L475: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 32 && 1)
    goto L476;
  goto ret0;

  L476: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L477;
  goto ret0;

  L477: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (arm_fast_multiply)
	return 50;
      }
  goto ret0;

  L495: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      ro[1] = x6;
      goto L496;
    }
  goto ret0;

  L496: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_MODE (x5) == DImode && GET_CODE (x5) == ZERO_EXTEND && 1)
    goto L497;
  goto ret0;

  L497: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (s_register_operand (x6, SImode))
    {
      ro[2] = x6;
      goto L498;
    }
  goto ret0;

  L498: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 32 && 1)
    goto L499;
  goto ret0;

  L499: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L500;
  goto ret0;

  L500: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      if (arm_fast_multiply)
	return 51;
      }
  goto ret0;

  L888: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L889;
    }
  goto ret0;

  L889: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L890;
    }
  goto ret0;

  L890: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L891;
  goto ret0;

  L891: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 104;
  goto ret0;

  L901: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L902;
    }
  goto ret0;

  L902: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L903;
    }
  goto ret0;

  L903: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L904;
  goto ret0;

  L904: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 105;
  goto ret0;

  L914: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L915;
    }
  goto ret0;

  L915: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L916;
    }
  goto ret0;

  L916: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L917;
  goto ret0;

  L917: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 106;
  goto ret0;

  L927: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L928;
    }
  goto ret0;

  L928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L929;
    }
  goto ret0;

  L929: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L930;
  goto ret0;

  L930: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 107;
  goto ret0;

  L1070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1071;
    }
  goto ret0;

  L1071: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1072;
  goto ret0;

  L1072: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 127;
  goto ret0;

  L1081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == ABS && 1)
    goto L1082;
  goto ret0;

  L1082: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1083;
    }
  goto ret0;

  L1083: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1084;
  goto ret0;

  L1084: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 128;
  goto ret0;

  L953: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (minmax_operator (x3, SImode))
    {
      ro[5] = x3;
      goto L954;
    }
  goto ret0;

  L954: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L955;
    }
  goto ret0;

  L955: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L956;
    }
  goto ret0;

  L956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L957;
    }
  goto ret0;

  L957: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L958;
  goto ret0;

  L958: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    if (GET_CODE (operands[1]) != REG
   || (REGNO(operands[1]) != FRAME_POINTER_REGNUM
       && REGNO(operands[1]) != ARG_POINTER_REGNUM))
      return 109;
  goto ret0;
 ret0: return -1;
}

int
recog_3 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DImode:
      if (s_register_operand (x2, DImode))
	{
	  ro[0] = x2;
	  goto L23;
	}
      break;
    case CC_NOOVmode:
      switch (GET_CODE (x2))
	{
	default:
	  break;
	case REG:
	  if (XINT (x2, 0) == 24 && 1)
	    goto L76;
	}
      break;
    case CC_Cmode:
      if (GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
	goto L96;
      break;
    case SImode:
      if (s_register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L468;
	}
    L938: ATTRIBUTE_UNUSED_LABEL
      if (memory_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L939;
	}
      break;
    case CCmode:
      switch (GET_CODE (x2))
	{
	default:
	  break;
	case REG:
	  if (XINT (x2, 0) == 24 && 1)
	    goto L1328;
	}
    }
  if (GET_CODE (x2) == PC && 1)
    goto L1315;
  goto ret0;

  L23: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case PLUS:
      goto L37;
    case MINUS:
      goto L264;
    }
  goto ret0;

  L37: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L38;
    case ZERO_EXTEND:
      goto L53;
    case SUBREG:
    case REG:
      if (s_register_operand (x3, DImode))
	{
	  ro[1] = x3;
	  goto L25;
	}
    }
  goto ret0;

  L38: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L39;
    }
  goto ret0;

  L39: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L40;
    }
  goto ret0;

  L40: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L41;
  goto ret0;

  L41: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 2;
  goto ret0;

  L53: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L54;
    }
  goto ret0;

  L54: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L55;
    }
  goto ret0;

  L55: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L56;
  goto ret0;

  L56: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 3;
  goto ret0;

  L25: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      ro[2] = x3;
      goto L26;
    }
  goto ret0;

  L26: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L27;
  goto ret0;

  L27: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 1;
  goto ret0;

  L264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L265;
    case SIGN_EXTEND:
      goto L280;
    case SUBREG:
    case REG:
      if (s_register_operand (x3, DImode))
	{
	  ro[1] = x3;
	  goto L235;
	}
    }
  goto ret0;

  L265: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != SImode)
    goto ret0;
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L266;
    }
  L295: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L296;
    }
  goto ret0;

  L266: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L267;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L295;

  L267: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L268;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L295;

  L268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 28;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L295;

  L296: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == ZERO_EXTEND && 1)
    goto L297;
  goto ret0;

  L297: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L298;
    }
  goto ret0;

  L298: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L299;
  goto ret0;

  L299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 30;
  goto ret0;

  L280: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L281;
    }
  goto ret0;

  L281: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, DImode))
    {
      ro[1] = x3;
      goto L282;
    }
  goto ret0;

  L282: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L283;
  goto ret0;

  L283: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 29;
  goto ret0;

  L235: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L236;
    case SIGN_EXTEND:
      goto L251;
    case SUBREG:
    case REG:
      if (s_register_operand (x3, DImode))
	{
	  ro[2] = x3;
	  goto L223;
	}
    }
  goto ret0;

  L236: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L237;
    }
  goto ret0;

  L237: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L238;
  goto ret0;

  L238: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 26;
  goto ret0;

  L251: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L252;
    }
  goto ret0;

  L252: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L253;
  goto ret0;

  L253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 27;
  goto ret0;

  L223: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L224;
  goto ret0;

  L224: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 25;
  goto ret0;

  L76: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CC_NOOVmode && GET_CODE (x2) == COMPARE && 1)
    goto L77;
  goto ret0;
 L77: ATTRIBUTE_UNUSED_LABEL
  return recog_1 (x0, insn, pnum_clobbers);

  L96: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CC_Cmode && GET_CODE (x2) == COMPARE && 1)
    goto L97;
  goto ret0;

  L97: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L98;
  goto ret0;

  L98: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L99;
    }
  goto ret0;

  L99: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L100;
    }
  goto ret0;

  L100: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L101;
  L113: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x3, ro[2]) && 1)
    goto L114;
  goto ret0;

  L101: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L102;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L113;

  L102: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L103;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L113;

  L103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L104;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L113;

  L104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L105;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L113;

  L105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 9;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L113;

  L114: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L115;
  goto ret0;

  L115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L116;
    }
  goto ret0;

  L116: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L117;
  goto ret0;

  L117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L118;
  goto ret0;

  L118: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 10;
  goto ret0;
 L468: ATTRIBUTE_UNUSED_LABEL
  tem = recog_2 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x2 = XEXP (x1, 0);
  goto L938;

  L939: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (minmax_operator (x2, SImode))
    {
      ro[3] = x2;
      goto L940;
    }
  goto ret0;

  L940: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L941;
    }
  goto ret0;

  L941: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L942;
    }
  goto ret0;

  L942: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L943;
  goto ret0;

  L943: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 108;
  goto ret0;

  L1328: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == COMPARE && 1)
    goto L1329;
  goto ret0;

  L1329: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1330;
    }
  goto ret0;

  L1330: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1331;
  goto ret0;

  L1331: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1332;
  goto ret0;

  L1332: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L1333;
    }
  goto ret0;

  L1333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[1]) && 1)
    return 185;
  goto ret0;

  L1315: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1316;
  goto ret0;

  L1316: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1317;

  L1317: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1318;
  goto ret0;

  L1318: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (register_operand (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L1319;
    }
  goto ret0;

  L1319: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1320;
  goto ret0;

  L1320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L1321;
  goto ret0;

  L1321: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST && 1)
    goto L1322;
  goto ret0;

  L1322: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == PLUS && 1)
    goto L1323;
  goto ret0;

  L1323: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_CODE (x5) == PC && 1)
    goto L1324;
  goto ret0;

  L1324: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && XWINT (x5, 0) == 8 && 1)
    if (flag_pic)
      return 184;
  goto ret0;
 ret0: return -1;
}

int
recog_4 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case MINUS:
      goto L1744;
    case PLUS:
      goto L1791;
    }
  L1698: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x3, SImode))
    {
      ro[1] = x3;
      goto L1699;
    }
  goto ret0;

  L1744: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1745;
    }
  goto L1698;

  L1745: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (shift_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L1746;
    }
  goto L1698;

  L1746: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L1747;
    }
  goto L1698;

  L1747: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (reg_or_int_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L1748;
    }
  goto L1698;

  L1748: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1749;
  x3 = XEXP (x2, 0);
  goto L1698;

  L1749: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L1750;
    case CLOBBER:
      goto L1767;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L1751;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1751: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L1752;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1752: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L1753;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1753: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    {
      ro[2] = x3;
      goto L1754;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1754: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[3]) && 1)
    goto L1755;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1755: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[4]) && 1)
    return 293;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1767: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[0] = x2;
      return 294;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1791: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == PLUS && 1)
    goto L1792;
  goto L1698;

  L1792: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) != SImode)
    {
      goto L1698;
    }
  if (shift_operator (x5, SImode))
    {
      ro[5] = x5;
      goto L1793;
    }
  L1847: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x5) == MULT && 1)
    goto L1848;
  goto L1698;

  L1793: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  ro[3] = x6;
  goto L1794;

  L1794: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  ro[4] = x6;
  goto L1795;

  L1795: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  ro[1] = x5;
  goto L1796;

  L1796: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && 1)
    {
      ro[2] = x4;
      goto L1797;
    }
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1797: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1798;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1798: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L1799;
    case CLOBBER:
      goto L1820;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1799: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && 1)
    {
      ro[0] = x2;
      goto L1800;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1800: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1801;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1801: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L1802;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1802: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[5]) && 1)
    {
      ro[5] = x4;
      goto L1803;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1803: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, ro[3]) && 1)
    goto L1804;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1804: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, ro[4]) && 1)
    goto L1805;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1805: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L1806;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1806: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (reload_in_progress)
      return 296;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1820: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[0] = x2;
      if (reload_in_progress)
	return 297;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  x5 = XEXP (x4, 0);
  goto L1847;

  L1848: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  ro[3] = x6;
  goto L1849;

  L1849: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  ro[4] = x6;
  goto L1850;

  L1850: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  ro[1] = x5;
  goto L1851;

  L1851: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && 1)
    {
      ro[2] = x4;
      goto L1852;
    }
  goto L1698;

  L1852: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1853;
  x3 = XEXP (x2, 0);
  goto L1698;

  L1853: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L1854;
    case CLOBBER:
      goto L1875;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1854: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && 1)
    {
      ro[0] = x2;
      goto L1855;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1855: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1856;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1856: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L1857;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1857: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == MULT && 1)
    goto L1858;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1858: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (rtx_equal_p (x5, ro[3]) && 1)
    goto L1859;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1859: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (rtx_equal_p (x5, ro[4]) && 1)
    goto L1860;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1860: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L1861;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (reload_in_progress)
      return 299;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[0] = x2;
      if (reload_in_progress)
	return 300;
      }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L1698;

  L1699: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (shift_operator (x4, SImode))
    {
      ro[3] = x4;
      goto L1700;
    }
  goto ret0;

  L1700: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L1701;
    }
  goto ret0;

  L1701: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (reg_or_int_operand (x5, SImode))
    {
      ro[5] = x5;
      goto L1702;
    }
  goto ret0;

  L1702: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L1703;
    }
  goto ret0;

  L1703: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1704;
  goto ret0;

  L1704: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L1705;
    case CLOBBER:
      goto L1722;
    }
  goto ret0;

  L1705: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L1706;
    }
  goto ret0;

  L1706: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[1]) && 1)
    {
      ro[1] = x2;
      goto L1707;
    }
  goto ret0;

  L1707: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[3]) && 1)
    {
      ro[3] = x3;
      goto L1708;
    }
  goto ret0;

  L1708: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[4]) && 1)
    goto L1709;
  goto ret0;

  L1709: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[5]) && 1)
    goto L1710;
  goto ret0;

  L1710: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 290;
  goto ret0;

  L1722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[0] = x2;
      return 291;
    }
  goto ret0;
 ret0: return -1;
}

int
recog_5 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != SImode)
    goto ret0;
  if (s_register_operand (x4, SImode))
    {
      ro[4] = x4;
      goto L2022;
    }
  L2126: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2127;
    }
  goto ret0;

  L2022: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[5] = x4;
      goto L2023;
    }
  x4 = XEXP (x3, 0);
  goto L2126;

  L2023: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x3))
	{
	default:
	  break;
	case PLUS:
	  goto L2024;
	case NOT:
	  goto L2360;
	case ASHIFT:
	case ASHIFTRT:
	case LSHIFTRT:
	case ROTATERT:
	case MULT:
	  if (shift_operator (x3, SImode))
	    {
	      ro[7] = x3;
	      goto L2255;
	    }
	}
    L2395: ATTRIBUTE_UNUSED_LABEL
      if (shiftable_operator (x3, SImode))
	{
	  ro[7] = x3;
	  goto L2396;
	}
    }
  if (arm_rhsm_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2057;
    }
  L2287: ATTRIBUTE_UNUSED_LABEL
  if (arm_not_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2288;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2024: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2025;
    }
  goto L2395;

  L2025: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2026;
    }
  goto L2395;

  L2026: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_rhsm_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2027;
    }
  x3 = XEXP (x2, 1);
  goto L2395;

  L2027: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2028;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2395;

  L2028: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 311;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2395;

  L2360: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2361;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2361: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (shiftable_operator (x3, SImode))
    {
      ro[7] = x3;
      goto L2362;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2362: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2363;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2363: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2364;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2364: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2365;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2365: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 331;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2255: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2256;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2256: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2257;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2257: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_not_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2258;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2258: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2259;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2259: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 325;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2396: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2397;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2397: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2398;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2398: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == NOT && 1)
    goto L2399;
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2399: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2400;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2400: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2401;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 333;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2057: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) != SImode)
    {
      x3 = XEXP (x2, 1);
      goto L2287;
    }
  if (GET_CODE (x3) == PLUS && 1)
    goto L2058;
  L2162: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x3, SImode))
    {
      ro[7] = x3;
      goto L2163;
    }
  x3 = XEXP (x2, 1);
  goto L2287;

  L2058: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2059;
    }
  goto L2162;

  L2059: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2060;
    }
  goto L2162;

  L2060: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2061;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  goto L2162;

  L2061: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 313;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 2);
  goto L2162;

  L2163: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2164;
    }
  x3 = XEXP (x2, 1);
  goto L2287;

  L2164: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2165;
    }
  x3 = XEXP (x2, 1);
  goto L2287;

  L2165: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2166;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2287;

  L2166: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 319;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2287;

  L2288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (shift_operator (x3, SImode))
    {
      ro[7] = x3;
      goto L2289;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2289: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2290;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2290: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2291;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2291: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2292;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2292: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 327;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2126;

  L2127: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2128;
    }
  goto ret0;

  L2128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (shiftable_operator (x3, SImode))
    {
      ro[7] = x3;
      goto L2129;
    }
  goto ret0;

  L2129: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[4] = x4;
      goto L2130;
    }
  goto ret0;

  L2130: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[5] = x4;
      goto L2131;
    }
  goto ret0;

  L2131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_rhsm_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2132;
    }
  goto ret0;

  L2132: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2133;
  goto ret0;

  L2133: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 317;
  goto ret0;
 ret0: return -1;
}

int
recog_6 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x2))
	{
	default:
	  break;
	case MINUS:
	  goto L1945;
	case NEG:
	  goto L1986;
	case IF_THEN_ELSE:
	  goto L2001;
	}
    L1927: ATTRIBUTE_UNUSED_LABEL
      if (shiftable_operator (x2, SImode))
	{
	  ro[5] = x2;
	  goto L1928;
	}
    L2487: ATTRIBUTE_UNUSED_LABEL
      if (shiftable_operator (x2, SImode))
	{
	  ro[1] = x2;
	  goto L2488;
	}
    }
  if (comparison_operator (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L1905;
    }
  goto ret0;

  L1945: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1946;
    }
  goto L1927;

  L1946: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (comparison_operator (x3, SImode))
    {
      ro[4] = x3;
      goto L1947;
    }
  goto L1927;

  L1947: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L1948;
    }
  goto L1927;

  L1948: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L1949;
    }
  goto L1927;

  L1949: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1950;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1927;

  L1950: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 306;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1927;

  L1986: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (comparison_operator (x3, VOIDmode))
    {
      ro[3] = x3;
      goto L1987;
    }
  goto ret0;

  L1987: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1988;
    }
  goto ret0;

  L1988: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L1989;
    }
  goto ret0;

  L1989: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1990;
  goto ret0;

  L1990: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 309;
  goto ret0;

  L2001: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (comparison_operator (x3, VOIDmode))
    {
      ro[5] = x3;
      goto L2002;
    }
  L2020: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x3, VOIDmode))
    {
      ro[6] = x3;
      goto L2021;
    }
  L2086: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x3, VOIDmode))
    {
      ro[9] = x3;
      goto L2087;
    }
  L2317: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x3, VOIDmode))
    {
      ro[7] = x3;
      goto L2318;
    }
  goto ret0;

  L2002: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2003;
    }
  goto L2020;

  L2003: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[4] = x4;
      goto L2224;
    }
  goto L2020;

  L2224: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x3))
	{
	default:
	  break;
	case NOT:
	  goto L2225;
	case NEG:
	  goto L2432;
	}
    }
  if (arm_rhs_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2005;
    }
  L2194: ATTRIBUTE_UNUSED_LABEL
  if (arm_not_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2195;
    }
  x3 = XEXP (x2, 0);
  goto L2020;

  L2225: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2226;
    }
  x3 = XEXP (x2, 0);
  goto L2020;

  L2226: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_not_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2227;
    }
  x3 = XEXP (x2, 0);
  goto L2020;

  L2227: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2228;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2020;

  L2228: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 323;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2020;

  L2432: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2433;
    }
  x3 = XEXP (x2, 0);
  goto L2020;

  L2433: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_not_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2434;
    }
  x3 = XEXP (x2, 0);
  goto L2020;

  L2434: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2435;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2020;

  L2435: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 335;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2020;

  L2005: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2006;
    }
  x3 = XEXP (x2, 1);
  goto L2194;

  L2006: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2007;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2194;

  L2007: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 310;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 1);
  goto L2194;

  L2195: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) != SImode)
    {
      x3 = XEXP (x2, 0);
      goto L2020;
    }
  switch (GET_CODE (x3))
    {
    default:
      break;
    case NOT:
      goto L2196;
    case NEG:
      goto L2463;
    }
  x3 = XEXP (x2, 0);
  goto L2020;

  L2196: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2197;
    }
  x3 = XEXP (x2, 0);
  goto L2020;

  L2197: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2198;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2020;

  L2198: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 321;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2020;

  L2463: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2464;
    }
  x3 = XEXP (x2, 0);
  goto L2020;

  L2464: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2465;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2020;

  L2465: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 337;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2020;
 L2021: ATTRIBUTE_UNUSED_LABEL
  tem = recog_5 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  goto L2086;

  L2087: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[5] = x4;
      goto L2088;
    }
  goto L2317;

  L2088: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[6] = x4;
      goto L2089;
    }
  goto L2317;

  L2089: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (shiftable_operator (x3, SImode))
    {
      ro[8] = x3;
      goto L2090;
    }
  x3 = XEXP (x2, 0);
  goto L2317;

  L2090: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2091;
    }
  x3 = XEXP (x2, 0);
  goto L2317;

  L2091: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2092;
    }
  x3 = XEXP (x2, 0);
  goto L2317;

  L2092: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (shiftable_operator (x3, SImode))
    {
      ro[7] = x3;
      goto L2093;
    }
  x3 = XEXP (x2, 0);
  goto L2317;

  L2093: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2094;
    }
  x3 = XEXP (x2, 0);
  goto L2317;

  L2094: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[4] = x4;
      goto L2095;
    }
  x3 = XEXP (x2, 0);
  goto L2317;

  L2095: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2096;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2317;

  L2096: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 315;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  goto L2317;

  L2318: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[5] = x4;
      goto L2319;
    }
  goto ret0;

  L2319: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[6] = x4;
      goto L2320;
    }
  goto ret0;

  L2320: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (shift_operator (x3, SImode))
    {
      ro[8] = x3;
      goto L2321;
    }
  goto ret0;

  L2321: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2322;
    }
  goto ret0;

  L2322: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2323;
    }
  goto ret0;

  L2323: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (shift_operator (x3, SImode))
    {
      ro[9] = x3;
      goto L2324;
    }
  goto ret0;

  L2324: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2325;
    }
  goto ret0;

  L2325: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[4] = x4;
      goto L2326;
    }
  goto ret0;

  L2326: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2327;
  goto ret0;

  L2327: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 329;
  goto ret0;

  L1928: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (comparison_operator (x3, SImode))
    {
      ro[4] = x3;
      goto L1929;
    }
  goto L2487;

  L1929: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L1930;
    }
  goto L2487;

  L1930: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L1931;
    }
  goto L2487;

  L1931: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1932;
    }
  goto L2487;

  L1932: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1933;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L2487;

  L1933: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 305;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L2487;

  L2488: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2489;
    }
  goto ret0;

  L2489: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (memory_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2490;
    }
  goto ret0;

  L2490: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2491;
  goto ret0;

  L2491: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      if (adjacent_mem_locations (operands[2], operands[3]))
	return 339;
      }
  goto ret0;

  L1905: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1906;
    }
  goto ret0;

  L1906: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L1907;
    }
  goto ret0;

  L1907: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1908;
  goto ret0;

  L1908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    return 303;
  goto ret0;
 ret0: return -1;
}

int
recog_7 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  ro[0] = x2;
  goto L1589;
  L1629: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L1630;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case PC:
      goto L1664;
    }
  L1696: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x2))
    {
    default:
      break;
    case CC_NOOVmode:
      switch (GET_CODE (x2))
	{
	default:
	  break;
	case REG:
	  if (XINT (x2, 0) == 24 && 1)
	    goto L1697;
	}
      break;
    case SImode:
      if (GET_CODE (x2) == MEM && 1)
	goto L2574;
      if (s_register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L1944;
	}
    L2547: ATTRIBUTE_UNUSED_LABEL
      if (s_register_operand (x2, SImode))
	{
	  ro[3] = x2;
	  goto L2548;
	}
    L2741: ATTRIBUTE_UNUSED_LABEL
      if (s_register_operand (x2, SImode))
	{
	  ro[5] = x2;
	  goto L2742;
	}
      break;
    case QImode:
      if (GET_CODE (x2) == MEM && 1)
	goto L2500;
      if (s_register_operand (x2, QImode))
	{
	  ro[3] = x2;
	  goto L2524;
	}
    L2677: ATTRIBUTE_UNUSED_LABEL
      if (s_register_operand (x2, QImode))
	{
	  ro[5] = x2;
	  goto L2678;
	}
      break;
    case HImode:
      if (s_register_operand (x2, HImode))
	{
	  ro[3] = x2;
	  goto L2622;
	}
    L2773: ATTRIBUTE_UNUSED_LABEL
      if (s_register_operand (x2, HImode))
	{
	  ro[5] = x2;
	  goto L2774;
	}
    }
  goto ret0;

  L1589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL && 1)
    goto L1590;
  x2 = XEXP (x1, 0);
  goto L1629;

  L1590: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MEM && 1)
    goto L1591;
  x2 = XEXP (x1, 0);
  goto L1629;

  L1591: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1592;
    }
  L1606: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x4, VOIDmode))
    {
      ro[1] = x4;
      goto L1607;
    }
  x2 = XEXP (x1, 0);
  goto L1629;

  L1592: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, VOIDmode))
    {
      ro[2] = x3;
      goto L1593;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L1606;

  L1593: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1594;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L1606;

  L1594: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 14 && 1)
    return 275;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L1606;

  L1607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, VOIDmode))
    {
      ro[2] = x3;
      goto L1608;
    }
  x2 = XEXP (x1, 0);
  goto L1629;

  L1608: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1609;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1629;

  L1609: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 14 && 1)
    if (! CONSTANT_ADDRESS_P (XEXP (operands[1], 0)))
      return 276;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1629;

  L1630: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CALL && 1)
    goto L1631;
  x2 = XEXP (x1, 0);
  goto L1696;

  L1631: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MEM && 1)
    goto L1632;
  x2 = XEXP (x1, 0);
  goto L1696;

  L1632: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  ro[1] = x4;
  goto L1633;

  L1633: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (general_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1634;
    }
  x2 = XEXP (x1, 0);
  goto L1696;

  L1634: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1635;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1696;

  L1635: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 14 && 1)
    if (! TARGET_LONG_CALLS && GET_CODE(operands[1]) == SYMBOL_REF)
      return 278;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L1696;

  L1664: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == IF_THEN_ELSE && 1)
    goto L1665;
  goto ret0;

  L1665: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == LEU && 1)
    goto L1666;
  goto ret0;

  L1666: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[0] = x4;
      goto L1667;
    }
  goto ret0;

  L1667: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1668;
    }
  goto ret0;

  L1668: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == MEM && 1)
    goto L1669;
  goto ret0;

  L1669: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == PLUS && 1)
    goto L1670;
  goto ret0;

  L1670: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (GET_MODE (x5) == SImode && GET_CODE (x5) == MULT && 1)
    goto L1671;
  goto ret0;

  L1671: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  if (rtx_equal_p (x6, ro[0]) && 1)
    goto L1672;
  goto ret0;

  L1672: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 1);
  if (GET_CODE (x6) == CONST_INT && XWINT (x6, 0) == 4 && 1)
    goto L1673;
  goto ret0;

  L1673: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == LABEL_REF && 1)
    goto L1674;
  goto ret0;

  L1674: ATTRIBUTE_UNUSED_LABEL
  x6 = XEXP (x5, 0);
  ro[2] = x6;
  goto L1675;

  L1675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == LABEL_REF && 1)
    goto L1676;
  goto ret0;

  L1676: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  ro[3] = x4;
  goto L1677;

  L1677: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L1678;
  goto ret0;

  L1678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1679;
  goto ret0;

  L1679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[2]) && 1)
    return 285;
  goto ret0;

  L1697: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CC_NOOVmode && GET_CODE (x2) == COMPARE && 1)
    goto L1743;
  goto ret0;
 L1743: ATTRIBUTE_UNUSED_LABEL
  return recog_4 (x0, insn, pnum_clobbers);

  L2574: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case PLUS:
      goto L2575;
    case MINUS:
      goto L2587;
    }
  goto ret0;

  L2575: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != SImode)
    goto ret0;
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2576;
    }
  if (shift_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L2712;
    }
  goto ret0;

  L2576: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (index_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2577;
    }
  goto ret0;

  L2577: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L2578;
    }
  goto ret0;

  L2578: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2579;
  goto ret0;

  L2579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2580;
    }
  goto ret0;

  L2580: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2581;
  goto ret0;

  L2581: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2582;
  goto ret0;

  L2582: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 346;
  goto ret0;

  L2712: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L2713;
    }
  goto ret0;

  L2713: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && const_shift_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L2714;
    }
  goto ret0;

  L2714: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2715;
    }
  goto ret0;

  L2715: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L2716;
    }
  goto ret0;

  L2716: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2717;
  goto ret0;

  L2717: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2718;
    }
  goto ret0;

  L2718: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2719;
  goto ret0;

  L2719: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[2]) && 1)
    {
      ro[2] = x3;
      goto L2720;
    }
  goto ret0;

  L2720: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[3]) && 1)
    goto L2721;
  goto ret0;

  L2721: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[4]) && 1)
    goto L2722;
  goto ret0;

  L2722: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[1]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)
      return 356;
  goto ret0;

  L2587: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2588;
    }
  goto ret0;

  L2588: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != SImode)
    goto ret0;
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2589;
    }
  if (shift_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L2729;
    }
  goto ret0;

  L2589: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L2590;
    }
  goto ret0;

  L2590: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2591;
  goto ret0;

  L2591: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2592;
    }
  goto ret0;

  L2592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2593;
  goto ret0;

  L2593: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2594;
  goto ret0;

  L2594: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 347;
  goto ret0;

  L2729: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L2730;
    }
  goto ret0;

  L2730: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && const_shift_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L2731;
    }
  goto ret0;

  L2731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[5] = x2;
      goto L2732;
    }
  goto ret0;

  L2732: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2733;
  goto ret0;

  L2733: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2734;
    }
  goto ret0;

  L2734: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2735;
  goto ret0;

  L2735: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2736;
  goto ret0;

  L2736: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    {
      ro[2] = x3;
      goto L2737;
    }
  goto ret0;

  L2737: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[3]) && 1)
    goto L2738;
  goto ret0;

  L2738: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[4]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)
      return 357;
  goto ret0;
 L1944: ATTRIBUTE_UNUSED_LABEL
  tem = recog_6 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x2 = XEXP (x1, 0);
  goto L2547;

  L2548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L2741;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L2549;
    case MEM:
      goto L2599;
    }
  x2 = XEXP (x1, 0);
  goto L2741;

  L2549: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == QImode && GET_CODE (x3) == MEM && 1)
    goto L2550;
  x2 = XEXP (x1, 0);
  goto L2741;

  L2550: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L2741;
    }
  switch (GET_CODE (x4))
    {
    default:
      break;
    case PLUS:
      goto L2551;
    case MINUS:
      goto L2564;
    }
  x2 = XEXP (x1, 0);
  goto L2741;

  L2551: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L2552;
    }
  x2 = XEXP (x1, 0);
  goto L2741;

  L2552: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (index_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L2553;
    }
  x2 = XEXP (x1, 0);
  goto L2741;

  L2553: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2554;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2554: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2555;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2556;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2556: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2557;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 344;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2564: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L2565;
    }
  x2 = XEXP (x1, 0);
  goto L2741;

  L2565: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (s_register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L2566;
    }
  x2 = XEXP (x1, 0);
  goto L2741;

  L2566: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2567;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2567: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2568;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2569;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2569: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2570;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2570: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 345;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2599: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L2741;
    }
  switch (GET_CODE (x3))
    {
    default:
      break;
    case PLUS:
      goto L2600;
    case MINUS:
      goto L2612;
    }
  x2 = XEXP (x1, 0);
  goto L2741;

  L2600: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2601;
    }
  x2 = XEXP (x1, 0);
  goto L2741;

  L2601: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (index_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2602;
    }
  x2 = XEXP (x1, 0);
  goto L2741;

  L2602: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2603;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2603: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2604;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2604: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2605;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2605: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2606;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2606: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 348;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2612: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2613;
    }
  x2 = XEXP (x1, 0);
  goto L2741;

  L2613: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2614;
    }
  x2 = XEXP (x1, 0);
  goto L2741;

  L2614: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2615;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2616;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2616: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2617;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2617: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2618;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2618: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 349;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2741;

  L2742: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L2743;
  goto ret0;

  L2743: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case PLUS:
      goto L2744;
    case MINUS:
      goto L2760;
    }
  goto ret0;

  L2744: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (shift_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L2745;
    }
  goto ret0;

  L2745: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L2746;
    }
  goto ret0;

  L2746: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && const_shift_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L2747;
    }
  goto ret0;

  L2747: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2748;
    }
  goto ret0;

  L2748: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2749;
  goto ret0;

  L2749: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2750;
    }
  goto ret0;

  L2750: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2751;
  goto ret0;

  L2751: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[2]) && 1)
    {
      ro[2] = x3;
      goto L2752;
    }
  goto ret0;

  L2752: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[3]) && 1)
    goto L2753;
  goto ret0;

  L2753: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[4]) && 1)
    goto L2754;
  goto ret0;

  L2754: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[1]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)
      return 358;
  goto ret0;

  L2760: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2761;
    }
  goto ret0;

  L2761: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (shift_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L2762;
    }
  goto ret0;

  L2762: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L2763;
    }
  goto ret0;

  L2763: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && const_shift_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L2764;
    }
  goto ret0;

  L2764: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2765;
  goto ret0;

  L2765: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2766;
    }
  goto ret0;

  L2766: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2767;
  goto ret0;

  L2767: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2768;
  goto ret0;

  L2768: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    {
      ro[2] = x3;
      goto L2769;
    }
  goto ret0;

  L2769: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[3]) && 1)
    goto L2770;
  goto ret0;

  L2770: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[4]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)
      return 359;
  goto ret0;

  L2500: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case PLUS:
      goto L2501;
    case MINUS:
      goto L2513;
    }
  goto ret0;

  L2501: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != SImode)
    goto ret0;
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2502;
    }
  if (shift_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L2648;
    }
  goto ret0;

  L2502: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (index_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2503;
    }
  goto ret0;

  L2503: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, QImode))
    {
      ro[3] = x2;
      goto L2504;
    }
  goto ret0;

  L2504: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2505;
  goto ret0;

  L2505: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2506;
    }
  goto ret0;

  L2506: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2507;
  goto ret0;

  L2507: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2508;
  goto ret0;

  L2508: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 340;
  goto ret0;

  L2648: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L2649;
    }
  goto ret0;

  L2649: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && const_shift_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L2650;
    }
  goto ret0;

  L2650: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2651;
    }
  goto ret0;

  L2651: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, QImode))
    {
      ro[5] = x2;
      goto L2652;
    }
  goto ret0;

  L2652: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2653;
  goto ret0;

  L2653: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2654;
    }
  goto ret0;

  L2654: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2655;
  goto ret0;

  L2655: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[2]) && 1)
    {
      ro[2] = x3;
      goto L2656;
    }
  goto ret0;

  L2656: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[3]) && 1)
    goto L2657;
  goto ret0;

  L2657: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[4]) && 1)
    goto L2658;
  goto ret0;

  L2658: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[1]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)
      return 352;
  goto ret0;

  L2513: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2514;
    }
  goto ret0;

  L2514: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) != SImode)
    goto ret0;
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2515;
    }
  if (shift_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L2665;
    }
  goto ret0;

  L2515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, QImode))
    {
      ro[3] = x2;
      goto L2516;
    }
  goto ret0;

  L2516: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2517;
  goto ret0;

  L2517: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2518;
    }
  goto ret0;

  L2518: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2519;
  goto ret0;

  L2519: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2520;
  goto ret0;

  L2520: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 341;
  goto ret0;

  L2665: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L2666;
    }
  goto ret0;

  L2666: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && const_shift_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L2667;
    }
  goto ret0;

  L2667: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, QImode))
    {
      ro[5] = x2;
      goto L2668;
    }
  goto ret0;

  L2668: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2669;
  goto ret0;

  L2669: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2670;
    }
  goto ret0;

  L2670: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2671;
  goto ret0;

  L2671: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2672;
  goto ret0;

  L2672: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    {
      ro[2] = x3;
      goto L2673;
    }
  goto ret0;

  L2673: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[3]) && 1)
    goto L2674;
  goto ret0;

  L2674: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[4]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)
      return 353;
  goto ret0;

  L2524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode && GET_CODE (x2) == MEM && 1)
    goto L2525;
  x2 = XEXP (x1, 0);
  goto L2677;

  L2525: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L2677;
    }
  switch (GET_CODE (x3))
    {
    default:
      break;
    case PLUS:
      goto L2526;
    case MINUS:
      goto L2538;
    }
  x2 = XEXP (x1, 0);
  goto L2677;

  L2526: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2527;
    }
  x2 = XEXP (x1, 0);
  goto L2677;

  L2527: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (index_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2528;
    }
  x2 = XEXP (x1, 0);
  goto L2677;

  L2528: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2529;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2677;

  L2529: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2530;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2677;

  L2530: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2531;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2677;

  L2531: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2532;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2677;

  L2532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 342;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2677;

  L2538: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2539;
    }
  x2 = XEXP (x1, 0);
  goto L2677;

  L2539: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2540;
    }
  x2 = XEXP (x1, 0);
  goto L2677;

  L2540: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2541;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2677;

  L2541: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2542;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2677;

  L2542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2543;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2677;

  L2543: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2544;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2677;

  L2544: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 343;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2677;

  L2678: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == QImode && GET_CODE (x2) == MEM && 1)
    goto L2679;
  goto ret0;

  L2679: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case PLUS:
      goto L2680;
    case MINUS:
      goto L2696;
    }
  goto ret0;

  L2680: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (shift_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L2681;
    }
  goto ret0;

  L2681: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L2682;
    }
  goto ret0;

  L2682: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && const_shift_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L2683;
    }
  goto ret0;

  L2683: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2684;
    }
  goto ret0;

  L2684: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2685;
  goto ret0;

  L2685: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2686;
    }
  goto ret0;

  L2686: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2687;
  goto ret0;

  L2687: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[2]) && 1)
    {
      ro[2] = x3;
      goto L2688;
    }
  goto ret0;

  L2688: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[3]) && 1)
    goto L2689;
  goto ret0;

  L2689: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[4]) && 1)
    goto L2690;
  goto ret0;

  L2690: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[1]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)
      return 354;
  goto ret0;

  L2696: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2697;
    }
  goto ret0;

  L2697: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (shift_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L2698;
    }
  goto ret0;

  L2698: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L2699;
    }
  goto ret0;

  L2699: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && const_shift_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L2700;
    }
  goto ret0;

  L2700: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2701;
  goto ret0;

  L2701: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2702;
    }
  goto ret0;

  L2702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2703;
  goto ret0;

  L2703: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2704;
  goto ret0;

  L2704: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    {
      ro[2] = x3;
      goto L2705;
    }
  goto ret0;

  L2705: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[3]) && 1)
    goto L2706;
  goto ret0;

  L2706: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[4]) && 1)
    if (REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)
      return 355;
  goto ret0;

  L2622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode && GET_CODE (x2) == MEM && 1)
    goto L2623;
  x2 = XEXP (x1, 0);
  goto L2773;

  L2623: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L2773;
    }
  switch (GET_CODE (x3))
    {
    default:
      break;
    case PLUS:
      goto L2624;
    case MINUS:
      goto L2636;
    }
  x2 = XEXP (x1, 0);
  goto L2773;

  L2624: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2625;
    }
  x2 = XEXP (x1, 0);
  goto L2773;

  L2625: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (index_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2626;
    }
  x2 = XEXP (x1, 0);
  goto L2773;

  L2626: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2627;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2773;

  L2627: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2628;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2773;

  L2628: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2629;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2773;

  L2629: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2630;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2773;

  L2630: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if ((! BYTES_BIG_ENDIAN)
   && ! TARGET_SHORT_BY_BYTES
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 350;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2773;

  L2636: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2637;
    }
  x2 = XEXP (x1, 0);
  goto L2773;

  L2637: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2638;
    }
  x2 = XEXP (x1, 0);
  goto L2773;

  L2638: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2639;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2773;

  L2639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2640;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2773;

  L2640: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2641;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2773;

  L2641: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2642;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2773;

  L2642: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    if ((!BYTES_BIG_ENDIAN)
   && ! TARGET_SHORT_BY_BYTES
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && (GET_CODE (operands[2]) != REG
       || REGNO (operands[2]) != FRAME_POINTER_REGNUM))
      return 351;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L2773;

  L2774: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == HImode && GET_CODE (x2) == MEM && 1)
    goto L2775;
  goto ret0;

  L2775: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case PLUS:
      goto L2776;
    case MINUS:
      goto L2792;
    }
  goto ret0;

  L2776: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (shift_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L2777;
    }
  goto ret0;

  L2777: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L2778;
    }
  goto ret0;

  L2778: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && const_shift_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L2779;
    }
  goto ret0;

  L2779: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2780;
    }
  goto ret0;

  L2780: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2781;
  goto ret0;

  L2781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2782;
    }
  goto ret0;

  L2782: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2783;
  goto ret0;

  L2783: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[2]) && 1)
    {
      ro[2] = x3;
      goto L2784;
    }
  goto ret0;

  L2784: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[3]) && 1)
    goto L2785;
  goto ret0;

  L2785: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[4]) && 1)
    goto L2786;
  goto ret0;

  L2786: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[1]) && 1)
    if ((! BYTES_BIG_ENDIAN)
   && ! TARGET_SHORT_BY_BYTES
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)
      return 360;
  goto ret0;

  L2792: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2793;
    }
  goto ret0;

  L2793: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (shift_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L2794;
    }
  goto ret0;

  L2794: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L2795;
    }
  goto ret0;

  L2795: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (GET_CODE (x5) == CONST_INT && const_shift_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L2796;
    }
  goto ret0;

  L2796: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L2797;
  goto ret0;

  L2797: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L2798;
    }
  goto ret0;

  L2798: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MINUS && 1)
    goto L2799;
  goto ret0;

  L2799: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L2800;
  goto ret0;

  L2800: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (rtx_equal_p (x3, ro[2]) && 1)
    {
      ro[2] = x3;
      goto L2801;
    }
  goto ret0;

  L2801: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[3]) && 1)
    goto L2802;
  goto ret0;

  L2802: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (rtx_equal_p (x4, ro[4]) && 1)
    if ((! BYTES_BIG_ENDIAN)
   && ! TARGET_SHORT_BY_BYTES
   && REGNO (operands[0]) != FRAME_POINTER_REGNUM
   && REGNO (operands[1]) != FRAME_POINTER_REGNUM
   && REGNO (operands[3]) != FRAME_POINTER_REGNUM)
      return 361;
  goto ret0;
 ret0: return -1;
}

int
recog_8 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L45;
    case MINUS:
      goto L272;
    case MULT:
      goto L454;
    case AND:
      goto L621;
    case IOR:
      goto L773;
    case XOR:
      goto L830;
    case NEG:
      goto L1044;
    case NOT:
      goto L1127;
    case ZERO_EXTEND:
      goto L1197;
    case SIGN_EXTEND:
      goto L1205;
    }
  goto ret0;

  L45: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L46;
    case ZERO_EXTEND:
      goto L61;
    case SUBREG:
    case REG:
      if (s_register_operand (x2, DImode))
	{
	  ro[1] = x2;
	  goto L32;
	}
    }
  goto ret0;

  L46: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L47;
    }
  goto ret0;

  L47: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 2;
    }
  goto ret0;

  L61: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L62;
    }
  goto ret0;

  L62: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 3;
    }
  goto ret0;

  L32: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && s_register_operand (x2, DImode))
    {
      ro[2] = x2;
      *pnum_clobbers = 1;
      return 1;
    }
  goto ret0;

  L272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L273;
    case SIGN_EXTEND:
      goto L288;
    case SUBREG:
    case REG:
      if (s_register_operand (x2, DImode))
	{
	  ro[1] = x2;
	  goto L243;
	}
    }
  goto ret0;

  L273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    goto ret0;
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L274;
    }
  L304: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L305;
    }
  goto ret0;

  L274: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 28;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L304;

  L305: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == ZERO_EXTEND && 1)
    goto L306;
  goto ret0;

  L306: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (pnum_clobbers != 0 && s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      *pnum_clobbers = 1;
      return 30;
    }
  goto ret0;

  L288: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L289;
    }
  goto ret0;

  L289: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 29;
    }
  goto ret0;

  L243: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L244;
    case SIGN_EXTEND:
      goto L259;
    case SUBREG:
    case REG:
      if (pnum_clobbers != 0 && s_register_operand (x2, DImode))
	{
	  ro[2] = x2;
	  *pnum_clobbers = 1;
	  return 25;
	}
    }
  goto ret0;

  L244: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (pnum_clobbers != 0 && s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      *pnum_clobbers = 1;
      return 26;
    }
  goto ret0;

  L259: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (pnum_clobbers != 0 && s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      *pnum_clobbers = 1;
      return 27;
    }
  goto ret0;

  L454: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L455;
    case ZERO_EXTEND:
      goto L462;
    }
  goto ret0;

  L455: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L456;
    }
  goto ret0;

  L456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == SIGN_EXTEND && 1)
    goto L457;
  goto ret0;

  L457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      if (arm_fast_multiply)
	return 48;
      }
  goto ret0;

  L462: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L463;
    }
  goto ret0;

  L463: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == ZERO_EXTEND && 1)
    goto L464;
  goto ret0;

  L464: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      if (arm_fast_multiply)
	return 49;
      }
  goto ret0;

  L621: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L622;
    case SIGN_EXTEND:
      goto L628;
    case NOT:
      goto L707;
    case SUBREG:
    case REG:
      if (s_register_operand (x2, DImode))
	{
	  ro[1] = x2;
	  goto L617;
	}
    }
  goto ret0;

  L622: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L623;
    }
  goto ret0;

  L623: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 71;
    }
  goto ret0;

  L628: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L629;
    }
  goto ret0;

  L629: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 72;
    }
  goto ret0;

  L707: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != DImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L708;
    case SIGN_EXTEND:
      goto L715;
    case SUBREG:
    case REG:
      if (s_register_operand (x3, DImode))
	{
	  ro[2] = x3;
	  goto L702;
	}
    }
  goto ret0;

  L708: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L709;
    }
  goto ret0;

  L709: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 82;
    }
  goto ret0;

  L715: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L716;
    }
  goto ret0;

  L716: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 83;
    }
  goto ret0;

  L702: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 81;
    }
  goto ret0;

  L617: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[2] = x2;
      return 70;
    }
  goto ret0;

  L773: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L774;
    case SIGN_EXTEND:
      goto L780;
    case SUBREG:
    case REG:
      if (s_register_operand (x2, DImode))
	{
	  ro[1] = x2;
	  goto L769;
	}
    }
  goto ret0;

  L774: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L775;
    }
  goto ret0;

  L775: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 89;
    }
  goto ret0;

  L780: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L781;
    }
  goto ret0;

  L781: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 90;
    }
  goto ret0;

  L769: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[2] = x2;
      return 88;
    }
  goto ret0;

  L830: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L831;
    case SIGN_EXTEND:
      goto L837;
    case SUBREG:
    case REG:
      if (s_register_operand (x2, DImode))
	{
	  ro[1] = x2;
	  goto L826;
	}
    }
  goto ret0;

  L831: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L832;
    }
  goto ret0;

  L832: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 97;
    }
  goto ret0;

  L837: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L838;
    }
  goto ret0;

  L838: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 98;
    }
  goto ret0;

  L826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[2] = x2;
      return 96;
    }
  goto ret0;

  L1044: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 121;
    }
  goto ret0;

  L1127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      return 137;
    }
  goto ret0;

  L1197: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (s_register_operand (x2, SImode))
	{
	  ro[1] = x2;
	  return 150;
	}
      break;
    case QImode:
      if (nonimmediate_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 151;
	}
    }
  goto ret0;

  L1205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 152;
    }
  goto ret0;
 ret0: return -1;
}

int
recog_9 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L136;
    case MINUS:
      goto L333;
    case MULT:
      goto L374;
    case TRUNCATE:
      goto L481;
    case AND:
      goto L720;
    case IOR:
      goto L785;
    case XOR:
      goto L842;
    case SMAX:
      goto L895;
    case SMIN:
      goto L908;
    case UMAX:
      goto L921;
    case UMIN:
      goto L934;
    case NOT:
      goto L1004;
    case NEG:
      goto L1088;
    case ABS:
      goto L1076;
    case FIX:
      goto L1173;
    case ZERO_EXTEND:
      goto L1209;
    case SIGN_EXTEND:
      goto L1246;
    }
  L961: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x1, SImode))
    {
      ro[4] = x1;
      goto L962;
    }
  L968: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x1, SImode))
    {
      ro[3] = x1;
      goto L969;
    }
  goto ret0;

  L136: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    {
      goto L961;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LTU:
      goto L137;
    case PLUS:
      goto L155;
    case MULT:
      goto L410;
    case SUBREG:
    case REG:
      if (s_register_operand (x2, SImode))
	{
	  ro[1] = x2;
	  goto L72;
	}
    }
  L172: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, SImode))
    {
      ro[2] = x2;
      goto L173;
    }
  goto L961;

  L137: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_Cmode && GET_CODE (x3) == REG && XINT (x3, 0) == 24 && 1)
    goto L138;
  goto L172;

  L138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L139;
  goto L172;

  L139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L140;
  x2 = XEXP (x1, 0);
  goto L172;

  L140: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L141;
    }
  x2 = XEXP (x1, 0);
  goto L172;

  L141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      return 13;
    }
  x2 = XEXP (x1, 0);
  goto L172;

  L155: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    {
      goto L961;
    }
  if (GET_CODE (x3) == LTU && 1)
    goto L156;
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L147;
    }
  goto L961;

  L156: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == CC_Cmode && GET_CODE (x4) == REG && XINT (x4, 0) == 24 && 1)
    goto L157;
  goto L961;

  L157: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 0 && 1)
    goto L158;
  goto L961;

  L158: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L159;
    }
  L167: ATTRIBUTE_UNUSED_LABEL
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L168;
    }
  goto L961;

  L159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      ro[2] = x2;
      return 15;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 1);
  goto L167;

  L168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 16;
    }
  goto L961;

  L147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L148;
    }
  goto L961;

  L148: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == LTU && 1)
    goto L149;
  goto L961;

  L149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == CC_Cmode && GET_CODE (x3) == REG && XINT (x3, 0) == 24 && 1)
    goto L150;
  goto L961;

  L150: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    return 14;
  goto L961;

  L410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L411;
    }
  goto L961;

  L411: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L412;
    }
  goto L961;

  L412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[3] = x2;
      return 45;
    }
  goto L961;

  L72: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_int_operand (x2, SImode))
    {
      ro[2] = x2;
      return 6;
    }
  goto L961;

  L173: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[3] = x3;
      goto L174;
    }
  goto L961;

  L174: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L175;
  goto L961;

  L175: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 17;
    }
  goto L961;

  L333: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L334;
    }
  L310: ATTRIBUTE_UNUSED_LABEL
  if (reg_or_int_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L311;
    }
  goto L961;

  L334: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (comparison_operator (x2, SImode))
    {
      ro[2] = x2;
      goto L335;
    }
  x2 = XEXP (x1, 0);
  goto L310;

  L335: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[3] = x3;
      goto L336;
    }
  x2 = XEXP (x1, 0);
  goto L310;

  L336: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    return 35;
  x2 = XEXP (x1, 0);
  goto L310;

  L311: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 32;
    }
  goto L961;

  L374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L375;
    }
  goto L968;

  L375: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 42;
    }
  goto L968;

  L481: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == DImode && GET_CODE (x2) == LSHIFTRT && 1)
    goto L482;
  goto ret0;

  L482: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == DImode && GET_CODE (x3) == MULT && 1)
    goto L483;
  goto ret0;

  L483: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != DImode)
    goto ret0;
  switch (GET_CODE (x4))
    {
    default:
      break;
    case SIGN_EXTEND:
      goto L484;
    case ZERO_EXTEND:
      goto L507;
    }
  goto ret0;

  L484: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L485;
    }
  goto ret0;

  L485: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == SIGN_EXTEND && 1)
    goto L486;
  goto ret0;

  L486: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L487;
    }
  goto ret0;

  L487: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 32 && pnum_clobbers != 0 && 1)
    if (arm_fast_multiply)
      {
	*pnum_clobbers = 1;
	return 50;
      }
  goto ret0;

  L507: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L508;
    }
  goto ret0;

  L508: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == DImode && GET_CODE (x4) == ZERO_EXTEND && 1)
    goto L509;
  goto ret0;

  L509: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L510;
    }
  goto ret0;

  L510: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 32 && pnum_clobbers != 0 && 1)
    if (arm_fast_multiply)
      {
	*pnum_clobbers = 1;
	return 51;
      }
  goto ret0;

  L720: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    {
      goto L961;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case NOT:
      goto L721;
    case IOR:
      goto L880;
    case SUBREG:
    case REG:
      if (s_register_operand (x2, SImode))
	{
	  ro[1] = x2;
	  goto L634;
	}
    }
  goto L961;

  L721: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    {
      goto L961;
    }
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L722;
    }
  if (shift_operator (x3, SImode))
    {
      ro[4] = x3;
      goto L728;
    }
  goto L961;

  L722: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 84;
    }
  goto L961;

  L728: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L729;
    }
  goto L961;

  L729: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L730;
    }
  goto L961;

  L730: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 85;
    }
  goto L961;

  L880: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L881;
    }
  goto L961;

  L881: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L882;
    }
  goto L961;

  L882: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L883;
  goto L961;

  L883: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      return 103;
    }
  goto L961;

  L634: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_int_operand (x2, SImode))
    {
      ro[2] = x2;
      return 74;
    }
  goto L961;

  L785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L786;
    }
  goto L961;

  L786: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_int_operand (x2, SImode))
    {
      ro[2] = x2;
      return 92;
    }
  goto L961;

  L842: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L843;
    }
  goto L961;

  L843: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      ro[2] = x2;
      return 99;
    }
  goto L961;

  L895: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L896;
    }
  goto ret0;

  L896: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && arm_rhs_operand (x2, SImode))
    {
      ro[2] = x2;
      *pnum_clobbers = 1;
      return 104;
    }
  goto ret0;

  L908: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L909;
    }
  goto ret0;

  L909: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && arm_rhs_operand (x2, SImode))
    {
      ro[2] = x2;
      *pnum_clobbers = 1;
      return 105;
    }
  goto ret0;

  L921: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L922;
    }
  goto ret0;

  L922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && arm_rhs_operand (x2, SImode))
    {
      ro[2] = x2;
      *pnum_clobbers = 1;
      return 106;
    }
  goto ret0;

  L934: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L935;
    }
  goto ret0;

  L935: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && arm_rhs_operand (x2, SImode))
    {
      ro[2] = x2;
      *pnum_clobbers = 1;
      return 107;
    }
  goto ret0;

  L1004: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (shift_operator (x2, SImode))
    {
      ro[3] = x2;
      goto L1005;
    }
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 138;
    }
  goto ret0;

  L1005: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1006;
    }
  goto ret0;

  L1006: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      return 118;
    }
  goto ret0;

  L1088: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  if (GET_CODE (x2) == ABS && 1)
    goto L1089;
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 122;
    }
  goto ret0;

  L1089: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (pnum_clobbers != 0 && s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      *pnum_clobbers = 1;
      return 128;
    }
  goto ret0;

  L1076: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (pnum_clobbers != 0 && s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 127;
    }
  goto ret0;

  L1173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SFmode:
      if (s_register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT)
	    return 144;
	  }
      break;
    case DFmode:
      if (s_register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT)
	    return 145;
	  }
      break;
    case XFmode:
      if (s_register_operand (x2, XFmode))
	{
	  ro[1] = x2;
	  if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	    return 146;
	  }
    }
  goto ret0;

  L1209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (arm_arch4)
	    return 154;
	  }
      break;
    case QImode:
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 158;
	}
    }
  goto ret0;

  L1246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  if (arm_arch4)
	    return 163;
	  }
      break;
    case QImode:
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  if (arm_arch4)
	    return 170;
	  }
    }
  goto ret0;

  L962: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (minmax_operator (x2, SImode))
    {
      ro[5] = x2;
      goto L963;
    }
  goto ret0;

  L963: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L964;
    }
  goto ret0;

  L964: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L965;
    }
  goto ret0;

  L965: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      if (GET_CODE (operands[1]) != REG
   || (REGNO(operands[1]) != FRAME_POINTER_REGNUM
       && REGNO(operands[1]) != ARG_POINTER_REGNUM))
	{
	  *pnum_clobbers = 1;
	  return 109;
	}
      }
  goto ret0;

  L969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L970;
    }
  goto ret0;

  L970: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (reg_or_int_operand (x2, SImode))
    {
      ro[2] = x2;
      return 115;
    }
  goto ret0;
 ret0: return -1;
}

int
recog_10 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DFmode)
    goto ret0;
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L196;
    case MINUS:
      goto L350;
    case MULT:
      goto L524;
    case DIV:
      goto L558;
    case MOD:
      goto L592;
    case NEG:
      goto L1060;
    case ABS:
      goto L1101;
    case SQRT:
      goto L1118;
    case FLOAT:
      goto L1165;
    case FLOAT_TRUNCATE:
      goto L1193;
    case FLOAT_EXTEND:
      goto L1282;
    }
  goto ret0;

  L196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L197;
  if (s_register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L203;
    }
  goto ret0;

  L197: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L210;
    }
  goto ret0;

  L210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L211;
  if (fpu_add_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 21;
      }
  goto ret0;

  L211: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_HARD_FLOAT)
	return 23;
      }
  goto ret0;

  L203: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L204;
  if (fpu_add_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 20;
      }
  goto ret0;

  L204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_HARD_FLOAT)
	return 22;
      }
  goto ret0;

  L350: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L351;
  if (fpu_rhs_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L357;
    }
  goto ret0;

  L351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L364;
    }
  goto ret0;

  L364: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L365;
  if (fpu_rhs_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 38;
      }
  goto ret0;

  L365: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_HARD_FLOAT)
	return 40;
      }
  goto ret0;

  L357: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L358;
  if (fpu_rhs_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 37;
      }
  goto ret0;

  L358: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_HARD_FLOAT)
	return 39;
      }
  goto ret0;

  L524: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L525;
  if (s_register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L531;
    }
  goto ret0;

  L525: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L538;
    }
  goto ret0;

  L538: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L539;
  if (fpu_rhs_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 54;
      }
  goto ret0;

  L539: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_HARD_FLOAT)
	return 56;
      }
  goto ret0;

  L531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L532;
  if (fpu_rhs_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 53;
      }
  goto ret0;

  L532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_HARD_FLOAT)
	return 55;
      }
  goto ret0;

  L558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L559;
  if (fpu_rhs_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L565;
    }
  goto ret0;

  L559: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L572;
    }
  goto ret0;

  L572: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L573;
  if (fpu_rhs_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 60;
      }
  goto ret0;

  L573: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_HARD_FLOAT)
	return 62;
      }
  goto ret0;

  L565: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L566;
  if (fpu_rhs_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 59;
      }
  goto ret0;

  L566: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_HARD_FLOAT)
	return 61;
      }
  goto ret0;

  L592: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L593;
  if (s_register_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L599;
    }
  goto ret0;

  L593: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[1] = x3;
      goto L606;
    }
  goto ret0;

  L606: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L607;
  if (fpu_rhs_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 66;
      }
  goto ret0;

  L607: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_HARD_FLOAT)
	return 68;
      }
  goto ret0;

  L599: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L600;
  if (fpu_rhs_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 65;
      }
  goto ret0;

  L600: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[2] = x3;
      if (TARGET_HARD_FLOAT)
	return 67;
      }
  goto ret0;

  L1060: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1061;
  if (s_register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 124;
      }
  goto ret0;

  L1061: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[1] = x3;
      if (TARGET_HARD_FLOAT)
	return 125;
      }
  goto ret0;

  L1101: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1102;
  if (s_register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 130;
      }
  goto ret0;

  L1102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[1] = x3;
      if (TARGET_HARD_FLOAT)
	return 131;
      }
  goto ret0;

  L1118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != DFmode)
    goto ret0;
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1119;
  if (s_register_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 134;
      }
  goto ret0;

  L1119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[1] = x3;
      if (TARGET_HARD_FLOAT)
	return 135;
      }
  goto ret0;

  L1165: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 142;
      }
  goto ret0;

  L1193: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 149;
      }
  goto ret0;

  L1282: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 172;
      }
  goto ret0;
 ret0: return -1;
}

int
recog_11 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 1);
  x2 = XEXP (x1, 0);
  if (equality_operator (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L1918;
    }
  L2011: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      ro[5] = x2;
      goto L2012;
    }
  L2032: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      ro[6] = x2;
      goto L2033;
    }
  L2042: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2043;
    }
  L2100: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      ro[9] = x2;
      goto L2101;
    }
  L2112: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      ro[5] = x2;
      goto L2203;
    }
  L2137: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      ro[6] = x2;
      goto L2138;
    }
  L2147: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2148;
    }
  L2273: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      ro[5] = x2;
      goto L2274;
    }
  L2331: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      ro[7] = x2;
      goto L2332;
    }
  L2343: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      ro[5] = x2;
      goto L2440;
    }
  L2448: ATTRIBUTE_UNUSED_LABEL
  if (comparison_operator (x2, VOIDmode))
    {
      ro[4] = x2;
      goto L2449;
    }
  goto ret0;

  L1918: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (comparison_operator (x3, VOIDmode))
    {
      ro[4] = x3;
      goto L1919;
    }
  goto L2011;

  L1919: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == REG && cc_register (x4, VOIDmode))
    {
      ro[5] = x4;
      goto L1920;
    }
  goto L2011;

  L1920: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 0 && 1)
    goto L1921;
  goto L2011;

  L1921: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1922;
  goto L2011;

  L1922: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1923;
    }
  x2 = XEXP (x1, 0);
  goto L2011;

  L1923: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_rhs_operand (x2, SImode))
    {
      ro[2] = x2;
      return 304;
    }
  x2 = XEXP (x1, 0);
  goto L2011;

  L2012: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2013;
    }
  goto L2032;

  L2013: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[4] = x3;
      goto L2014;
    }
  goto L2032;

  L2014: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_rhs_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2015;
    }
  x2 = XEXP (x1, 0);
  goto L2032;

  L2015: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pnum_clobbers != 0 && arm_rhs_operand (x2, SImode))
    {
      ro[2] = x2;
      *pnum_clobbers = 1;
      return 310;
    }
  x2 = XEXP (x1, 0);
  goto L2032;

  L2033: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[4] = x3;
      goto L2034;
    }
  goto L2042;

  L2034: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[5] = x3;
      goto L2035;
    }
  goto L2042;

  L2035: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2036;
  if (arm_rhsm_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2069;
    }
  x2 = XEXP (x1, 0);
  goto L2042;

  L2036: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2037;
    }
  x2 = XEXP (x1, 0);
  goto L2042;

  L2037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2038;
    }
  x2 = XEXP (x1, 0);
  goto L2042;

  L2038: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pnum_clobbers != 0 && arm_rhsm_operand (x2, SImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 311;
    }
  x2 = XEXP (x1, 0);
  goto L2042;

  L2069: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2070;
  x2 = XEXP (x1, 0);
  goto L2042;

  L2070: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2071;
    }
  x2 = XEXP (x1, 0);
  goto L2042;

  L2071: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (pnum_clobbers != 0 && arm_add_operand (x3, SImode))
    {
      ro[3] = x3;
      *pnum_clobbers = 1;
      return 313;
    }
  x2 = XEXP (x1, 0);
  goto L2042;

  L2043: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[5] = x3;
      goto L2044;
    }
  goto L2100;

  L2044: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2045;
  goto L2100;

  L2045: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2046;
  if (arm_rhsm_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2079;
    }
  x2 = XEXP (x1, 0);
  goto L2100;

  L2046: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2047;
    }
  x2 = XEXP (x1, 0);
  goto L2100;

  L2047: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2048;
    }
  x2 = XEXP (x1, 0);
  goto L2100;

  L2048: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_rhsm_operand (x2, SImode))
    {
      ro[1] = x2;
      return 312;
    }
  x2 = XEXP (x1, 0);
  goto L2100;

  L2079: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L2080;
  x2 = XEXP (x1, 0);
  goto L2100;

  L2080: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2081;
    }
  x2 = XEXP (x1, 0);
  goto L2100;

  L2081: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[3] = x3;
      return 314;
    }
  x2 = XEXP (x1, 0);
  goto L2100;

  L2101: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[5] = x3;
      goto L2102;
    }
  goto L2112;

  L2102: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[6] = x3;
      goto L2103;
    }
  goto L2112;

  L2103: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shiftable_operator (x2, SImode))
    {
      ro[8] = x2;
      goto L2104;
    }
  x2 = XEXP (x1, 0);
  goto L2112;

  L2104: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2105;
    }
  x2 = XEXP (x1, 0);
  goto L2112;

  L2105: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2106;
    }
  x2 = XEXP (x1, 0);
  goto L2112;

  L2106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      ro[7] = x2;
      goto L2107;
    }
  x2 = XEXP (x1, 0);
  goto L2112;

  L2107: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2108;
    }
  x2 = XEXP (x1, 0);
  goto L2112;

  L2108: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (pnum_clobbers != 0 && arm_rhs_operand (x3, SImode))
    {
      ro[4] = x3;
      *pnum_clobbers = 1;
      return 315;
    }
  x2 = XEXP (x1, 0);
  goto L2112;

  L2203: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2204;
    }
  L2113: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[8] = x3;
      goto L2114;
    }
  goto L2137;

  L2204: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[4] = x3;
      goto L2235;
    }
  x3 = XEXP (x2, 0);
  goto L2113;

  L2235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L2236;
  if (arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2206;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2113;

  L2236: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2237;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2113;

  L2237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pnum_clobbers != 0 && arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 323;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2113;

  L2206: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L2207;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2113;

  L2207: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (pnum_clobbers != 0 && s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      *pnum_clobbers = 1;
      return 321;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2113;

  L2114: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2115;
  goto L2137;

  L2115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shiftable_operator (x2, SImode))
    {
      ro[6] = x2;
      goto L2116;
    }
  x2 = XEXP (x1, 0);
  goto L2137;

  L2116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2117;
    }
  x2 = XEXP (x1, 0);
  goto L2137;

  L2117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2118;
    }
  x2 = XEXP (x1, 0);
  goto L2137;

  L2118: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      ro[7] = x2;
      goto L2119;
    }
  x2 = XEXP (x1, 0);
  goto L2137;

  L2119: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2120;
    }
  x2 = XEXP (x1, 0);
  goto L2137;

  L2120: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[4] = x3;
      return 316;
    }
  x2 = XEXP (x1, 0);
  goto L2137;

  L2138: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    {
      goto L2147;
    }
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2139;
    }
  L2171: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x3, SImode))
    {
      ro[4] = x3;
      goto L2172;
    }
  goto L2147;

  L2139: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2140;
    }
  x3 = XEXP (x2, 0);
  goto L2171;

  L2140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shiftable_operator (x2, SImode))
    {
      ro[7] = x2;
      goto L2141;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2171;

  L2141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[4] = x3;
      goto L2142;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2171;

  L2142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[5] = x3;
      goto L2143;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2171;

  L2143: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pnum_clobbers != 0 && arm_rhsm_operand (x2, SImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 317;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2171;

  L2172: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[5] = x3;
      goto L2372;
    }
  goto L2147;

  L2372: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (GET_CODE (x2) == NOT && 1)
	goto L2373;
      if (shift_operator (x2, SImode))
	{
	  ro[7] = x2;
	  goto L2267;
	}
      if (shiftable_operator (x2, SImode))
	{
	  ro[7] = x2;
	  goto L2409;
	}
    }
  if (arm_rhsm_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2174;
    }
  L2299: ATTRIBUTE_UNUSED_LABEL
  if (arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2300;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2373: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2374;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2374: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      ro[7] = x2;
      goto L2375;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2375: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2376;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2376: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (pnum_clobbers != 0 && arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      *pnum_clobbers = 1;
      return 331;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2267: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2268;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2268: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2269;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2269: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pnum_clobbers != 0 && arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 325;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2409: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2410;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2410: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2411;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2411: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L2412;
  x2 = XEXP (x1, 0);
  goto L2147;

  L2412: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (pnum_clobbers != 0 && s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      *pnum_clobbers = 1;
      return 333;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      ro[7] = x2;
      goto L2175;
    }
  x2 = XEXP (x1, 1);
  goto L2299;

  L2175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2176;
    }
  x2 = XEXP (x1, 1);
  goto L2299;

  L2176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (pnum_clobbers != 0 && arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      *pnum_clobbers = 1;
      return 319;
    }
  x2 = XEXP (x1, 1);
  goto L2299;

  L2300: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shift_operator (x2, SImode))
    {
      ro[7] = x2;
      goto L2301;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2301: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2302;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2302: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (pnum_clobbers != 0 && arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      *pnum_clobbers = 1;
      return 327;
    }
  x2 = XEXP (x1, 0);
  goto L2147;

  L2148: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) != REG)
    {
    goto L2273;
    }
  if (cc_register (x3, VOIDmode))
    {
      ro[6] = x3;
      goto L2149;
    }
  L2212: ATTRIBUTE_UNUSED_LABEL
  if (cc_register (x3, VOIDmode))
    {
      ro[3] = x3;
      goto L2213;
    }
  goto L2273;

  L2149: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2150;
  x3 = XEXP (x2, 0);
  goto L2212;

  L2150: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shiftable_operator (x2, SImode))
    {
      ro[5] = x2;
      goto L2151;
    }
  if (arm_rhsm_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2184;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2212;

  L2151: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2152;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2212;

  L2152: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2153;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2212;

  L2153: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_rhsm_operand (x2, SImode))
    {
      ro[1] = x2;
      return 318;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2212;

  L2184: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      ro[5] = x2;
      goto L2185;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2212;

  L2185: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2186;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2212;

  L2186: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      return 320;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2212;

  L2213: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2244;
  goto L2273;

  L2244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L2245;
  if (arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2215;
    }
  x2 = XEXP (x1, 0);
  goto L2273;

  L2245: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2246;
    }
  x2 = XEXP (x1, 0);
  goto L2273;

  L2246: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      return 324;
    }
  x2 = XEXP (x1, 0);
  goto L2273;

  L2215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L2216;
  x2 = XEXP (x1, 0);
  goto L2273;

  L2216: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      return 322;
    }
  x2 = XEXP (x1, 0);
  goto L2273;

  L2274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[6] = x3;
      goto L2275;
    }
  goto L2331;

  L2275: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2276;
  goto L2331;

  L2276: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shift_operator (x2, SImode))
    {
      ro[4] = x2;
      goto L2277;
    }
  if (arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2310;
    }
  x2 = XEXP (x1, 0);
  goto L2331;

  L2277: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2278;
    }
  x2 = XEXP (x1, 0);
  goto L2331;

  L2278: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2279;
    }
  x2 = XEXP (x1, 0);
  goto L2331;

  L2279: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      return 326;
    }
  x2 = XEXP (x1, 0);
  goto L2331;

  L2310: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shift_operator (x2, SImode))
    {
      ro[4] = x2;
      goto L2311;
    }
  x2 = XEXP (x1, 0);
  goto L2331;

  L2311: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2312;
    }
  x2 = XEXP (x1, 0);
  goto L2331;

  L2312: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      return 328;
    }
  x2 = XEXP (x1, 0);
  goto L2331;

  L2332: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[5] = x3;
      goto L2333;
    }
  goto L2343;

  L2333: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[6] = x3;
      goto L2334;
    }
  goto L2343;

  L2334: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shift_operator (x2, SImode))
    {
      ro[8] = x2;
      goto L2335;
    }
  x2 = XEXP (x1, 0);
  goto L2343;

  L2335: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2336;
    }
  x2 = XEXP (x1, 0);
  goto L2343;

  L2336: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2337;
    }
  x2 = XEXP (x1, 0);
  goto L2343;

  L2337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shift_operator (x2, SImode))
    {
      ro[9] = x2;
      goto L2338;
    }
  x2 = XEXP (x1, 0);
  goto L2343;

  L2338: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2339;
    }
  x2 = XEXP (x1, 0);
  goto L2343;

  L2339: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (pnum_clobbers != 0 && arm_rhs_operand (x3, SImode))
    {
      ro[4] = x3;
      *pnum_clobbers = 1;
      return 329;
    }
  x2 = XEXP (x1, 0);
  goto L2343;

  L2440: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2441;
    }
  L2344: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) != REG)
    {
    goto L2448;
    }
  if (cc_register (x3, VOIDmode))
    {
      ro[8] = x3;
      goto L2345;
    }
  L2381: ATTRIBUTE_UNUSED_LABEL
  if (cc_register (x3, VOIDmode))
    {
      ro[4] = x3;
      goto L2382;
    }
  goto L2448;

  L2441: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[4] = x3;
      goto L2442;
    }
  x3 = XEXP (x2, 0);
  goto L2344;

  L2442: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NEG && 1)
    goto L2443;
  if (arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2473;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2344;

  L2443: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2444;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2344;

  L2444: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (pnum_clobbers != 0 && arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 335;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2344;

  L2473: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NEG && 1)
    goto L2474;
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2344;

  L2474: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (pnum_clobbers != 0 && s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      *pnum_clobbers = 1;
      return 337;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2344;

  L2345: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2346;
  x3 = XEXP (x2, 0);
  goto L2381;

  L2346: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shift_operator (x2, SImode))
    {
      ro[6] = x2;
      goto L2347;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2381;

  L2347: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2348;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2381;

  L2348: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2349;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2381;

  L2349: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shift_operator (x2, SImode))
    {
      ro[7] = x2;
      goto L2350;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2381;

  L2350: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2351;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2381;

  L2351: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[4] = x3;
      return 330;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L2381;

  L2382: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2383;
  goto L2448;

  L2383: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    {
      x2 = XEXP (x1, 0);
      goto L2448;
    }
  if (GET_CODE (x2) == NOT && 1)
    goto L2384;
  if (shiftable_operator (x2, SImode))
    {
      ro[6] = x2;
      goto L2420;
    }
  x2 = XEXP (x1, 0);
  goto L2448;

  L2384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2385;
    }
  x2 = XEXP (x1, 0);
  goto L2448;

  L2385: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (shiftable_operator (x2, SImode))
    {
      ro[6] = x2;
      goto L2386;
    }
  x2 = XEXP (x1, 0);
  goto L2448;

  L2386: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2387;
    }
  x2 = XEXP (x1, 0);
  goto L2448;

  L2387: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      return 332;
    }
  x2 = XEXP (x1, 0);
  goto L2448;

  L2420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2421;
    }
  x2 = XEXP (x1, 0);
  goto L2448;

  L2421: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L2422;
    }
  x2 = XEXP (x1, 0);
  goto L2448;

  L2422: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L2423;
  x2 = XEXP (x1, 0);
  goto L2448;

  L2423: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      return 334;
    }
  x2 = XEXP (x1, 0);
  goto L2448;

  L2449: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[3] = x3;
      goto L2450;
    }
  goto ret0;

  L2450: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L2451;
  goto ret0;

  L2451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NEG && 1)
    goto L2452;
  if (arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2482;
    }
  L2856: ATTRIBUTE_UNUSED_LABEL
  if (arm_rhs_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2857;
    }
  goto ret0;

  L2452: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L2453;
    }
  goto ret0;

  L2453: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      return 336;
    }
  goto ret0;

  L2482: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NEG && 1)
    goto L2483;
  x2 = XEXP (x1, 1);
  goto L2856;

  L2483: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      return 338;
    }
  x2 = XEXP (x1, 1);
  goto L2856;

  L2857: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L2858;
  goto ret0;

  L2858: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      return 386;
    }
  goto ret0;
 ret0: return -1;
}

int
recog_12 (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case DImode:
      if (s_register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L30;
	}
    L1292: ATTRIBUTE_UNUSED_LABEL
      if (di_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L1293;
	}
      break;
    case SImode:
      if (s_register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L70;
	}
    L945: ATTRIBUTE_UNUSED_LABEL
      if (memory_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L946;
	}
    L1295: ATTRIBUTE_UNUSED_LABEL
      if (general_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1296;
	}
    L1301: ATTRIBUTE_UNUSED_LABEL
      if (s_register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1305;
	}
      break;
    case CC_NOOVmode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case REG:
	  if (XINT (x1, 0) == 24 && 1)
	    goto L88;
	}
      break;
    case CC_Cmode:
      if (GET_CODE (x1) == REG && XINT (x1, 0) == 24 && 1)
	goto L121;
      break;
    case SFmode:
      if (s_register_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L185;
	}
    L1363: ATTRIBUTE_UNUSED_LABEL
      if (general_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L1364;
	}
      break;
    case DFmode:
      if (s_register_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L190;
	}
    L1371: ATTRIBUTE_UNUSED_LABEL
      if (general_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L1372;
	}
    L1374: ATTRIBUTE_UNUSED_LABEL
      if (soft_df_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L1375;
	}
      break;
    case XFmode:
      if (s_register_operand (x1, XFmode))
	{
	  ro[0] = x1;
	  goto L214;
	}
    L1377: ATTRIBUTE_UNUSED_LABEL
      if (general_operand (x1, XFmode))
	{
	  ro[0] = x1;
	  goto L1378;
	}
      break;
    case CC_Zmode:
      if (GET_CODE (x1) == REG && XINT (x1, 0) == 24 && 1)
	goto L1240;
      break;
    case HImode:
      if (s_register_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1265;
	}
    L1340: ATTRIBUTE_UNUSED_LABEL
      if (general_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1341;
	}
    L1348: ATTRIBUTE_UNUSED_LABEL
      if (s_register_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1349;
	}
      break;
    case QImode:
      if (general_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L1361;
	}
      break;
    case CCmode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case REG:
	  if (XINT (x1, 0) == 24 && 1)
	    goto L1411;
	}
      break;
    case CC_SWPmode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case REG:
	  if (XINT (x1, 0) == 24 && 1)
	    goto L1423;
	}
      break;
    case CCFPmode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case REG:
	  if (XINT (x1, 0) == 24 && 1)
	    goto L1438;
	}
      break;
    case CCFPEmode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case REG:
	  if (XINT (x1, 0) == 24 && 1)
	    goto L1465;
	}
    }
  L1491: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    default:
      break;
    case REG:
      if (cc_register (x1, VOIDmode))
	{
	  ro[0] = x1;
	  goto L1492;
	}
      break;
    case PC:
      goto L1495;
    }
  L1512: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (s_register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1518;
	}
      break;
    case SFmode:
      if (s_register_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L1538;
	}
      break;
    case DFmode:
      if (s_register_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L1554;
	}
    }
  L1596: ATTRIBUTE_UNUSED_LABEL
  ro[0] = x1;
  goto L1597;
  L1637: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, VOIDmode))
    {
      ro[0] = x1;
      goto L1638;
    }
  if (GET_CODE (x1) == PC && 1)
    goto L1682;
  L1688: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (s_register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1734;
	}
    }
  L1778: ATTRIBUTE_UNUSED_LABEL
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      ro[0] = x1;
      goto L1779;
    L1888: ATTRIBUTE_UNUSED_LABEL
      if (s_register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L1889;
	}
      break;
    case CC_NOOVmode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case REG:
	  if (XINT (x1, 0) == 24 && 1)
	    goto L1725;
	}
    }
  L1959: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == REG && dominant_cc_register (x1, VOIDmode))
    {
      ro[6] = x1;
      goto L1960;
    }
  goto ret0;
 L30: ATTRIBUTE_UNUSED_LABEL
  tem = recog_8 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1292;

  L1293: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (di_operand (x1, DImode))
    {
      ro[1] = x1;
      return 175;
    }
  x1 = XEXP (x0, 0);
  goto L1491;
 L70: ATTRIBUTE_UNUSED_LABEL
  tem = recog_9 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L945;

  L946: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (minmax_operator (x1, SImode))
    {
      ro[3] = x1;
      goto L947;
    }
  x1 = XEXP (x0, 0);
  goto L1295;

  L947: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L948;
    }
  x1 = XEXP (x0, 0);
  goto L1295;

  L948: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      *pnum_clobbers = 1;
      return 108;
    }
  x1 = XEXP (x0, 0);
  goto L1295;

  L1296: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    {
      ro[1] = x1;
      if (register_operand (operands[0], SImode)
   || register_operand (operands[1], SImode))
	return 177;
      }
  x1 = XEXP (x0, 0);
  goto L1301;

  L1305: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case UNSPEC:
	  if (XINT (x1, 1) == 3 && XVECLEN (x1, 0) == 1 && 1)
	    goto L1306;
	  if (XINT (x1, 1) == 3 && XVECLEN (x1, 0) == 2 && 1)
	    goto L1310;
	  break;
	case ROTATE:
	  goto L1337;
	}
    }
  if (address_operand (x1, DImode))
    {
      ro[1] = x1;
      if (reload_completed
   && (GET_CODE (operands[1]) == LABEL_REF
       || (GET_CODE (operands[1]) == CONST
	   && GET_CODE (XEXP (operands[1], 0)) == PLUS
	   && GET_CODE (XEXP (XEXP (operands[1], 0), 0)) == LABEL_REF
	   && GET_CODE (XEXP (XEXP (operands[1], 0), 1)) == CONST_INT)))
	return 180;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1306: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  ro[1] = x2;
  if (flag_pic)
    return 181;
  x1 = XEXP (x0, 0);
  goto L1491;

  L1310: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 0);
  ro[1] = x2;
  goto L1311;

  L1311: ATTRIBUTE_UNUSED_LABEL
  x2 = XVECEXP (x1, 0, 1);
  if (s_register_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      if (flag_pic && operands[2] == pic_offset_table_rtx)
	return 183;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1337: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L1491;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case MEM:
      if (offsettable_memory_operand (x2, SImode))
	{
	  ro[1] = x2;
	  goto L1338;
	}
      break;
    case SUBREG:
      if (XINT (x2, 1) == 0 && 1)
	goto L1354;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1338: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 16 && 1)
    if (! TARGET_SHORT_BY_BYTES)
      return 191;
  x1 = XEXP (x0, 0);
  goto L1491;

  L1354: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, HImode))
    {
      ro[1] = x3;
      goto L1355;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1355: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 16 && 1)
    if (BYTES_BIG_ENDIAN
   && ! TARGET_SHORT_BY_BYTES)
      return 197;
  x1 = XEXP (x0, 0);
  goto L1491;

  L88: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_NOOVmode && GET_CODE (x1) == COMPARE && 1)
    goto L89;
  x1 = XEXP (x0, 0);
  goto L1491;

  L89: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L1491;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case PLUS:
      goto L446;
    case MULT:
      goto L403;
    case AND:
      goto L761;
    case ZERO_EXTRACT:
      goto L674;
    case IOR:
      goto L819;
    case XOR:
      goto L861;
    case NOT:
      goto L1037;
    }
  L997: ATTRIBUTE_UNUSED_LABEL
  if (shift_operator (x2, SImode))
    {
      ro[3] = x2;
      goto L998;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L446: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L1491;
    }
  if (GET_CODE (x3) == MULT && 1)
    goto L447;
  if (s_register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L91;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L447: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L448;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L448: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L449;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L449: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L450;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L450: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 1;
      return 47;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L91: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L92;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L92: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 8;
  x1 = XEXP (x0, 0);
  goto L1491;

  L403: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L404;
    }
  goto L997;

  L404: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L405;
    }
  goto L997;

  L405: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 1;
      return 44;
    }
  x2 = XEXP (x1, 0);
  goto L997;

  L761: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L1491;
    }
  if (GET_CODE (x3) == NOT && 1)
    goto L762;
  if (s_register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L668;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L762: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L763;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L763: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L764;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L764: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 1;
      return 87;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L668: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_not_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L669;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L669: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 1;
      return 77;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L674: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case SImode:
      if (s_register_operand (x3, SImode))
	{
	  ro[0] = x3;
	  goto L675;
	}
      break;
    case QImode:
      if (memory_operand (x3, QImode))
	{
	  ro[0] = x3;
	  goto L694;
	}
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L675: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[1] = x3;
      goto L676;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L676: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[2] = x3;
      goto L677;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L677: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    if (INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 32
   && INTVAL (operands[1]) > 0 
   && INTVAL (operands[1]) + (INTVAL (operands[2]) & 1) <= 8
   && INTVAL (operands[1]) + INTVAL (operands[2]) <= 32)
      return 78;
  x1 = XEXP (x0, 0);
  goto L1491;

  L694: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[1] = x3;
      goto L695;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L695: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[2] = x3;
      goto L696;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L696: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    if (0 && INTVAL (operands[2]) >= 0 && INTVAL (operands[2]) < 8
   && INTVAL (operands[1]) > 0 && INTVAL (operands[1]) <= 8)
      {
	*pnum_clobbers = 1;
	return 79;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L819: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L820;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L821;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L821: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 1;
      return 95;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L861: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L862;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L862: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L863;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 101;
  x1 = XEXP (x0, 0);
  goto L1491;

  L1037: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L1491;
    }
  if (shift_operator (x3, SImode))
    {
      ro[3] = x3;
      goto L1038;
    }
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1157;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1038: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1039;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1039: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L1040;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1040: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 1;
      return 120;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1157: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 1;
      return 140;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L998: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L999;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L999: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1000;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1000: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 1;
      return 117;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L121: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_Cmode && GET_CODE (x1) == COMPARE && 1)
    goto L122;
  x1 = XEXP (x0, 0);
  goto L1491;

  L122: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L123;
  x1 = XEXP (x0, 0);
  goto L1491;

  L123: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L124;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L124: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_add_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L125;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (rtx_equal_p (x2, ro[0]) && 1)
    return 11;
  L132: ATTRIBUTE_UNUSED_LABEL
  if (rtx_equal_p (x2, ro[1]) && 1)
    return 12;
  x1 = XEXP (x0, 0);
  goto L1491;

  L185: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1363;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L186;
    case MINUS:
      goto L340;
    case MULT:
      goto L514;
    case DIV:
      goto L548;
    case MOD:
      goto L582;
    case NEG:
      goto L1052;
    case ABS:
      goto L1093;
    case SQRT:
      goto L1110;
    case FLOAT:
      goto L1161;
    case FLOAT_TRUNCATE:
      goto L1185;
    }
  x1 = XEXP (x0, 0);
  goto L1363;

  L186: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L187;
    }
  x1 = XEXP (x0, 0);
  goto L1363;

  L187: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_add_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 19;
      }
  x1 = XEXP (x0, 0);
  goto L1363;

  L340: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fpu_rhs_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L341;
    }
  x1 = XEXP (x0, 0);
  goto L1363;

  L341: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_rhs_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 36;
      }
  x1 = XEXP (x0, 0);
  goto L1363;

  L514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L515;
    }
  x1 = XEXP (x0, 0);
  goto L1363;

  L515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_rhs_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 52;
      }
  x1 = XEXP (x0, 0);
  goto L1363;

  L548: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fpu_rhs_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L549;
    }
  x1 = XEXP (x0, 0);
  goto L1363;

  L549: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_rhs_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 58;
      }
  x1 = XEXP (x0, 0);
  goto L1363;

  L582: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L583;
    }
  x1 = XEXP (x0, 0);
  goto L1363;

  L583: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_rhs_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 64;
      }
  x1 = XEXP (x0, 0);
  goto L1363;

  L1052: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 123;
      }
  x1 = XEXP (x0, 0);
  goto L1363;

  L1093: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 129;
      }
  x1 = XEXP (x0, 0);
  goto L1363;

  L1110: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 133;
      }
  x1 = XEXP (x0, 0);
  goto L1363;

  L1161: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 141;
      }
  x1 = XEXP (x0, 0);
  goto L1363;

  L1185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case DFmode:
      if (s_register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  if (TARGET_HARD_FLOAT)
	    return 147;
	  }
      break;
    case XFmode:
      if (s_register_operand (x2, XFmode))
	{
	  ro[1] = x2;
	  if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	    return 148;
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1363;

  L1364: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    goto L1368;
  x1 = XEXP (x0, 0);
  goto L1491;

  L1368: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_HARD_FLOAT
   && (GET_CODE (operands[0]) != MEM || register_operand (operands[1], SFmode)))
    return 204;
  L1369: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (TARGET_SOFT_FLOAT
   && (GET_CODE (operands[0]) != MEM || register_operand (operands[1], SFmode)))
    return 205;
  x1 = XEXP (x0, 0);
  goto L1491;
 L190: ATTRIBUTE_UNUSED_LABEL
  tem = recog_10 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1371;

  L1372: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    {
      ro[1] = x1;
      if (TARGET_HARD_FLOAT
   && (GET_CODE (operands[0]) != MEM
       || register_operand (operands[1], DFmode)))
	return 208;
      }
  x1 = XEXP (x0, 0);
  goto L1374;

  L1375: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (soft_df_operand (x1, DFmode))
    {
      ro[1] = x1;
      if (TARGET_SOFT_FLOAT)
	return 209;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L214: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != XFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1377;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L215;
    case MINUS:
      goto L369;
    case MULT:
      goto L543;
    case DIV:
      goto L577;
    case MOD:
      goto L611;
    case NEG:
      goto L1065;
    case ABS:
      goto L1106;
    case SQRT:
      goto L1123;
    case FLOAT:
      goto L1169;
    case FLOAT_EXTEND:
      goto L1286;
    }
  x1 = XEXP (x0, 0);
  goto L1377;

  L215: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, XFmode))
    {
      ro[1] = x2;
      goto L216;
    }
  x1 = XEXP (x0, 0);
  goto L1377;

  L216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_add_operand (x2, XFmode))
    {
      ro[2] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 24;
      }
  x1 = XEXP (x0, 0);
  goto L1377;

  L369: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fpu_rhs_operand (x2, XFmode))
    {
      ro[1] = x2;
      goto L370;
    }
  x1 = XEXP (x0, 0);
  goto L1377;

  L370: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_rhs_operand (x2, XFmode))
    {
      ro[2] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 41;
      }
  x1 = XEXP (x0, 0);
  goto L1377;

  L543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, XFmode))
    {
      ro[1] = x2;
      goto L544;
    }
  x1 = XEXP (x0, 0);
  goto L1377;

  L544: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_rhs_operand (x2, XFmode))
    {
      ro[2] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 57;
      }
  x1 = XEXP (x0, 0);
  goto L1377;

  L577: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (fpu_rhs_operand (x2, XFmode))
    {
      ro[1] = x2;
      goto L578;
    }
  x1 = XEXP (x0, 0);
  goto L1377;

  L578: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_rhs_operand (x2, XFmode))
    {
      ro[2] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 63;
      }
  x1 = XEXP (x0, 0);
  goto L1377;

  L611: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, XFmode))
    {
      ro[1] = x2;
      goto L612;
    }
  x1 = XEXP (x0, 0);
  goto L1377;

  L612: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_rhs_operand (x2, XFmode))
    {
      ro[2] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 69;
      }
  x1 = XEXP (x0, 0);
  goto L1377;

  L1065: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 126;
      }
  x1 = XEXP (x0, 0);
  goto L1377;

  L1106: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 132;
      }
  x1 = XEXP (x0, 0);
  goto L1377;

  L1123: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 136;
      }
  x1 = XEXP (x0, 0);
  goto L1377;

  L1169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 143;
      }
  x1 = XEXP (x0, 0);
  goto L1377;

  L1286: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SFmode:
      if (s_register_operand (x2, SFmode))
	{
	  ro[1] = x2;
	  if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	    return 173;
	  }
      break;
    case DFmode:
      if (s_register_operand (x2, DFmode))
	{
	  ro[1] = x2;
	  if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	    return 174;
	  }
    }
  x1 = XEXP (x0, 0);
  goto L1377;

  L1378: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, XFmode))
    {
      ro[1] = x1;
      if (TARGET_HARD_FLOAT && (ENABLE_XF_PATTERNS || reload_completed))
	return 211;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1240: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_Zmode && GET_CODE (x1) == COMPARE && 1)
    goto L1241;
  x1 = XEXP (x0, 0);
  goto L1491;

  L1241: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, QImode))
    {
      ro[0] = x2;
      goto L1242;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1242: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 160;
  x1 = XEXP (x0, 0);
  goto L1491;

  L1265: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode && GET_CODE (x1) == SIGN_EXTEND && 1)
    goto L1266;
  x1 = XEXP (x0, 0);
  goto L1340;

  L1266: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, QImode))
    {
      ro[1] = x2;
      if (arm_arch4)
	return 167;
      }
  x1 = XEXP (x0, 0);
  goto L1340;

  L1341: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    goto L1345;
  x1 = XEXP (x0, 0);
  goto L1348;

  L1345: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (arm_arch4
   && ok_integer_or_other (operands[0])  
   && ok_integer_or_other (operands[1]))
    return 194;
  L1346: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (! arm_arch4
   && ! BYTES_BIG_ENDIAN
   && ! TARGET_SHORT_BY_BYTES
   /* CYGNUS LOCAL nickc */
   && ok_integer_or_other (operands[1]))
    return 195;
  x1 = XEXP (x0, 0);
  goto L1348;

  L1349: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      ro[1] = x1;
      if (! arm_arch4
   && BYTES_BIG_ENDIAN
   && ! TARGET_SHORT_BY_BYTES
   /* CYGNUS LOCAL NICKC */
   && ok_integer_or_other (operands[1]))
	return 196;
      }
  L1358: ATTRIBUTE_UNUSED_LABEL
  if (arm_rhs_operand (x1, HImode))
    {
      ro[1] = x1;
      if (TARGET_SHORT_BY_BYTES)
	return 198;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1361: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    {
      ro[1] = x1;
      if (register_operand (operands[0], QImode)
   || register_operand (operands[1], QImode))
	return 202;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1411: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCmode && GET_CODE (x1) == COMPARE && 1)
    goto L1412;
  x1 = XEXP (x0, 0);
  goto L1491;

  L1412: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L1432;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1432: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (GET_CODE (x2) == NEG && 1)
	goto L1433;
      if (shift_operator (x2, SImode))
	{
	  ro[3] = x2;
	  goto L1419;
	}
    }
  if (arm_add_operand (x2, SImode))
    {
      ro[1] = x2;
      return 223;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1433: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (shift_operator (x3, SImode))
    {
      ro[3] = x3;
      goto L1434;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1434: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1435;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1435: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_rhs_operand (x4, SImode))
    {
      ro[2] = x4;
      return 226;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1419: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1420;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1420: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      return 224;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1423: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_SWPmode && GET_CODE (x1) == COMPARE && 1)
    goto L1424;
  x1 = XEXP (x0, 0);
  goto L1491;

  L1424: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (shift_operator (x2, SImode))
    {
      ro[3] = x2;
      goto L1425;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1425: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1426;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1426: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_int_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1427;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1427: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      return 225;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1438: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPmode && GET_CODE (x1) == COMPARE && 1)
    goto L1439;
  x1 = XEXP (x0, 0);
  goto L1491;

  L1439: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SFmode:
      if (s_register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L1440;
	}
      break;
    case DFmode:
      if (GET_CODE (x2) == FLOAT_EXTEND && 1)
	goto L1450;
      if (s_register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L1456;
	}
      break;
    case XFmode:
      if (s_register_operand (x2, XFmode))
	{
	  ro[0] = x2;
	  goto L1462;
	}
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1440: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_add_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 227;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1450: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[0] = x3;
      goto L1451;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1451: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_add_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 229;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1456: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1491;
    }
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1457;
  if (fpu_add_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 228;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1457: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[1] = x3;
      if (TARGET_HARD_FLOAT)
	return 230;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1462: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_add_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 231;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1465: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CCFPEmode && GET_CODE (x1) == COMPARE && 1)
    goto L1466;
  x1 = XEXP (x0, 0);
  goto L1491;

  L1466: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SFmode:
      if (s_register_operand (x2, SFmode))
	{
	  ro[0] = x2;
	  goto L1467;
	}
      break;
    case DFmode:
      if (GET_CODE (x2) == FLOAT_EXTEND && 1)
	goto L1477;
      if (s_register_operand (x2, DFmode))
	{
	  ro[0] = x2;
	  goto L1483;
	}
      break;
    case XFmode:
      if (s_register_operand (x2, XFmode))
	{
	  ro[0] = x2;
	  goto L1489;
	}
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1467: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_add_operand (x2, SFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 232;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1477: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[0] = x3;
      goto L1478;
    }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1478: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_add_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 234;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1483: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != DFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1491;
    }
  if (GET_CODE (x2) == FLOAT_EXTEND && 1)
    goto L1484;
  if (fpu_add_operand (x2, DFmode))
    {
      ro[1] = x2;
      if (TARGET_HARD_FLOAT)
	return 233;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1484: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SFmode))
    {
      ro[1] = x3;
      if (TARGET_HARD_FLOAT)
	return 235;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1489: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_add_operand (x2, XFmode))
    {
      ro[1] = x2;
      if (ENABLE_XF_PATTERNS && TARGET_HARD_FLOAT)
	return 236;
      }
  x1 = XEXP (x0, 0);
  goto L1491;

  L1492: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (rtx_equal_p (x1, ro[0]) && 1)
    return 237;
  x1 = XEXP (x0, 0);
  goto L1512;

  L1495: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case IF_THEN_ELSE:
      goto L1496;
    case LABEL_REF:
      goto L1563;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L1497;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1497: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[2] = x3;
      goto L1498;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1498: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1499;
  x1 = XEXP (x0, 0);
  goto L1596;

  L1499: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L1500;
    case PC:
      goto L1509;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1500: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1501;

  L1501: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 248;
  x1 = XEXP (x0, 0);
  goto L1596;

  L1509: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L1510;
  x1 = XEXP (x0, 0);
  goto L1596;

  L1510: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 249;

  L1563: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  ro[0] = x2;
  return 270;

  L1518: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L1596;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case NEG:
      goto L1519;
    case NOT:
      goto L1525;
    case IF_THEN_ELSE:
      goto L1531;
    case EQ:
    case NE:
    case LE:
    case LT:
    case GE:
    case GT:
    case LEU:
    case LTU:
    case GEU:
    case GTU:
      if (comparison_operator (x1, SImode))
	{
	  ro[1] = x1;
	  goto L1514;
	}
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1519: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, SImode))
    {
      ro[1] = x2;
      goto L1520;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1520: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[2] = x3;
      goto L1521;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1521: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    return 261;
  x1 = XEXP (x0, 0);
  goto L1596;

  L1525: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, SImode))
    {
      ro[1] = x2;
      goto L1526;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1526: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[2] = x3;
      goto L1527;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1527: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    return 262;
  x1 = XEXP (x0, 0);
  goto L1596;

  L1531: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L1532;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1532: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[4] = x3;
      goto L1533;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1533: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1534;
  x1 = XEXP (x0, 0);
  goto L1596;

  L1534: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (arm_not_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1535;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1535: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (arm_not_operand (x2, SImode))
    {
      ro[2] = x2;
      return 266;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1514: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == REG && cc_register (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L1515;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1515: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 260;
  x1 = XEXP (x0, 0);
  goto L1596;

  L1538: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SFmode && GET_CODE (x1) == IF_THEN_ELSE && 1)
    goto L1539;
  x1 = XEXP (x0, 0);
  goto L1596;

  L1539: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L1540;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1540: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[4] = x3;
      goto L1541;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1541: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1542;
  x1 = XEXP (x0, 0);
  goto L1596;

  L1542: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SFmode)
    {
      x1 = XEXP (x0, 0);
      goto L1596;
    }
  if (fpu_add_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L1543;
    }
  L1550: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x2, SFmode))
    {
      ro[1] = x2;
      goto L1551;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1543: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (fpu_add_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 267;
      }
  x2 = XEXP (x1, 1);
  goto L1550;

  L1551: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (s_register_operand (x2, SFmode))
    {
      ro[2] = x2;
      if (TARGET_SOFT_FLOAT)
	return 268;
      }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1554: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == DFmode && GET_CODE (x1) == IF_THEN_ELSE && 1)
    goto L1555;
  x1 = XEXP (x0, 0);
  goto L1596;

  L1555: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L1556;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1556: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[4] = x3;
      goto L1557;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1557: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1558;
  x1 = XEXP (x0, 0);
  goto L1596;

  L1558: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (fpu_add_operand (x2, DFmode))
    {
      ro[1] = x2;
      goto L1559;
    }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1559: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (fpu_add_operand (x2, DFmode))
    {
      ro[2] = x2;
      if (TARGET_HARD_FLOAT)
	return 269;
      }
  x1 = XEXP (x0, 0);
  goto L1596;

  L1597: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL && 1)
    goto L1598;
  x1 = XEXP (x0, 0);
  goto L1637;

  L1598: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L1599;
  x1 = XEXP (x0, 0);
  goto L1637;

  L1599: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1600;
    }
  L1614: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, VOIDmode))
    {
      ro[1] = x3;
      goto L1615;
    }
  x1 = XEXP (x0, 0);
  goto L1637;

  L1600: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && general_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      *pnum_clobbers = 1;
      return 275;
    }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L1614;

  L1615: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && general_operand (x2, VOIDmode))
    {
      ro[2] = x2;
      if (! CONSTANT_ADDRESS_P (XEXP (operands[1], 0)))
	{
	  *pnum_clobbers = 1;
	  return 276;
	}
      }
  x1 = XEXP (x0, 0);
  goto L1637;

  L1638: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL && 1)
    goto L1639;
  x1 = XEXP (x0, 0);
  goto L1688;

  L1639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L1640;
  x1 = XEXP (x0, 0);
  goto L1688;

  L1640: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  goto L1641;

  L1641: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && general_operand (x2, SImode))
    {
      ro[2] = x2;
      if (! TARGET_LONG_CALLS && GET_CODE(operands[1]) == SYMBOL_REF)
	{
	  *pnum_clobbers = 1;
	  return 278;
	}
      }
  x1 = XEXP (x0, 0);
  goto L1688;

  L1682: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (s_register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  return 286;
	}
    L1685: ATTRIBUTE_UNUSED_LABEL
      if (memory_operand (x1, SImode))
	{
	  ro[0] = x1;
	  return 287;
	}
    }
  if (GET_CODE (x1) == IF_THEN_ELSE && 1)
    goto L1646;
  x1 = XEXP (x0, 0);
  goto L1778;

  L1646: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L1647;
    }
  x1 = XEXP (x0, 0);
  goto L1778;

  L1647: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[1] = x3;
      goto L1648;
    }
  x1 = XEXP (x0, 0);
  goto L1778;

  L1648: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1649;
  x1 = XEXP (x0, 0);
  goto L1778;

  L1649: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case RETURN:
      goto L1650;
    case PC:
      goto L1658;
    }
  x1 = XEXP (x0, 0);
  goto L1778;

  L1650: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    if (USE_RETURN_INSN (TRUE))
      return 280;
  x1 = XEXP (x0, 0);
  goto L1778;

  L1658: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == RETURN && 1)
    if (USE_RETURN_INSN (TRUE))
      return 281;
  x1 = XEXP (x0, 0);
  goto L1778;

  L1734: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L1778;
    }
  if (GET_CODE (x1) == MINUS && 1)
    goto L1735;
  L1689: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x1, SImode))
    {
      ro[1] = x1;
      goto L1690;
    }
  x1 = XEXP (x0, 0);
  goto L1778;

  L1735: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1736;
    }
  goto L1689;

  L1736: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (shift_operator (x2, SImode))
    {
      ro[2] = x2;
      goto L1737;
    }
  goto L1689;

  L1737: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L1738;
    }
  goto L1689;

  L1738: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_int_operand (x3, SImode))
    {
      ro[4] = x3;
      return 292;
    }
  goto L1689;

  L1690: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (shift_operator (x2, SImode))
    {
      ro[3] = x2;
      goto L1691;
    }
  x1 = XEXP (x0, 0);
  goto L1778;

  L1691: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[4] = x3;
      goto L1692;
    }
  x1 = XEXP (x0, 0);
  goto L1778;

  L1692: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (reg_or_int_operand (x3, SImode))
    {
      ro[5] = x3;
      goto L1693;
    }
  x1 = XEXP (x0, 0);
  goto L1778;

  L1693: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 289;
    }
  x1 = XEXP (x0, 0);
  goto L1778;

  L1779: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == PLUS && 1)
    goto L1780;
  x1 = XEXP (x0, 0);
  goto L1888;

  L1780: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1781;
  x1 = XEXP (x0, 0);
  goto L1888;

  L1781: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L1888;
    }
  if (shift_operator (x3, SImode))
    {
      ro[5] = x3;
      goto L1782;
    }
  L1836: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x3) == MULT && 1)
    goto L1837;
  x1 = XEXP (x0, 0);
  goto L1888;

  L1782: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  ro[3] = x4;
  goto L1783;

  L1783: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  ro[4] = x4;
  goto L1784;

  L1784: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  ro[2] = x3;
  goto L1785;

  L1785: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[1] = x2;
      if (reload_in_progress)
	return 295;
      }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L1836;

  L1837: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  ro[1] = x4;
  goto L1838;

  L1838: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  ro[2] = x4;
  goto L1839;

  L1839: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  ro[3] = x3;
  goto L1840;

  L1840: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[4] = x2;
      if (reload_in_progress)
	return 298;
      }
  x1 = XEXP (x0, 0);
  goto L1888;

  L1889: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case AND:
	  goto L1890;
	case IOR:
	  goto L1897;
	case IF_THEN_ELSE:
	  goto L1917;
	case MINUS:
	  goto L1954;
	case NEG:
	  goto L1994;
	case SIGN_EXTRACT:
	  goto L2862;
	case NOT:
	  goto L2868;
	}
    L1936: ATTRIBUTE_UNUSED_LABEL
      if (shiftable_operator (x1, SImode))
	{
	  ro[5] = x1;
	  goto L1937;
	}
    L2494: ATTRIBUTE_UNUSED_LABEL
      if (shiftable_operator (x1, SImode))
	{
	  ro[1] = x1;
	  goto L2495;
	}
    }
  if (comparison_operator (x1, VOIDmode))
    {
      ro[1] = x1;
      goto L1912;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1890: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L1891;
    }
  goto L1936;

  L1891: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[3] = x3;
      goto L1892;
    }
  goto L1936;

  L1892: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1893;
  goto L1936;

  L1893: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 301;
    }
  goto L1936;

  L1897: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[2] = x2;
      goto L1898;
    }
  goto L1936;

  L1898: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == REG && cc_register (x3, VOIDmode))
    {
      ro[3] = x3;
      goto L1899;
    }
  goto L1936;

  L1899: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L1900;
  goto L1936;

  L1900: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 302;
    }
  goto L1936;
 L1917: ATTRIBUTE_UNUSED_LABEL
  tem = recog_11 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  x1 = XEXP (x0, 0);
  goto L1959;

  L1954: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1955;
    }
  goto L1936;

  L1955: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (comparison_operator (x2, SImode))
    {
      ro[4] = x2;
      goto L1956;
    }
  goto L1936;

  L1956: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1957;
    }
  goto L1936;

  L1957: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (pnum_clobbers != 0 && arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      *pnum_clobbers = 1;
      return 306;
    }
  goto L1936;

  L1994: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[3] = x2;
      goto L1995;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1995: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1996;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1996: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (pnum_clobbers != 0 && arm_rhs_operand (x3, SImode))
    {
      ro[2] = x3;
      *pnum_clobbers = 1;
      return 309;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L2862: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L2863;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L2863: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 1 && 1)
    goto L2864;
  x1 = XEXP (x0, 0);
  goto L1959;

  L2864: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      return 387;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L2868: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == SIGN_EXTRACT && 1)
    goto L2869;
  x1 = XEXP (x0, 0);
  goto L1959;

  L2869: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L2870;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L2870: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 1 && 1)
    goto L2871;
  x1 = XEXP (x0, 0);
  goto L1959;

  L2871: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[2] = x3;
      return 388;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1937: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, SImode))
    {
      ro[4] = x2;
      goto L1938;
    }
  goto L2494;

  L1938: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1939;
    }
  goto L2494;

  L1939: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L1940;
    }
  goto L2494;

  L1940: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      *pnum_clobbers = 1;
      return 305;
    }
  goto L2494;

  L2495: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L2496;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L2496: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && memory_operand (x2, SImode))
    {
      ro[3] = x2;
      if (adjacent_mem_locations (operands[2], operands[3]))
	{
	  *pnum_clobbers = 1;
	  return 339;
	}
      }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1912: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L1913;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1913: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (pnum_clobbers != 0 && arm_add_operand (x2, SImode))
    {
      ro[3] = x2;
      *pnum_clobbers = 1;
      return 303;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1725: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == CC_NOOVmode && GET_CODE (x1) == COMPARE && 1)
    goto L1771;
  x1 = XEXP (x0, 0);
  goto L1959;

  L1771: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L1959;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case MINUS:
      goto L1772;
    case PLUS:
      goto L1825;
    }
  L1726: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x2, SImode))
    {
      ro[1] = x2;
      goto L1727;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1772: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L1773;
    }
  goto L1726;

  L1773: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (shift_operator (x3, SImode))
    {
      ro[2] = x3;
      goto L1774;
    }
  goto L1726;

  L1774: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L1775;
    }
  goto L1726;

  L1775: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_int_operand (x4, SImode))
    {
      ro[4] = x4;
      goto L1776;
    }
  goto L1726;

  L1776: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 1;
      return 294;
    }
  x2 = XEXP (x1, 0);
  goto L1726;

  L1825: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L1826;
  goto L1726;

  L1826: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) != SImode)
    {
      goto L1726;
    }
  if (shift_operator (x4, SImode))
    {
      ro[5] = x4;
      goto L1827;
    }
  L1881: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x4) == MULT && 1)
    goto L1882;
  goto L1726;

  L1827: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  ro[3] = x5;
  goto L1828;

  L1828: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  ro[4] = x5;
  goto L1829;

  L1829: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  ro[1] = x4;
  goto L1830;

  L1830: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[2] = x3;
      goto L1831;
    }
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L1881;

  L1831: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    if (reload_in_progress)
      {
	*pnum_clobbers = 1;
	return 297;
      }
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L1881;

  L1882: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  ro[3] = x5;
  goto L1883;

  L1883: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  ro[4] = x5;
  goto L1884;

  L1884: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  ro[1] = x4;
  goto L1885;

  L1885: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[2] = x3;
      goto L1886;
    }
  goto L1726;

  L1886: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    if (reload_in_progress)
      {
	*pnum_clobbers = 1;
	return 300;
      }
  x2 = XEXP (x1, 0);
  goto L1726;

  L1727: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (shift_operator (x3, SImode))
    {
      ro[3] = x3;
      goto L1728;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1728: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[4] = x4;
      goto L1729;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1729: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (reg_or_int_operand (x4, SImode))
    {
      ro[5] = x4;
      goto L1730;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1730: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1731;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1731: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 1;
      return 291;
    }
  x1 = XEXP (x0, 0);
  goto L1959;

  L1960: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE && 1)
    goto L1961;
  goto ret0;

  L1961: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == IF_THEN_ELSE && 1)
    goto L1962;
  goto ret0;

  L1962: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (comparison_operator (x3, VOIDmode))
    {
      ro[4] = x3;
      goto L1963;
    }
  goto ret0;

  L1963: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[0] = x4;
      goto L1964;
    }
  goto ret0;

  L1964: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L1965;
    }
  goto ret0;

  L1965: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (comparison_operator (x3, SImode))
    {
      ro[5] = x3;
      goto L1966;
    }
  goto ret0;

  L1966: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L1967;
    }
  goto ret0;

  L1967: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L1968;
    }
  goto ret0;

  L1968: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_CODE (x3) != CONST_INT)
    goto ret0;
  if (XWINT (x3, 0) == 0 && 1)
    goto L1969;
  if (XWINT (x3, 0) == 1 && 1)
    goto L1981;
  goto ret0;

  L1969: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 307;
  goto ret0;

  L1981: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    return 308;
  goto ret0;
 ret0: return -1;
}

int
recog (x0, insn, pnum_clobbers)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
     int *pnum_clobbers ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  L0: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    default:
      break;
    case PARALLEL:
      if (XVECLEN (x0, 0) == 5 && 1)
	goto L1;
      if (XVECLEN (x0, 0) == 3 && 1)
	goto L13;
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L21;
    L1379: ATTRIBUTE_UNUSED_LABEL
      if (load_multiple_operation (x0, VOIDmode))
	{
	  ro[0] = x0;
	  goto L1380;
	}
    L1394: ATTRIBUTE_UNUSED_LABEL
      if (store_multiple_operation (x0, VOIDmode))
	{
	  ro[0] = x0;
	  goto L1395;
	}
    L1586: ATTRIBUTE_UNUSED_LABEL
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L1587;
    L2872: ATTRIBUTE_UNUSED_LABEL
      if (multi_register_push (x0, VOIDmode))
	{
	  ro[2] = x0;
	  goto L2873;
	}
      break;
    case SET:
      goto L29;
    case CALL:
      goto L1572;
    case RETURN:
      if (USE_RETURN_INSN (FALSE))
	return 279;
      break;
    case UNSPEC_VOLATILE:
      if (XINT (x0, 1) == 0 && XVECLEN (x0, 0) == 1 && 1)
	goto L1660;
      if (XINT (x0, 1) == 2 && XVECLEN (x0, 0) == 1 && 1)
	goto L2883;
      if (XINT (x0, 1) == 3 && XVECLEN (x0, 0) == 1 && 1)
	goto L2885;
      if (XINT (x0, 1) == 4 && XVECLEN (x0, 0) == 1 && 1)
	goto L2887;
      if (XINT (x0, 1) == 5 && XVECLEN (x0, 0) == 1 && 1)
	goto L2889;
      break;
    case CONST_INT:
      if (XWINT (x0, 0) == 0 && 1)
	return 288;
    }
  goto ret0;

  L1: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_MODE (x1) == CCmode && GET_CODE (x1) == COMPARE && 1)
    goto L2;
  goto L1379;

  L2: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L3;
    }
  goto L1379;

  L3: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L4;
    }
  goto L1379;

  L4: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  ro[2] = x1;
  goto L5;

  L5: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (comparison_operator (x1, VOIDmode))
    {
      ro[3] = x1;
      goto L6;
    }
  goto L1379;

  L6: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    goto L7;
  goto L1379;

  L7: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && 1)
    goto L8;
  goto L1379;

  L8: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L9;
  goto L1379;

  L9: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    goto L10;
  goto L1379;

  L10: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L11;
  goto L1379;

  L11: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 14 && 1)
    if (GET_CODE (operands[2]) == SYMBOL_REF && GET_CODE (operands[3]) == LTU)
      return 0;
  goto L1379;

  L13: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_MODE (x1) == CCmode && GET_CODE (x1) == COMPARE && 1)
    goto L14;
  goto L1379;

  L14: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L15;
    }
  goto L1379;

  L15: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L16;
    }
  goto L1379;

  L16: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  ro[2] = x1;
  goto L17;

  L17: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (comparison_operator (x1, VOIDmode))
    {
      ro[3] = x1;
      goto L18;
    }
  goto L1379;

  L18: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    goto L19;
  goto L1379;

  L19: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && XWINT (x2, 0) == 0 && pnum_clobbers != 0 && 1)
    if (GET_CODE (operands[2]) == SYMBOL_REF && GET_CODE (operands[3]) == LTU)
      {
	*pnum_clobbers = 2;
	return 0;
      }
  goto L1379;

  L21: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L22;
    case CALL:
      goto L1566;
    }
  goto L1379;
 L22: ATTRIBUTE_UNUSED_LABEL
  tem = recog_3 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  goto L1379;

  L1566: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L1567;
  goto L1379;

  L1567: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L1568;
    }
  L1578: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x3, VOIDmode))
    {
      ro[0] = x3;
      goto L1579;
    }
  goto L1379;

  L1568: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  ro[1] = x2;
  goto L1569;

  L1569: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1570;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L1578;

  L1570: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 14 && 1)
    return 272;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  x3 = XEXP (x2, 0);
  goto L1578;

  L1579: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L1580;
    }
  goto L1379;

  L1580: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1581;
  goto L1379;

  L1581: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 14 && 1)
    return 273;
  goto L1379;

  L1380: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L1381;
  goto L1394;

  L1381: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1382;
    }
  goto L1394;

  L1382: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    {
      goto L1394;
    }
  switch (GET_CODE (x2))
    {
    default:
      break;
    case PLUS:
      goto L1383;
    case MEM:
      goto L1393;
    }
  goto L1394;

  L1383: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L1384;
  goto L1394;

  L1384: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[2] = x3;
      goto L1385;
    }
  goto L1394;

  L1385: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1386;
  goto L1394;

  L1386: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L1387;
    }
  goto L1394;

  L1387: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L1388;
  goto L1394;

  L1388: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    if ((INTVAL (operands[2])  == 4 * (XVECLEN (operands[0], 0) - 2)))
      return 213;
  goto L1394;

  L1393: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      return 214;
    }
  goto L1394;

  L1395: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L1406;
  goto L1586;

  L1406: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) != SImode)
    {
      goto L1586;
    }
  if (GET_CODE (x2) == MEM && 1)
    goto L1407;
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1397;
    }
  goto L1586;

  L1407: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[2] = x3;
      goto L1408;
    }
  goto L1586;

  L1408: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 217;
    }
  goto L1586;

  L1397: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L1398;
  goto L1586;

  L1398: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L1399;
  goto L1586;

  L1399: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[2] = x3;
      goto L1400;
    }
  goto L1586;

  L1400: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L1401;
  goto L1586;

  L1401: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L1402;
  goto L1586;

  L1402: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L1403;
  goto L1586;

  L1403: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[3] = x2;
      if ((INTVAL (operands[2]) == 4 * (XVECLEN (operands[0], 0) - 2)))
	return 216;
      }
  goto L1586;

  L1587: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case SET:
      goto L1588;
    case CALL:
      goto L1618;
    }
  goto L2872;
 L1588: ATTRIBUTE_UNUSED_LABEL
  tem = recog_7 (x0, insn, pnum_clobbers);
  if (tem >= 0) return tem;
  goto L2872;

  L1618: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L1619;
  goto L2872;

  L1619: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L1620;

  L1620: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (general_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L1621;
    }
  goto L2872;

  L1621: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1622;
  goto L2872;

  L1622: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == REG && XINT (x2, 0) == 14 && 1)
    if (! TARGET_LONG_CALLS && GET_CODE (operands[0]) == SYMBOL_REF)
      return 277;
  goto L2872;

  L2873: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L2874;
  goto ret0;

  L2874: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (memory_operand (x2, BLKmode))
    {
      ro[0] = x2;
      goto L2875;
    }
  goto ret0;

  L2875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == BLKmode && GET_CODE (x2) == UNSPEC && XINT (x2, 1) == 2 && XVECLEN (x2, 0) == 1 && 1)
    goto L2876;
  goto ret0;

  L2876: ATTRIBUTE_UNUSED_LABEL
  x3 = XVECEXP (x2, 0, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case SImode:
      if (s_register_operand (x3, SImode))
	{
	  ro[1] = x3;
	  return 389;
	}
      break;
    case XFmode:
      if (f_register_operand (x3, XFmode))
	{
	  ro[1] = x3;
	  return 390;
	}
    }
  goto ret0;
 L29: ATTRIBUTE_UNUSED_LABEL
  return recog_12 (x0, insn, pnum_clobbers);

  L1572: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == MEM && 1)
    goto L1573;
  goto ret0;

  L1573: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L1574;
    }
  L1584: ATTRIBUTE_UNUSED_LABEL
  if (memory_operand (x2, VOIDmode))
    {
      ro[0] = x2;
      goto L1585;
    }
  L1625: ATTRIBUTE_UNUSED_LABEL
  ro[0] = x2;
  goto L1626;

  L1574: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (pnum_clobbers != 0 && 1)
    {
      ro[1] = x1;
      *pnum_clobbers = 1;
      return 272;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L1584;

  L1585: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (pnum_clobbers != 0 && general_operand (x1, VOIDmode))
    {
      ro[1] = x1;
      *pnum_clobbers = 1;
      return 273;
    }
  x1 = XEXP (x0, 0);
  x2 = XEXP (x1, 0);
  goto L1625;

  L1626: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (pnum_clobbers != 0 && general_operand (x1, SImode))
    {
      ro[1] = x1;
      if (! TARGET_LONG_CALLS && GET_CODE (operands[0]) == SYMBOL_REF)
	{
	  *pnum_clobbers = 1;
	  return 277;
	}
      }
  goto ret0;

  L1660: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 283;
  goto ret0;

  L2883: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  ro[0] = x1;
  return 391;

  L2885: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  ro[0] = x1;
  return 392;

  L2887: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 393;
  goto ret0;

  L2889: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 394;
  goto ret0;
 ret0: return -1;
}

rtx
split_1 (x0, insn)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) != SImode)
    goto ret0;
  switch (GET_CODE (x2))
    {
    default:
      break;
    case IOR:
      goto L868;
    case ZERO_EXTEND:
      goto L1214;
    case SIGN_EXTEND:
      goto L1251;
    case AND:
      goto L2807;
    case IF_THEN_ELSE:
      goto L2831;
    }
  L1220: ATTRIBUTE_UNUSED_LABEL
  if (shiftable_operator (x2, SImode))
    {
      ro[3] = x2;
      goto L1221;
    }
  goto ret0;

  L868: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == AND && 1)
    goto L869;
  goto L1220;

  L869: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == NOT && 1)
    goto L870;
  goto L1220;

  L870: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[1] = x5;
      goto L871;
    }
  goto L1220;

  L871: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == NOT && 1)
    goto L872;
  goto L1220;

  L872: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (arm_rhs_operand (x5, SImode))
    {
      ro[2] = x5;
      goto L873;
    }
  goto L1220;

  L873: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[3] = x3;
      goto L874;
    }
  goto L1220;

  L874: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L875;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1220;

  L875: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[4] = x2;
      return gen_split_102 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1220;

  L1214: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  switch (GET_MODE (x3))
    {
    default:
      break;
    case HImode:
      switch (GET_CODE (x3))
	{
	default:
	  break;
	case MEM:
	  if (alignable_memory_operand (x3, HImode))
	    {
	      ro[1] = x3;
	      goto L1215;
	    }
	}
      break;
    case QImode:
      if (GET_CODE (x3) == SUBREG && XINT (x3, 1) == 0 && 1)
	goto L1235;
    }
  goto ret0;

  L1215: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1216;
  goto ret0;

  L1216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (! arm_arch4)
	return gen_split_155 (operands);
      }
  goto ret0;

  L1235: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && 1)
    {
      ro[1] = x4;
      goto L1236;
    }
  goto ret0;

  L1236: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1237;
  goto ret0;

  L1237: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (GET_CODE (operands[1]) != MEM)
	return gen_split_159 (operands);
      }
  goto ret0;

  L1251: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == MEM && alignable_memory_operand (x3, HImode))
    {
      ro[1] = x3;
      goto L1252;
    }
  goto ret0;

  L1252: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1253;
  goto ret0;

  L1253: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (! arm_arch4)
	return gen_split_164 (operands);
      }
  goto ret0;

  L2807: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == GE && 1)
    goto L2808;
  goto L1220;

  L2808: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[1] = x4;
      goto L2809;
    }
  goto L1220;

  L2809: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 0 && 1)
    goto L2810;
  goto L1220;

  L2810: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == NEG && 1)
    goto L2811;
  goto L1220;

  L2811: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (comparison_operator (x4, SImode))
    {
      ro[2] = x4;
      goto L2812;
    }
  goto L1220;

  L2812: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (s_register_operand (x5, SImode))
    {
      ro[3] = x5;
      goto L2813;
    }
  goto L1220;

  L2813: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 1);
  if (arm_rhs_operand (x5, SImode))
    {
      ro[4] = x5;
      goto L2814;
    }
  goto L1220;

  L2814: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2815;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1220;

  L2815: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[5] = x2;
      return gen_split_381 (operands);
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  goto L1220;

  L2831: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (comparison_operator (x3, VOIDmode))
    {
      ro[1] = x3;
      goto L2832;
    }
  goto ret0;

  L2832: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  ro[2] = x4;
  goto L2833;
  L2843: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x4, SImode))
    {
      ro[2] = x4;
      goto L2844;
    }
  goto ret0;

  L2833: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  ro[3] = x4;
  goto L2834;

  L2834: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  ro[4] = x3;
  goto L2835;

  L2835: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  ro[5] = x3;
  goto L2836;

  L2836: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2837;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2843;

  L2837: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    if (reload_completed)
      return gen_split_384 (operands);
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 1);
  x3 = XEXP (x2, 0);
  x4 = XEXP (x3, 0);
  goto L2843;

  L2844: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (arm_add_operand (x4, SImode))
    {
      ro[3] = x4;
      goto L2845;
    }
  goto ret0;

  L2845: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (arm_rhs_operand (x3, SImode))
    {
      ro[4] = x3;
      goto L2846;
    }
  goto ret0;

  L2846: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 2);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == NOT && 1)
    goto L2847;
  goto ret0;

  L2847: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (s_register_operand (x4, SImode))
    {
      ro[5] = x4;
      goto L2848;
    }
  goto ret0;

  L2848: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2849;
  goto ret0;

  L2849: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == CCmode && GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
    if (reload_completed)
      return gen_split_385 (operands);
  goto ret0;

  L1221: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) != SImode)
    goto ret0;
  switch (GET_CODE (x3))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L1222;
    case SIGN_EXTEND:
      goto L1259;
    }
  goto ret0;

  L1222: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == MEM && alignable_memory_operand (x4, HImode))
    {
      ro[1] = x4;
      goto L1223;
    }
  goto ret0;

  L1223: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      ro[4] = x3;
      goto L1224;
    }
  goto ret0;

  L1224: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1225;
  goto ret0;

  L1225: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (! arm_arch4)
	return gen_split_156 (operands);
      }
  goto ret0;

  L1259: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_CODE (x4) == MEM && alignable_memory_operand (x4, HImode))
    {
      ro[1] = x4;
      goto L1260;
    }
  goto ret0;

  L1260: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (s_register_operand (x3, SImode))
    {
      ro[4] = x3;
      goto L1261;
    }
  goto ret0;

  L1261: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L1262;
  goto ret0;

  L1262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (! arm_arch4)
	return gen_split_165 (operands);
      }
  goto ret0;
 ret0: return 0;
}

rtx
split_insns (x0, insn)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED, x5 ATTRIBUTE_UNUSED, x6 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  L63: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    default:
      break;
    case SET:
      goto L64;
    case PARALLEL:
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L865;
    }
  goto ret0;

  L64: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (s_register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L65;
	}
      break;
    case HImode:
      if (s_register_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L1269;
	}
    }
  goto ret0;

  L65: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      switch (GET_CODE (x1))
	{
	default:
	  break;
	case PLUS:
	  goto L66;
	case MINUS:
	  goto L315;
	case AND:
	  goto L638;
	case IOR:
	  goto L790;
	case SIGN_EXTEND:
	  goto L1278;
	}
    }
  if (GET_CODE (x1) == CONST_INT && 1)
    {
      ro[1] = x1;
      if (! (const_ok_for_arm (INTVAL (operands[1]))
      || const_ok_for_arm (~INTVAL (operands[1]))))
	return gen_split_178 (operands);
      }
  goto ret0;

  L66: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L67;
    }
  goto ret0;

  L67: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    goto L181;
  goto ret0;

  L181: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (! (const_ok_for_arm (INTVAL (operands[2]))
      || const_ok_for_arm (-INTVAL (operands[2]))))
    return gen_split_5 (operands);
  L182: ATTRIBUTE_UNUSED_LABEL
  ro[2] = x2;
  if (!(const_ok_for_arm (INTVAL (operands[2]))
     || const_ok_for_arm (-INTVAL (operands[2]))))
    return gen_split_18 (operands);
  goto ret0;

  L315: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[1] = x2;
      goto L316;
    }
  goto ret0;

  L316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      if (! const_ok_for_arm (INTVAL (operands[1])))
	return gen_split_33 (operands);
      }
  goto ret0;

  L638: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L639;
    }
  goto ret0;

  L639: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (! (const_ok_for_arm (INTVAL (operands[2]))
      || const_ok_for_arm (~ INTVAL (operands[2]))))
	return gen_split_75 (operands);
      }
  goto ret0;

  L790: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L791;
    }
  goto ret0;

  L791: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_CODE (x2) == CONST_INT && 1)
    {
      ro[2] = x2;
      if (! const_ok_for_arm (INTVAL (operands[2])))
	return gen_split_93 (operands);
      }
  goto ret0;

  L1278: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MEM && bad_signed_byte_operand (x2, QImode))
    {
      ro[1] = x2;
      if (arm_arch4 && reload_completed)
	return gen_split_171 (operands);
      }
  goto ret0;

  L1269: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) == HImode && GET_CODE (x1) == SIGN_EXTEND && 1)
    goto L1270;
  goto ret0;

  L1270: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == MEM && bad_signed_byte_operand (x2, QImode))
    {
      ro[1] = x2;
      if (arm_arch4 && reload_completed)
	return gen_split_168 (operands);
      }
  goto ret0;

  L865: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L866;
  goto ret0;

  L866: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case SImode:
      if (s_register_operand (x2, SImode))
	{
	  ro[0] = x2;
	  goto L867;
	}
      break;
    case CC_Zmode:
      if (GET_CODE (x2) == REG && XINT (x2, 0) == 24 && 1)
	goto L2819;
    }
  goto ret0;
 L867: ATTRIBUTE_UNUSED_LABEL
  return split_1 (x0, insn);

  L2819: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == CC_Zmode && GET_CODE (x2) == COMPARE && 1)
    goto L2820;
  goto ret0;

  L2820: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == ASHIFT && 1)
    goto L2821;
  goto ret0;

  L2821: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (GET_MODE (x4) == SImode && GET_CODE (x4) == SUBREG && XINT (x4, 1) == 0 && 1)
    goto L2822;
  goto ret0;

  L2822: ATTRIBUTE_UNUSED_LABEL
  x5 = XEXP (x4, 0);
  if (memory_operand (x5, QImode))
    {
      ro[0] = x5;
      goto L2823;
    }
  goto ret0;

  L2823: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 24 && 1)
    goto L2824;
  goto ret0;

  L2824: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && 1)
    {
      ro[1] = x3;
      goto L2825;
    }
  goto ret0;

  L2825: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L2826;
  goto ret0;

  L2826: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      if (((unsigned HOST_WIDE_INT) INTVAL (operands[1]))
   == (((unsigned HOST_WIDE_INT) INTVAL (operands[1])) >> 24) << 24)
	return gen_split_382 (operands);
      }
  goto ret0;
 ret0: return 0;
}

