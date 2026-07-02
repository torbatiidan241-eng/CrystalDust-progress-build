/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "expr.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "insn-flags.h"
#include "insn-codes.h"
#include "recog.h"
#include "reload.h"

extern rtx recog_operand[];
#define operands emit_operand

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = gen_sequence (), end_sequence (), _val)
rtx
gen_movsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

  if (! (reload_in_progress || reload_completed))
    {
      if (GET_CODE (operands[0]) != REG)
	operands[1] = force_reg (SImode, operands[1]);
    }

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_split_2 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

{
  HOST_WIDE_UINT val = INTVAL (operands[1]);
  HOST_WIDE_UINT mask = 0xff;
  int i;
  for (i = 0; i < 25; i++)
    if ((val & (mask << i)) == val)
      break;

  if (i == 0)
    FAIL;

  operands[1] = GEN_INT (val >> i);
  operands[2] = GEN_INT (i);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand0,
	operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_split_3 (operands)
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operands[1] = GEN_INT (- INTVAL (operands[1]));

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand0)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movhi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (! (reload_in_progress || reload_completed))
    {
      if (GET_CODE (operands[0]) != REG)
	operands[1] = force_reg (HImode, operands[1]);

      /* ??? We shouldn't really get invalid addresses here, but this can
	 happen if we are passed a SP (never OK for HImode/QImode) or virtual
	register (rejected by GO_IF_LEGITIMATE_ADDRESS for HImode/QImode)
	relative address.  */
      /* ??? This should perhaps be fixed elsewhere, for instance, in
	 fixup_stack_1, by checking for other kinds of invalid addresses,
	 e.g. a bare reference to a virtual register.  This may confuse the
	 alpha though, which must handle this case differently.  */
      if (GET_CODE (operands[0]) == MEM
	  && ! memory_address_p (GET_MODE (operands[0]),
				 XEXP (operands[0], 0)))
	{
	  rtx temp = copy_to_reg (XEXP (operands[0], 0));
	  operands[0] = change_address (operands[0], VOIDmode, temp);
	}
      if (GET_CODE (operands[1]) == MEM
	  && ! memory_address_p (GET_MODE (operands[1]),
				 XEXP (operands[1], 0)))
	{
	  rtx temp = copy_to_reg (XEXP (operands[1], 0));
	  operands[1] = change_address (operands[1], VOIDmode, temp);
	}
    }
  /* Handle loading a large integer during reload */
  else if (GET_CODE (operands[1]) == CONST_INT
	   && ! CONST_OK_FOR_LETTER_P (INTVAL (operands[1]), 'I'))
    {
      /* Writing a constant to memory needs a scratch, which should
	 be handled with SECONDARY_RELOADs.  */
      if (GET_CODE (operands[0]) != REG)
	abort ();

      operands[0] = gen_rtx (SUBREG, SImode, operands[0], 0);
      emit_insn (gen_movsi (operands[0], operands[1]));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (! (reload_in_progress || reload_completed))
    {
      if (GET_CODE (operands[0]) != REG)
	operands[1] = force_reg (QImode, operands[1]);

      /* ??? We shouldn't really get invalid addresses here, but this can
	 happen if we are passed a SP (never OK for HImode/QImode) or virtual
	register (rejected by GO_IF_LEGITIMATE_ADDRESS for HImode/QImode)
	relative address.  */
      /* ??? This should perhaps be fixed elsewhere, for instance, in
	 fixup_stack_1, by checking for other kinds of invalid addresses,
	 e.g. a bare reference to a virtual register.  This may confuse the
	 alpha though, which must handle this case differently.  */
      if (GET_CODE (operands[0]) == MEM
	  && ! memory_address_p (GET_MODE (operands[0]),
				 XEXP (operands[0], 0)))
	{
	  rtx temp = copy_to_reg (XEXP (operands[0], 0));
	  operands[0] = change_address (operands[0], VOIDmode, temp);
	}
      if (GET_CODE (operands[1]) == MEM
	  && ! memory_address_p (GET_MODE (operands[1]),
				 XEXP (operands[1], 0)))
	{
	  rtx temp = copy_to_reg (XEXP (operands[1], 0));
	  operands[1] = change_address (operands[1], VOIDmode, temp);
	}
    }
  /* Handle loading a large integer during reload */
  else if (GET_CODE (operands[1]) == CONST_INT
	   && ! CONST_OK_FOR_LETTER_P (INTVAL (operands[1]), 'I'))
    {
      /* Writing a constant to memory needs a scratch, which should
	 be handled with SECONDARY_RELOADs.  */
      if (GET_CODE (operands[0]) != REG)
	abort ();

      operands[0] = gen_rtx (SUBREG, SImode, operands[0], 0);
      emit_insn (gen_movsi (operands[0], operands[1]));
      DONE;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movdi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

  if (! (reload_in_progress || reload_completed))
    {
      if (GET_CODE (operands[0]) != REG)
	operands[1] = force_reg (DImode, operands[1]);
    }

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movdf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

  if (! (reload_in_progress || reload_completed))
    {
      if (GET_CODE (operands[0]) != REG)
	operands[1] = force_reg (DFmode, operands[1]);
    }

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movsf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

  if (! (reload_in_progress || reload_completed))
    {
      if (GET_CODE (operands[0]) != REG)
	operands[1] = force_reg (SFmode, operands[1]);
    }

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_zero_extendhisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

  if (GET_CODE (operands[1]) != MEM)
    {
      rtx temp = gen_reg_rtx (SImode);
      
      operands[1] = force_reg (HImode, operands[1]);
      operands[1] = gen_lowpart (SImode, operands[1]);
      emit_insn (gen_ashlsi3 (temp, operands[1], GEN_INT (16)));
      emit_insn (gen_lshrsi3 (operands[0], temp, GEN_INT (16)));
      DONE;
    }

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_zero_extendqisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

  if (GET_CODE (operands[1]) != MEM)
    {
      rtx temp = gen_reg_rtx (SImode);

      operands[1] = force_reg (QImode, operands[1]);
      operands[1] = gen_lowpart (SImode, operands[1]);
      emit_insn (gen_ashlsi3 (temp, operands[1], GEN_INT (24)));
      emit_insn (gen_lshrsi3 (operands[0], temp, GEN_INT (24)));
      DONE;
    }

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extendhisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

  if (GET_CODE (operands[1]) != MEM)
    {
      rtx temp = gen_reg_rtx (SImode);
      
      operands[1] = force_reg (HImode, operands[1]);
      operands[1] = gen_lowpart (SImode, operands[1]);
      emit_insn (gen_ashlsi3 (temp, operands[1], GEN_INT (16)));
      emit_insn (gen_ashrsi3 (operands[0], temp, GEN_INT (16)));
      DONE;
    }

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extendqisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

  if (GET_CODE (operands[1]) != MEM)
    {
      rtx temp = gen_reg_rtx (SImode);

      operands[1] = force_reg (QImode, operands[1]);
      operands[1] = gen_lowpart (SImode, operands[1]);
      emit_insn (gen_ashlsi3 (temp, operands[1], GEN_INT (24)));
      emit_insn (gen_ashrsi3 (operands[0], temp, GEN_INT (24)));
      DONE;
    }

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extzv (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operand4;
  rtx operands[5];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

{
  HOST_WIDE_INT lshift = 32 - INTVAL (operands[2]) - INTVAL (operands[3]);
  HOST_WIDE_INT rshift = 32 - INTVAL (operands[2]);
  operands[3] = GEN_INT (rshift);
  if (lshift == 0)
    {
      emit_insn (gen_lshrsi3 (operands[0], operands[1], operands[3]));
      DONE;
    }
  operands[2] = GEN_INT (lshift);
  operands[4] = gen_reg_rtx (SImode);
}

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand4,
	operand3)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movstrqi (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operands[4];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;
  operands[3] = operand3;

  if (INTVAL (operands[3]) != 4
      || GET_CODE (operands[2]) != CONST_INT
      || INTVAL (operands[2]) > 48)
    FAIL;

  thumb_expand_movstrqi (operands);
  DONE;

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (operand0);
  emit (operand1);
  emit (operand2);
  emit (operand3);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movmem12b (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (8,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	gen_rtx_MEM (SImode,
	operand1)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (4))),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (4)))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (8))),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (8)))),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (12))),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (12))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

