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

extern rtx gen_split_2 ();
extern rtx gen_split_3 ();

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
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  x1 = XEXP (x0, 0);
  switch (GET_MODE (x1))
    {
    default:
      break;
    case SImode:
      if (nonimmediate_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L2;
	}
    L27: ATTRIBUTE_UNUSED_LABEL
      if (s_register_operand (x1, SImode))
	{
	  ro[0] = x1;
	  goto L28;
	}
      break;
    case HImode:
      if (nonimmediate_operand (x1, HImode))
	{
	  ro[0] = x1;
	  goto L13;
	}
      break;
    case QImode:
      if (nonimmediate_operand (x1, QImode))
	{
	  ro[0] = x1;
	  goto L16;
	}
      break;
    case DImode:
      if (general_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L19;
	}
    L178: ATTRIBUTE_UNUSED_LABEL
      if (s_register_operand (x1, DImode))
	{
	  ro[0] = x1;
	  goto L179;
	}
      break;
    case DFmode:
      if (general_operand (x1, DFmode))
	{
	  ro[0] = x1;
	  goto L22;
	}
      break;
    case SFmode:
      if (nonimmediate_operand (x1, SFmode))
	{
	  ro[0] = x1;
	  goto L25;
	}
    }
  L252: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x1))
    {
    default:
      break;
    case CC0:
      goto L253;
    case PC:
      goto L267;
    }
  L302: ATTRIBUTE_UNUSED_LABEL
  ro[0] = x1;
  goto L303;
  L312: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, VOIDmode))
    {
      ro[0] = x1;
      goto L313;
    }
  goto ret0;

  L2: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SImode))
    {
      ro[1] = x1;
      if (register_operand (operands[0], SImode) 
   || register_operand (operands[1], SImode))
	return 1;
      }
  x1 = XEXP (x0, 0);
  goto L27;

  L28: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != SImode)
    {
      x1 = XEXP (x0, 0);
      goto L252;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case ZERO_EXTEND:
      goto L29;
    case SIGN_EXTEND:
      goto L44;
    case PLUS:
      goto L185;
    case MINUS:
      goto L195;
    case MULT:
      goto L200;
    case NEG:
      goto L205;
    case AND:
      goto L209;
    case IOR:
      goto L220;
    case XOR:
      goto L225;
    case NOT:
      goto L230;
    case ASHIFT:
      goto L234;
    case ASHIFTRT:
      goto L239;
    case LSHIFTRT:
      goto L244;
    case ROTATERT:
      goto L249;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L29: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  return 15;
	}
      break;
    case QImode:
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 17;
	}
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L44: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  switch (GET_MODE (x2))
    {
    default:
      break;
    case HImode:
      if (pnum_clobbers != 0 && memory_operand (x2, HImode))
	{
	  ro[1] = x2;
	  *pnum_clobbers = 1;
	  return 19;
	}
      break;
    case QImode:
      if (memory_operand (x2, QImode))
	{
	  ro[1] = x2;
	  return 21;
	}
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L185: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L186;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L186: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      return 27;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L195: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L196;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L196: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 30;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L200: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L201;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L201: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 31;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L205: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 32;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L209: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L210;
    }
  L214: ATTRIBUTE_UNUSED_LABEL
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NOT && 1)
    goto L215;
  x1 = XEXP (x0, 0);
  goto L252;

  L210: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 34;
    }
  x2 = XEXP (x1, 0);
  goto L214;

  L215: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L216;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L216: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 35;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L220: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L221;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L221: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 36;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L225: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L226;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L226: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 37;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L230: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      return 38;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L234: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L235;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L235: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      return 39;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L239: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L240;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L240: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      return 40;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L244: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L245;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L245: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (nonmemory_operand (x2, SImode))
    {
      ro[2] = x2;
      return 41;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L249: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[1] = x2;
      goto L250;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L250: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[2] = x2;
      return 42;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L13: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, HImode))
    {
      ro[1] = x1;
      if (register_operand (operands[0], HImode)
   || register_operand (operands[1], HImode))
	return 5;
      }
  x1 = XEXP (x0, 0);
  goto L302;

  L16: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, QImode))
    {
      ro[1] = x1;
      if (register_operand (operands[0], QImode)
   || register_operand (operands[1], QImode))
	return 7;
      }
  x1 = XEXP (x0, 0);
  goto L302;

  L19: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DImode))
    {
      ro[1] = x1;
      if (register_operand (operands[0], DImode)
   || register_operand (operands[1], DImode))
	return 9;
      }
  x1 = XEXP (x0, 0);
  goto L178;

  L179: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_MODE (x1) != DImode)
    {
      x1 = XEXP (x0, 0);
      goto L252;
    }
  switch (GET_CODE (x1))
    {
    default:
      break;
    case PLUS:
      goto L180;
    case MINUS:
      goto L190;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L180: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L181;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L181: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[2] = x2;
      return 26;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L190: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, DImode))
    {
      ro[1] = x2;
      goto L191;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L191: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, DImode))
    {
      ro[2] = x2;
      return 29;
    }
  x1 = XEXP (x0, 0);
  goto L252;

  L22: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, DFmode))
    {
      ro[1] = x1;
      if (register_operand (operands[0], DFmode)
   || register_operand (operands[1], DFmode))
	return 11;
      }
  x1 = XEXP (x0, 0);
  goto L302;

  L25: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (general_operand (x1, SFmode))
    {
      ro[1] = x1;
      if (register_operand (operands[0], SFmode) 
   || register_operand (operands[1], SFmode))
	return 13;
      }
  x1 = XEXP (x0, 0);
  goto L302;

  L253: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == COMPARE && 1)
    goto L254;
  L258: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, SImode))
    {
      ro[0] = x1;
      return 45;
    }
  L261: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x1) == COMPARE && 1)
    goto L262;
  x1 = XEXP (x0, 0);
  goto L302;

  L254: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L255;
    }
  goto L258;

  L255: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (thumb_cmp_operand (x2, SImode))
    {
      ro[1] = x2;
      return 44;
    }
  goto L258;

  L262: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L263;
    }
  x1 = XEXP (x0, 0);
  goto L302;

  L263: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == NEG && 1)
    goto L264;
  x1 = XEXP (x0, 0);
  goto L302;

  L264: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      return 46;
    }
  x1 = XEXP (x0, 0);
  goto L302;

  L267: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  switch (GET_CODE (x1))
    {
    default:
      break;
    case LABEL_REF:
      goto L268;
    case IF_THEN_ELSE:
      goto L272;
    }
  L289: ATTRIBUTE_UNUSED_LABEL
  if (s_register_operand (x1, SImode))
    {
      ro[0] = x1;
      return 60;
    }
  x1 = XEXP (x0, 0);
  goto L302;

  L268: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  ro[0] = x2;
  return 47;

  L272: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (comparison_operator (x2, VOIDmode))
    {
      ro[1] = x2;
      goto L273;
    }
  goto L289;

  L273: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_CODE (x3) == CC0 && 1)
    goto L274;
  goto L289;

  L274: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 0 && 1)
    goto L275;
  goto L289;

  L275: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  switch (GET_CODE (x2))
    {
    default:
      break;
    case LABEL_REF:
      goto L276;
    case PC:
      goto L285;
    }
  goto L289;

  L276: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  goto L277;

  L277: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == PC && 1)
    return 58;
  goto L289;

  L285: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 2);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L286;
  goto L289;

  L286: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  ro[0] = x3;
  return 59;

  L303: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL && 1)
    goto L304;
  x1 = XEXP (x0, 0);
  goto L312;

  L304: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L305;
  x1 = XEXP (x0, 0);
  goto L312;

  L305: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (s_register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L306;
    }
  x1 = XEXP (x0, 0);
  goto L312;

  L306: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  ro[2] = x2;
  return 65;

  L313: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CALL && 1)
    goto L314;
  goto ret0;

  L314: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L315;
  goto ret0;

  L315: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  goto L316;

  L316: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  ro[2] = x2;
  if (! TARGET_LONG_CALLS && GET_CODE (operands[1]) == SYMBOL_REF)
    return 67;
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
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED;
  int tem ATTRIBUTE_UNUSED;

  L0: ATTRIBUTE_UNUSED_LABEL
  switch (GET_CODE (x0))
    {
    default:
      break;
    case SET:
      goto L1;
    case PARALLEL:
      if (XVECLEN (x0, 0) == 2 && 1)
	goto L35;
      if (XVECLEN (x0, 0) == 8 && 1)
	goto L50;
      if (XVECLEN (x0, 0) == 5 && 1)
	goto L90;
      if (XVECLEN (x0, 0) == 6 && 1)
	goto L124;
      if (XVECLEN (x0, 0) == 4 && 1)
	goto L153;
      break;
    case CALL:
      goto L298;
    case CLOBBER:
      goto L318;
    case UNSPEC_VOLATILE:
      if (XINT (x0, 1) == 0 && XVECLEN (x0, 0) == 1 && 1)
	goto L320;
      if (XINT (x0, 1) == 1 && XVECLEN (x0, 0) == 1 && 1)
	goto L322;
      if (XINT (x0, 1) == 2 && XVECLEN (x0, 0) == 1 && 1)
	goto L324;
      if (XINT (x0, 1) == 3 && XVECLEN (x0, 0) == 1 && 1)
	goto L326;
      if (XINT (x0, 1) == 4 && XVECLEN (x0, 0) == 1 && 1)
	goto L328;
      if (XINT (x0, 1) == 5 && XVECLEN (x0, 0) == 1 && 1)
	goto L330;
    }
  goto ret0;
 L1: ATTRIBUTE_UNUSED_LABEL
  return recog_1 (x0, insn, pnum_clobbers);

  L35: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L36;
  goto ret0;

  L36: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L37;
    }
  L292: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x2) == PC && 1)
    goto L293;
  goto ret0;

  L37: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == SIGN_EXTEND && 1)
    goto L38;
  x2 = XEXP (x1, 0);
  goto L292;

  L38: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (memory_operand (x3, HImode))
    {
      ro[1] = x3;
      goto L39;
    }
  x2 = XEXP (x1, 0);
  goto L292;

  L39: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L40;
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L292;

  L40: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      return 19;
    }
  x1 = XVECEXP (x0, 0, 0);
  x2 = XEXP (x1, 0);
  goto L292;

  L293: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L294;
    }
  goto ret0;

  L294: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == USE && 1)
    goto L295;
  goto ret0;

  L295: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_CODE (x2) == LABEL_REF && 1)
    goto L296;
  goto ret0;

  L296: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  ro[1] = x3;
  return 61;

  L50: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L51;
  goto ret0;

  L51: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L52;
  goto ret0;

  L52: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L53;
    }
  goto ret0;

  L53: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L54;
  goto ret0;

  L54: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L55;
    }
  goto ret0;

  L55: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L56;
  goto ret0;

  L56: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L57;
  goto ret0;

  L57: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L58;
  goto ret0;

  L58: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[0]) && 1)
    goto L59;
  goto ret0;

  L59: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 4 && 1)
    goto L60;
  goto ret0;

  L60: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L61;
  goto ret0;

  L61: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L62;
  goto ret0;

  L62: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L63;
  goto ret0;

  L63: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 4 && 1)
    goto L64;
  goto ret0;

  L64: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET && 1)
    goto L65;
  goto ret0;

  L65: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L66;
  goto ret0;

  L66: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L67;
  goto ret0;

  L67: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[0]) && 1)
    goto L68;
  goto ret0;

  L68: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 8 && 1)
    goto L69;
  goto ret0;

  L69: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L70;
  goto ret0;

  L70: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L71;
  goto ret0;

  L71: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L72;
  goto ret0;

  L72: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 8 && 1)
    goto L73;
  goto ret0;

  L73: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET && 1)
    goto L74;
  goto ret0;

  L74: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L75;
  goto ret0;

  L75: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L76;
  goto ret0;

  L76: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L77;
  goto ret0;

  L77: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 12 && 1)
    goto L78;
  goto ret0;

  L78: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET && 1)
    goto L79;
  goto ret0;

  L79: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L80;
  goto ret0;

  L80: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L81;
  goto ret0;

  L81: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L82;
  goto ret0;

  L82: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 12 && 1)
    goto L83;
  goto ret0;

  L83: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L84;
  goto ret0;

  L84: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L85;
    }
  goto ret0;

  L85: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 6);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L86;
  goto ret0;

  L86: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      goto L87;
    }
  goto ret0;

  L87: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 7);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L88;
  goto ret0;

  L88: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[4] = x2;
      return 24;
    }
  goto ret0;

  L90: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L91;
  goto ret0;

  L91: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L92;
  goto ret0;

  L92: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L93;
    }
  goto ret0;

  L93: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L94;
  goto ret0;

  L94: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L95;
    }
  goto ret0;

  L95: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L96;
  goto ret0;

  L96: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L97;
  goto ret0;

  L97: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L98;
  goto ret0;

  L98: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[0]) && 1)
    goto L99;
  goto ret0;

  L99: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 4 && 1)
    goto L100;
  goto ret0;

  L100: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L101;
  goto ret0;

  L101: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L102;
  goto ret0;

  L102: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L103;
  goto ret0;

  L103: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 4 && 1)
    goto L104;
  goto ret0;

  L104: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET && 1)
    goto L105;
  goto ret0;

  L105: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L106;
  goto ret0;

  L106: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L107;
  goto ret0;

  L107: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[0]) && 1)
    goto L108;
  goto ret0;

  L108: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 8 && 1)
    goto L109;
  goto ret0;

  L109: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L110;
  goto ret0;

  L110: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L111;
  goto ret0;

  L111: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L112;
  goto ret0;

  L112: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 8 && 1)
    goto L113;
  goto ret0;

  L113: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET && 1)
    goto L114;
  goto ret0;

  L114: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L115;
  goto ret0;

  L115: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L116;
  goto ret0;

  L116: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L117;
  goto ret0;

  L117: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 12 && 1)
    goto L118;
  goto ret0;

  L118: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == SET && 1)
    goto L119;
  goto ret0;

  L119: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L120;
  goto ret0;

  L120: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L121;
  goto ret0;

  L121: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L122;
  goto ret0;

  L122: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 12 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 3;
      return 24;
    }
  goto ret0;

  L124: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L125;
  goto ret0;

  L125: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L126;
  goto ret0;

  L126: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L127;
    }
  goto ret0;

  L127: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L128;
  goto ret0;

  L128: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L129;
    }
  goto ret0;

  L129: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L130;
  goto ret0;

  L130: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L131;
  goto ret0;

  L131: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L132;
  goto ret0;

  L132: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[0]) && 1)
    goto L133;
  goto ret0;

  L133: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 4 && 1)
    goto L134;
  goto ret0;

  L134: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L135;
  goto ret0;

  L135: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L136;
  goto ret0;

  L136: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L137;
  goto ret0;

  L137: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 4 && 1)
    goto L138;
  goto ret0;

  L138: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET && 1)
    goto L139;
  goto ret0;

  L139: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L140;
  goto ret0;

  L140: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L141;
  goto ret0;

  L141: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L142;
  goto ret0;

  L142: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 8 && 1)
    goto L143;
  goto ret0;

  L143: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET && 1)
    goto L144;
  goto ret0;

  L144: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L145;
  goto ret0;

  L145: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L146;
  goto ret0;

  L146: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L147;
  goto ret0;

  L147: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 8 && 1)
    goto L148;
  goto ret0;

  L148: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 4);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L149;
  goto ret0;

  L149: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[2] = x2;
      goto L150;
    }
  goto ret0;

  L150: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 5);
  if (GET_CODE (x1) == CLOBBER && 1)
    goto L151;
  goto ret0;

  L151: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (scratch_operand (x2, SImode))
    {
      ro[3] = x2;
      return 25;
    }
  goto ret0;

  L153: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == SET && 1)
    goto L154;
  goto ret0;

  L154: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L155;
  goto ret0;

  L155: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[0] = x3;
      goto L156;
    }
  goto ret0;

  L156: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L157;
  goto ret0;

  L157: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (register_operand (x3, SImode))
    {
      ro[1] = x3;
      goto L158;
    }
  goto ret0;

  L158: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 1);
  if (GET_CODE (x1) == SET && 1)
    goto L159;
  goto ret0;

  L159: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L160;
  goto ret0;

  L160: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L161;
  goto ret0;

  L161: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[0]) && 1)
    goto L162;
  goto ret0;

  L162: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 4 && 1)
    goto L163;
  goto ret0;

  L163: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == MEM && 1)
    goto L164;
  goto ret0;

  L164: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (GET_MODE (x3) == SImode && GET_CODE (x3) == PLUS && 1)
    goto L165;
  goto ret0;

  L165: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 0);
  if (rtx_equal_p (x4, ro[1]) && 1)
    goto L166;
  goto ret0;

  L166: ATTRIBUTE_UNUSED_LABEL
  x4 = XEXP (x3, 1);
  if (GET_CODE (x4) == CONST_INT && XWINT (x4, 0) == 4 && 1)
    goto L167;
  goto ret0;

  L167: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 2);
  if (GET_CODE (x1) == SET && 1)
    goto L168;
  goto ret0;

  L168: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[0]) && 1)
    goto L169;
  goto ret0;

  L169: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L170;
  goto ret0;

  L170: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[0]) && 1)
    goto L171;
  goto ret0;

  L171: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 8 && 1)
    goto L172;
  goto ret0;

  L172: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 3);
  if (GET_CODE (x1) == SET && 1)
    goto L173;
  goto ret0;

  L173: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (rtx_equal_p (x2, ro[1]) && 1)
    goto L174;
  goto ret0;

  L174: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 1);
  if (GET_MODE (x2) == SImode && GET_CODE (x2) == PLUS && 1)
    goto L175;
  goto ret0;

  L175: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 0);
  if (rtx_equal_p (x3, ro[1]) && 1)
    goto L176;
  goto ret0;

  L176: ATTRIBUTE_UNUSED_LABEL
  x3 = XEXP (x2, 1);
  if (GET_CODE (x3) == CONST_INT && XWINT (x3, 0) == 8 && pnum_clobbers != 0 && 1)
    {
      *pnum_clobbers = 2;
      return 25;
    }
  goto ret0;

  L298: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_MODE (x1) == SImode && GET_CODE (x1) == MEM && 1)
    goto L299;
  goto ret0;

  L299: ATTRIBUTE_UNUSED_LABEL
  x2 = XEXP (x1, 0);
  if (s_register_operand (x2, SImode))
    {
      ro[0] = x2;
      goto L300;
    }
  L309: ATTRIBUTE_UNUSED_LABEL
  ro[0] = x2;
  goto L310;

  L300: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  ro[1] = x1;
  return 63;

  L310: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  ro[1] = x1;
  if (! TARGET_LONG_CALLS && GET_CODE (operands[0]) == SYMBOL_REF)
    return 66;
  goto ret0;

  L318: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 68;
  goto ret0;

  L320: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 69;
  goto ret0;

  L322: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 72;
  goto ret0;

  L324: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  ro[0] = x1;
  return 73;

  L326: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  ro[0] = x1;
  return 74;

  L328: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 75;
  goto ret0;

  L330: ATTRIBUTE_UNUSED_LABEL
  x1 = XVECEXP (x0, 0, 0);
  if (GET_CODE (x1) == CONST_INT && XWINT (x1, 0) == 0 && 1)
    return 76;
  goto ret0;
 ret0: return -1;
}

