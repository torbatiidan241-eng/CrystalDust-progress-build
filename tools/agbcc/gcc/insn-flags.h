/* Generated automatically by the program `genflags'
from the machine description file `md'.  */

#define HAVE_movsi 1
#define HAVE_movhi 1
#define HAVE_movqi 1
#define HAVE_movdi 1
#define HAVE_movdf 1
#define HAVE_movsf 1
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_extendhisi2 1
#define HAVE_extendqisi2 1
#define HAVE_extzv 1
#define HAVE_movstrqi 1
#define HAVE_movmem12b 1
#define HAVE_movmem8b 1
#define HAVE_adddi3 1
#define HAVE_addsi3 1
#define HAVE_subdi3 1
#define HAVE_subsi3 1
#define HAVE_mulsi3 1
#define HAVE_negsi2 1
#define HAVE_andsi3 1
#define HAVE_bicsi3 1
#define HAVE_iorsi3 1
#define HAVE_xorsi3 1
#define HAVE_one_cmplsi2 1
#define HAVE_ashlsi3 1
#define HAVE_ashrsi3 1
#define HAVE_lshrsi3 1
#define HAVE_rotrsi3 1
#define HAVE_cmpsi 1
#define HAVE_tstsi 1
#define HAVE_cmnsi 1
#define HAVE_jump 1
#define HAVE_beq 1
#define HAVE_bne 1
#define HAVE_bge 1
#define HAVE_ble 1
#define HAVE_bgt 1
#define HAVE_blt 1
#define HAVE_bgeu 1
#define HAVE_bleu 1
#define HAVE_bgtu 1
#define HAVE_bltu 1
#define HAVE_indirect_jump 1
#define HAVE_tablejump 1
#define HAVE_call 1
#define HAVE_call_value 1
#define HAVE_nop 1
#define HAVE_blockage 1
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_consttable_4 1
#define HAVE_consttable_8 1
#define HAVE_consttable_end 1
#define HAVE_align_4 1

#ifndef NO_MD_PROTOTYPES
extern rtx gen_movsi            (rtx, rtx);
extern rtx gen_movhi            (rtx, rtx);
extern rtx gen_movqi            (rtx, rtx);
extern rtx gen_movdi            (rtx, rtx);
extern rtx gen_movdf            (rtx, rtx);
extern rtx gen_movsf            (rtx, rtx);
extern rtx gen_zero_extendhisi2 (rtx, rtx);
extern rtx gen_zero_extendqisi2 (rtx, rtx);
extern rtx gen_extendhisi2      (rtx, rtx);
extern rtx gen_extendqisi2      (rtx, rtx);
extern rtx gen_extzv            (rtx, rtx, rtx, rtx);
extern rtx gen_movstrqi         (rtx, rtx, rtx, rtx);
extern rtx gen_movmem12b        (rtx, rtx);
extern rtx gen_movmem8b         (rtx, rtx);
extern rtx gen_adddi3           (rtx, rtx, rtx);
extern rtx gen_addsi3           (rtx, rtx, rtx);
extern rtx gen_subdi3           (rtx, rtx, rtx);
extern rtx gen_subsi3           (rtx, rtx, rtx);
extern rtx gen_mulsi3           (rtx, rtx, rtx);
extern rtx gen_negsi2           (rtx, rtx);
extern rtx gen_andsi3           (rtx, rtx, rtx);
extern rtx gen_bicsi3           (rtx, rtx, rtx);
extern rtx gen_iorsi3           (rtx, rtx, rtx);
extern rtx gen_xorsi3           (rtx, rtx, rtx);
extern rtx gen_one_cmplsi2      (rtx, rtx);
extern rtx gen_ashlsi3          (rtx, rtx, rtx);
extern rtx gen_ashrsi3          (rtx, rtx, rtx);
extern rtx gen_lshrsi3          (rtx, rtx, rtx);
extern rtx gen_rotrsi3          (rtx, rtx, rtx);
extern rtx gen_cmpsi            (rtx, rtx);
extern rtx gen_tstsi            (rtx);
extern rtx gen_cmnsi            (rtx, rtx);
extern rtx gen_jump             (rtx);
extern rtx gen_beq              (rtx);
extern rtx gen_bne              (rtx);
extern rtx gen_bge              (rtx);
extern rtx gen_ble              (rtx);
extern rtx gen_bgt              (rtx);
extern rtx gen_blt              (rtx);
extern rtx gen_bgeu             (rtx);
extern rtx gen_bleu             (rtx);
extern rtx gen_bgtu             (rtx);
extern rtx gen_bltu             (rtx);
extern rtx gen_indirect_jump    (rtx);
extern rtx gen_tablejump        (rtx, rtx);
extern rtx gen_nop              (void);
extern rtx gen_blockage         (void);
extern rtx gen_prologue         (void);
extern rtx gen_epilogue         (void);
extern rtx gen_consttable_4     (rtx);
extern rtx gen_consttable_8     (rtx);
extern rtx gen_consttable_end   (void);
extern rtx gen_align_4          (void);

#ifdef MD_CALL_PROTOTYPES
extern rtx gen_call             (rtx, rtx);
extern rtx gen_call_value       (rtx, rtx, rtx);

#else /* !MD_CALL_PROTOTYPES */
extern rtx gen_call ();
extern rtx gen_call_value ();
#endif /* !MD_CALL_PROTOTYPES */

#else  /* NO_MD_PROTOTYPES */
extern rtx gen_movsi ();
extern rtx gen_movhi ();
extern rtx gen_movqi ();
extern rtx gen_movdi ();
extern rtx gen_movdf ();
extern rtx gen_movsf ();
extern rtx gen_zero_extendhisi2 ();
extern rtx gen_zero_extendqisi2 ();
extern rtx gen_extendhisi2 ();
extern rtx gen_extendqisi2 ();
extern rtx gen_extzv ();
extern rtx gen_movstrqi ();
extern rtx gen_movmem12b ();
extern rtx gen_movmem8b ();
extern rtx gen_adddi3 ();
extern rtx gen_addsi3 ();
extern rtx gen_subdi3 ();
extern rtx gen_subsi3 ();
extern rtx gen_mulsi3 ();
extern rtx gen_negsi2 ();
extern rtx gen_andsi3 ();
extern rtx gen_bicsi3 ();
extern rtx gen_iorsi3 ();
extern rtx gen_xorsi3 ();
extern rtx gen_one_cmplsi2 ();
extern rtx gen_ashlsi3 ();
extern rtx gen_ashrsi3 ();
extern rtx gen_lshrsi3 ();
extern rtx gen_rotrsi3 ();
extern rtx gen_cmpsi ();
extern rtx gen_tstsi ();
extern rtx gen_cmnsi ();
extern rtx gen_jump ();
extern rtx gen_beq ();
extern rtx gen_bne ();
extern rtx gen_bge ();
extern rtx gen_ble ();
extern rtx gen_bgt ();
extern rtx gen_blt ();
extern rtx gen_bgeu ();
extern rtx gen_bleu ();
extern rtx gen_bgtu ();
extern rtx gen_bltu ();
extern rtx gen_indirect_jump ();
extern rtx gen_tablejump ();
extern rtx gen_nop ();
extern rtx gen_blockage ();
extern rtx gen_prologue ();
extern rtx gen_epilogue ();
extern rtx gen_consttable_4 ();
extern rtx gen_consttable_8 ();
extern rtx gen_consttable_end ();
extern rtx gen_align_4 ();
extern rtx gen_call ();
extern rtx gen_call_value ();
#endif  /* NO_MD_PROTOTYPES */
