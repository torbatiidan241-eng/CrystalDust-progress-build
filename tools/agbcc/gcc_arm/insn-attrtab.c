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
    case 314:
    case 312:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 4;
        }
      else if ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return 8;
        }
      else
        {
	  return 8;
        }

    case 310:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 269:
    case 267:
    case 266:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 4;
        }
      else if ((which_alternative == 4) || ((which_alternative == 5) || (which_alternative == 6)))
        {
	  return 8;
        }
      else
        {
	  return 8;
        }

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 4;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 4;
        }
      else if ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return 8;
        }
      else if ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return 4;
        }
      else if (which_alternative == 9)
        {
	  return 8;
        }
      else
        {
	  return 8;
        }

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 4;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return 8;
        }
      else if ((which_alternative == 6) || (which_alternative == 7))
        {
	  return 4;
        }
      else
        {
	  return 4;
        }

    case 304:
    case 196:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 107:
    case 106:
    case 105:
    case 104:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative != 2)
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 74:
    case 6:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative != 2)
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 392:
    case 387:
    case 378:
    case 377:
    case 376:
    case 334:
    case 332:
    case 330:
    case 316:
    case 308:
    case 307:
    case 301:
    case 262:
    case 261:
    case 260:
    case 209:
    case 175:
    case 170:
    case 167:
    case 152:
    case 151:
    case 150:
    case 137:
    case 128:
    case 127:
    case 121:
    case 103:
    case 98:
    case 96:
    case 90:
    case 88:
    case 83:
    case 81:
    case 79:
    case 72:
    case 71:
    case 70:
    case 30:
    case 29:
    case 28:
    case 27:
    case 26:
    case 25:
    case 3:
    case 2:
    case 1:
    case 0:
      return 8;

    case 388:
    case 339:
    case 333:
    case 331:
    case 329:
    case 315:
    case 309:
    case 305:
    case 303:
    case 285:
    case 276:
    case 275:
    case 273:
    case 272:
    case 109:
    case 108:
      return 12 /* 0xc */;

    case 386:
    case 302:
    case 97:
    case 89:
    case 82:
    case 35:
    case 17:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 8;
        }

    case 380:
    case 379:
      if (((arm_prog_mode) == (PROG_MODE_PROG32)))
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 338:
    case 336:
    case 328:
    case 326:
    case 324:
    case 322:
    case 320:
    case 318:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else if (which_alternative == 1)
        {
	  return 8;
        }
      else
        {
	  return 8;
        }

    case 337:
    case 335:
    case 327:
    case 325:
    case 323:
    case 321:
    case 319:
    case 317:
    case 313:
    case 311:
    case 306:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 12 /* 0xc */;
        }

    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 295:
      return 20 /* 0x14 */;

    case 283:
    case 237:
      return 0;

    case 92:
    case 32:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 4;

    }
}

int
result_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 389:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 5;
        }

    case 314:
    case 312:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((arm_ld_sched) == (LDSCHED_YES))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))))) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && ((! ((XVECLEN (operands[0],0)) == (3))) && (! ((XVECLEN (operands[0],0)) == (4)))))
        {
	  return 11 /* 0xb */;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && ((! ((XVECLEN (operands[0],0)) == (3))) && ((XVECLEN (operands[0],0)) == (4))))
        {
	  return 9;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && ((XVECLEN (operands[0],0)) == (3)))
        {
	  return 7;
        }
      else if ((! ((XVECLEN (operands[0],0)) == (3))) && (! ((XVECLEN (operands[0],0)) == (4))))
        {
	  return 5;
        }
      else if ((! ((XVECLEN (operands[0],0)) == (3))) && ((XVECLEN (operands[0],0)) == (4)))
        {
	  return 4;
        }
      else if ((XVECLEN (operands[0],0)) == (3))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && ((! ((XVECLEN (operands[0],0)) == (4))) && (! ((XVECLEN (operands[0],0)) == (5)))))
        {
	  return 11 /* 0xb */;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && ((! ((XVECLEN (operands[0],0)) == (4))) && ((XVECLEN (operands[0],0)) == (5))))
        {
	  return 9;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && ((XVECLEN (operands[0],0)) == (4)))
        {
	  return 7;
        }
      else if ((! ((XVECLEN (operands[0],0)) == (4))) && (! ((XVECLEN (operands[0],0)) == (5))))
        {
	  return 5;
        }
      else if ((! ((XVECLEN (operands[0],0)) == (4))) && ((XVECLEN (operands[0],0)) == (5)))
        {
	  return 4;
        }
      else if ((XVECLEN (operands[0],0)) == (4))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 5))
        {
	  return 7;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 4))
        {
	  return 6;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 4))
        {
	  return 5;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 3))
        {
	  return 4;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 209:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 7;
        }
      else if ((which_alternative != 0) && (which_alternative != 1))
        {
	  return 3;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 10)) || ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && ((which_alternative == 1) || (which_alternative == 3))))
        {
	  return 7;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 9))
        {
	  return 6;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 9))
        {
	  return 5;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 8))
        {
	  return 4;
        }
      else if (((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 7)) || ((which_alternative == 1) || (which_alternative == 3)))
        {
	  return 3;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && ((which_alternative == 0) || (which_alternative == 4))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 0) || (which_alternative == 4))) || ((((arm_fpu_attr) == (FPU_FPA))) && ((which_alternative == 5) || (which_alternative == 6)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 205:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative != 0)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 5))
        {
	  return 7;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 4))
        {
	  return 6;
        }
      else if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && ((which_alternative == 8) || (which_alternative == 4)))
        {
	  return 5;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 3))
        {
	  return 4;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 2))
        {
	  return 3;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 7)) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 7) || (which_alternative == 8))) || ((((arm_fpu_attr) == (FPU_FPA))) && ((which_alternative == 0) || (which_alternative == 1)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 320:
    case 318:
    case 196:
    case 195:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 2))
        {
	  return 5;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 3)) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 3) || (which_alternative == 2))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 3))
        {
	  return 5;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2)) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (which_alternative == 2))
        {
	  return 7;
        }
      else if (which_alternative == 2)
        {
	  return 3;
        }
      else if (((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1)) || ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 361:
    case 360:
    case 359:
    case 358:
    case 355:
    case 354:
    case 351:
    case 350:
    case 349:
    case 348:
    case 345:
    case 344:
    case 343:
    case 342:
    case 339:
    case 287:
    case 281:
    case 280:
    case 279:
    case 214:
    case 213:
    case 197:
    case 191:
    case 183:
    case 181:
    case 170:
    case 167:
    case 163:
    case 158:
    case 154:
      return 2;

    case 151:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 1)
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 143:
    case 142:
    case 141:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 5;
        }
      else
        {
	  return 1;
        }

    case 269:
    case 267:
    case 174:
    case 173:
    case 172:
    case 149:
    case 148:
    case 147:
    case 132:
    case 131:
    case 130:
    case 129:
    case 126:
    case 125:
    case 124:
    case 123:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 357:
    case 356:
    case 353:
    case 352:
    case 347:
    case 346:
    case 341:
    case 340:
    case 108:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 5;
        }
      else if (! (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 69:
    case 63:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 71 /* 0x47 */;
        }
      else
        {
	  return 1;
        }

    case 68:
    case 67:
    case 66:
    case 65:
    case 62:
    case 61:
    case 60:
    case 59:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 59 /* 0x3b */;
        }
      else
        {
	  return 1;
        }

    case 64:
    case 58:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 31 /* 0x1f */;
        }
      else
        {
	  return 1;
        }

    case 57:
    case 56:
    case 55:
    case 54:
    case 53:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 9;
        }
      else
        {
	  return 1;
        }

    case 52:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 6;
        }
      else
        {
	  return 1;
        }

    case 300:
    case 299:
    case 298:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
      if (((arm_ld_sched) == (LDSCHED_NO)))
        {
	  return 16 /* 0x10 */;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_is_strong) == (IS_STRONGARM_NO))))
        {
	  return 4;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_is_strong) == (IS_STRONGARM_YES))))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 390:
    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 24:
    case 23:
    case 22:
    case 21:
    case 20:
    case 19:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 4;
        }
      else
        {
	  return 1;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

int
core_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 390:
      if (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))))
        {
	  return 4;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 389:
      if (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))))
        {
	  return 5;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 314:
    case 312:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && (which_alternative != 3))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 2;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((! ((XVECLEN (operands[0],0)) == (3))) && (! ((XVECLEN (operands[0],0)) == (4)))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 5;
        }
      else if (((! ((XVECLEN (operands[0],0)) == (3))) && ((XVECLEN (operands[0],0)) == (4))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 4;
        }
      else if (((XVECLEN (operands[0],0)) == (3)) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 3;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((! ((XVECLEN (operands[0],0)) == (4))) && (! ((XVECLEN (operands[0],0)) == (5)))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 5;
        }
      else if (((! ((XVECLEN (operands[0],0)) == (4))) && ((XVECLEN (operands[0],0)) == (5))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 4;
        }
      else if (((XVECLEN (operands[0],0)) == (4)) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 3;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 5) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))
        {
	  return 7;
        }
      else if ((which_alternative == 4) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))
        {
	  return 6;
        }
      else if ((which_alternative == 3) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))
        {
	  return 4;
        }
      else if ((which_alternative == 2) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))
        {
	  return 3;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 10) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))
        {
	  return 7;
        }
      else if ((which_alternative == 9) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))
        {
	  return 6;
        }
      else if ((which_alternative == 8) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))
        {
	  return 4;
        }
      else if ((((which_alternative == 1) || (which_alternative == 3)) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))))) || ((which_alternative == 7) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))))))
        {
	  return 3;
        }
      else if (((which_alternative == 0) || (which_alternative == 4)) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 2;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 205:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_ld_sched) == (LDSCHED_NO)))))
        {
	  return 2;
        }
      else if ((which_alternative == 2) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_ld_sched) == (LDSCHED_NO)))))
        {
	  return 2;
        }
      else if ((which_alternative == 2) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 1;
        }
      else if ((which_alternative == 1) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 2;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 5) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))
        {
	  return 7;
        }
      else if ((which_alternative == 4) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))
        {
	  return 6;
        }
      else if ((which_alternative == 3) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))
        {
	  return 4;
        }
      else if ((which_alternative == 2) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((((arm_ld_sched) == (LDSCHED_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || ((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))
        {
	  return 3;
        }
      else if ((which_alternative == 8) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_ld_sched) == (LDSCHED_NO)))))
        {
	  return 2;
        }
      else if ((which_alternative == 8) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 1;
        }
      else if ((which_alternative == 8) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_ld_sched) == (LDSCHED_NO)))))
        {
	  return 2;
        }
      else if ((which_alternative == 8) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 1;
        }
      else if ((which_alternative == 7) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 2;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 320:
    case 318:
    case 196:
    case 195:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 2;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_ld_sched) == (LDSCHED_NO)))))
        {
	  return 2;
        }
      else if ((which_alternative == 2) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_ld_sched) == (LDSCHED_NO)))))
        {
	  return 2;
        }
      else if ((which_alternative == 2) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 1;
        }
      else if ((which_alternative == 3) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 2;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 3) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_ld_sched) == (LDSCHED_NO)))))
        {
	  return 2;
        }
      else if ((which_alternative == 3) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 1;
        }
      else if ((which_alternative == 3) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_ld_sched) == (LDSCHED_NO)))))
        {
	  return 2;
        }
      else if ((which_alternative == 3) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  return 1;
        }
      else if ((which_alternative == 2) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 2;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 209:
    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 3;
        }
      else if ((which_alternative == 1) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 2;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 361:
    case 360:
    case 359:
    case 358:
    case 355:
    case 354:
    case 351:
    case 350:
    case 349:
    case 348:
    case 345:
    case 344:
    case 343:
    case 342:
    case 339:
    case 287:
    case 281:
    case 280:
    case 279:
    case 214:
    case 213:
    case 197:
    case 191:
    case 183:
    case 181:
    case 170:
    case 167:
    case 163:
    case 158:
    case 154:
      if (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))))
        {
	  return 2;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 151:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 1) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && ((((arm_ld_sched) == (LDSCHED_NO))) || (((arm_ld_sched) == (LDSCHED_YES)))))))
        {
	  return 2;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 357:
    case 356:
    case 353:
    case 352:
    case 347:
    case 346:
    case 341:
    case 340:
    case 108:
      if ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_ld_sched) == (LDSCHED_NO))))
        {
	  return 2;
        }
      else if ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 1;
        }
      else if ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_ld_sched) == (LDSCHED_NO))))
        {
	  return 2;
        }
      else if ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 1;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case 300:
    case 299:
    case 298:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
      if ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 4;
        }
      else if ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  return 3;
        }
      else
        {
	  return 16 /* 0x10 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 16 /* 0x10 */;

    }
}

