/* Generated automatically by the program `genattr'
from the machine description file `md'.  */

#define HAVE_ATTR_alternative
#define get_attr_alternative(insn) which_alternative
#define HAVE_ATTR_length
extern int get_attr_length ();
extern void init_lengths ();
extern void shorten_branches (rtx);
extern int insn_default_length (rtx);
extern int insn_variable_length_p (rtx);
extern int insn_current_length (rtx);

extern int *insn_addresses;
extern int insn_current_address;

#define HAVE_ATTR_conds
enum attr_conds {CONDS_CHANGED, CONDS_UNCHANGED};
extern enum attr_conds get_attr_conds ();

#define HAVE_ATTR_far_jump
enum attr_far_jump {FAR_JUMP_YES, FAR_JUMP_NO};
extern enum attr_far_jump get_attr_far_jump ();


#define ATTR_FLAG_forward	0x1
#define ATTR_FLAG_backward	0x2
#define ATTR_FLAG_likely	0x4
#define ATTR_FLAG_very_likely	0x8
#define ATTR_FLAG_unlikely	0x10
#define ATTR_FLAG_very_unlikely	0x20
