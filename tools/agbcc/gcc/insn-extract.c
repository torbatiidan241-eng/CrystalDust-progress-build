/* Generated automatically by the program `genextract'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

static rtx junk ATTRIBUTE_UNUSED;
void
insn_extract (insn)
     rtx insn;
{
  register rtx *ro = recog_operand;
  register rtx **ro_loc = recog_operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED;

  switch (INSN_CODE (insn))
    {
    case -1:
      fatal_insn_not_found (insn);

    case 28:
      for (i = XVECLEN (pat, 0) - 1; i >= 0; i--)
          ro[i] = XVECEXP (pat, 0, i);
      break;

    case 74:
    case 73:
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 76:
    case 75:
    case 72:
    case 69:
    case 68:
      break;

    case 66:
    case 63:
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 61:
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 59:
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 58:
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 47:
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 46:
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 60:
    case 45:
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 44:
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 67:
    case 65:
    case 35:
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 42:
    case 41:
    case 40:
    case 39:
    case 37:
    case 36:
    case 34:
    case 31:
    case 30:
    case 29:
    case 27:
    case 26:
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 25:
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 5), 0));
      recog_dup_loc[0] = &XEXP (XVECEXP (pat, 0, 3), 0);
      recog_dup_num[0] = 1;
      recog_dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_dup_num[1] = 1;
      recog_dup_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_dup_num[2] = 0;
      recog_dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_dup_num[3] = 0;
      recog_dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_dup_num[4] = 0;
      recog_dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_dup_num[5] = 1;
      break;

    case 24:
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 7), 0));
      recog_dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_dup_num[0] = 1;
      recog_dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 4), 1), 0);
      recog_dup_num[1] = 1;
      recog_dup_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0);
      recog_dup_num[2] = 0;
      recog_dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_dup_num[3] = 0;
      recog_dup_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0), 0);
      recog_dup_num[4] = 0;
      recog_dup_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_dup_num[5] = 1;
      recog_dup_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0), 0);
      recog_dup_num[6] = 0;
      recog_dup_loc[7] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_dup_num[7] = 1;
      break;

    case 19:
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 38:
    case 32:
    case 21:
    case 17:
    case 15:
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 13:
    case 11:
    case 9:
    case 7:
    case 5:
    case 1:
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    default:
      abort ();
    }
}