unsigned int
core_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65552 /* min 1, max 16 */;

    }
}

int
write_blockage_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 314:
    case 312:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3)))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((! ((XVECLEN (operands[0],0)) == (3))) && ((XVECLEN (operands[0],0)) == (4))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 9;
        }
      else if (((XVECLEN (operands[0],0)) == (3)) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 7;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((! ((XVECLEN (operands[0],0)) == (4))) && ((XVECLEN (operands[0],0)) == (5))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 9;
        }
      else if (((XVECLEN (operands[0],0)) == (4)) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 7;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 5) || (which_alternative == 4)))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 209:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 7;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((which_alternative == 1) && (((arm_is_6_or_7) == (MODEL_WBUF_YES)))))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 3)) && ((((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 10) || ((which_alternative == 9) || ((which_alternative == 0) || (which_alternative == 4)))))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES)))) || (((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 0) && (which_alternative != 4)))))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))))
        {
	  return 7;
        }
      else if (((which_alternative != 1) && (which_alternative != 3)) && (((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 10) || ((which_alternative == 9) || ((which_alternative == 0) || (which_alternative == 4)))))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES)))))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 205:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((which_alternative == 1) && (((arm_is_6_or_7) == (MODEL_WBUF_YES)))))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 8) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5;
        }
      else if (((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 5) || ((which_alternative == 4) || (which_alternative == 7))))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 320:
    case 318:
    case 196:
    case 195:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5;
        }
      else if ((which_alternative == 3) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 3) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5;
        }
      else if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 7;
        }
      else if ((which_alternative == 1) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 151:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 1) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 357:
    case 356:
    case 353:
    case 352:
    case 347:
    case 346:
    case 341:
    case 340:
    case 108:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 5;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 390:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 361:
    case 360:
    case 359:
    case 358:
    case 355:
    case 354:
    case 351:
    case 350:
    case 349:
    case 348:
    case 345:
    case 344:
    case 343:
    case 342:
    case 339:
    case 287:
    case 283:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 273:
    case 272:
    case 214:
    case 213:
    case 197:
    case 191:
    case 183:
    case 181:
    case 170:
    case 167:
    case 163:
    case 158:
    case 154:
    case 136:
    case 135:
    case 134:
    case 133:
    case 0:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 1;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 11 /* 0xb */;

    }
}

unsigned int
write_blockage_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 389:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65547 /* min 1, max 11 */;
        }

    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((! ((XVECLEN (operands[0],0)) == (3))) && (! ((XVECLEN (operands[0],0)) == (4)))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else if (((! ((XVECLEN (operands[0],0)) == (3))) && ((XVECLEN (operands[0],0)) == (4))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 3 /* min 0, max 3 */;
        }
      else if (((XVECLEN (operands[0],0)) == (3)) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5 /* min 0, max 5 */;
        }
      else
        {
	  return 65547 /* min 1, max 11 */;
        }

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((! ((XVECLEN (operands[0],0)) == (4))) && (! ((XVECLEN (operands[0],0)) == (5)))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else if (((! ((XVECLEN (operands[0],0)) == (4))) && ((XVECLEN (operands[0],0)) == (5))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 3 /* min 0, max 3 */;
        }
      else if (((XVECLEN (operands[0],0)) == (4)) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5 /* min 0, max 5 */;
        }
      else
        {
	  return 65547 /* min 1, max 11 */;
        }

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 3)) && (((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 0) && (which_alternative != 4)))))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES)))))
        {
	  return 5 /* min 0, max 5 */;
        }
      else
        {
	  return 65547 /* min 1, max 11 */;
        }

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 8) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 65543 /* min 1, max 7 */;
        }
      else
        {
	  return 65547 /* min 1, max 11 */;
        }

    case 205:
    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 65543 /* min 1, max 7 */;
        }
      else
        {
	  return 65547 /* min 1, max 11 */;
        }

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 3) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 65543 /* min 1, max 7 */;
        }
      else
        {
	  return 65547 /* min 1, max 11 */;
        }

    case 209:
    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5 /* min 0, max 5 */;
        }
      else
        {
	  return 65547 /* min 1, max 11 */;
        }

    case 357:
    case 356:
    case 353:
    case 352:
    case 347:
    case 346:
    case 341:
    case 340:
    case 108:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 65543 /* min 1, max 7 */;
        }
      else
        {
	  return 65547 /* min 1, max 11 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65547 /* min 1, max 11 */;

    }
}