rtx
split_insns (x0, insn)
     register rtx x0;
     rtx insn ATTRIBUTE_UNUSED;
{
  register rtx *ro = &recog_operand[0];
  register rtx x1 ATTRIBUTE_UNUSED, x2 ATTRIBUTE_UNUSED, x3 ATTRIBUTE_UNUSED, x4 ATTRIBUTE_UNUSED;
  rtx tem ATTRIBUTE_UNUSED;

  L3: ATTRIBUTE_UNUSED_LABEL
  if (GET_CODE (x0) == SET && 1)
    goto L4;
  goto ret0;

  L4: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 0);
  if (register_operand (x1, SImode))
    {
      ro[0] = x1;
      goto L5;
    }
  goto ret0;

  L5: ATTRIBUTE_UNUSED_LABEL
  x1 = XEXP (x0, 1);
  if (GET_CODE (x1) == CONST_INT && 1)
    goto L9;
  goto ret0;

  L9: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (thumb_shiftable_const (INTVAL (operands[1])))
    return gen_split_2 (operands);
  L10: ATTRIBUTE_UNUSED_LABEL
  ro[1] = x1;
  if (INTVAL (operands[1]) < 0 && INTVAL (operands[1]) > -256)
    return gen_split_3 (operands);
  goto ret0;
 ret0: return 0;
}