rtx
gen_movmem8b (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	gen_rtx_MEM (SImode,
	operand1)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (4))),
	gen_rtx_MEM (SImode,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (4)))),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (8))),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (8))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode))));
}

rtx
gen_adddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2));
}

rtx
gen_addsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2));
}

rtx
gen_subdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2));
}

rtx
gen_subsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2));
}

rtx
gen_mulsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2));
}

rtx
gen_negsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1));
}

rtx
gen_andsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

  if (GET_CODE (operands[2]) != CONST_INT)
    operands[2] = force_reg (SImode, operands[2]);
  else
    {
      int i;
      if (((HOST_WIDE_UINT) ~ INTVAL (operands[2])) < 256)
	{
	  operands[2] = force_reg (SImode, GEN_INT (~INTVAL (operands[2])));
	  emit_insn (gen_bicsi3 (operands[0], operands[2], operands[1]));
	  DONE;
	}

      for (i = 9; i <= 31; i++)
	if ((((HOST_WIDE_INT) 1) << i) - 1 == INTVAL (operands[2]))
	  {
	    emit_insn (gen_extzv (operands[0], operands[1], GEN_INT (i),
				  const0_rtx));
	    DONE;
	  }
	else if ((((HOST_WIDE_INT) 1) << i) - 1 == ~ INTVAL (operands[2]))
	  {
	    rtx shift = GEN_INT (i);
	    rtx reg = gen_reg_rtx (SImode);
	    emit_insn (gen_lshrsi3 (reg, operands[1], shift));
	    emit_insn (gen_ashlsi3 (operands[0], reg, shift));
	    DONE;
	  }

      operands[2] = force_reg (SImode, operands[2]);
    }

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bicsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	gen_rtx_NOT (SImode,
	operand1),
	operand2));
}