int
write_buf_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((! ((XVECLEN (operands[0],0)) == (3))) && ((XVECLEN (operands[0],0)) == (4))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 9;
        }
      else if (((XVECLEN (operands[0],0)) == (3)) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 7;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((! ((XVECLEN (operands[0],0)) == (4))) && ((XVECLEN (operands[0],0)) == (5))) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 9;
        }
      else if (((XVECLEN (operands[0],0)) == (4)) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 7;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 4) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 1) || (which_alternative == 3)) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 7;
        }
      else if ((which_alternative == 9) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 4) && (((arm_is_6_or_7) == (MODEL_WBUF_YES)))) || ((which_alternative == 8) && (((arm_is_6_or_7) == (MODEL_WBUF_YES)))))
        {
	  return 5;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 205:
    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 3) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 5;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 209:
    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_is_6_or_7) == (MODEL_WBUF_YES))))
        {
	  return 7;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case 357:
    case 356:
    case 353:
    case 352:
    case 347:
    case 346:
    case 341:
    case 340:
    case 108:
      if (((arm_is_6_or_7) == (MODEL_WBUF_YES)))
        {
	  return 5;
        }
      else
        {
	  return 11 /* 0xb */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 11 /* 0xb */;

    }
}

unsigned int
write_buf_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 196616 /* min 3, max 8 */;

    }
}

int
fpa_mem_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 3;

    }
}

int
fpa_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 5) || (which_alternative == 6)) && (((arm_fpu_attr) == (FPU_FPA))))
        {
	  return 2;
        }
      else
        {
	  return 71 /* 0x47 */;
        }

    case 211:
    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((arm_fpu_attr) == (FPU_FPA))))
        {
	  return 2;
        }
      else
        {
	  return 71 /* 0x47 */;
        }

    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 146:
    case 145:
    case 144:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 1;
        }
      else
        {
	  return 71 /* 0x47 */;
        }

    case 143:
    case 142:
    case 141:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 5;
        }
      else
        {
	  return 71 /* 0x47 */;
        }

    case 269:
    case 267:
    case 174:
    case 173:
    case 172:
    case 149:
    case 148:
    case 147:
    case 132:
    case 131:
    case 130:
    case 129:
    case 126:
    case 125:
    case 124:
    case 123:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 2;
        }
      else
        {
	  return 71 /* 0x47 */;
        }

    case 68:
    case 67:
    case 66:
    case 65:
    case 62:
    case 61:
    case 60:
    case 59:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 59 /* 0x3b */;
        }
      else
        {
	  return 71 /* 0x47 */;
        }

    case 64:
    case 58:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 31 /* 0x1f */;
        }
      else
        {
	  return 71 /* 0x47 */;
        }

    case 57:
    case 56:
    case 55:
    case 54:
    case 53:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 9;
        }
      else
        {
	  return 71 /* 0x47 */;
        }

    case 52:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 6;
        }
      else
        {
	  return 71 /* 0x47 */;
        }

    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 24:
    case 23:
    case 22:
    case 21:
    case 20:
    case 19:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 4;
        }
      else
        {
	  return 71 /* 0x47 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 71 /* 0x47 */;

    }
}

unsigned int
fpa_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 5) || (which_alternative == 6)) && (((arm_fpu_attr) == (FPU_FPA))))
        {
	  return 131142 /* min 2, max 70 */;
        }
      else
        {
	  return 131143 /* min 2, max 71 */;
        }

    case 211:
    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((arm_fpu_attr) == (FPU_FPA))))
        {
	  return 131142 /* min 2, max 70 */;
        }
      else
        {
	  return 131143 /* min 2, max 71 */;
        }

    case 269:
    case 267:
    case 174:
    case 173:
    case 172:
    case 149:
    case 148:
    case 147:
    case 132:
    case 131:
    case 130:
    case 129:
    case 126:
    case 125:
    case 124:
    case 123:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 131142 /* min 2, max 70 */;
        }
      else
        {
	  return 131143 /* min 2, max 71 */;
        }

    case 143:
    case 142:
    case 141:
    case 69:
    case 68:
    case 67:
    case 66:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61:
    case 60:
    case 59:
    case 58:
    case 57:
    case 56:
    case 55:
    case 54:
    case 53:
    case 52:
    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 24:
    case 23:
    case 22:
    case 21:
    case 20:
    case 19:
      if (((arm_fpu_attr) == (FPU_FPA)))
        {
	  return 131141 /* min 2, max 69 */;
        }
      else
        {
	  return 131143 /* min 2, max 71 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 131143 /* min 2, max 71 */;

    }
}

int
function_units_used (insn)
     rtx insn;
{
  register enum attr_type attr_type = get_attr_type (insn);
  register enum attr_write_conflict attr_write_conflict = get_attr_write_conflict (insn);
  register unsigned long accum = 0;

  accum |= (((((arm_fpu_attr) == (FPU_FPA))) && (((((((((attr_type == TYPE_FDIVX) || (attr_type == TYPE_FDIVD)) || (attr_type == TYPE_FDIVS)) || (attr_type == TYPE_FMUL)) || (attr_type == TYPE_FFMUL)) || (attr_type == TYPE_FARITH)) || (attr_type == TYPE_FFARITH)) || (attr_type == TYPE_R_2_F)) || (attr_type == TYPE_F_2_R))) ? (1) : (0));
  accum |= (((((arm_fpu_attr) == (FPU_FPA))) && (attr_type == TYPE_F_LOAD)) ? (2) : (0));
  accum |= (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((((attr_type == TYPE_STORE1) || (attr_type == TYPE_R_MEM_F)) || (attr_type == TYPE_STORE2)) || (attr_type == TYPE_STORE3)) || (attr_type == TYPE_STORE4))) ? (4) : (0));
  accum |= ((((((arm_ld_sched) == (LDSCHED_YES))) && ((attr_type == TYPE_STORE1) || (attr_type == TYPE_LOAD))) || (((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((attr_type == TYPE_LOAD) || (attr_type == TYPE_STORE1))) || (((((arm_fpu_attr) == (FPU_FPA))) && ((((attr_type == TYPE_F_LOAD) || (attr_type == TYPE_F_STORE)) || (attr_type == TYPE_R_MEM_F)) || (attr_type == TYPE_F_MEM_R))) || (((((arm_ld_sched) == (LDSCHED_NO))) && (attr_type == TYPE_MULT)) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_is_strong) == (IS_STRONGARM_NO)))) && (attr_type == TYPE_MULT)) || ((((((arm_ld_sched) == (LDSCHED_YES))) && (((arm_is_strong) == (IS_STRONGARM_YES)))) && (attr_type == TYPE_MULT)) || ((attr_type == TYPE_STORE2) || ((attr_type == TYPE_STORE3) || (attr_type == TYPE_STORE4))))))))) ? (16) : (0));
  accum |= (((((arm_is_6_or_7) == (MODEL_WBUF_YES))) && (((((attr_type == TYPE_STORE1) || (attr_type == TYPE_STORE2)) || (attr_type == TYPE_STORE3)) || (attr_type == TYPE_STORE4)) || (attr_write_conflict == WRITE_CONFLICT_YES))) ? (8) : (0));

  if (accum && accum == (accum & -accum))
    {
      int i;
      for (i = 0; accum >>= 1; ++i) continue;
      accum = i;
    }
  else
    accum = ~accum;
  return accum;
}

