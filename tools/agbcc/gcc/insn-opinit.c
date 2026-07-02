/* Generated automatically by the program `genopinit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "flags.h"
#include "insn-flags.h"
#include "insn-codes.h"
#include "insn-config.h"
#include "recog.h"
#include "expr.h"
#include "reload.h"

void
init_all_optabs ()
{
  mov_optab->handlers[(int) SImode].insn_code = CODE_FOR_movsi;
  mov_optab->handlers[(int) HImode].insn_code = CODE_FOR_movhi;
  mov_optab->handlers[(int) QImode].insn_code = CODE_FOR_movqi;
  mov_optab->handlers[(int) DImode].insn_code = CODE_FOR_movdi;
  mov_optab->handlers[(int) DFmode].insn_code = CODE_FOR_movdf;
  mov_optab->handlers[(int) SFmode].insn_code = CODE_FOR_movsf;
  extendtab[(int) SImode][(int) HImode][1] = CODE_FOR_zero_extendhisi2;
  extendtab[(int) SImode][(int) QImode][1] = CODE_FOR_zero_extendqisi2;
  extendtab[(int) SImode][(int) HImode][0] = CODE_FOR_extendhisi2;
  extendtab[(int) SImode][(int) QImode][0] = CODE_FOR_extendqisi2;
  movstr_optab[(int) QImode] = CODE_FOR_movstrqi;
  add_optab->handlers[(int) DImode].insn_code = CODE_FOR_adddi3;
  add_optab->handlers[(int) SImode].insn_code = CODE_FOR_addsi3;
  sub_optab->handlers[(int) DImode].insn_code = CODE_FOR_subdi3;
  sub_optab->handlers[(int) SImode].insn_code = CODE_FOR_subsi3;
  smul_optab->handlers[(int) SImode].insn_code = CODE_FOR_mulsi3;
  neg_optab->handlers[(int) SImode].insn_code = CODE_FOR_negsi2;
  and_optab->handlers[(int) SImode].insn_code = CODE_FOR_andsi3;
  ior_optab->handlers[(int) SImode].insn_code = CODE_FOR_iorsi3;
  xor_optab->handlers[(int) SImode].insn_code = CODE_FOR_xorsi3;
  one_cmpl_optab->handlers[(int) SImode].insn_code = CODE_FOR_one_cmplsi2;
  ashl_optab->handlers[(int) SImode].insn_code = CODE_FOR_ashlsi3;
  ashr_optab->handlers[(int) SImode].insn_code = CODE_FOR_ashrsi3;
  lshr_optab->handlers[(int) SImode].insn_code = CODE_FOR_lshrsi3;
  rotr_optab->handlers[(int) SImode].insn_code = CODE_FOR_rotrsi3;
  cmp_optab->handlers[(int) SImode].insn_code = CODE_FOR_cmpsi;
  tst_optab->handlers[(int) SImode].insn_code = CODE_FOR_tstsi;
  bcc_gen_fctn[(int) EQ] = gen_beq;
  bcc_gen_fctn[(int) NE] = gen_bne;
  bcc_gen_fctn[(int) GE] = gen_bge;
  bcc_gen_fctn[(int) LE] = gen_ble;
  bcc_gen_fctn[(int) GT] = gen_bgt;
  bcc_gen_fctn[(int) LT] = gen_blt;
  bcc_gen_fctn[(int) GEU] = gen_bgeu;
  bcc_gen_fctn[(int) LEU] = gen_bleu;
  bcc_gen_fctn[(int) GTU] = gen_bgtu;
  bcc_gen_fctn[(int) LTU] = gen_bltu;
}