rtx
gen_iorsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2));
}

rtx
gen_xorsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2));
}

rtx
gen_one_cmplsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1));
}

rtx
gen_ashlsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2));
}

rtx
gen_ashrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2));
}

rtx
gen_lshrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2));
}

rtx
gen_rotrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2));
}

rtx
gen_cmpsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

  if (GET_CODE (operands[1]) != REG && GET_CODE (operands[1]) != SUBREG)
    {
      if (GET_CODE (operands[1]) != CONST_INT
	  || (HOST_WIDE_UINT) (INTVAL (operands[1])) >= 256)
	{
	  if (GET_CODE (operands[1]) != CONST_INT
	      || INTVAL (operands[1]) < -255
	      || INTVAL (operands[1]) > 0)
	    operands[1] = force_reg (SImode, operands[1]);
	  else
	    {
	      operands[1] = force_reg (SImode, 
				       GEN_INT (- INTVAL (operands[1])));
	      emit_insn (gen_cmnsi (operands[0], operands[1]));
	      DONE;
	    }
        }
    }

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_tstsi (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	operand0);
}

rtx
gen_cmnsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	cc0_rtx,
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)));
}

rtx
gen_jump (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

rtx
gen_beq (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_EQ (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bne (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bge (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_ble (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LE (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bgt (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GT (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_blt (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LT (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bgeu (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GEU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bleu (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LEU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bgtu (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_GTU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_bltu (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_LTU (VOIDmode,
	cc0_rtx,
	const0_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx));
}

rtx
gen_indirect_jump (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

rtx
gen_tablejump (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1))));
}

rtx
gen_call (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operands[2];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;

{
  if (TARGET_LONG_CALLS && GET_CODE (XEXP (operands[0], 0)) != REG)
    XEXP (operands[0], 0) = force_reg (Pmode, XEXP (operands[0], 0));
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_call_value (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx operands[3];
  rtx _val = 0;
  start_sequence ();
  operands[0] = operand0;
  operands[1] = operand1;
  operands[2] = operand2;

{
  if (TARGET_LONG_CALLS && GET_CODE (XEXP (operands[1], 0)) != REG)
    XEXP (operands[1], 0) = force_reg (Pmode, XEXP (operands[1], 0));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_call_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_nop ()
{
  return gen_rtx_CLOBBER (VOIDmode,
	const0_rtx);
}

rtx
gen_blockage ()
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	0);
}

rtx
gen_prologue ()
{
  rtx _val = 0;
  start_sequence ();

  thumb_expand_prologue ();
  DONE;

  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_epilogue ()
{
  rtx _val = 0;
  start_sequence ();

  thumb_expand_epilogue ();

  emit_insn (gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_consttable_4 (operand0)
     rtx operand0;
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	2);
}

rtx
gen_consttable_8 (operand0)
     rtx operand0;
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	3);
}

rtx
gen_consttable_end ()
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	4);
}

rtx
gen_align_4 ()
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	5);
}



void
add_clobbers (pattern, insn_code_number)
     rtx pattern;
     int insn_code_number;
{
  switch (insn_code_number)
    {
    case 25:
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 5) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 24:
      XVECEXP (pattern, 0, 5) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 6) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 7) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 19:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    default:
      abort ();
    }
}