enum attr_core_cycles
get_attr_core_cycles (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 314:
    case 312:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && ((which_alternative != 3) && ((which_alternative != 4) && (which_alternative != 5))))) || ((which_alternative == 0) || (which_alternative == 1)))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) || ((which_alternative == 5) || (which_alternative == 6)))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 6) || ((which_alternative == 0) || (which_alternative == 1)))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 320:
    case 318:
    case 202:
    case 196:
    case 195:
    case 194:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 209:
    case 205:
    case 175:
    case 151:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return CORE_CYCLES_SINGLE;
        }
      else
        {
	  return CORE_CYCLES_MULTI;
        }

    case 390:
    case 389:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 344:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 300:
    case 299:
    case 298:
    case 287:
    case 283:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 273:
    case 272:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 217:
    case 216:
    case 214:
    case 213:
    case 197:
    case 191:
    case 183:
    case 181:
    case 170:
    case 167:
    case 163:
    case 158:
    case 154:
    case 146:
    case 145:
    case 144:
    case 143:
    case 142:
    case 141:
    case 136:
    case 135:
    case 134:
    case 133:
    case 108:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
    case 0:
      return CORE_CYCLES_MULTI;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return CORE_CYCLES_SINGLE;

    }
}

enum attr_conds
get_attr_conds (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 278:
    case 277:
    case 276:
    case 275:
    case 273:
    case 272:
      if (((arm_prog_mode) == (PROG_MODE_PROG32)))
        {
	  return CONDS_CLOB;
        }
      else
        {
	  return CONDS_NOCOND;
        }

    case 128:
    case 127:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return CONDS_CLOB;
        }
      else
        {
	  return CONDS_NOCOND;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 0:
    case 1:
    case 2:
    case 3:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 104:
    case 105:
    case 106:
    case 107:
    case 108:
    case 109:
    case 121:
    case 285:
    case 303:
    case 305:
    case 306:
    case 309:
    case 310:
    case 311:
    case 313:
    case 315:
    case 317:
    case 319:
    case 321:
    case 323:
    case 325:
    case 327:
    case 329:
    case 331:
    case 333:
    case 335:
    case 337:
    case 387:
    case 388:
      return CONDS_CLOB;

    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 34:
    case 43:
    case 44:
    case 46:
    case 47:
    case 76:
    case 77:
    case 78:
    case 79:
    case 86:
    case 87:
    case 94:
    case 95:
    case 100:
    case 101:
    case 116:
    case 117:
    case 119:
    case 120:
    case 139:
    case 140:
    case 160:
    case 185:
    case 223:
    case 224:
    case 225:
    case 226:
    case 227:
    case 228:
    case 229:
    case 230:
    case 231:
    case 232:
    case 233:
    case 234:
    case 235:
    case 236:
    case 237:
    case 290:
    case 291:
    case 293:
    case 294:
    case 296:
    case 297:
    case 299:
    case 300:
    case 307:
    case 308:
    case 369:
      return CONDS_SET;

    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 35:
    case 248:
    case 249:
    case 260:
    case 261:
    case 262:
    case 266:
    case 267:
    case 268:
    case 269:
    case 280:
    case 281:
    case 301:
    case 302:
    case 304:
    case 312:
    case 314:
    case 316:
    case 318:
    case 320:
    case 322:
    case 324:
    case 326:
    case 328:
    case 330:
    case 332:
    case 334:
    case 336:
    case 338:
    case 386:
      return CONDS_USE;

    default:
      return CONDS_NOCOND;

    }
}

enum attr_type
get_attr_type (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 314:
    case 312:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return TYPE_NORMAL;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_FFARITH;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_F_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_F_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_R_MEM_F;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_F_MEM_R;
        }
      else
        {
	  return TYPE_NORMAL;
        }

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_LOAD;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_STORE2;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_LOAD;
        }
      else if ((which_alternative == 5) || (which_alternative == 6))
        {
	  return TYPE_FFARITH;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_F_LOAD;
        }
      else if (which_alternative == 8)
        {
	  return TYPE_F_STORE;
        }
      else if (which_alternative == 9)
        {
	  return TYPE_R_MEM_F;
        }
      else
        {
	  return TYPE_F_MEM_R;
        }

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_FFARITH;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_F_LOAD;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_F_STORE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_R_MEM_F;
        }
      else if (which_alternative == 5)
        {
	  return TYPE_F_MEM_R;
        }
      else if (which_alternative == 6)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 7)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 320:
    case 318:
    case 196:
    case 195:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_NORMAL;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_STORE1;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 151:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else
        {
	  return TYPE_LOAD;
        }

    case 205:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE1;
        }

    case 175:
    case 209:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 0)
        {
	  return TYPE_NORMAL;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_LOAD;
        }
      else
        {
	  return TYPE_STORE2;
        }

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (4))
        {
	  return TYPE_STORE2;
        }
      else if ((XVECLEN (operands[0],0)) == (5))
        {
	  return TYPE_STORE3;
        }
      else
        {
	  return TYPE_STORE4;
        }

    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (3))
        {
	  return TYPE_STORE2;
        }
      else if ((XVECLEN (operands[0],0)) == (4))
        {
	  return TYPE_STORE3;
        }
      else
        {
	  return TYPE_STORE4;
        }

    case 389:
      return TYPE_STORE4;

    case 108:
    case 340:
    case 341:
    case 346:
    case 347:
    case 352:
    case 353:
    case 356:
    case 357:
      return TYPE_STORE1;

    case 154:
    case 158:
    case 163:
    case 167:
    case 170:
    case 181:
    case 183:
    case 191:
    case 197:
    case 213:
    case 214:
    case 279:
    case 280:
    case 281:
    case 287:
    case 339:
    case 342:
    case 343:
    case 344:
    case 345:
    case 348:
    case 349:
    case 350:
    case 351:
    case 354:
    case 355:
    case 358:
    case 359:
    case 360:
    case 361:
      return TYPE_LOAD;

    case 0:
    case 272:
    case 273:
    case 275:
    case 276:
    case 277:
    case 278:
    case 376:
    case 377:
    case 378:
    case 379:
    case 380:
      return TYPE_CALL;

    case 141:
    case 142:
    case 143:
      return TYPE_R_2_F;

    case 144:
    case 145:
    case 146:
    case 227:
    case 228:
    case 229:
    case 230:
    case 231:
    case 232:
    case 233:
    case 234:
    case 235:
    case 236:
      return TYPE_F_2_R;

    case 390:
      return TYPE_F_STORE;

    case 133:
    case 134:
    case 135:
    case 136:
      return TYPE_FLOAT_EM;

    case 123:
    case 124:
    case 125:
    case 126:
    case 129:
    case 130:
    case 131:
    case 132:
    case 147:
    case 148:
    case 149:
    case 172:
    case 173:
    case 174:
    case 267:
    case 269:
      return TYPE_FFARITH;

    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
      return TYPE_FARITH;

    case 52:
      return TYPE_FFMUL;

    case 53:
    case 54:
    case 55:
    case 56:
    case 57:
      return TYPE_FMUL;

    case 58:
    case 64:
      return TYPE_FDIVS;

    case 59:
    case 60:
    case 61:
    case 62:
    case 65:
    case 66:
    case 67:
    case 68:
      return TYPE_FDIVD;

    case 63:
    case 69:
      return TYPE_FDIVX;

    case 283:
      return TYPE_BLOCK;

    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
    case 47:
    case 48:
    case 49:
    case 50:
    case 51:
    case 298:
    case 299:
    case 300:
      return TYPE_MULT;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return TYPE_NORMAL;

    }
}

enum attr_write_conflict
get_attr_write_conflict (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 314:
    case 312:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 5) || (which_alternative == 4))))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 10) || ((which_alternative == 9) || ((which_alternative == 0) || (which_alternative == 4))))))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 5) || ((which_alternative == 4) || (which_alternative == 7)))))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 320:
    case 318:
    case 196:
    case 195:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative != 0) && (which_alternative != 1))
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 3)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 209:
    case 205:
    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 1)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 151:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative != 0)
        {
	  return WRITE_CONFLICT_YES;
        }
      else
        {
	  return WRITE_CONFLICT_NO;
        }

    case 390:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 361:
    case 360:
    case 359:
    case 358:
    case 355:
    case 354:
    case 351:
    case 350:
    case 349:
    case 348:
    case 345:
    case 344:
    case 343:
    case 342:
    case 339:
    case 287:
    case 283:
    case 281:
    case 280:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 273:
    case 272:
    case 214:
    case 213:
    case 197:
    case 191:
    case 183:
    case 181:
    case 170:
    case 167:
    case 163:
    case 158:
    case 154:
    case 136:
    case 135:
    case 134:
    case 133:
    case 0:
      return WRITE_CONFLICT_YES;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return WRITE_CONFLICT_NO;

    }
}

static int
core_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 390:
      casenum = 4;
      break;

    case 314:
    case 312:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3)))))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && (which_alternative != 3))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (3))
        {
	  casenum = 10 /* 0xa */;
        }
      else if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 11 /* 0xb */;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 10 /* 0xa */;
        }
      else if ((XVECLEN (operands[0],0)) == (5))
        {
	  casenum = 11 /* 0xb */;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  casenum = 3;
        }
      else if (which_alternative == 3)
        {
	  casenum = 4;
        }
      else if (which_alternative == 4)
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 6;
        }
      break;

    case 209:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1))
        {
	  casenum = 2;
        }
      else if ((which_alternative != 0) && (which_alternative != 1))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && ((which_alternative == 0) || (which_alternative == 4)))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 0) || (which_alternative == 4)))
        {
	  casenum = 2;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 7))
        {
	  casenum = 3;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 8))
        {
	  casenum = 4;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 9))
        {
	  casenum = 5;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 10))
        {
	  casenum = 6;
        }
      else if ((which_alternative == 1) || (which_alternative == 3))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 205:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  casenum = 0;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative != 0))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 8))
        {
	  casenum = 0;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 7))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 7) || (which_alternative == 8)))
        {
	  casenum = 2;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 2))
        {
	  casenum = 3;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 3))
        {
	  casenum = 4;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 4))
        {
	  casenum = 5;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 5))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 320:
    case 318:
    case 196:
    case 195:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 2) && (! (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2))
        {
	  casenum = 0;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 3))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 3) || (which_alternative == 2)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 3))
        {
	  casenum = 0;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 2) || (which_alternative == 3)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1))
        {
	  casenum = 2;
        }
      else if (which_alternative == 2)
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 361:
    case 360:
    case 359:
    case 358:
    case 355:
    case 354:
    case 351:
    case 350:
    case 349:
    case 348:
    case 345:
    case 344:
    case 343:
    case 342:
    case 339:
    case 287:
    case 281:
    case 280:
    case 279:
    case 214:
    case 213:
    case 197:
    case 191:
    case 183:
    case 181:
    case 170:
    case 167:
    case 163:
    case 158:
    case 154:
      if (((arm_ld_sched) == (LDSCHED_YES)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 151:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 1) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 1) && (! (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 357:
    case 356:
    case 353:
    case 352:
    case 347:
    case 346:
    case 341:
    case 340:
    case 108:
      if (((arm_ld_sched) == (LDSCHED_YES)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 300:
    case 299:
    case 298:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
      if (((arm_ld_sched) == (LDSCHED_NO)))
        {
	  casenum = 7;
        }
      else if (((arm_is_strong) == (IS_STRONGARM_NO)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 9;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 12 /* 0xc */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      switch (recog_memoized (insn))
	{
        case 390:
	  return 1;

        case 314:
        case 312:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative == 2) || (which_alternative == 3))) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))) && ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 217:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 1;

        case 216:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 1;

        case 211:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 1;

        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 10) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 9) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 8) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 7) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 8) && (((which_alternative != 1) && (which_alternative != 3)) && ((which_alternative != 7) && ((which_alternative != 0) && (which_alternative != 4))))))) && (((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) || (((arm_is_strong) == (IS_STRONGARM_YES))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) || (((arm_is_strong) == (IS_STRONGARM_YES)))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 205:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) && ((((arm_ld_sched) == (LDSCHED_YES))) && ((((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))))) || ((which_alternative == 0) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || (((((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 5) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 4) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 3) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 2) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 8) && ((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) || (((arm_is_strong) == (IS_STRONGARM_YES)))))) || (((which_alternative != 5) && ((which_alternative != 4) && ((which_alternative != 3) && ((which_alternative != 2) && ((which_alternative != 8) && (which_alternative != 7)))))) && (((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) || (((arm_is_strong) == (IS_STRONGARM_YES))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) || (((arm_is_strong) == (IS_STRONGARM_YES))))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 320:
        case 318:
        case 196:
        case 195:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) || (which_alternative == 1)) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || (((((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 194:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) && ((((arm_ld_sched) == (LDSCHED_YES))) && ((((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))))) || (((which_alternative != 2) && (which_alternative != 3)) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || (((((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 202:
        case 177:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 3) && ((((arm_ld_sched) == (LDSCHED_YES))) && ((((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))))) || (((which_alternative != 3) && (which_alternative != 2)) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || (((((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 209:
        case 175:
        case 151:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 1;

        case 357:
        case 356:
        case 353:
        case 352:
        case 347:
        case 346:
        case 341:
        case 340:
        case 108:
	  if ((((arm_ld_sched) == (LDSCHED_YES))) && ((((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }

        case 389:
        case 361:
        case 360:
        case 359:
        case 358:
        case 355:
        case 354:
        case 351:
        case 350:
        case 349:
        case 348:
        case 345:
        case 344:
        case 343:
        case 342:
        case 339:
        case 300:
        case 299:
        case 298:
        case 287:
        case 281:
        case 280:
        case 279:
        case 214:
        case 213:
        case 197:
        case 191:
        case 183:
        case 181:
        case 170:
        case 167:
        case 163:
        case 158:
        case 154:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 44:
        case 43:
        case 42:
	  return 1;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 2;

      }

    case 2:
      return 2;

    case 3:
      return 3;

    case 4:
      return 4;

    case 5:
      return 6;

    case 6:
      return 7;

    case 7:
      return 16 /* 0x10 */;

    case 8:
      return 4;

    case 9:
      switch (recog_memoized (insn))
	{
        case 390:
	  return 2;

        case 314:
        case 312:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((((which_alternative == 0) || (which_alternative == 1)) || ((which_alternative == 2) || (which_alternative == 3))) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || ((((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))) && ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }

        case 217:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 2;

        case 216:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 2;

        case 211:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 2;

        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 10) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 9) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 8) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 7) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 8) && (((which_alternative != 1) && (which_alternative != 3)) && ((which_alternative != 7) && ((which_alternative != 0) && (which_alternative != 4))))))) && (((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) || (((arm_is_strong) == (IS_STRONGARM_YES))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) || (((arm_is_strong) == (IS_STRONGARM_YES)))))))))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }

        case 205:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) && ((((arm_ld_sched) == (LDSCHED_YES))) && ((((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))))) || ((which_alternative == 0) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || (((((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }

        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 5) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 4) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 3) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 2) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))) || (((which_alternative == 8) && ((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) || (((arm_is_strong) == (IS_STRONGARM_YES)))))) || (((which_alternative != 5) && ((which_alternative != 4) && ((which_alternative != 3) && ((which_alternative != 2) && ((which_alternative != 8) && (which_alternative != 7)))))) && (((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) || (((arm_is_strong) == (IS_STRONGARM_YES))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) || (((arm_is_strong) == (IS_STRONGARM_YES))))))))))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }

        case 320:
        case 318:
        case 196:
        case 195:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 0) || (which_alternative == 1)) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || (((((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }

        case 194:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 2) && ((((arm_ld_sched) == (LDSCHED_YES))) && ((((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))))) || (((which_alternative != 2) && (which_alternative != 3)) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || (((((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }

        case 202:
        case 177:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 3) && ((((arm_ld_sched) == (LDSCHED_YES))) && ((((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))))) || (((which_alternative != 3) && (which_alternative != 2)) && (((((arm_ld_sched) == (LDSCHED_YES))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || (((((((arm_ld_sched) == (LDSCHED_YES))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA))))))) || ((((arm_ld_sched) == (LDSCHED_NO))) && ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA))))))))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }

        case 209:
        case 175:
        case 151:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 2;

        case 357:
        case 356:
        case 353:
        case 352:
        case 347:
        case 346:
        case 341:
        case 340:
        case 108:
	  if ((((arm_ld_sched) == (LDSCHED_YES))) && ((((((arm_is_strong) == (IS_STRONGARM_NO))) && (((arm_fpu_attr) == (FPU_FPA)))) || (((((arm_is_strong) == (IS_STRONGARM_NO))) && (! (((arm_fpu_attr) == (FPU_FPA))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (((arm_fpu_attr) == (FPU_FPA)))))) || ((((arm_is_strong) == (IS_STRONGARM_YES))) && (! (((arm_fpu_attr) == (FPU_FPA)))))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }

        case 389:
        case 361:
        case 360:
        case 359:
        case 358:
        case 355:
        case 354:
        case 351:
        case 350:
        case 349:
        case 348:
        case 345:
        case 344:
        case 343:
        case 342:
        case 339:
        case 300:
        case 299:
        case 298:
        case 287:
        case 281:
        case 280:
        case 279:
        case 214:
        case 213:
        case 197:
        case 191:
        case 183:
        case 181:
        case 170:
        case 167:
        case 163:
        case 158:
        case 154:
        case 51:
        case 50:
        case 49:
        case 48:
        case 47:
        case 46:
        case 45:
        case 44:
        case 43:
        case 42:
	  return 2;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 3;

      }

    case 10:
      return 3;

    case 11:
      return 4;

    case 12:
      return 5;

    default:
      abort ();
    }
}

static int
core_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 390:
      casenum = 4;
      break;

    case 314:
    case 312:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3)))))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative != 2) && (which_alternative != 3))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (3))
        {
	  casenum = 10 /* 0xa */;
        }
      else if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 11 /* 0xb */;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 10 /* 0xa */;
        }
      else if ((XVECLEN (operands[0],0)) == (5))
        {
	  casenum = 11 /* 0xb */;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  casenum = 3;
        }
      else if (which_alternative == 3)
        {
	  casenum = 4;
        }
      else if (which_alternative == 4)
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 6;
        }
      break;

    case 209:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1))
        {
	  casenum = 2;
        }
      else if ((which_alternative != 0) && (which_alternative != 1))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && ((which_alternative == 0) || (which_alternative == 4)))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 0) || (which_alternative == 4)))
        {
	  casenum = 2;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 7))
        {
	  casenum = 3;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 8))
        {
	  casenum = 4;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 9))
        {
	  casenum = 5;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 10))
        {
	  casenum = 6;
        }
      else if ((which_alternative == 1) || (which_alternative == 3))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 205:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  casenum = 0;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative != 0))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 8))
        {
	  casenum = 0;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 7))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 7) || (which_alternative == 8)))
        {
	  casenum = 2;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 2))
        {
	  casenum = 3;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 3))
        {
	  casenum = 4;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 4))
        {
	  casenum = 5;
        }
      else if ((((arm_fpu_attr) == (FPU_FPA))) && (which_alternative == 5))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 320:
    case 318:
    case 196:
    case 195:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 2) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 2) && (! (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2))
        {
	  casenum = 0;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 3))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 3) || (which_alternative == 2)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 3))
        {
	  casenum = 0;
        }
      else if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 2))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && ((which_alternative == 2) || (which_alternative == 3)))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((((arm_ld_sched) == (LDSCHED_YES))) && (which_alternative == 1))
        {
	  casenum = 1;
        }
      else if ((! (((arm_ld_sched) == (LDSCHED_YES)))) && (which_alternative == 1))
        {
	  casenum = 2;
        }
      else if (which_alternative == 2)
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 361:
    case 360:
    case 359:
    case 358:
    case 355:
    case 354:
    case 351:
    case 350:
    case 349:
    case 348:
    case 345:
    case 344:
    case 343:
    case 342:
    case 339:
    case 287:
    case 281:
    case 280:
    case 279:
    case 214:
    case 213:
    case 197:
    case 191:
    case 183:
    case 181:
    case 170:
    case 167:
    case 163:
    case 158:
    case 154:
      if (((arm_ld_sched) == (LDSCHED_YES)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 151:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 1) && (((arm_ld_sched) == (LDSCHED_YES))))
        {
	  casenum = 1;
        }
      else if ((which_alternative == 1) && (! (((arm_ld_sched) == (LDSCHED_YES)))))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 12 /* 0xc */;
        }
      break;

    case 357:
    case 356:
    case 353:
    case 352:
    case 347:
    case 346:
    case 341:
    case 340:
    case 108:
      if (((arm_ld_sched) == (LDSCHED_YES)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 300:
    case 299:
    case 298:
    case 51:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 45:
    case 44:
    case 43:
    case 42:
      if (((arm_ld_sched) == (LDSCHED_NO)))
        {
	  casenum = 7;
        }
      else if (((arm_is_strong) == (IS_STRONGARM_NO)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 9;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 12 /* 0xc */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 2;

    case 3:
      return 3;

    case 4:
      return 4;

    case 5:
      return 6;

    case 6:
      return 7;

    case 7:
      return 16 /* 0x10 */;

    case 8:
      return 4;

    case 9:
      return 2;

    case 10:
      return 3;

    case 11:
      return 4;

    case 12:
      return 5;

    default:
      abort ();
    }
}

static int
write_blockage_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 389:
      casenum = 3;
      break;

    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (3))
        {
	  casenum = 1;
        }
      else if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 1;
        }
      else if ((XVECLEN (operands[0],0)) == (5))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 209:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 1) || (which_alternative == 3))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 205:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 8)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 3)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 357:
    case 356:
    case 353:
    case 352:
    case 347:
    case 346:
    case 341:
    case 340:
    case 108:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 4;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      switch (recog_memoized (insn))
	{
        case 389:
	  return 0;

        case 217:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((XVECLEN (operands[0],0)) == (3))) && ((XVECLEN (operands[0],0)) == (4))) || ((! ((XVECLEN (operands[0],0)) == (4))) || ((XVECLEN (operands[0],0)) == (3))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 5;
	    }

        case 216:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((XVECLEN (operands[0],0)) == (4))) && ((XVECLEN (operands[0],0)) == (5))) || ((! ((XVECLEN (operands[0],0)) == (5))) || ((XVECLEN (operands[0],0)) == (4))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 5;
	    }

        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 0) && (which_alternative != 4)))))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 5;
	    }

        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 8)
	    {
	      return 1;
	    }
	  else
	    {
	      return 5;
	    }

        case 205:
        case 194:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 1;
	    }
	  else
	    {
	      return 5;
	    }

        case 202:
        case 177:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 3)
	    {
	      return 1;
	    }
	  else
	    {
	      return 5;
	    }

        case 209:
        case 175:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 0;
	    }
	  else
	    {
	      return 5;
	    }

        case 357:
        case 356:
        case 353:
        case 352:
        case 347:
        case 346:
        case 341:
        case 340:
        case 108:
	  return 1;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 5;

      }

    case 1:
      switch (recog_memoized (insn))
	{
        case 389:
	  return 0;

        case 217:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (! ((XVECLEN (operands[0],0)) == (3)))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 216:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (! ((XVECLEN (operands[0],0)) == (4)))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 0) && (which_alternative != 4)))))))
	    {
	      return 1;
	    }
	  else
	    {
	      return 7;
	    }

        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 8)
	    {
	      return 3;
	    }
	  else
	    {
	      return 7;
	    }

        case 205:
        case 194:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 3;
	    }
	  else
	    {
	      return 7;
	    }

        case 202:
        case 177:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 3)
	    {
	      return 3;
	    }
	  else
	    {
	      return 7;
	    }

        case 209:
        case 175:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 1;
	    }
	  else
	    {
	      return 7;
	    }

        case 357:
        case 356:
        case 353:
        case 352:
        case 347:
        case 346:
        case 341:
        case 340:
        case 108:
	  return 3;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 7;

      }

    case 2:
      switch (recog_memoized (insn))
	{
        case 389:
	  return 0;

        case 217:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((! ((XVECLEN (operands[0],0)) == (3))) && ((XVECLEN (operands[0],0)) == (4)))
	    {
	      return 1;
	    }
	  else if ((! ((XVECLEN (operands[0],0)) == (3))) && (! ((XVECLEN (operands[0],0)) == (4))))
	    {
	      return 0;
	    }
	  else if ((XVECLEN (operands[0],0)) == (3))
	    {
	      return 3;
	    }
	  else
	    {
	      return 9;
	    }

        case 216:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((! ((XVECLEN (operands[0],0)) == (4))) && ((XVECLEN (operands[0],0)) == (5)))
	    {
	      return 1;
	    }
	  else if ((! ((XVECLEN (operands[0],0)) == (4))) && (! ((XVECLEN (operands[0],0)) == (5))))
	    {
	      return 0;
	    }
	  else if ((XVECLEN (operands[0],0)) == (4))
	    {
	      return 3;
	    }
	  else
	    {
	      return 9;
	    }

        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 0) && (which_alternative != 4)))))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 9;
	    }

        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 8)
	    {
	      return 5;
	    }
	  else
	    {
	      return 9;
	    }

        case 205:
        case 194:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 5;
	    }
	  else
	    {
	      return 9;
	    }

        case 202:
        case 177:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 3)
	    {
	      return 5;
	    }
	  else
	    {
	      return 9;
	    }

        case 209:
        case 175:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 3;
	    }
	  else
	    {
	      return 9;
	    }

        case 357:
        case 356:
        case 353:
        case 352:
        case 347:
        case 346:
        case 341:
        case 340:
        case 108:
	  return 5;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 9;

      }

    case 3:
      switch (recog_memoized (insn))
	{
        case 389:
	  return 1;

        case 217:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((! ((XVECLEN (operands[0],0)) == (3))) && ((XVECLEN (operands[0],0)) == (4)))
	    {
	      return 3;
	    }
	  else if ((! ((XVECLEN (operands[0],0)) == (3))) && (! ((XVECLEN (operands[0],0)) == (4))))
	    {
	      return 1;
	    }
	  else if ((XVECLEN (operands[0],0)) == (3))
	    {
	      return 5;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 216:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if ((! ((XVECLEN (operands[0],0)) == (4))) && ((XVECLEN (operands[0],0)) == (5)))
	    {
	      return 3;
	    }
	  else if ((! ((XVECLEN (operands[0],0)) == (4))) && (! ((XVECLEN (operands[0],0)) == (5))))
	    {
	      return 1;
	    }
	  else if ((XVECLEN (operands[0],0)) == (4))
	    {
	      return 5;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 0) && (which_alternative != 4)))))))
	    {
	      return 5;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 8)
	    {
	      return 7;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 205:
        case 194:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 7;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 202:
        case 177:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 3)
	    {
	      return 7;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 209:
        case 175:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 5;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 357:
        case 356:
        case 353:
        case 352:
        case 347:
        case 346:
        case 341:
        case 340:
        case 108:
	  return 7;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 11 /* 0xb */;

      }

    case 4:
      return 1;

    default:
      abort ();
    }
}

static int
write_blockage_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 389:
      casenum = 3;
      break;

    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (3))
        {
	  casenum = 1;
        }
      else if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 1;
        }
      else if ((XVECLEN (operands[0],0)) == (5))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 209:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((which_alternative == 1) || (which_alternative == 3))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 205:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 8)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 3)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 2)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 4;
        }
      break;

    case 357:
    case 356:
    case 353:
    case 352:
    case 347:
    case 346:
    case 341:
    case 340:
    case 108:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 4;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      switch (recog_memoized (insn))
	{
        case 217:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((XVECLEN (operands[0],0)) == (3))) && (! ((XVECLEN (operands[0],0)) == (4)))) || (((XVECLEN (operands[0],0)) == (4)) || ((XVECLEN (operands[0],0)) == (3))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 5;
	    }

        case 216:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((XVECLEN (operands[0],0)) == (4))) && (! ((XVECLEN (operands[0],0)) == (5)))) || (((XVECLEN (operands[0],0)) == (5)) || ((XVECLEN (operands[0],0)) == (4))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 5;
	    }

        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 0) && (which_alternative != 4)))))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 5;
	    }

        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 8)
	    {
	      return 0;
	    }
	  else
	    {
	      return 5;
	    }

        case 202:
        case 177:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 3)
	    {
	      return 0;
	    }
	  else
	    {
	      return 5;
	    }

        case 209:
        case 205:
        case 194:
        case 175:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 0;
	    }
	  else
	    {
	      return 5;
	    }

        case 389:
        case 357:
        case 356:
        case 353:
        case 352:
        case 347:
        case 346:
        case 341:
        case 340:
        case 108:
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 5;

      }

    case 1:
      switch (recog_memoized (insn))
	{
        case 217:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((XVECLEN (operands[0],0)) == (3))) && (! ((XVECLEN (operands[0],0)) == (4)))) || (((XVECLEN (operands[0],0)) == (4)) || ((XVECLEN (operands[0],0)) == (3))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 7;
	    }

        case 216:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((XVECLEN (operands[0],0)) == (4))) && (! ((XVECLEN (operands[0],0)) == (5)))) || (((XVECLEN (operands[0],0)) == (5)) || ((XVECLEN (operands[0],0)) == (4))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 7;
	    }

        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 0) && (which_alternative != 4)))))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 7;
	    }

        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 8)
	    {
	      return 0;
	    }
	  else
	    {
	      return 7;
	    }

        case 202:
        case 177:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 3)
	    {
	      return 0;
	    }
	  else
	    {
	      return 7;
	    }

        case 209:
        case 205:
        case 194:
        case 175:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 0;
	    }
	  else
	    {
	      return 7;
	    }

        case 389:
        case 357:
        case 356:
        case 353:
        case 352:
        case 347:
        case 346:
        case 341:
        case 340:
        case 108:
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 7;

      }

    case 2:
      switch (recog_memoized (insn))
	{
        case 217:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((XVECLEN (operands[0],0)) == (3))) && (! ((XVECLEN (operands[0],0)) == (4)))) || (((XVECLEN (operands[0],0)) == (4)) || ((XVECLEN (operands[0],0)) == (3))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 9;
	    }

        case 216:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((XVECLEN (operands[0],0)) == (4))) && (! ((XVECLEN (operands[0],0)) == (5)))) || (((XVECLEN (operands[0],0)) == (5)) || ((XVECLEN (operands[0],0)) == (4))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 9;
	    }

        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 0) && (which_alternative != 4)))))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 9;
	    }

        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 8)
	    {
	      return 0;
	    }
	  else
	    {
	      return 9;
	    }

        case 202:
        case 177:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 3)
	    {
	      return 0;
	    }
	  else
	    {
	      return 9;
	    }

        case 209:
        case 205:
        case 194:
        case 175:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 0;
	    }
	  else
	    {
	      return 9;
	    }

        case 389:
        case 357:
        case 356:
        case 353:
        case 352:
        case 347:
        case 346:
        case 341:
        case 340:
        case 108:
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 9;

      }

    case 3:
      switch (recog_memoized (insn))
	{
        case 217:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((XVECLEN (operands[0],0)) == (3))) && (! ((XVECLEN (operands[0],0)) == (4)))) || (((XVECLEN (operands[0],0)) == (4)) || ((XVECLEN (operands[0],0)) == (3))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 216:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((! ((XVECLEN (operands[0],0)) == (4))) && (! ((XVECLEN (operands[0],0)) == (5)))) || (((XVECLEN (operands[0],0)) == (5)) || ((XVECLEN (operands[0],0)) == (4))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 10) && ((which_alternative != 9) && ((which_alternative != 0) && (which_alternative != 4)))))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 8)
	    {
	      return 0;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 202:
        case 177:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 3)
	    {
	      return 0;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 209:
        case 205:
        case 194:
        case 175:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  if (which_alternative == 2)
	    {
	      return 0;
	    }
	  else
	    {
	      return 11 /* 0xb */;
	    }

        case 389:
        case 357:
        case 356:
        case 353:
        case 352:
        case 347:
        case 346:
        case 341:
        case 340:
        case 108:
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 11 /* 0xb */;

      }

    case 4:
      return 1;

    default:
      abort ();
    }
}

static int
write_buf_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (3))
        {
	  casenum = 1;
        }
      else if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 1;
        }
      else if ((XVECLEN (operands[0],0)) == (5))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 209:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 1;
      break;

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 9)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 205:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 1;
      break;

    case 357:
    case 356:
    case 353:
    case 352:
    case 347:
    case 346:
    case 341:
    case 340:
    case 108:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 4;

    case 2:
      return 6;

    case 3:
      return 8;

    default:
      abort ();
    }
}

static int
write_buf_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 217:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (3))
        {
	  casenum = 1;
        }
      else if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 216:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if ((XVECLEN (operands[0],0)) == (4))
        {
	  casenum = 1;
        }
      else if ((XVECLEN (operands[0],0)) == (5))
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 211:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 209:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 1;
      break;

    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      if (which_alternative == 9)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 205:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 194:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 202:
    case 177:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 0;
      break;

    case 175:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 1;
      break;

    case 357:
    case 356:
    case 353:
    case 352:
    case 347:
    case 346:
    case 341:
    case 340:
    case 108:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 4;

    case 2:
      return 5;

    case 3:
      return 6;

    default:
      abort ();
    }
}

static int
fpa_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 6;
      break;

    case 211:
    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 6;
      break;

    case 143:
    case 142:
    case 141:
      casenum = 7;
      break;

    case 269:
    case 267:
    case 174:
    case 173:
    case 172:
    case 149:
    case 148:
    case 147:
    case 132:
    case 131:
    case 130:
    case 129:
    case 126:
    case 125:
    case 124:
    case 123:
      casenum = 6;
      break;

    case 69:
    case 63:
      casenum = 0;
      break;

    case 68:
    case 67:
    case 66:
    case 65:
    case 62:
    case 61:
    case 60:
    case 59:
      casenum = 1;
      break;

    case 64:
    case 58:
      casenum = 2;
      break;

    case 57:
    case 56:
    case 55:
    case 54:
    case 53:
      casenum = 3;
      break;

    case 52:
      casenum = 4;
      break;

    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 24:
    case 23:
    case 22:
    case 21:
    case 20:
    case 19:
      casenum = 5;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 8;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      switch (recog_memoized (insn))
	{
        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 70 /* 0x46 */;

        case 211:
        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 70 /* 0x46 */;

        case 269:
        case 267:
        case 174:
        case 173:
        case 172:
        case 149:
        case 148:
        case 147:
        case 132:
        case 131:
        case 130:
        case 129:
        case 126:
        case 125:
        case 124:
        case 123:
	  return 70 /* 0x46 */;

        case 143:
        case 142:
        case 141:
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
        case 19:
	  return 69 /* 0x45 */;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 71 /* 0x47 */;

      }

    case 1:
      switch (recog_memoized (insn))
	{
        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 58 /* 0x3a */;

        case 211:
        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 58 /* 0x3a */;

        case 269:
        case 267:
        case 174:
        case 173:
        case 172:
        case 149:
        case 148:
        case 147:
        case 132:
        case 131:
        case 130:
        case 129:
        case 126:
        case 125:
        case 124:
        case 123:
	  return 58 /* 0x3a */;

        case 143:
        case 142:
        case 141:
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
        case 19:
	  return 57 /* 0x39 */;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 59 /* 0x3b */;

      }

    case 2:
      switch (recog_memoized (insn))
	{
        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 30 /* 0x1e */;

        case 211:
        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 30 /* 0x1e */;

        case 269:
        case 267:
        case 174:
        case 173:
        case 172:
        case 149:
        case 148:
        case 147:
        case 132:
        case 131:
        case 130:
        case 129:
        case 126:
        case 125:
        case 124:
        case 123:
	  return 30 /* 0x1e */;

        case 143:
        case 142:
        case 141:
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
        case 19:
	  return 29 /* 0x1d */;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 31 /* 0x1f */;

      }

    case 3:
      switch (recog_memoized (insn))
	{
        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 8;

        case 211:
        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 8;

        case 269:
        case 267:
        case 174:
        case 173:
        case 172:
        case 149:
        case 148:
        case 147:
        case 132:
        case 131:
        case 130:
        case 129:
        case 126:
        case 125:
        case 124:
        case 123:
	  return 8;

        case 143:
        case 142:
        case 141:
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
        case 19:
	  return 7;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 9;

      }

    case 4:
      switch (recog_memoized (insn))
	{
        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 5;

        case 211:
        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 5;

        case 269:
        case 267:
        case 174:
        case 173:
        case 172:
        case 149:
        case 148:
        case 147:
        case 132:
        case 131:
        case 130:
        case 129:
        case 126:
        case 125:
        case 124:
        case 123:
	  return 5;

        case 143:
        case 142:
        case 141:
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
        case 19:
	  return 4;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 6;

      }

    case 5:
      switch (recog_memoized (insn))
	{
        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 3;

        case 211:
        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 3;

        case 269:
        case 267:
        case 174:
        case 173:
        case 172:
        case 149:
        case 148:
        case 147:
        case 132:
        case 131:
        case 130:
        case 129:
        case 126:
        case 125:
        case 124:
        case 123:
	  return 3;

        case 143:
        case 142:
        case 141:
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
        case 19:
	  return 2;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 4;

      }

    case 6:
      return 2;

    case 7:
      switch (recog_memoized (insn))
	{
        case 208:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 4;

        case 211:
        case 204:
	  extract_insn (insn);
	  if (! constrain_operands (reload_completed))
	    fatal_insn_not_found (insn);
	  return 4;

        case 269:
        case 267:
        case 174:
        case 173:
        case 172:
        case 149:
        case 148:
        case 147:
        case 132:
        case 131:
        case 130:
        case 129:
        case 126:
        case 125:
        case 124:
        case 123:
	  return 4;

        case 143:
        case 142:
        case 141:
        case 69:
        case 68:
        case 67:
        case 66:
        case 65:
        case 64:
        case 63:
        case 62:
        case 61:
        case 60:
        case 59:
        case 58:
        case 57:
        case 56:
        case 55:
        case 54:
        case 53:
        case 52:
        case 41:
        case 40:
        case 39:
        case 38:
        case 37:
        case 36:
        case 24:
        case 23:
        case 22:
        case 21:
        case 20:
        case 19:
	  return 3;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 5;

      }

    case 8:
      return 2;

    default:
      abort ();
    }
}

static int
fpa_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 208:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 6;
      break;

    case 211:
    case 204:
      extract_insn (insn);
      if (! constrain_operands (reload_completed))
        fatal_insn_not_found (insn);
      casenum = 6;
      break;

    case 143:
    case 142:
    case 141:
      casenum = 7;
      break;

    case 269:
    case 267:
    case 174:
    case 173:
    case 172:
    case 149:
    case 148:
    case 147:
    case 132:
    case 131:
    case 130:
    case 129:
    case 126:
    case 125:
    case 124:
    case 123:
      casenum = 6;
      break;

    case 69:
    case 63:
      casenum = 0;
      break;

    case 68:
    case 67:
    case 66:
    case 65:
    case 62:
    case 61:
    case 60:
    case 59:
      casenum = 1;
      break;

    case 64:
    case 58:
      casenum = 2;
      break;

    case 57:
    case 56:
    case 55:
    case 54:
    case 53:
      casenum = 3;
      break;

    case 52:
      casenum = 4;
      break;

    case 41:
    case 40:
    case 39:
    case 38:
    case 37:
    case 36:
    case 24:
    case 23:
    case 22:
    case 21:
    case 20:
    case 19:
      casenum = 5;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 8;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 69 /* 0x45 */;

    case 1:
      return 57 /* 0x39 */;

    case 2:
      return 29 /* 0x1d */;

    case 3:
      return 7;

    case 4:
      return 4;

    case 5:
      return 2;

    case 6:
      return 2;

    case 7:
      return 3;

    case 8:
      return 2;

    default:
      abort ();
    }
}

struct function_unit_desc function_units[] = {
  {"fpa", 1, 1, 0, 0, 69, fpa_unit_ready_cost, fpa_unit_conflict_cost, 71, fpa_unit_blockage_range, fpa_unit_blockage}, 
  {"fpa_mem", 2, 1, 0, 1, 1, fpa_mem_unit_ready_cost, 0, 1, 0, 0}, 
  {"write_buf", 4, 1, 2, 0, 6, write_buf_unit_ready_cost, write_buf_unit_conflict_cost, 8, write_buf_unit_blockage_range, write_buf_unit_blockage}, 
  {"write_blockage", 8, 1, 0, 0, 11, write_blockage_unit_ready_cost, write_blockage_unit_conflict_cost, 11, write_blockage_unit_blockage_range, write_blockage_unit_blockage}, 
  {"core", 16, 1, 0, 0, 16, core_unit_ready_cost, core_unit_conflict_cost, 16, core_unit_blockage_range, core_unit_blockage}, 
};

int length_unit_log = 2;
