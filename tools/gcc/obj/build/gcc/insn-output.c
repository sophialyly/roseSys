/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "coretypes.h"
#include "tm.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"
#include "target.h"
#include "tm-constrs.h"

static const char * const output_4[] = {
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "#",
};

static const char *
output_5 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 650 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

   static const char * const asms[] = 
   {
     "add\t%0, %0, %2",
     "sub\t%0, %0, #%n2",
     "add\t%0, %1, %2",
     "add\t%0, %0, %2",
     "add\t%0, %0, %2",
     "add\t%0, %1, %2",
     "add\t%0, %1, %2",
     "#",
     "#"
   };
   if ((which_alternative == 2 || which_alternative == 6)
       && GET_CODE (operands[2]) == CONST_INT
       && INTVAL (operands[2]) < 0)
     return "sub\t%0, %1, #%n2";
   return asms[which_alternative];
  
}

static const char * const output_6[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
};

static const char * const output_7[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
};

static const char * const output_9[] = {
  "sub%.\t%0, %1, %2",
  "add%.\t%0, %1, #%n2",
};

static const char * const output_10[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
};

static const char * const output_11[] = {
  "add%.\t%0, %1, %2",
  "sub%.\t%0, %1, #%n2",
};

static const char * const output_12[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
};

static const char * const output_13[] = {
  "cmn%?\t%0, %1",
  "cmp%?\t%0, #%n1",
};

static const char * const output_19[] = {
  "add%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\tadd%d2\t%0, %1, #1",
};

static const char * const output_28[] = {
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "#",
};

static const char * const output_29[] = {
  "sub%.\t%0, %1, %2",
  "rsb%.\t%0, %2, %1",
};

static const char * const output_30[] = {
  "sub%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\tsub%d2\t%0, %1, #1",
};

static const char *
output_33 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1252 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  if (which_alternative < 2)
    return "mov\t%0, %1\n\tmul\t%0, %2";
  else
    return "mul\t%0, %2";
  
}

static const char * const output_34[] = {
  "mul\t%0, %2",
  "mul\t%0, %1",
  "mul\t%0, %1",
};

static const char * const output_67[] = {
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "#",
};

static const char * const output_69[] = {
  "and%.\t%0, %1, %2",
  "bic%.\t%0, %1, #%B2",
};

static const char * const output_70[] = {
  "tst%?\t%0, %1",
  "bic%.\t%2, %0, #%B1",
};

static const char *
output_71 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2045 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  operands[1] = GEN_INT (((1 << INTVAL (operands[1])) - 1)
			 << INTVAL (operands[2]));
  output_asm_insn ("tst%?\t%0, %1", operands);
  return "";
  
}

static const char * const output_79[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_87[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_89[] = {
  "orr%?\t%0, %1, %2",
  "#",
};

static const char * const output_94[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_103[] = {
  "cmp\t%1, %2\n\tmovlt\t%0, %2",
  "cmp\t%1, %2\n\tmovge\t%0, %1\n\tmovlt\t%0, %2",
};

static const char * const output_105[] = {
  "cmp\t%1, %2\n\tmovge\t%0, %2",
  "cmp\t%1, %2\n\tmovlt\t%0, %1\n\tmovge\t%0, %2",
};

static const char * const output_106[] = {
  "cmp\t%1, %2\n\tmovcc\t%0, %2",
  "cmp\t%1, %2\n\tmovcs\t%0, %1",
  "cmp\t%1, %2\n\tmovcs\t%0, %1\n\tmovcc\t%0, %2",
};

static const char * const output_107[] = {
  "cmp\t%1, %2\n\tmovcs\t%0, %2",
  "cmp\t%1, %2\n\tmovcc\t%0, %1",
  "cmp\t%1, %2\n\tmovcc\t%0, %1\n\tmovcs\t%0, %2",
};

static const char *
output_108 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3102 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  operands[3] = gen_rtx_fmt_ee (minmax_code (operands[3]), SImode,
				operands[1], operands[2]);
  output_asm_insn ("cmp\t%1, %2", operands);
  if (TARGET_THUMB2)
    output_asm_insn ("ite\t%d3", operands);
  output_asm_insn ("str%d3\t%1, %0", operands);
  output_asm_insn ("str%D3\t%2, %0", operands);
  return "";
  
}

static const char *
output_109 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3131 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    enum rtx_code code = GET_CODE (operands[4]);
    bool need_else;

    if (which_alternative != 0 || operands[3] != const0_rtx
        || (code != PLUS && code != IOR && code != XOR))
      need_else = true;
    else
      need_else = false;

    operands[5] = gen_rtx_fmt_ee (minmax_code (operands[5]), SImode,
				  operands[2], operands[3]);
    output_asm_insn ("cmp\t%2, %3", operands);
    if (TARGET_THUMB2)
      {
	if (need_else)
	  output_asm_insn ("ite\t%d5", operands);
	else
	  output_asm_insn ("it\t%d5", operands);
      }
    output_asm_insn ("%i4%d5\t%0, %1, %2", operands);
    if (need_else)
      output_asm_insn ("%i4%D5\t%0, %1, %3", operands);
    return "";
  }
}

static const char *
output_117 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3393 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char *
output_118 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3410 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char *
output_119 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3426 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 1);
}

static const char * const output_129[] = {
  "cmp\t%0, #0\n\trsblt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\tsub%?\t%0, %0, %1, asr #31",
};

static const char * const output_131[] = {
  "cmp\t%0, #0\n\trsbgt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\trsb%?\t%0, %0, %1, asr #31",
};

static const char *
output_138 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3919 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, #0";
  
}

static const char * const output_139[] = {
  "and%?\t%Q0, %1, #255\n\tmov%?\t%R0, #0",
  "ldr%(b%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char *
output_140 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3961 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, %Q0, asr #31";
  
}

static const char *
output_141 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4013 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  rtx mem = XEXP (operands[1], 0);

  if (GET_CODE (mem) == CONST)
    mem = XEXP (mem, 0);
    
  if (GET_CODE (mem) == LABEL_REF)
    return "ldr\t%0, %1";
    
  if (GET_CODE (mem) == PLUS)
    {
      rtx a = XEXP (mem, 0);
      rtx b = XEXP (mem, 1);

      /* This can happen due to bugs in reload.  */
      if (GET_CODE (a) == REG && REGNO (a) == SP_REGNUM)
        {
          rtx ops[2];
          ops[0] = operands[0];
          ops[1] = a;
      
          output_asm_insn ("mov	%0, %1", ops);

          XEXP (mem, 0) = operands[0];
       }

      else if (   GET_CODE (a) == LABEL_REF
	       && GET_CODE (b) == CONST_INT)
        return "ldr\t%0, %1";
    }
    
  return "ldrh\t%0, %1";
  
}

static const char *
output_142 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4055 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  rtx mem;

  if (which_alternative == 0)
    return "uxth\t%0, %1";

  mem = XEXP (operands[1], 0);

  if (GET_CODE (mem) == CONST)
    mem = XEXP (mem, 0);
    
  if (GET_CODE (mem) == LABEL_REF)
    return "ldr\t%0, %1";
    
  if (GET_CODE (mem) == PLUS)
    {
      rtx a = XEXP (mem, 0);
      rtx b = XEXP (mem, 1);

      /* This can happen due to bugs in reload.  */
      if (GET_CODE (a) == REG && REGNO (a) == SP_REGNUM)
        {
          rtx ops[2];
          ops[0] = operands[0];
          ops[1] = a;
      
          output_asm_insn ("mov	%0, %1", ops);

          XEXP (mem, 0) = operands[0];
       }

      else if (   GET_CODE (a) == LABEL_REF
	       && GET_CODE (b) == CONST_INT)
        return "ldr\t%0, %1";
    }
    
  return "ldrh\t%0, %1";
  
}

static const char * const output_144[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_147[] = {
  "uxtb\t%0, %1",
  "ldrb\t%0, %1",
};

static const char * const output_149[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_152 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4335 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    rtx ops[4];
    rtx mem = XEXP (operands[1], 0);

    /* This code used to try to use 'V', and fix the address only if it was
       offsettable, but this fails for e.g. REG+48 because 48 is outside the
       range of QImode offsets, and offsettable_address_p does a QImode
       address check.  */
       
    if (GET_CODE (mem) == CONST)
      mem = XEXP (mem, 0);
    
    if (GET_CODE (mem) == LABEL_REF)
      return "ldr\t%0, %1";
    
    if (GET_CODE (mem) == PLUS)
      {
        rtx a = XEXP (mem, 0);
        rtx b = XEXP (mem, 1);

        if (GET_CODE (a) == LABEL_REF
	    && GET_CODE (b) == CONST_INT)
          return "ldr\t%0, %1";

        if (GET_CODE (b) == REG)
          return "ldrsh\t%0, %1";
	  
        ops[1] = a;
        ops[2] = b;
      }
    else
      {
        ops[1] = mem;
        ops[2] = const0_rtx;
      }

    gcc_assert (GET_CODE (ops[1]) == REG);

    ops[0] = operands[0];
    ops[3] = operands[2];
    output_asm_insn ("mov\t%3, %2\n\tldrsh\t%0, [%1, %3]", ops);
    return "";
  }
}

static const char *
output_153 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4396 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    rtx ops[4];
    rtx mem;

    if (which_alternative == 0)
      return "sxth\t%0, %1";

    mem = XEXP (operands[1], 0);

    /* This code used to try to use 'V', and fix the address only if it was
       offsettable, but this fails for e.g. REG+48 because 48 is outside the
       range of QImode offsets, and offsettable_address_p does a QImode
       address check.  */
       
    if (GET_CODE (mem) == CONST)
      mem = XEXP (mem, 0);
    
    if (GET_CODE (mem) == LABEL_REF)
      return "ldr\t%0, %1";
    
    if (GET_CODE (mem) == PLUS)
      {
        rtx a = XEXP (mem, 0);
        rtx b = XEXP (mem, 1);

        if (GET_CODE (a) == LABEL_REF
	    && GET_CODE (b) == CONST_INT)
          return "ldr\t%0, %1";

        if (GET_CODE (b) == REG)
          return "ldrsh\t%0, %1";
	  
        ops[1] = a;
        ops[2] = b;
      }
    else
      {
        ops[1] = mem;
        ops[2] = const0_rtx;
      }
      
    gcc_assert (GET_CODE (ops[1]) == REG);

    ops[0] = operands[0];
    if (reg_mentioned_p (operands[2], ops[1]))
      ops[3] = ops[0];
    else
      ops[3] = operands[2];
    output_asm_insn ("mov\t%3, %2\n\tldrsh\t%0, [%1, %3]", ops);
    return "";
  }
}

static const char * const output_155[] = {
  "sxth%?\t%0, %1",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_159[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char *
output_161 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4630 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    rtx ops[3];
    rtx mem = XEXP (operands[1], 0);
    
    if (GET_CODE (mem) == CONST)
      mem = XEXP (mem, 0);
    
    if (GET_CODE (mem) == LABEL_REF)
      return "ldr\t%0, %1";

    if (GET_CODE (mem) == PLUS
        && GET_CODE (XEXP (mem, 0)) == LABEL_REF)
      return "ldr\t%0, %1";
      
    if (which_alternative == 0)
      return "ldrsb\t%0, %1";
      
    ops[0] = operands[0];
    
    if (GET_CODE (mem) == PLUS)
      {
        rtx a = XEXP (mem, 0);
	rtx b = XEXP (mem, 1);
	
        ops[1] = a;
        ops[2] = b;

        if (GET_CODE (a) == REG)
	  {
	    if (GET_CODE (b) == REG)
              output_asm_insn ("ldrsb\t%0, [%1, %2]", ops);
            else if (REGNO (a) == REGNO (ops[0]))
	      {
                output_asm_insn ("ldrb\t%0, [%1, %2]", ops);
		output_asm_insn ("lsl\t%0, %0, #24", ops);
		output_asm_insn ("asr\t%0, %0, #24", ops);
	      }
	    else
              output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
	  }
	else
          {
	    gcc_assert (GET_CODE (b) == REG);
            if (REGNO (b) == REGNO (ops[0]))
	      {
                output_asm_insn ("ldrb\t%0, [%2, %1]", ops);
		output_asm_insn ("lsl\t%0, %0, #24", ops);
		output_asm_insn ("asr\t%0, %0, #24", ops);
	      }
	    else
              output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
          }
      }
    else if (GET_CODE (mem) == REG && REGNO (ops[0]) == REGNO (mem))
      {
        output_asm_insn ("ldrb\t%0, [%0, #0]", ops);
	output_asm_insn ("lsl\t%0, %0, #24", ops);
	output_asm_insn ("asr\t%0, %0, #24", ops);
      }
    else
      {
        ops[1] = mem;
        ops[2] = const0_rtx;
	
        output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
      }
    return "";
  }
}

static const char *
output_162 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4708 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    rtx ops[3];
    rtx mem;

    if (which_alternative == 0)
      return "sxtb\t%0, %1";

    mem = XEXP (operands[1], 0);
    
    if (GET_CODE (mem) == CONST)
      mem = XEXP (mem, 0);
    
    if (GET_CODE (mem) == LABEL_REF)
      return "ldr\t%0, %1";

    if (GET_CODE (mem) == PLUS
        && GET_CODE (XEXP (mem, 0)) == LABEL_REF)
      return "ldr\t%0, %1";
      
    if (which_alternative == 0)
      return "ldrsb\t%0, %1";
      
    ops[0] = operands[0];
    
    if (GET_CODE (mem) == PLUS)
      {
        rtx a = XEXP (mem, 0);
	rtx b = XEXP (mem, 1);
	
        ops[1] = a;
        ops[2] = b;

        if (GET_CODE (a) == REG)
	  {
	    if (GET_CODE (b) == REG)
              output_asm_insn ("ldrsb\t%0, [%1, %2]", ops);
            else if (REGNO (a) == REGNO (ops[0]))
	      {
                output_asm_insn ("ldrb\t%0, [%1, %2]", ops);
		output_asm_insn ("sxtb\t%0, %0", ops);
	      }
	    else
              output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
	  }
	else
          {
	    gcc_assert (GET_CODE (b) == REG);
            if (REGNO (b) == REGNO (ops[0]))
	      {
                output_asm_insn ("ldrb\t%0, [%2, %1]", ops);
		output_asm_insn ("sxtb\t%0, %0", ops);
	      }
	    else
              output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
          }
      }
    else if (GET_CODE (mem) == REG && REGNO (ops[0]) == REGNO (mem))
      {
        output_asm_insn ("ldrb\t%0, [%0, #0]", ops);
	output_asm_insn ("sxtb\t%0, %0", ops);
      }
    else
      {
        ops[1] = mem;
        ops[2] = const0_rtx;
	
        output_asm_insn ("mov\t%0, %2\n\tldrsb\t%0, [%1, %0]", ops);
      }
    return "";
  }
}

static const char *
output_163 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4888 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands);
    }
  
}

static const char *
output_164 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5007 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0,  %1,  #0\n\tadd\t%H0, %H1, #0";
      return   "add\t%H0, %H1, #0\n\tadd\t%0,  %1,  #0";
    case 1:
      return "mov\t%Q0, %1\n\tmov\t%R0, #0";
    case 2:
      operands[1] = GEN_INT (- INTVAL (operands[1]));
      return "mov\t%Q0, %1\n\tneg\t%Q0, %Q0\n\tasr\t%R0, %Q0, #31";
    case 3:
      return "ldmia\t%1, {%0, %H0}";
    case 4:
      return "stmia\t%0, {%1, %H1}";
    case 5:
      return thumb_load_double_from_address (operands);
    case 6:
      operands[2] = gen_rtx_MEM (SImode,
			     plus_constant (XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 7:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  }
}

static const char * const output_166[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char * const output_167[] = {
  "mov	%0, %1",
  "mov	%0, %1",
  "#",
  "#",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
};

static const char *
output_170 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5274 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				     INTVAL (operands[2]));
  return "add\t%0, %|pc";
  
}

static const char *
output_171 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5289 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_172 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5304 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_173[] = {
  "cmp%?\t%0, #0",
  "sub%.\t%0, %1, #0",
};

static const char *
output_174 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5687 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0: return "add	%0, %1, #0";
    case 2: return "strh	%1, %0";
    case 3: return "mov	%0, %1";
    case 4: return "mov	%0, %1";
    case 5: return "mov	%0, %1";
    default: gcc_unreachable ();
    case 1:
      /* The stack pointer can end up being taken as an index register.
          Catch this case here and deal with it.  */
      if (GET_CODE (XEXP (operands[1], 0)) == PLUS
	  && GET_CODE (XEXP (XEXP (operands[1], 0), 0)) == REG
	  && REGNO    (XEXP (XEXP (operands[1], 0), 0)) == SP_REGNUM)
        {
	  rtx ops[2];
          ops[0] = operands[0];
          ops[1] = XEXP (XEXP (operands[1], 0), 0);
      
          output_asm_insn ("mov	%0, %1", ops);

          XEXP (XEXP (operands[1], 0), 0) = operands[0];
    
	}
      return "ldrh	%0, %1";
    }
}

static const char * const output_175[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_176[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_177[] = {
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
};

static const char * const output_178[] = {
  "add\t%0, %1, #0",
  "ldrb\t%0, %1",
  "strb\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_179 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5980 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldr%(h%)\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "str%(h%)\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

	REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_180 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6025 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 1:
      {
	rtx addr;
	gcc_assert (GET_CODE(operands[1]) == MEM);
	addr = XEXP (operands[1], 0);
	if (GET_CODE (addr) == LABEL_REF
	    || (GET_CODE (addr) == CONST
		&& GET_CODE (XEXP (addr, 0)) == PLUS
		&& GET_CODE (XEXP (XEXP (addr, 0), 0)) == LABEL_REF
		&& GET_CODE (XEXP (XEXP (addr, 0), 1)) == CONST_INT))
	  {
	    /* Constant pool entry.  */
	    return "ldr\t%0, %1";
	  }
	return "ldrh\t%0, %1";
      }
    case 2: return "strh\t%1, %0";
    default: return "mov\t%0, %1";
    }
  
}

static const char * const output_181[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_182[] = {
  "add\t%0, %1, #0",
  "ldmia\t%1, {%0}",
  "stmia\t%0, {%1}",
  "ldr\t%0, %1",
  "str\t%1, %0",
  "mov\t%0, %1",
  "mov\t%0, %1",
};

static const char *
output_183 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6200 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands);
    }
  
}

static const char *
output_184 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6227 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    default:
    case 0:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "add\t%0, %1, #0\n\tadd\t%H0, %H1, #0";
      return "add\t%H0, %H1, #0\n\tadd\t%0, %1, #0";
    case 1:
      return "ldmia\t%1, {%0, %H0}";
    case 2:
      return "stmia\t%0, {%1, %H1}";
    case 3:
      return thumb_load_double_from_address (operands);
    case 4:
      operands[2] = gen_rtx_MEM (SImode,
				 plus_constant (XEXP (operands[0], 0), 4));
      output_asm_insn ("str\t%1, %0\n\tstr\t%H1, %2", operands);
      return "";
    case 5:
      if (REGNO (operands[1]) == REGNO (operands[0]) + 1)
	return "mov\t%0, %1\n\tmov\t%H0, %H1";
      return "mov\t%H0, %H1\n\tmov\t%0, %1";
    }
  
}

static const char *
output_199 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6597 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
 return thumb_output_move_mem_multiple (3, operands);
}

static const char *
output_200 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6616 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
 return thumb_output_move_mem_multiple (2, operands);
}

static const char *
output_201 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6714 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  output_asm_insn ("cmp\t%1, %2", operands);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_202 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6750 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  output_asm_insn ("add\t%0, %1, #%n2", operands);

  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_203 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6788 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
{
  if (which_alternative == 0)
    output_asm_insn ("cmp\t%0, #0", operands);
  else if (which_alternative == 1)
    output_asm_insn ("sub\t%0, %1, #0", operands);
  else
    {
      output_asm_insn ("cmp\t%1, #0", operands);
      if (which_alternative == 2)
	output_asm_insn ("mov\t%0, %1", operands);
      else
	output_asm_insn ("str\t%1, %0", operands);
    }
  switch (get_attr_length (insn) - ((which_alternative > 1) ? 2 : 0))
    {
    case 4:  return "b%d3\t%l2";
    case 6:  return "b%D3\t.LCB%=\n\tb\t%l2\t%@long jump\n.LCB%=:";
    default: return "b%D3\t.LCB%=\n\tbl\t%l2\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_204 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6888 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  output_asm_insn ("cmn\t%1, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char *
output_205 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6926 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - 1 - INTVAL (operands[2]));

  output_asm_insn ("lsl\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_206 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 6970 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
  rtx op[3];
  op[0] = operands[4];
  op[1] = operands[1];
  op[2] = GEN_INT (32 - INTVAL (operands[2]));

  output_asm_insn ("lsl\t%0, %1, %2", op);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_207 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7012 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
  output_asm_insn ("tst\t%0, %1", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d3\t%l2";
    case 6:  return "b%D3\t.LCB%=\n\tb\t%l2\t%@long jump\n.LCB%=:";
    default: return "b%D3\t.LCB%=\n\tbl\t%l2\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_208 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7052 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
  if (which_alternative == 0)
    output_asm_insn ("and\t%0, %3", operands);
  else if (which_alternative == 1)
    {
      output_asm_insn ("and\t%1, %3", operands);
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("and\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_209 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7117 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
  output_asm_insn ("orr\t%0, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_210 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7157 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
  if (which_alternative == 0)
    output_asm_insn ("orr\t%0, %3", operands);
  else if (which_alternative == 1)
    {
      output_asm_insn ("orr\t%1, %3", operands);
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("orr\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_211 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7222 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
  output_asm_insn ("eor\t%0, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_212 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7262 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
  if (which_alternative == 0)
    output_asm_insn ("eor\t%0, %3", operands);
  else if (which_alternative == 1)
    {
      output_asm_insn ("eor\t%1, %3", operands);
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("eor\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_213 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7327 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
  output_asm_insn ("bic\t%0, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d4\t%l3";
    case 6:  return "b%D4\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D4\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_214 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7367 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
  if (which_alternative == 0)
    output_asm_insn ("bic\t%0, %3", operands);
  else if (which_alternative <= 2)
    {
      output_asm_insn ("bic\t%1, %3", operands);
      /* It's ok if OP0 is a lo-reg, even though the mov will set the
	 conditions again, since we're only testing for equality.  */
      output_asm_insn ("mov\t%0, %1", operands);
    }
  else
    {
      output_asm_insn ("bic\t%1, %3", operands);
      output_asm_insn ("str\t%1, %0", operands);
    }

  switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
    {
    case 4:  return "b%d5\t%l4";
    case 6:  return "b%D5\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
    default: return "b%D5\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
    }
  }
}

static const char *
output_215 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7434 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

   {
     rtx cond[2];
     cond[0] = gen_rtx_fmt_ee ((GET_CODE (operands[3]) == NE
				? GEU : LTU),
			       VOIDmode, operands[2], const1_rtx);
     cond[1] = operands[4];

     if (which_alternative == 0)
       output_asm_insn ("sub\t%0, %2, #1", operands);
     else if (which_alternative == 1)
       {
	 /* We must provide an alternative for a hi reg because reload 
	    cannot handle output reloads on a jump instruction, but we
	    can't subtract into that.  Fortunately a mov from lo to hi
	    does not clobber the condition codes.  */
	 output_asm_insn ("sub\t%1, %2, #1", operands);
	 output_asm_insn ("mov\t%0, %1", operands);
       }
     else
       {
	 /* Similarly, but the target is memory.  */
	 output_asm_insn ("sub\t%1, %2, #1", operands);
	 output_asm_insn ("str\t%1, %0", operands);
       }

     switch (get_attr_length (insn) - (which_alternative ? 2 : 0))
       {
	 case 4:
	   output_asm_insn ("b%d0\t%l1", cond);
	   return "";
	 case 6:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "b\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   output_asm_insn ("b%D0\t.LCB%=", cond);
	   return "bl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_216 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7545 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

   {
     rtx cond[3];

     
     cond[0] = (which_alternative < 3) ? operands[0] : operands[1];
     cond[1] = operands[2];
     cond[2] = operands[3];

     if (GET_CODE (cond[2]) == CONST_INT && INTVAL (cond[2]) < 0)
       output_asm_insn ("sub\t%0, %1, #%n2", cond);
     else
       output_asm_insn ("add\t%0, %1, %2", cond);

     if (which_alternative >= 3
	 && which_alternative < 4)
       output_asm_insn ("mov\t%0, %1", operands);
     else if (which_alternative >= 4)
       output_asm_insn ("str\t%1, %0", operands);

     switch (get_attr_length (insn) - ((which_alternative >= 3) ? 2 : 0))
       {
	 case 4:
	   return "b%d4\t%l5";
	 case 6:
	   return "b%D4\t.LCB%=\n\tb\t%l5\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D4\t.LCB%=\n\tbl\t%l5\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_217 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7624 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

   {
     switch (which_alternative)
       {
       case 0:
	 output_asm_insn ("cmp\t%1, #%n2", operands);
	 break;
       case 1:
	 output_asm_insn ("cmn\t%1, %2", operands);
	 break;
       case 2:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("sub\t%0, %1, %2", operands);
	 else
	   output_asm_insn ("add\t%0, %1, %2", operands);
	 break;
       case 3:
	 if (INTVAL (operands[2]) < 0)
	   output_asm_insn ("sub\t%0, %0, %2", operands);
	 else
	   output_asm_insn ("add\t%0, %0, %2", operands);
	 break;
       }

     switch (get_attr_length (insn))
       {
	 case 4:
	   return "b%d3\t%l4";
	 case 6:
	   return "b%D3\t.LCB%=\n\tb\t%l4\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D3\t.LCB%=\n\tbl\t%l4\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_218 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7694 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

   {
     if (which_alternative == 0)
       output_asm_insn ("sub\t%0, %2, %3", operands);
     else if (which_alternative == 1)
       {
	 /* We must provide an alternative for a hi reg because reload 
	    cannot handle output reloads on a jump instruction, but we
	    can't subtract into that.  Fortunately a mov from lo to hi
	    does not clobber the condition codes.  */
	 output_asm_insn ("sub\t%1, %2, %3", operands);
	 output_asm_insn ("mov\t%0, %1", operands);
       }
     else
       {
	 /* Similarly, but the target is memory.  */
	 output_asm_insn ("sub\t%1, %2, %3", operands);
	 output_asm_insn ("str\t%1, %0", operands);
       }

     switch (get_attr_length (insn) - ((which_alternative != 0) ? 2 : 0))
       {
	 case 4:
	   return "b%d4\t%l5";
	 case 6:
	   return "b%D4\t.LCB%=\n\tb\t%l5\t%@long jump\n.LCB%=:";
	 default:
	   return "b%D4\t.LCB%=\n\tbl\t%l5\t%@far jump\n.LCB%=:";
       }
   }
  
}

static const char *
output_219 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7771 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  output_asm_insn ("cmp\t%1, %2", operands);
  switch (get_attr_length (insn))
    {
    case 4:  return "b%d0\t%l3";
    case 6:  return "b%D0\t.LCB%=\n\tb\t%l3\t%@long jump\n.LCB%=:";
    default: return "b%D0\t.LCB%=\n\tbl\t%l3\t%@far jump\n.LCB%=:";
    }
  
}

static const char * const output_220[] = {
  "cmp%?\t%0, %1",
  "cmn%?\t%0, #%n1",
};

static const char *
output_228 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7927 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%d1\t%l0";
  
}

static const char *
output_229 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 7946 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
    {
      arm_ccfsm_state += 2;
      return "";
    }
  return "b%D1\t%l0";
  
}

static const char * const output_233[] = {
  "neg\t%0, %1\n\tadc\t%0, %0, %1",
  "neg\t%2, %1\n\tadc\t%0, %1, %2",
};

static const char * const output_238[] = {
  "mov%D3\t%0, %2",
  "mvn%D3\t%0, #%B2",
  "mov%d3\t%0, %1",
  "mvn%d3\t%0, #%B1",
  "mov%d3\t%0, %1\n\tmov%D3\t%0, %2",
  "mov%d3\t%0, %1\n\tmvn%D3\t%0, #%B2",
  "mvn%d3\t%0, #%B1\n\tmov%D3\t%0, %2",
  "mvn%d3\t%0, #%B1\n\tmvn%D3\t%0, #%B2",
};

static const char * const output_239[] = {
  "mov%D3\t%0, %2",
  "mov%d3\t%0, %1",
};

static const char *
output_240 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8365 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_241 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8382 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  if (get_attr_length (insn) == 2)
    return "b\t%l0";
  return "bl\t%l0\t%@ far jump";
  
}

static const char *
output_243 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8451 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return output_call (operands);
  
}

static const char *
output_244 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8470 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return output_call_mem (operands);
  
}

static const char *
output_246 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8494 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[0]);
    else if (operands[1] == const0_rtx)
      return "bl\t%__interwork_call_via_%0";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%0";
    else
      return "bl\t%__interwork_r11_call_via_%0";
  }
}

static const char *
output_248 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8564 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return output_call (&operands[1]);
  
}

static const char *
output_249 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8580 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return output_call_mem (&operands[1]);
  
}

static const char *
output_251 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8606 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    if (!TARGET_CALLER_INTERWORKING)
      return thumb_call_via_reg (operands[1]);
    else if (operands[2] == const0_rtx)
      return "bl\t%__interwork_call_via_%1";
    else if (frame_pointer_needed)
      return "bl\t%__interwork_r7_call_via_%1";
    else
      return "bl\t%__interwork_r11_call_via_%1";
  }
}

static const char *
output_252 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8631 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    return NEED_PLT_RELOC ? "bl%?\t%a0(PLT)" : "bl%?\t%a0";
  }
}

static const char *
output_253 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8647 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    return NEED_PLT_RELOC ? "bl%?\t%a1(PLT)" : "bl%?\t%a1";
  }
}

static const char *
output_256 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8715 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return NEED_PLT_RELOC ? "b%?\t%a0(PLT)" : "b%?\t%a0";
  
}

static const char *
output_257 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8728 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return NEED_PLT_RELOC ? "b%?\t%a1(PLT)" : "b%?\t%a1";
  
}

static const char *
output_258 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8738 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, TRUE, FALSE);
  }
}

static const char *
output_259 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8759 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], TRUE, FALSE);
  }
}

static const char *
output_260 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8780 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (operands[0], TRUE, TRUE);
  }
}

static const char *
output_263 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9002 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    if (flag_pic)
      return "cmp\t%0, %1\n\taddls\t%|pc, %|pc, %0, asl #2\n\tb\t%l3";
    return   "cmp\t%0, %1\n\tldrls\t%|pc, [%|pc, %0, asl #2]\n\tb\t%l3";
  
}

static const char *
output_264 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9038 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
 return thumb1_output_casesi(operands);
}

static const char *
output_268 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9095 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  if (TARGET_UNIFIED_ASM)
    return "nop";
  if (TARGET_ARM)
    return "mov%?\t%|r0, %|r0\t%@ nop";
  return  "mov\tr8, r8";
  
}

static const char * const output_276[] = {
  "orr%d2\t%0, %1, #1",
  "mov%D2\t%0, %1\n\torr%d2\t%0, %1, #1",
};

static const char *
output_277 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9269 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    if (operands[3] == const0_rtx)
      {
	if (GET_CODE (operands[1]) == LT)
	  return "mov\t%0, %2, lsr #31";

	if (GET_CODE (operands[1]) == GE)
	  return "mvn\t%0, %2\n\tmov\t%0, %0, lsr #31";

	if (GET_CODE (operands[1]) == EQ)
	  return "rsbs\t%0, %2, #1\n\tmovcc\t%0, #0";
      }

    if (GET_CODE (operands[1]) == NE)
      {
        if (which_alternative == 1)
	  return "adds\t%0, %2, #%n3\n\tmovne\t%0, #1";
        return "subs\t%0, %2, %3\n\tmovne\t%0, #1";
      }
    if (which_alternative == 1)
      output_asm_insn ("cmn\t%2, #%n3", operands);
    else
      output_asm_insn ("cmp\t%2, %3", operands);
    return "mov%D1\t%0, #0\n\tmov%d1\t%0, #1";
  
}

static const char *
output_278 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9307 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("mov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("mov%d4\t%0, %1", operands);
        return "";
      }
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_279 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9335 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      output_asm_insn ("mov%D4\t%0, #0", operands);
    else if (GET_CODE (operands[5]) == MINUS)
      output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
    else if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_280 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9360 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_281 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9384 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    static const char * const opcodes[4][2] =
    {
      {"cmp\t%2, %3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmp%d4\t%2, %3"},
      {"cmp\t%2, %3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmp%d4\t%2, %3"},
      {"cmn\t%2, #%n3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmn%d4\t%2, #%n3"},
      {"cmn\t%2, #%n3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmn%d4\t%2, #%n3"}
    };
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    return opcodes[which_alternative][swap];
  }
}

static const char *
output_282 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9419 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    static const char * const opcodes[4][2] =
    {
      {"cmp\t%0, %1\n\tcmp%d4\t%2, %3",
       "cmp\t%2, %3\n\tcmp%D5\t%0, %1"},
      {"cmn\t%0, #%n1\n\tcmp%d4\t%2, %3",
       "cmp\t%2, %3\n\tcmn%D5\t%0, #%n1"},
      {"cmp\t%0, %1\n\tcmn%d4\t%2, #%n3",
       "cmn\t%2, #%n3\n\tcmp%D5\t%0, %1"},
      {"cmn\t%0, #%n1\n\tcmn%d4\t%2, #%n3",
       "cmn\t%2, #%n3\n\tcmn%D5\t%0, #%n1"}
    };
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]),
			      reverse_condition (GET_CODE (operands[4])));

    return opcodes[which_alternative][swap];
  }
}

static const char *
output_283 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9454 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    static const char *const opcodes[4][2] =
    {
      {"cmp\t%2, %3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmp%d4\t%2, %3"},
      {"cmp\t%2, %3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmp%d4\t%2, %3"},
      {"cmn\t%2, #%n3\n\tcmp%d5\t%0, %1",
       "cmp\t%0, %1\n\tcmn%d4\t%2, #%n3"},
      {"cmn\t%2, #%n3\n\tcmn%d5\t%0, #%n1",
       "cmn\t%0, #%n1\n\tcmn%d4\t%2, #%n3"}
    };
    int swap =
      comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

    return opcodes[which_alternative][swap];
  }
}

static const char *
output_284 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9489 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

{
  static const char *const opcodes[4][2] =
  {
    {"cmp\t%0, %1\n\tcmp%D4\t%2, %3",
     "cmp\t%2, %3\n\tcmp%D5\t%0, %1"},
    {"cmn\t%0, #%n1\n\tcmp%D4\t%2, %3",
     "cmp\t%2, %3\n\tcmn%D5\t%0, #%n1"},
    {"cmp\t%0, %1\n\tcmn%D4\t%2, #%n3",
     "cmn\t%2, #%n3\n\tcmp%D5\t%0, %1"},
    {"cmn\t%0, #%n1\n\tcmn%D4\t%2, #%n3",
     "cmn\t%2, #%n3\n\tcmn%D5\t%0, #%n1"}
  };
  int swap =
    comparison_dominates_p (GET_CODE (operands[5]), GET_CODE (operands[4]));

  return opcodes[which_alternative][swap];
}

}

static const char *
output_290 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9706 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  if (GET_CODE (operands[3]) == LT && operands[2] == const0_rtx)
    return "mov\t%0, %1, asr #31";

  if (GET_CODE (operands[3]) == NE)
    return "subs\t%0, %1, %2\n\tmvnne\t%0, #0";

  output_asm_insn ("cmp\t%1, %2", operands);
  output_asm_insn ("mov%D3\t%0, #0", operands);
  return "mvn%d3\t%0, #0";
  
}

static const char *
output_291 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9731 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && GET_CODE (operands[1]) == REG)
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && GET_CODE (operands[2]) == REG)
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && GET_CODE (operands[1]) == REG)
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && GET_CODE (operands[2]) == REG)
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (GET_CODE (operands[4]) == CONST_INT
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  if (which_alternative != 0)
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_293[] = {
  "add%d4\t%0, %2, %3",
  "sub%d4\t%0, %2, #%n3",
  "add%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
  "sub%d4\t%0, %2, #%n3\n\tmov%D4\t%0, %1",
};

static const char * const output_295[] = {
  "add%D4\t%0, %2, %3",
  "sub%D4\t%0, %2, #%n3",
  "add%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
  "sub%D4\t%0, %2, #%n3\n\tmov%d4\t%0, %1",
};

static const char *
output_298 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9903 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions.  */
  if (operands[3] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && GET_CODE (operands[5]) == REG
      && GET_CODE (operands[1]) == REG 
      && REGNO (operands[1]) == REGNO (operands[4])
      && REGNO (operands[4]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == LT)
	return "and\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
      else if (GET_CODE (operands[6]) == GE)
	return "bic\t%0, %5, %2, asr #31\n\t%I7\t%0, %4, %0";
    }
  if (GET_CODE (operands[3]) == CONST_INT
      && !const_ok_for_arm (INTVAL (operands[3])))
    output_asm_insn ("cmn\t%2, #%n3", operands);
  else
    output_asm_insn ("cmp\t%2, %3", operands);
  output_asm_insn ("%I7%d6\t%0, %4, %5", operands);
  if (which_alternative != 0)
    return "mov%D6\t%0, %1";
  return "";
  
}

static const char * const output_299[] = {
  "%I5%d4\t%0, %2, %3",
  "%I5%d4\t%0, %2, %3\n\tmov%D4\t%0, %1",
};

static const char *
output_300 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 9961 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  /* If we have an operation where (op x 0) is the identity operation and
     the conditional operator is LT or GE and we are comparing against zero and
     everything is in registers then we can do this in two instructions */
  if (operands[5] == const0_rtx
      && GET_CODE (operands[7]) != AND
      && GET_CODE (operands[3]) == REG
      && GET_CODE (operands[1]) == REG 
      && REGNO (operands[1]) == REGNO (operands[2])
      && REGNO (operands[2]) != REGNO (operands[0]))
    {
      if (GET_CODE (operands[6]) == GE)
	return "and\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
      else if (GET_CODE (operands[6]) == LT)
	return "bic\t%0, %3, %4, asr #31\n\t%I7\t%0, %2, %0";
    }

  if (GET_CODE (operands[5]) == CONST_INT
      && !const_ok_for_arm (INTVAL (operands[5])))
    output_asm_insn ("cmn\t%4, #%n5", operands);
  else
    output_asm_insn ("cmp\t%4, %5", operands);

  if (which_alternative != 0)
    output_asm_insn ("mov%d6\t%0, %1", operands);
  return "%I7%D6\t%0, %2, %3";
  
}

static const char * const output_301[] = {
  "%I5%D4\t%0, %2, %3",
  "%I5%D4\t%0, %2, %3\n\tmov%d4\t%0, %1",
};

static const char * const output_303[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
  "mvn%d4\t%0, #%B1\n\tmvn%D4\t%0, %2",
};

static const char * const output_305[] = {
  "mvn%d4\t%0, %2",
  "mov%D4\t%0, %1\n\tmvn%d4\t%0, %2",
  "mvn%D4\t%0, #%B1\n\tmvn%d4\t%0, %2",
};

static const char * const output_307[] = {
  "mov%d5\t%0, %2%S4",
  "mov%D5\t%0, %1\n\tmov%d5\t%0, %2%S4",
  "mvn%D5\t%0, #%B1\n\tmov%d5\t%0, %2%S4",
};

static const char * const output_309[] = {
  "mov%D5\t%0, %2%S4",
  "mov%d5\t%0, %1\n\tmov%D5\t%0, %2%S4",
  "mvn%d5\t%0, #%B1\n\tmov%D5\t%0, %2%S4",
};

static const char * const output_317[] = {
  "rsb%d4\t%0, %2, #0",
  "mov%D4\t%0, %1\n\trsb%d4\t%0, %2, #0",
  "mvn%D4\t%0, #%B1\n\trsb%d4\t%0, %2, #0",
};

static const char * const output_319[] = {
  "rsb%D4\t%0, %2, #0",
  "mov%d4\t%0, %1\n\trsb%D4\t%0, %2, #0",
  "mvn%d4\t%0, #%B1\n\trsb%D4\t%0, %2, #0",
};

static const char *
output_320 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10327 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldm%(ib%)\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char *
output_321 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10596 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  if (use_return_insn (FALSE, next_nonnote_insn (insn)))
    return output_return_instruction (const_true_rtx, FALSE, FALSE);
  return arm_output_epilogue (next_nonnote_insn (insn));
  
}

static const char *
output_322 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10613 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  if (TARGET_32BIT)
    return arm_output_epilogue (NULL);
  else /* TARGET_THUMB1 */
    return thumb_unexpanded_epilogue ();
  
}

static const char * const output_323[] = {
  "mvn%D4\t%0, %2",
  "mov%d4\t%0, %1\n\tmvn%D4\t%0, %2",
};

static const char *
output_324 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10795 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("ands\t%0, %1, %2", operands);
    return "mvnne\t%0, #0";
  
}

static const char *
output_325 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10812 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    operands[2] = GEN_INT (1 << INTVAL (operands[2]));
    output_asm_insn ("tst\t%1, %2", operands);
    output_asm_insn ("mvneq\t%0, #0", operands);
    return "movne\t%0, #0";
  
}

static const char *
output_326 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10832 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    int num_saves = XVECLEN (operands[2], 0);
     
    /* For the StrongARM at least it is faster to
       use STR to store only a single register.
       In Thumb mode always use push, and the assembler will pick
       something appropriate.  */
    if (num_saves == 1 && TARGET_ARM)
      output_asm_insn ("str\t%1, [%m0, #-4]!", operands);
    else
      {
	int i;
	char pattern[100];

	if (TARGET_ARM)
	    strcpy (pattern, "stmfd\t%m0!, {%1");
	else
	    strcpy (pattern, "push\t{%1");

	for (i = 1; i < num_saves; i++)
	  {
	    strcat (pattern, ", %|");
	    strcat (pattern,
		    reg_names[REGNO (XEXP (XVECEXP (operands[2], 0, i), 0))]);
	  }

	strcat (pattern, "}");
	output_asm_insn (pattern, operands);
      }

    return "";
  }
}

static const char *
output_328 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10885 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    char pattern[100];

    sprintf (pattern, "sfmfd\t%%1, %d, [%%m0]!", XVECLEN (operands[2], 0));
    output_asm_insn (pattern, operands);
    return "";
  }
}

static const char *
output_329 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10901 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  assemble_align (32);
  return "";
  
}

static const char *
output_330 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10910 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  assemble_align (64);
  return "";
  
}

static const char *
output_331 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10919 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  making_const_table = FALSE;
  return "";
  
}

static const char *
output_332 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10928 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  making_const_table = TRUE;
  assemble_integer (operands[0], 1, BITS_PER_WORD, 1);
  assemble_zeros (3);
  return "";
  
}

static const char *
output_333 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10940 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  making_const_table = TRUE;
  gcc_assert (GET_MODE_CLASS (GET_MODE (operands[0])) != MODE_FLOAT);
  assemble_integer (operands[0], 2, BITS_PER_WORD, 1);
  assemble_zeros (2);
  return "";
  
}

static const char *
output_334 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10953 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    rtx x = operands[0];
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (x)))
      {
      case MODE_FLOAT:
 	if (GET_MODE (x) == HFmode)
 	  arm_emit_fp16_const (x);
 	else
 	  {
 	    REAL_VALUE_TYPE r;
 	    REAL_VALUE_FROM_CONST_DOUBLE (r, x);
 	    assemble_real (r, GET_MODE (x), BITS_PER_WORD);
 	  }
 	break;
      default:
	/* XXX: Sometimes gcc does something really dumb and ends up with
	   a HIGH in a constant pool entry, usually because it's trying to
	   load into a VFP register.  We know this will always be used in
	   combination with a LO_SUM which ignores the high bits, so just
	   strip off the HIGH.  */
	if (GET_CODE (x) == HIGH)
	  x = XEXP (x, 0);
        assemble_integer (x, 4, BITS_PER_WORD, 1);
	mark_symbol_refs_as_used (x);
        break;
      }
    return "";
  }
}

static const char *
output_335 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10989 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
          REAL_VALUE_TYPE r;
          REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
          assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
          break;
        }
      default:
        assemble_integer (operands[0], 8, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char *
output_336 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 11013 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    making_const_table = TRUE;
    switch (GET_MODE_CLASS (GET_MODE (operands[0])))
      {
       case MODE_FLOAT:
        {
          REAL_VALUE_TYPE r;
          REAL_VALUE_FROM_CONST_DOUBLE (r, operands[0]);
          assemble_real (r, GET_MODE (operands[0]), BITS_PER_WORD);
          break;
        }
      default:
        assemble_integer (operands[0], 16, BITS_PER_WORD, 1);
        break;
      }
    return "";
  }
}

static const char * const output_349[] = {
  "adf%?s\t%0, %1, %2",
  "suf%?s\t%0, %1, #%N2",
};

static const char * const output_350[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_351[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_354[] = {
  "suf%?s\t%0, %1, %2",
  "rsf%?s\t%0, %2, %1",
};

static const char * const output_355[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_357[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_364[] = {
  "fdv%?s\t%0, %1, %2",
  "frd%?s\t%0, %2, %1",
};

static const char * const output_365[] = {
  "dvf%?d\t%0, %1, %2",
  "rdf%?d\t%0, %2, %1",
};

static const char * const output_389[] = {
  "mvf%?s\t%0, %1",
  "mnf%?s\t%0, #%N1",
  "ldf%?s\t%0, %1",
  "stf%?s\t%1, %0",
  "str%?\t%1, [%|sp, #-4]!\n\tldf%?s\t%0, [%|sp], #4",
  "stf%?s\t%1, [%|sp, #-4]!\n\tldr%?\t%0, [%|sp], #4",
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_390 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 562 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"

  {
  switch (which_alternative)
    {
    default:
    case 0: return "ldm%(ia%)\t%m1, %M0\t%@ double";
    case 1: return "stm%(ia%)\t%m0, %M1\t%@ double";
    case 2: return "#";
    case 3: case 4: return output_move_double (operands);
    case 5: return "mvf%?d\t%0, %1";
    case 6: return "mnf%?d\t%0, #%N1";
    case 7: return "ldf%?d\t%0, %1";
    case 8: return "stf%?d\t%1, %0";
    case 9: return output_mov_double_fpa_from_arm (operands);
    case 10: return output_mov_double_arm_from_fpa (operands);
    }
  }
  
}

static const char *
output_391 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 597 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"

  switch (which_alternative)
    {
    default:
    case 0: return "mvf%?e\t%0, %1";
    case 1: if (TARGET_FPA_EMU2)
	      return "ldf%?e\t%0, %1";
	    return "lfm%?\t%0, 1, %1";
    case 2: if (TARGET_FPA_EMU2)
	      return "stf%?e\t%1, %0";
	    return "sfm%?\t%1, 1, %0";
    }
  
}

static const char * const output_392[] = {
  "mvf%?s\t%0, %1",
  "mnf%?s\t%0, #%N1",
  "ldf%?s\t%0, %1",
  "stf%?s\t%1, %0",
  "str%?\t%1, [%|sp, #-4]!\n\tldf%?s\t%0, [%|sp], #4",
  "stf%?s\t%1, [%|sp, #-4]!\n\tldr%?\t%0, [%|sp], #4",
  "mov%?\t%0, %1 @bar",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_393 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 653 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"

  {
  switch (which_alternative)
    {
    default:
    case 0: return "ldm%(ia%)\t%m1, %M0\t%@ double";
    case 1: return "stm%(ia%)\t%m0, %M1\t%@ double";
    case 2: case 3: case 4: return output_move_double (operands);
    case 5: return "mvf%?d\t%0, %1";
    case 6: return "mnf%?d\t%0, #%N1";
    case 7: return "ldf%?d\t%0, %1";
    case 8: return "stf%?d\t%1, %0";
    case 9: return output_mov_double_fpa_from_arm (operands);
    case 10: return output_mov_double_arm_from_fpa (operands);
    }
  }
  
}

static const char *
output_394 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 687 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"

  switch (which_alternative)
    {
    default:
    case 0: return "mvf%?e\t%0, %1";
    case 1: return "mnf%?e\t%0, #%N1";
    case 2: return "ldf%?e\t%0, %1";
    case 3: return "stf%?e\t%1, %0";
    case 4: return output_mov_long_double_fpa_from_arm (operands);
    case 5: return output_mov_long_double_arm_from_fpa (operands);
    case 6: return output_mov_long_double_arm_from_arm (operands);
    }
  
}

static const char * const output_395[] = {
  "cmf%?\t%0, %1",
  "cnf%?\t%0, #%N1",
};

static const char * const output_396[] = {
  "cmf%?\t%0, %1",
  "cnf%?\t%0, #%N1",
};

static const char * const output_397[] = {
  "cmf%?\t%0, %1",
  "cnf%?\t%0, #%N1",
};

static const char * const output_399[] = {
  "cmf%?e\t%0, %1",
  "cnf%?e\t%0, #%N1",
};

static const char * const output_400[] = {
  "cmf%?e\t%0, %1",
  "cnf%?e\t%0, #%N1",
};

static const char * const output_401[] = {
  "cmf%?e\t%0, %1",
  "cnf%?e\t%0, #%N1",
};

static const char * const output_403[] = {
  "mvf%D3s\t%0, %2",
  "mnf%D3s\t%0, #%N2",
  "mvf%d3s\t%0, %1",
  "mnf%d3s\t%0, #%N1",
  "mvf%d3s\t%0, %1\n\tmvf%D3s\t%0, %2",
  "mvf%d3s\t%0, %1\n\tmnf%D3s\t%0, #%N2",
  "mnf%d3s\t%0, #%N1\n\tmvf%D3s\t%0, %2",
  "mnf%d3s\t%0, #%N1\n\tmnf%D3s\t%0, #%N2",
};

static const char * const output_404[] = {
  "mvf%D3d\t%0, %2",
  "mnf%D3d\t%0, #%N2",
  "mvf%d3d\t%0, %1",
  "mnf%d3d\t%0, #%N1",
  "mvf%d3d\t%0, %1\n\tmvf%D3d\t%0, %2",
  "mvf%d3d\t%0, %1\n\tmnf%D3d\t%0, #%N2",
  "mnf%d3d\t%0, #%N1\n\tmvf%D3d\t%0, %2",
  "mnf%d3d\t%0, #%N1\n\tmnf%D3d\t%0, #%N2",
};

static const char * const output_405[] = {
  "it\t%D3\n\tmvf%D3s\t%0, %2",
  "it\t%D3\n\tmnf%D3s\t%0, #%N2",
  "it\t%d3\n\tmvf%d3s\t%0, %1",
  "it\t%d3\n\tmnf%d3s\t%0, #%N1",
  "ite\t%d3\n\tmvf%d3s\t%0, %1\n\tmvf%D3s\t%0, %2",
  "ite\t%d3\n\tmvf%d3s\t%0, %1\n\tmnf%D3s\t%0, #%N2",
  "ite\t%d3\n\tmnf%d3s\t%0, #%N1\n\tmvf%D3s\t%0, %2",
  "ite\t%d3\n\tmnf%d3s\t%0, #%N1\n\tmnf%D3s\t%0, #%N2",
};

static const char * const output_406[] = {
  "it\t%D3\n\tmvf%D3d\t%0, %2",
  "it\t%D3\n\tmnf%D3d\t%0, #%N2",
  "it\t%d3\n\tmvf%d3d\t%0, %1",
  "it\t%d3\n\tmnf%d3d\t%0, #%N1",
  "ite\t%d3\n\tmvf%d3d\t%0, %1\n\tmvf%D3d\t%0, %2",
  "ite\t%d3\n\tmvf%d3d\t%0, %1\n\tmnf%D3d\t%0, #%N2",
  "ite\t%d3\n\tmnf%d3d\t%0, #%N1\n\tmvf%D3d\t%0, %2",
  "ite\t%d3\n\tmnf%d3d\t%0, #%N1\n\tmnf%D3d\t%0, #%N2",
};

static const char *
output_433 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 374 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"

  {
  switch (which_alternative)
    {
    case 0:
      return "#";
    case 1:
    case 2:
      return output_move_double (operands);

    case 3: return "cfmv64lr%?\t%V0, %Q1\n\tcfmv64hr%?\t%V0, %R1";
    case 4: return "cfmvr64l%?\t%Q0, %V1\n\tcfmvr64h%?\t%R0, %V1";

    case 5: return "cfldr64%?\t%V0, %1";
    case 6: return "cfstr64%?\t%V1, %0";

    /* Shifting by 0 will just copy %1 into %0.  */
    case 7: return "cfsh64%?\t%V0, %V1, #0";

    default: gcc_unreachable ();
    }
  }
}

static const char * const output_434[] = {
  "cfcpys%?\t%V0, %V1",
  "cfldrs%?\t%V0, %1",
  "cfmvsr%?\t%V0, %1",
  "cfmvrs%?\t%0, %V1",
  "cfstrs%?\t%V1, %0",
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_435 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 435 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"

  {
  switch (which_alternative)
    {
    case 0: return "ldm%?ia\t%m1, %M0\t%@ double";
    case 1: return "stm%?ia\t%m0, %M1\t%@ double";
    case 2: return "#";
    case 3: case 4: return output_move_double (operands);
    case 5: return "cfcpyd%?\t%V0, %V1";
    case 6: return "cfldrd%?\t%V0, %1";
    case 7: return "cfmvdlr\t%V0, %Q1\n\tcfmvdhr%?\t%V0, %R1";
    case 8: return "cfmvrdl%?\t%Q0, %V1\n\tcfmvrdh%?\t%R0, %V1";
    case 9: return "cfstrd%?\t%V1, %0";
    default: gcc_unreachable ();
    }
  }
}

static const char *
output_436 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"

  {
  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return (output_move_double (operands));

    case 3: return "cfmv64lr%?\t%V0, %Q1\n\tcfmv64hr%?\t%V0, %R1";
    case 4: return "cfmvr64l%?\t%Q0, %V1\n\tcfmvr64h%?\t%R0, %V1";

    case 5: return "cfldr64%?\t%V0, %1";
    case 6: return "cfstr64%?\t%V1, %0";

    /* Shifting by 0 will just copy %1 into %0.  */
    case 7: return "cfsh64%?\t%V0, %V1, #0";

    default: abort ();
    }
  }
}

static const char * const output_437[] = {
  "cfcpys%?\t%V0, %V1",
  "cfldrs%?\t%V0, %1",
  "cfmvsr%?\t%V0, %1",
  "cfmvrs%?\t%0, %V1",
  "cfstrs%?\t%V1, %0",
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_438 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 519 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md"

  {
  switch (which_alternative)
    {
    case 0: return "ldm%?ia\t%m1, %M0\t%@ double";
    case 1: return "stm%?ia\t%m0, %M1\t%@ double";
    case 2: case 3: case 4: return output_move_double (operands);
    case 5: return "cfcpyd%?\t%V0, %V1";
    case 6: return "cfldrd%?\t%V0, %1";
    case 7: return "cfmvdlr\t%V0, %Q1\n\tcfmvdhr%?\t%V0, %R1";
    case 8: return "cfmvrdl%?\t%Q0, %V1\n\tcfmvrdh%?\t%R0, %V1";
    case 9: return "cfstrd%?\t%V1, %0";
    default: abort ();
    }
  }
}

static const char * const output_439[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_440[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_441[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_443 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 81 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"

{
  switch (which_alternative)
    {
    default:
      return output_move_double (operands);
    case 0:
      return "#";
    case 3:
      return "wmov%?\t%0,%1";
    case 4:
      return "tmcrr%?\t%0,%Q1,%R1";
    case 5:
      return "tmrrc%?\t%Q0,%R0,%1";
    case 6:
      return "wldrd%?\t%0,%1";
    case 7:
      return "wstrd%?\t%1,%0";
    }
}
}

static const char *
output_444 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 113 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "mov\t%0, %1";
   case 1: return "mov\t%0, %1";
   case 2: return "mvn\t%0, #%B1";
   case 3: return "ldr\t%0, %1";
   case 4: return "str\t%1, %0";
   case 5: return "tmcr\t%0, %1";
   case 6: return "tmrc\t%0, %1";
   case 7: return arm_output_load_gr (operands);
   case 8: return "wstrw\t%1, %0";
   default:return "wstrw\t%1, [sp, #-4]!\n\twldrw\t%0, [sp], #4\t@move CG reg";
  }
}

static const char *
output_445 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 155 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "mov%?\t%0, %1";
   case 1: return "mvn%?\t%0, #%B1";
   case 2: return "ldr%?\t%0, %1";
   case 3: return "str%?\t%1, %0";
   case 4: return "tmcr%?\t%0, %1";
   default: return "tmrc%?\t%0, %1";
  }
}

static const char *
output_446 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char *
output_447 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char *
output_448 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char * const output_578[] = {
  "waligni%?\t%0, %1, %2, %3",
  "walignr%U3%?\t%0, %1, %2",
};

static const char *
output_585 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 58 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "fmsr%?\t%0, %1\t%@ int";
    case 7:
      return "fmrs%?\t%0, %1\t%@ int";
    case 8:
      return "fcpys%?\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_586 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 95 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "fmsr%?\t%0, %1\t%@ int";
    case 7:
      return "fmrs%?\t%0, %1\t%@ int";
    case 8:
      return "fcpys%?\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_587 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 135 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
      return "#";
    case 1:
    case 2:
      return output_move_double (operands);
    case 3:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 4:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 5:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 6: case 7:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_588 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 176 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1: case 2:
      return (output_move_double (operands));
    case 3:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 4:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 5:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 6: case 7:
      return output_move_vfp (operands);
    default:
      abort ();
    }
  
}

static const char *
output_589 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 216 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* S register from memory */
      return "vld1.16\t{%z0}, %A1";
    case 1:     /* memory from S register */
      return "vst1.16\t{%z1}, %A0";
    case 2:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 3:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 4:	/* S register from S register */
      return "fcpys\t%0, %1";
    case 5:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 6:	/* S register from ARM register */
      return "fmsr\t%0, %1";
    case 7:	/* ARM register from S register */
      return "fmrs\t%0, %1";
    case 8:	/* ARM register from constant */
      {
        REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 271 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:     /* ARM register from memory */
      return "ldrh\t%0, %1\t%@ __fp16";
    case 1:     /* memory from ARM register */
      return "strh\t%1, %0\t%@ __fp16";
    case 2:	/* S register from S register */
      return "fcpys\t%0, %1";
    case 3:	/* ARM register from ARM register */
      return "mov\t%0, %1\t%@ __fp16";
    case 4:	/* S register from ARM register */
      return "fmsr\t%0, %1";
    case 5:	/* ARM register from S register */
      return "fmrs\t%0, %1";
    case 6:	/* ARM register from constant */
      {
        REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

        REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw\t%0, %1", ops);
	else
	  output_asm_insn ("mov\t%0, %2\n\torr\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_591 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 325 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_592 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 361 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_593 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 400 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "fconstd%?\t%P0, #%G1";
      case 3: case 4:
	return output_move_double (operands);
      case 5: case 6:
	return output_move_vfp (operands);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      case 8:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char *
output_594 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 446 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
	return "fconstd%?\t%P0, #%G1";
      case 3: case 4: case 8:
	return output_move_double (operands);
      case 5: case 6:
	return output_move_vfp (operands);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      default:
	abort ();
      }
    }
  
}

static const char * const output_595[] = {
  "fcpys%D3\t%0, %2",
  "fcpys%d3\t%0, %1",
  "fcpys%D3\t%0, %2\n\tfcpys%d3\t%0, %1",
  "fmsr%D3\t%0, %2",
  "fmsr%d3\t%0, %1",
  "fmsr%D3\t%0, %2\n\tfmsr%d3\t%0, %1",
  "fmrs%D3\t%0, %2",
  "fmrs%d3\t%0, %1",
  "fmrs%D3\t%0, %2\n\tfmrs%d3\t%0, %1",
};

static const char * const output_596[] = {
  "it\t%D3\n\tfcpys%D3\t%0, %2",
  "it\t%d3\n\tfcpys%d3\t%0, %1",
  "ite\t%D3\n\tfcpys%D3\t%0, %2\n\tfcpys%d3\t%0, %1",
  "it\t%D3\n\tfmsr%D3\t%0, %2",
  "it\t%d3\n\tfmsr%d3\t%0, %1",
  "ite\t%D3\n\tfmsr%D3\t%0, %2\n\tfmsr%d3\t%0, %1",
  "it\t%D3\n\tfmrs%D3\t%0, %2",
  "it\t%d3\n\tfmrs%d3\t%0, %1",
  "ite\t%D3\n\tfmrs%D3\t%0, %2\n\tfmrs%d3\t%0, %1",
};

static const char * const output_597[] = {
  "fcpyd%D3\t%P0, %P2",
  "fcpyd%d3\t%P0, %P1",
  "fcpyd%D3\t%P0, %P2\n\tfcpyd%d3\t%P0, %P1",
  "fmdrr%D3\t%P0, %Q2, %R2",
  "fmdrr%d3\t%P0, %Q1, %R1",
  "fmdrr%D3\t%P0, %Q2, %R2\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "fmrrd%D3\t%Q0, %R0, %P2",
  "fmrrd%d3\t%Q0, %R0, %P1",
  "fmrrd%D3\t%Q0, %R0, %P2\n\tfmrrd%d3\t%Q0, %R0, %P1",
};

static const char * const output_598[] = {
  "it\t%D3\n\tfcpyd%D3\t%P0, %P2",
  "it\t%d3\n\tfcpyd%d3\t%P0, %P1",
  "ite\t%D3\n\tfcpyd%D3\t%P0, %P2\n\tfcpyd%d3\t%P0, %P1",
  "it\t%D3\n\tfmdrr%D3\t%P0, %Q2, %R2",
  "it\t%d3\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "ite\t%D3\n\tfmdrr%D3\t%P0, %Q2, %R2\n\tfmdrr%d3\t%P0, %Q1, %R1",
  "it\t%D3\n\tfmrrd%D3\t%Q0, %R0, %P2",
  "it\t%d3\n\tfmrrd%d3\t%Q0, %R0, %P1",
  "ite\t%D3\n\tfmrrd%D3\t%Q0, %R0, %P2\n\tfmrrd%d3\t%Q0, %R0, %P1",
};

static const char * const output_601[] = {
  "fnegs%?\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_602[] = {
  "fnegd%?\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_640[] = {
  "fcmps%?\t%0, %1",
  "fcmpzs%?\t%0",
};

static const char * const output_641[] = {
  "fcmpes%?\t%0, %1",
  "fcmpezs%?\t%0",
};

static const char * const output_642[] = {
  "fcmpd%?\t%P0, %P1",
  "fcmpzd%?\t%P0",
};

static const char * const output_643[] = {
  "fcmped%?\t%P0, %P1",
  "fcmpezd%?\t%P0",
};

static const char *
output_644 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1134 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"
 return vfp_output_fstmd (operands);
}

static const char * const output_645[] = {
  "it\t%d2\n\tadd%d2\t%0, %1, #1",
  "ite\t%D2\n\tmov%D2\t%0, %1\n\tadd%d2\t%0, %1, #1",
};

static const char * const output_646[] = {
  "it\t%d2\n\tsub%d2\t%0, %1, #1",
  "ite\t%D2\n\tmov%D2\t%0, %1\n\tsub%d2\t%0, %1, #1",
};

static const char * const output_648[] = {
  "cmp\t%1, %2\n\tit\tlt\n\tmovlt\t%0, %2",
  "cmp\t%1, %2\n\tit\tge\n\tmovge\t%0, %1",
  "cmp\t%1, %2\n\tite\tge\n\tmovge\t%0, %1\n\tmovlt\t%0, %2",
};

static const char * const output_649[] = {
  "cmp\t%1, %2\n\tit\tge\n\tmovge\t%0, %2",
  "cmp\t%1, %2\n\tit\tlt\n\tmovlt\t%0, %1",
  "cmp\t%1, %2\n\tite\tlt\n\tmovlt\t%0, %1\n\tmovge\t%0, %2",
};

static const char * const output_650[] = {
  "cmp\t%1, %2\n\tit\tcc\n\tmovcc\t%0, %2",
  "cmp\t%1, %2\n\tit\tcs\n\tmovcs\t%0, %1",
  "cmp\t%1, %2\n\tite\tcs\n\tmovcs\t%0, %1\n\tmovcc\t%0, %2",
};

static const char * const output_651[] = {
  "cmp\t%1, %2\n\tit\tcs\n\tmovcs\t%0, %2",
  "cmp\t%1, %2\n\tit\tcc\n\tmovcc\t%0, %1",
  "cmp\t%1, %2\n\tite\tcc\n\tmovcc\t%0, %1\n\tmovcs\t%0, %2",
};

static const char * const output_656[] = {
  "cmp\t%0, #0\n\tit\tlt\n\trsblt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\tsub%?\t%0, %0, %1, asr #31",
};

static const char * const output_657[] = {
  "cmp\t%0, #0\n\tit\tgt\n\trsbgt\t%0, %0, #0",
  "eor%?\t%0, %1, %1, asr #31\n\trsb%?\t%0, %0, %1, asr #31",
};

static const char *
output_658 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 209 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands);
    }
  
}

static const char * const output_659[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char *
output_660 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 254 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

  (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
			     INTVAL (operands[3]));
  return "add\t%2, %|pc\n\tldr%?\t%0, [%2]";
  
}

static const char * const output_661[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_662[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_663 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 302 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

  switch (which_alternative)
    {
    case 0:
    case 1:
    case 2:
      return "#";
    default:
      return output_move_double (operands);
    }
  
}

static const char * const output_670[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%D3\n\tmvn%D3\t%0, #%B2",
  "it\t%d3\n\tmov%d3\t%0, %1",
  "it\t%d3\n\tmvn%d3\t%0, #%B1",
  "ite\t%d3\n\tmov%d3\t%0, %1\n\tmov%D3\t%0, %2",
  "ite\t%d3\n\tmov%d3\t%0, %1\n\tmvn%D3\t%0, #%B2",
  "ite\t%d3\n\tmvn%d3\t%0, #%B1\n\tmov%D3\t%0, %2",
  "ite\t%d3\n\tmvn%d3\t%0, #%B1\n\tmvn%D3\t%0, #%B2",
};

static const char * const output_671[] = {
  "it\t%D3\n\tmov%D3\t%0, %2",
  "it\t%d3\n\tmov%d3\t%0, %1",
};

static const char * const output_682[] = {
  "it\t%d2\n\torr%d2\t%0, %1, #1",
  "ite\t%D2\n\tmov%D2\t%0, %1\n\torr%d2\t%0, %1, #1",
};

static const char *
output_683 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 602 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

    if (operands[3] == const0_rtx)
      {
	if (GET_CODE (operands[1]) == LT)
	  return "lsr\t%0, %2, #31";

	if (GET_CODE (operands[1]) == GE)
	  return "mvn\t%0, %2\n\tlsr\t%0, %0, #31";

	if (GET_CODE (operands[1]) == EQ)
	  return "rsbs\t%0, %2, #1\n\tit\tcc\n\tmovcc\t%0, #0";
      }

    if (GET_CODE (operands[1]) == NE)
      {
        if (which_alternative == 1)
	  return "adds\t%0, %2, #%n3\n\tit\tne\n\tmovne\t%0, #1";
        return "subs\t%0, %2, %3\n\tit\tne\n\tmovne\t%0, #1";
      }
    if (which_alternative == 1)
      output_asm_insn ("cmn\t%2, #%n3", operands);
    else
      output_asm_insn ("cmp\t%2, %3", operands);
    return "ite\t%D1\n\tmov%D1\t%0, #0\n\tmov%d1\t%0, #1";
  
}

static const char *
output_684 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 640 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[3]) == NE)
      {
        if (which_alternative != 1)
	  output_asm_insn ("it\t%D4\n\tmov%D4\t%0, %2", operands);
        if (which_alternative != 0)
	  output_asm_insn ("it\t%d4\n\tmov%d4\t%0, %1", operands);
        return "";
      }
    switch (which_alternative)
      {
      case 0:
	output_asm_insn ("it\t%d4", operands);
	break;
      case 1:
	output_asm_insn ("it\t%D4", operands);
	break;
      case 2:
	output_asm_insn ("ite\t%D4", operands);
	break;
      default:
	abort();
      }
    if (which_alternative != 0)
      output_asm_insn ("mov%D4\t%0, %1", operands);
    if (which_alternative != 1)
      output_asm_insn ("mov%d4\t%0, %2", operands);
    return "";
  
}

static const char *
output_685 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 682 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

    if (GET_CODE (operands[4]) == LT && operands[3] == const0_rtx)
      return "%i5\t%0, %1, %2, lsr #31";

    output_asm_insn ("cmp\t%2, %3", operands);
    if (GET_CODE (operands[5]) == AND)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, #0", operands);
      }
    else if (GET_CODE (operands[5]) == MINUS)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("rsb%D4\t%0, %1, #0", operands);
      }
    else if (which_alternative != 0)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, %1", operands);
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "%i5%d4\t%0, %1, #1";
  
}

static const char *
output_686 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 718 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

    output_asm_insn ("cmp\t%2, %3", operands);
    if (which_alternative != 0)
      {
	output_asm_insn ("ite\t%D4", operands);
	output_asm_insn ("mov%D4\t%0, %1", operands);
      }
    else
      output_asm_insn ("it\t%d4", operands);
    return "sub%d4\t%0, %1, #1";
  
}

static const char *
output_687 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 740 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

  if (GET_CODE (operands[3]) == LT && operands[2] == const0_rtx)
    return "asr\t%0, %1, #31";

  if (GET_CODE (operands[3]) == NE)
    return "subs\t%0, %1, %2\n\tit\tne\n\tmvnne\t%0, #0";

  output_asm_insn ("cmp\t%1, %2", operands);
  output_asm_insn ("ite\t%D3", operands);
  output_asm_insn ("mov%D3\t%0, #0", operands);
  return "mvn%d3\t%0, #0";
  
}

static const char *
output_688 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 766 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

  if (GET_CODE (operands[5]) == LT
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && GET_CODE (operands[1]) == REG)
	{
	  if (operands[2] == const0_rtx)
	    return "and\t%0, %1, %3, asr #31";
	  return "ands\t%0, %1, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %2";
	}
      else if (which_alternative != 0 && GET_CODE (operands[2]) == REG)
	{
	  if (operands[1] == const0_rtx)
	    return "bic\t%0, %2, %3, asr #31";
	  return "bics\t%0, %2, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }

  if (GET_CODE (operands[5]) == GE
      && (operands[4] == const0_rtx))
    {
      if (which_alternative != 1 && GET_CODE (operands[1]) == REG)
	{
	  if (operands[2] == const0_rtx)
	    return "bic\t%0, %1, %3, asr #31";
	  return "bics\t%0, %1, %3, asr #32\n\tit\tcs\n\tmovcs\t%0, %2";
	}
      else if (which_alternative != 0 && GET_CODE (operands[2]) == REG)
	{
	  if (operands[1] == const0_rtx)
	    return "and\t%0, %2, %3, asr #31";
	  return "ands\t%0, %2, %3, asr #32\n\tit\tcc\n\tmovcc\t%0, %1";
	}
      /* The only case that falls through to here is when both ops 1 & 2
	 are constants.  */
    }
  if (GET_CODE (operands[4]) == CONST_INT
      && !const_ok_for_arm (INTVAL (operands[4])))
    output_asm_insn ("cmn\t%3, #%n4", operands);
  else
    output_asm_insn ("cmp\t%3, %4", operands);
  switch (which_alternative)
    {
    case 0:
      output_asm_insn ("it\t%D5", operands);
      break;
    case 1:
      output_asm_insn ("it\t%d5", operands);
      break;
    case 2:
      output_asm_insn ("ite\t%d5", operands);
      break;
    default:
      abort();
    }
  if (which_alternative != 0)
    output_asm_insn ("mov%d5\t%0, %1", operands);
  if (which_alternative != 1)
    output_asm_insn ("mov%D5\t%0, %2", operands);
  return "";
  
}

static const char * const output_690[] = {
  "uxth%?\t%Q0, %1\n\tmov%?\t%R0, #0",
  "ldr%(h%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char * const output_691[] = {
  "uxtb%?\t%Q0, %1\n\tmov%?\t%R0, #0",
  "ldr%(b%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char * const output_693[] = {
  "sxth%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
  "ldrsh%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
};

static const char * const output_694[] = {
  "sxtb%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
  "ldrsb%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
};

static const char * const output_695[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_696[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_697[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_698 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1027 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_699 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1045 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
 return thumb2_output_casesi(operands);
}

static const char *
output_702 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1131 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_706 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1188 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (GET_CODE (operands[2]) == CONST_INT)
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char *
output_713 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1310 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbeq\t%l1";
  
}

static const char *
output_714 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1333 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

  if (get_attr_length (insn) == 2)
    return "cbnz\t%0, %l1";
  else
    return "cmp\t%0, #0\n\tbne\t%l1";
  
}

static const char * const output_719[] = {
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "#",
};

static const char *
output_720 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v8qi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%1  @ v8qi", width);

      return templ;
    }

  /* FIXME: If the memory layout is changed in big-endian mode, output_move_vfp
     below must be changed to output_move_neon (which will use the
     element/structure loads/stores), and the constraint changed to 'Um' instead
     of 'Uv'.  */

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v8qi";
    case 1: case 3: return output_move_vfp (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v8qi";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v8qi";
    default: return output_move_double (operands);
    }
}
}

static const char *
output_721 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v4hi";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%1  @ v4hi", width);

      return templ;
    }

  /* FIXME: If the memory layout is changed in big-endian mode, output_move_vfp
     below must be changed to output_move_neon (which will use the
     element/structure loads/stores), and the constraint changed to 'Um' instead
     of 'Uv'.  */

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v4hi";
    case 1: case 3: return output_move_vfp (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v4hi";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v4hi";
    default: return output_move_double (operands);
    }
}
}

static const char *
output_722 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2si";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%1  @ v2si", width);

      return templ;
    }

  /* FIXME: If the memory layout is changed in big-endian mode, output_move_vfp
     below must be changed to output_move_neon (which will use the
     element/structure loads/stores), and the constraint changed to 'Um' instead
     of 'Uv'.  */

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2si";
    case 1: case 3: return output_move_vfp (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v2si";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v2si";
    default: return output_move_double (operands);
    }
}
}

static const char *
output_723 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%P0, %1  @ v2sf";
      else
        sprintf (templ, "vmov.i%d\t%%P0, %%1  @ v2sf", width);

      return templ;
    }

  /* FIXME: If the memory layout is changed in big-endian mode, output_move_vfp
     below must be changed to output_move_neon (which will use the
     element/structure loads/stores), and the constraint changed to 'Um' instead
     of 'Uv'.  */

  switch (which_alternative)
    {
    case 0: return "vmov\t%P0, %P1  @ v2sf";
    case 1: case 3: return output_move_vfp (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %P1  @ v2sf";
    case 5: return "vmov\t%P0, %Q1, %R1  @ v2sf";
    default: return output_move_double (operands);
    }
}
}

static const char *
output_724 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 511 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V16QImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v16qi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v16qi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v16qi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v16qi\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v16qi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_725 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 511 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V8HImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v8hi";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v8hi", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v8hi";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v8hi\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v8hi\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_726 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 511 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4si";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4si", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4si";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v4si\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v4si\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_727 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 511 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V4SFmode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v4sf";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v4sf", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v4sf";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v4sf\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v4sf\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_728 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 511 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], V2DImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ v2di";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ v2di", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ v2di";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ v2di\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ v2di\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_729 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 511 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (which_alternative == 2)
    {
      int width, is_valid;
      static char templ[40];

      is_valid = neon_immediate_valid_for_move (operands[1], TImode,
        &operands[1], &width);

      gcc_assert (is_valid != 0);

      if (width == 0)
        return "vmov.f32\t%q0, %1  @ ti";
      else
        sprintf (templ, "vmov.i%d\t%%q0, %%1  @ ti", width);

      return templ;
    }

  switch (which_alternative)
    {
    case 0: return "vmov\t%q0, %q1  @ ti";
    case 1: case 3: return output_move_neon (operands);
    case 2: gcc_unreachable ();
    case 4: return "vmov\t%Q0, %R0, %e1  @ ti\n\tvmov\t%J0, %K0, %f1";
    case 5: return "vmov\t%e0, %Q1, %R1  @ ti\n\tvmov\t%f0, %J1, %K1";
    default: return output_move_quad (operands);
    }
}
}

static const char *
output_730 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 578 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_731 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 578 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_732 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 578 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_733 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 578 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "#";
    case 1: case 2: return output_move_neon (operands);
    default: gcc_unreachable ();
    }
}
}

static const char *
output_734 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 682 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.u8\t%P0[%c2], %1";
}
}

static const char *
output_735 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 682 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.u16\t%P0[%c2], %1";
}
}

static const char *
output_736 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 682 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_737 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 682 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_738 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 701 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u8\t%P0[%c2], %1";
}
}

static const char *
output_739 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 701 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u16\t%P0[%c2], %1";
}
}

static const char *
output_740 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 701 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_741 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 701 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_742 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 728 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int regno = REGNO (operands[0]) + 2 * elem;

  operands[0] = gen_rtx_REG (DImode, regno);

  return "vmov%?.64\t%P0, %Q1, %R1";
}
}

static const char *
output_743 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 758 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_744 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 758 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_745 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 758 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_746 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 758 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_747 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_748 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_749 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_750 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_751 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 801 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]) + INTVAL (operands[2]);

  operands[1] = gen_rtx_REG (DImode, regno);

  return "vmov%?.64\t%Q0, %R0, %P1";
}
}

static const char *
output_797 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 927 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8QImode, 0, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_798 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 927 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V16QImode, 0, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_799 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 927 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4HImode, 0, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_800 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 927 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V8HImode, 0, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_801 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 927 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SImode, 0, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_802 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 927 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SImode, 0, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_803 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 927 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2SFmode, 0, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_804 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 927 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V4SFmode, 0, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_805 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 927 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     V2DImode, 0, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_806 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 945 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vorr\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vorr", &operands[2],
		     DImode, 0, VALID_NEON_QREG_MODE (DImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_807 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 967 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8QImode, 1, VALID_NEON_QREG_MODE (V8QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_808 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 967 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V16QImode, 1, VALID_NEON_QREG_MODE (V16QImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_809 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 967 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4HImode, 1, VALID_NEON_QREG_MODE (V4HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_810 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 967 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V8HImode, 1, VALID_NEON_QREG_MODE (V8HImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_811 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 967 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SImode, 1, VALID_NEON_QREG_MODE (V2SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_812 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 967 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SImode, 1, VALID_NEON_QREG_MODE (V4SImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_813 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 967 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2SFmode, 1, VALID_NEON_QREG_MODE (V2SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_814 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 967 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V4SFmode, 1, VALID_NEON_QREG_MODE (V4SFmode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_815 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 967 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%q0, %q1, %q2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     V2DImode, 1, VALID_NEON_QREG_MODE (V2DImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_816 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 985 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  switch (which_alternative)
    {
    case 0: return "vand\t%P0, %P1, %P2";
    case 1: return neon_output_logic_immediate ("vand", &operands[2],
    		     DImode, 1, VALID_NEON_QREG_MODE (DImode));
    default: gcc_unreachable ();
    }
}
}

static const char *
output_944 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1377 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%e0, %P1";
  else
    return "";
}
}

static const char *
output_945 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1396 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%e0, %P1";
  else
    return "";
}
}

static const char *
output_946 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1416 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%e0, %P1";
  else
    return "";
}
}

static const char *
output_947 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1438 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%e0, %P1";
  else
    return "";
}
}

static const char *
output_1228 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2422 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s8\t%0, %P1[%c2]";
}
}

static const char *
output_1229 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2422 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s16\t%0, %P1[%c2]";
}
}

static const char *
output_1230 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2422 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1231 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2422 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s32\t%0, %P1[%c2]";
}
}

static const char *
output_1232 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2442 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_1233 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2442 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_1234 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2442 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1235 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2442 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u32\t%0, %P1[%c2]";
}
}

static const char *
output_1236 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1237 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1238 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1239 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1240 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2490 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1241 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2490 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1242 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2490 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1243 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2490 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_1244 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2562 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[2], 0, 1);
  return "vmov%?\t%Q0, %R0, %P1  @ di";
}
}

static const char *
output_1245 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2577 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[2];
  unsigned int regno = REGNO (operands[1]);
  unsigned int elt = INTVAL (operands[2]);

  neon_lane_bounds (operands[2], 0, 2);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2 * elt);
  output_asm_insn ("vmov%?\t%Q0, %R0, %P1  @ v2di", ops);

  return "";
}
}

static const char *
output_1246 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2601 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V8QImode));
  return "vmov%?.8\t%P0[%c3], %1";
}
}

static const char *
output_1247 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2601 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmov%?.16\t%P0[%c3], %1";
}
}

static const char *
output_1248 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2601 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmov%?.32\t%P0[%c3], %1";
}
}

static const char *
output_1249 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2601 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmov%?.32\t%P0[%c3], %1";
}
}

static const char *
output_1250 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2618 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, 1);
  return "vmov%?\t%P0, %Q1, %R1  @ di";
}
}

static const char *
output_1251 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2633 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[4];
  unsigned int regno = REGNO (operands[0]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[3]);

  neon_lane_bounds (operands[3], 0, halfelts * 2);

  ops[0] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[1] = operands[1];
  ops[2] = GEN_INT (elt % halfelts);
  output_asm_insn ("vmov%?.8\t%P0[%c2], %1", ops);

  return "";
}
}

static const char *
output_1252 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2633 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[4];
  unsigned int regno = REGNO (operands[0]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[3]);

  neon_lane_bounds (operands[3], 0, halfelts * 2);

  ops[0] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[1] = operands[1];
  ops[2] = GEN_INT (elt % halfelts);
  output_asm_insn ("vmov%?.16\t%P0[%c2], %1", ops);

  return "";
}
}

static const char *
output_1253 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2633 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[4];
  unsigned int regno = REGNO (operands[0]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[3]);

  neon_lane_bounds (operands[3], 0, halfelts * 2);

  ops[0] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[1] = operands[1];
  ops[2] = GEN_INT (elt % halfelts);
  output_asm_insn ("vmov%?.32\t%P0[%c2], %1", ops);

  return "";
}
}

static const char *
output_1254 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2633 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[4];
  unsigned int regno = REGNO (operands[0]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[3]);

  neon_lane_bounds (operands[3], 0, halfelts * 2);

  ops[0] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[1] = operands[1];
  ops[2] = GEN_INT (elt % halfelts);
  output_asm_insn ("vmov%?.32\t%P0[%c2], %1", ops);

  return "";
}
}

static const char *
output_1255 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2659 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[2];
  unsigned int regno = REGNO (operands[0]);
  unsigned int elt = INTVAL (operands[3]);

  neon_lane_bounds (operands[3], 0, 2);

  ops[0] = gen_rtx_REG (DImode, regno + 2 * elt);
  ops[1] = operands[1];
  output_asm_insn ("vmov%?\t%P0, %Q1, %R1  @ v2di", ops);

  return "";
}
}

static const char * const output_1260[] = {
  "vdup%?.32\t%P0, %1",
  "vdup%?.32\t%P0, %y1",
};

static const char * const output_1261[] = {
  "vdup%?.32\t%P0, %1",
  "vdup%?.32\t%P0, %y1",
};

static const char * const output_1262[] = {
  "vdup%?.32\t%q0, %1",
  "vdup%?.32\t%q0, %y1",
};

static const char * const output_1263[] = {
  "vdup%?.32\t%q0, %1",
  "vdup%?.32\t%q0, %y1",
};

static const char *
output_1266 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2737 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[2], 0, GET_MODE_NUNITS (V8QImode));
  return "vdup.8\t%P0, %P1[%c2]";
}
}

static const char *
output_1267 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2737 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[2], 0, GET_MODE_NUNITS (V4HImode));
  return "vdup.16\t%P0, %P1[%c2]";
}
}

static const char *
output_1268 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2737 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[2], 0, GET_MODE_NUNITS (V2SImode));
  return "vdup.32\t%P0, %P1[%c2]";
}
}

static const char *
output_1269 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2737 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[2], 0, GET_MODE_NUNITS (V2SFmode));
  return "vdup.32\t%P0, %P1[%c2]";
}
}

static const char *
output_1270 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2751 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[2], 0, GET_MODE_NUNITS (V8QImode));
  return "vdup.8\t%q0, %P1[%c2]";
}
}

static const char *
output_1271 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2751 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[2], 0, GET_MODE_NUNITS (V4HImode));
  return "vdup.16\t%q0, %P1[%c2]";
}
}

static const char *
output_1272 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2751 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[2], 0, GET_MODE_NUNITS (V2SImode));
  return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1273 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2751 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[2], 0, GET_MODE_NUNITS (V2SFmode));
  return "vdup.32\t%q0, %P1[%c2]";
}
}

static const char *
output_1274 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2779 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[2], 0, 1);
  return "vmov\t%e0, %P1\n\tvmov\t%f0, %P1";
}
}

static const char *
output_1275 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2800 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src1 = REGNO (operands[1]);
  int src2 = REGNO (operands[2]);
  rtx destlo;

  if (src1 == dest && src2 == dest + 2)
    return "";
  else if (src2 == dest && src1 == dest + 2)
    /* Special case of reversed high/low parts.  */
    return "vswp\t%P1, %P2";

  destlo = gen_rtx_REG (V8QImode, dest);

  if (!reg_overlap_mentioned_p (operands[2], destlo))
    {
      /* Try to avoid unnecessary moves if part of the result is in the right
         place already.  */
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
    }
  else
    {
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
    }

  return "";
}
}

static const char *
output_1276 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2800 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src1 = REGNO (operands[1]);
  int src2 = REGNO (operands[2]);
  rtx destlo;

  if (src1 == dest && src2 == dest + 2)
    return "";
  else if (src2 == dest && src1 == dest + 2)
    /* Special case of reversed high/low parts.  */
    return "vswp\t%P1, %P2";

  destlo = gen_rtx_REG (V4HImode, dest);

  if (!reg_overlap_mentioned_p (operands[2], destlo))
    {
      /* Try to avoid unnecessary moves if part of the result is in the right
         place already.  */
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
    }
  else
    {
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
    }

  return "";
}
}

static const char *
output_1277 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2800 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src1 = REGNO (operands[1]);
  int src2 = REGNO (operands[2]);
  rtx destlo;

  if (src1 == dest && src2 == dest + 2)
    return "";
  else if (src2 == dest && src1 == dest + 2)
    /* Special case of reversed high/low parts.  */
    return "vswp\t%P1, %P2";

  destlo = gen_rtx_REG (V2SImode, dest);

  if (!reg_overlap_mentioned_p (operands[2], destlo))
    {
      /* Try to avoid unnecessary moves if part of the result is in the right
         place already.  */
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
    }
  else
    {
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
    }

  return "";
}
}

static const char *
output_1278 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2800 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src1 = REGNO (operands[1]);
  int src2 = REGNO (operands[2]);
  rtx destlo;

  if (src1 == dest && src2 == dest + 2)
    return "";
  else if (src2 == dest && src1 == dest + 2)
    /* Special case of reversed high/low parts.  */
    return "vswp\t%P1, %P2";

  destlo = gen_rtx_REG (V2SFmode, dest);

  if (!reg_overlap_mentioned_p (operands[2], destlo))
    {
      /* Try to avoid unnecessary moves if part of the result is in the right
         place already.  */
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
    }
  else
    {
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
    }

  return "";
}
}

static const char *
output_1279 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2800 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src1 = REGNO (operands[1]);
  int src2 = REGNO (operands[2]);
  rtx destlo;

  if (src1 == dest && src2 == dest + 2)
    return "";
  else if (src2 == dest && src1 == dest + 2)
    /* Special case of reversed high/low parts.  */
    return "vswp\t%P1, %P2";

  destlo = gen_rtx_REG (DImode, dest);

  if (!reg_overlap_mentioned_p (operands[2], destlo))
    {
      /* Try to avoid unnecessary moves if part of the result is in the right
         place already.  */
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
    }
  else
    {
      if (src2 != dest + 2)
        output_asm_insn ("vmov\t%f0, %P2", operands);
      if (src1 != dest)
        output_asm_insn ("vmov\t%e0, %P1", operands);
    }

  return "";
}
}

static const char *
output_1280 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2843 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src + 2)
    return "vmov\t%P0, %f1";
  else
    return "";
}
}

static const char *
output_1281 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2843 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src + 2)
    return "vmov\t%P0, %f1";
  else
    return "";
}
}

static const char *
output_1282 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2843 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src + 2)
    return "vmov\t%P0, %f1";
  else
    return "";
}
}

static const char *
output_1283 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2843 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src + 2)
    return "vmov\t%P0, %f1";
  else
    return "";
}
}

static const char *
output_1284 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2843 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src + 2)
    return "vmov\t%P0, %f1";
  else
    return "";
}
}

static const char *
output_1285 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2860 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%P0, %e1";
  else
    return "";
}
}

static const char *
output_1286 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2860 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%P0, %e1";
  else
    return "";
}
}

static const char *
output_1287 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2860 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%P0, %e1";
  else
    return "";
}
}

static const char *
output_1288 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2860 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%P0, %e1";
  else
    return "";
}
}

static const char *
output_1289 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2860 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int dest = REGNO (operands[0]);
  int src = REGNO (operands[1]);

  if (dest != src)
    return "vmov\t%P0, %e1";
  else
    return "";
}
}

static const char *
output_1294 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2905 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.%T3%#32.f32\t%P0, %P1, %2";
}
}

static const char *
output_1295 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2905 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.%T3%#32.f32\t%q0, %q1, %2";
}
}

static const char *
output_1296 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2922 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1297 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2922 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, 33);
  return "vcvt.f32.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1310 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2981 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmul.i16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1311 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2981 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmul.i32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1312 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2981 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmul.f32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1313 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3002 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmul.i16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1314 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3002 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmul.i32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1315 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3002 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmul.f32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1316 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3023 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmull.%T4%#16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1317 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3023 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmull.%T4%#32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1318 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3042 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmull.s16\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1319 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3042 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmull.s32\t%q0, %P1, %P2[%c3]";
}
}

static const char *
output_1320 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3061 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vq%O4dmulh.%T4%#16\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1321 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3061 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vq%O4dmulh.%T4%#32\t%q0, %q1, %P2[%c3]";
}
}

static const char *
output_1322 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3080 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vq%O4dmulh.%T4%#16\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1323 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3080 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vq%O4dmulh.%T4%#32\t%P0, %P1, %P2[%c3]";
}
}

static const char *
output_1324 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3100 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmla.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1325 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3100 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmla.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1326 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3100 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmla.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1327 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3122 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V8HImode));
  return "vmla.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1328 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3122 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SImode));
  return "vmla.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1329 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3122 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SFmode));
  return "vmla.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1330 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3144 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlal.%T5%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1331 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3144 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlal.%T5%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1332 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3164 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmlal.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1333 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3164 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmlal.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1334 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3184 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmls.i16\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1335 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3184 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmls.i32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1336 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3184 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmls.f32\t%P0, %P2, %P3[%c4]";
}
}

static const char *
output_1337 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3206 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V8HImode));
  return "vmls.i16\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1338 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3206 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SImode));
  return "vmls.i32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1339 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3206 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4SFmode));
  return "vmls.f32\t%q0, %q2, %P3[%c4]";
}
}

static const char *
output_1340 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3228 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vmlsl.%T5%#16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1341 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3228 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vmlsl.%T5%#32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1342 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3248 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V4HImode));
  return "vqdmlsl.s16\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1343 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3248 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[4], 0, GET_MODE_NUNITS (V2SImode));
  return "vqdmlsl.s32\t%q0, %P2, %P3[%c4]";
}
}

static const char *
output_1344 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3476 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8QImode));
  return "vext.8\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1345 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3476 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V16QImode));
  return "vext.8\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1346 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3476 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vext.16\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1347 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3476 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V8HImode));
  return "vext.16\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1348 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3476 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1349 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3476 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SImode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1350 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3476 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vext.32\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1351 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3476 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V4SFmode));
  return "vext.32\t%q0, %q1, %q2, %3";
}
}

static const char *
output_1352 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3476 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (DImode));
  return "vext.64\t%P0, %P1, %P2, %3";
}
}

static const char *
output_1353 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3476 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, GET_MODE_NUNITS (V2DImode));
  return "vext.64\t%q0, %q1, %q2, %3";
}
}

static const char * const output_1369[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1370[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1371[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1372[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1373[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1374[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1375[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1376[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char * const output_1377[] = {
  "vbsl\t%P0, %P2, %P3",
  "vbit\t%P0, %P2, %P1",
  "vbif\t%P0, %P3, %P1",
};

static const char * const output_1378[] = {
  "vbsl\t%q0, %q2, %q3",
  "vbit\t%q0, %q2, %q1",
  "vbif\t%q0, %q3, %q1",
};

static const char *
output_1395 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3585 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8QImode) + 1);
  return "v%O3shr.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1396 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3585 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V16QImode) + 1);
  return "v%O3shr.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1397 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3585 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4HImode) + 1);
  return "v%O3shr.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1398 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3585 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) + 1);
  return "v%O3shr.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1399 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3585 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2SImode) + 1);
  return "v%O3shr.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1400 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3585 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) + 1);
  return "v%O3shr.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1401 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3585 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (DImode) + 1);
  return "v%O3shr.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1402 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3585 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) + 1);
  return "v%O3shr.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1403 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3599 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "v%O3shrn.i16\t%P0, %q1, %2";
}
}

static const char *
output_1404 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3599 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "v%O3shrn.i32\t%P0, %q1, %2";
}
}

static const char *
output_1405 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3599 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "v%O3shrn.i64\t%P0, %q1, %2";
}
}

static const char *
output_1406 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3613 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vq%O3shrn.%T3%#16\t%P0, %q1, %2";
}
}

static const char *
output_1407 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3613 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vq%O3shrn.%T3%#32\t%P0, %q1, %2";
}
}

static const char *
output_1408 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3613 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vq%O3shrn.%T3%#64\t%P0, %q1, %2";
}
}

static const char *
output_1409 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3627 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V8HImode) / 2 + 1);
  return "vq%O3shrun.%T3%#16\t%P0, %q1, %2";
}
}

static const char *
output_1410 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3627 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V4SImode) / 2 + 1);
  return "vq%O3shrun.%T3%#32\t%P0, %q1, %2";
}
}

static const char *
output_1411 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3627 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 1, neon_element_bits (V2DImode) / 2 + 1);
  return "vq%O3shrun.%T3%#64\t%P0, %q1, %2";
}
}

static const char *
output_1412 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3641 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vshl.i8\t%P0, %P1, %2";
}
}

static const char *
output_1413 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3641 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vshl.i8\t%q0, %q1, %2";
}
}

static const char *
output_1414 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3641 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vshl.i16\t%P0, %P1, %2";
}
}

static const char *
output_1415 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3641 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vshl.i16\t%q0, %q1, %2";
}
}

static const char *
output_1416 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3641 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vshl.i32\t%P0, %P1, %2";
}
}

static const char *
output_1417 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3641 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vshl.i32\t%q0, %q1, %2";
}
}

static const char *
output_1418 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3641 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vshl.i64\t%P0, %P1, %2";
}
}

static const char *
output_1419 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3641 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vshl.i64\t%q0, %q1, %2";
}
}

static const char *
output_1420 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3655 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshl.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1421 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3655 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshl.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1422 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3655 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshl.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1423 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3655 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshl.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1424 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3655 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshl.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1425 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3655 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshl.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1426 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3655 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshl.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1427 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3655 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshl.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1428 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode));
  return "vqshlu.%T3%#8\t%P0, %P1, %2";
}
}

static const char *
output_1429 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V16QImode));
  return "vqshlu.%T3%#8\t%q0, %q1, %2";
}
}

static const char *
output_1430 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode));
  return "vqshlu.%T3%#16\t%P0, %P1, %2";
}
}

static const char *
output_1431 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V8HImode));
  return "vqshlu.%T3%#16\t%q0, %q1, %2";
}
}

static const char *
output_1432 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode));
  return "vqshlu.%T3%#32\t%P0, %P1, %2";
}
}

static const char *
output_1433 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V4SImode));
  return "vqshlu.%T3%#32\t%q0, %q1, %2";
}
}

static const char *
output_1434 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (DImode));
  return "vqshlu.%T3%#64\t%P0, %P1, %2";
}
}

static const char *
output_1435 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[2], 0, neon_element_bits (V2DImode));
  return "vqshlu.%T3%#64\t%q0, %q1, %2";
}
}

static const char *
output_1436 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3683 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V8QImode) + 1);
  return "vshll.%T3%#8\t%q0, %P1, %2";
}
}

static const char *
output_1437 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3683 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V4HImode) + 1);
  return "vshll.%T3%#16\t%q0, %P1, %2";
}
}

static const char *
output_1438 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3683 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  /* The boundaries are: 0 < imm <= size.  */
  neon_const_bounds (operands[2], 0, neon_element_bits (V2SImode) + 1);
  return "vshll.%T3%#32\t%q0, %P1, %2";
}
}

static const char *
output_1439 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3699 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "v%O4sra.%T4%#8\t%P0, %P2, %3";
}
}

static const char *
output_1440 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3699 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "v%O4sra.%T4%#8\t%q0, %q2, %3";
}
}

static const char *
output_1441 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3699 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "v%O4sra.%T4%#16\t%P0, %P2, %3";
}
}

static const char *
output_1442 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3699 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "v%O4sra.%T4%#16\t%q0, %q2, %3";
}
}

static const char *
output_1443 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3699 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "v%O4sra.%T4%#32\t%P0, %P2, %3";
}
}

static const char *
output_1444 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3699 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "v%O4sra.%T4%#32\t%q0, %q2, %3";
}
}

static const char *
output_1445 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3699 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "v%O4sra.%T4%#64\t%P0, %P2, %3";
}
}

static const char *
output_1446 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3699 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "v%O4sra.%T4%#64\t%q0, %q2, %3";
}
}

static const char *
output_1447 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3713 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8QImode) + 1);
  return "vsri.8\t%P0, %P2, %3";
}
}

static const char *
output_1448 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3713 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V16QImode) + 1);
  return "vsri.8\t%q0, %q2, %3";
}
}

static const char *
output_1449 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3713 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4HImode) + 1);
  return "vsri.16\t%P0, %P2, %3";
}
}

static const char *
output_1450 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3713 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V8HImode) + 1);
  return "vsri.16\t%q0, %q2, %3";
}
}

static const char *
output_1451 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3713 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2SImode) + 1);
  return "vsri.32\t%P0, %P2, %3";
}
}

static const char *
output_1452 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3713 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V4SImode) + 1);
  return "vsri.32\t%q0, %q2, %3";
}
}

static const char *
output_1453 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3713 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (DImode) + 1);
  return "vsri.64\t%P0, %P2, %3";
}
}

static const char *
output_1454 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3713 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 1, neon_element_bits (V2DImode) + 1);
  return "vsri.64\t%q0, %q2, %3";
}
}

static const char *
output_1455 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3730 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V8QImode));
  return "vsli.8\t%P0, %P2, %3";
}
}

static const char *
output_1456 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3730 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V16QImode));
  return "vsli.8\t%q0, %q2, %3";
}
}

static const char *
output_1457 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3730 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V4HImode));
  return "vsli.16\t%P0, %P2, %3";
}
}

static const char *
output_1458 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3730 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V8HImode));
  return "vsli.16\t%q0, %q2, %3";
}
}

static const char *
output_1459 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3730 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V2SImode));
  return "vsli.32\t%P0, %P2, %3";
}
}

static const char *
output_1460 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3730 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V4SImode));
  return "vsli.32\t%q0, %q2, %3";
}
}

static const char *
output_1461 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3730 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (DImode));
  return "vsli.64\t%P0, %P2, %3";
}
}

static const char *
output_1462 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3730 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_const_bounds (operands[3], 0, neon_element_bits (V2DImode));
  return "vsli.64\t%q0, %q2, %3";
}
}

static const char *
output_1464 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3756 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_1465 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_1466 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3799 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[1]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[2];
  output_asm_insn ("vtbl.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_1468 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3834 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[4];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2}, %P3", ops);

  return "";
}
}

static const char *
output_1469 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3856 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[5];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3}, %P4", ops);

  return "";
}
}

static const char *
output_1470 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3879 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[6];
  int tabbase = REGNO (operands[2]);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, tabbase);
  ops[2] = gen_rtx_REG (V8QImode, tabbase + 2);
  ops[3] = gen_rtx_REG (V8QImode, tabbase + 4);
  ops[4] = gen_rtx_REG (V8QImode, tabbase + 6);
  ops[5] = operands[3];
  output_asm_insn ("vtbx.8\t%P0, {%P1, %P2, %P3, %P4}, %P5", ops);

  return "";
}
}

static const char *
output_1505 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4080 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.8\t%P0, [%1]";
  else
    return "vld1.8\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1506 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4080 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.16\t%P0, [%1]";
  else
    return "vld1.16\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1507 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4080 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.32\t%P0, [%1]";
  else
    return "vld1.32\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1508 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4080 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.32\t%P0, [%1]";
  else
    return "vld1.32\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1509 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4080 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vld1.64\t%P0, [%1]";
  else
    return "vld1.64\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1510 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4103 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vld1.8\t%P0, [%1]";
  else
    return "vld1.8\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1511 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4103 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vld1.16\t%P0, [%1]";
  else
    return "vld1.16\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1512 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4103 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vld1.32\t%P0, [%1]";
  else
    return "vld1.32\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1513 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4103 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vld1.32\t%P0, [%1]";
  else
    return "vld1.32\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1514 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4103 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  int regno = REGNO (operands[0]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[3] = GEN_INT (lane);
    }
  operands[0] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vld1.64\t%P0, [%1]";
  else
    return "vld1.64\t{%P0[%c3]}, [%1]";
}
}

static const char *
output_1515 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4132 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    return "vld1.8\t{%P0[]}, [%1]";
  else
    return "vld1.8\t%h0, [%1]";
}
}

static const char *
output_1516 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4132 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    return "vld1.16\t{%P0[]}, [%1]";
  else
    return "vld1.16\t%h0, [%1]";
}
}

static const char *
output_1517 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4132 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    return "vld1.32\t{%P0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1518 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4132 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    return "vld1.32\t{%P0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1519 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4132 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    return "vld1.64\t{%P0[]}, [%1]";
  else
    return "vld1.64\t%h0, [%1]";
}
}

static const char *
output_1520 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4149 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V16QImode) > 2)
    return "vld1.8\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.8\t%h0, [%1]";
}
}

static const char *
output_1521 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4149 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8HImode) > 2)
    return "vld1.16\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.16\t%h0, [%1]";
}
}

static const char *
output_1522 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4149 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4SImode) > 2)
    return "vld1.32\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1523 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4149 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4SFmode) > 2)
    return "vld1.32\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1524 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4149 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2DImode) > 2)
    return "vld1.64\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.64\t%h0, [%1]";
}
}

static const char *
output_1535 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4175 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.8\t{%P1}, [%0]";
  else
    return "vst1.8\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1536 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4175 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.16\t{%P1}, [%0]";
  else
    return "vst1.16\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1537 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4175 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.32\t{%P1}, [%0]";
  else
    return "vst1.32\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1538 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4175 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.32\t{%P1}, [%0]";
  else
    return "vst1.32\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1539 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4175 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (DImode);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  if (max == 1)
    return "vst1.64\t{%P1}, [%0]";
  else
    return "vst1.64\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1540 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4196 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V16QImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V8QImode, regno);
  if (max == 2)
    return "vst1.8\t{%P1}, [%0]";
  else
    return "vst1.8\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1541 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4196 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V4HImode, regno);
  if (max == 2)
    return "vst1.16\t{%P1}, [%0]";
  else
    return "vst1.16\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1542 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4196 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V2SImode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, [%0]";
  else
    return "vst1.32\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1543 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4196 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (V2SFmode, regno);
  if (max == 2)
    return "vst1.32\t{%P1}, [%0]";
  else
    return "vst1.32\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1544 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4196 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2DImode);
  int regno = REGNO (operands[1]);
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
      operands[2] = GEN_INT (lane);
    }
  operands[1] = gen_rtx_REG (DImode, regno);
  if (max == 2)
    return "vst1.64\t{%P1}, [%0]";
  else
    return "vst1.64\t{%P1[%c2]}, [%0]";
}
}

static const char *
output_1545 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4223 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld2.8\t%h0, [%1]";
}
}

static const char *
output_1546 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4223 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld2.16\t%h0, [%1]";
}
}

static const char *
output_1547 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4223 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld2.32\t%h0, [%1]";
}
}

static const char *
output_1548 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4223 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld2.32\t%h0, [%1]";
}
}

static const char *
output_1549 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4223 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld2.64\t%h0, [%1]";
}
}

static const char *
output_1554 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4252 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.8\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1555 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4252 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1556 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4252 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1557 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4252 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = operands[1];
  ops[3] = operands[3];
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1558 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4277 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.16\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1559 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4277 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1560 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4277 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = operands[1];
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vld2.32\t{%P0[%c3], %P1[%c3]}, [%2]", ops);
  return "";
}
}

static const char *
output_1561 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4305 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    return "vld2.8\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.8\t%h0, [%1]";
}
}

static const char *
output_1562 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4305 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    return "vld2.16\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.16\t%h0, [%1]";
}
}

static const char *
output_1563 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4305 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1564 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4305 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    return "vld2.32\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1565 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4305 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    return "vld2.64\t{%e0[], %f0[]}, [%1]";
  else
    return "vld1.64\t%h0, [%1]";
}
}

static const char *
output_1566 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4323 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst2.8\t%h1, [%0]";
}
}

static const char *
output_1567 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4323 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst2.16\t%h1, [%0]";
}
}

static const char *
output_1568 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4323 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst2.32\t%h1, [%0]";
}
}

static const char *
output_1569 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4323 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst2.32\t%h1, [%0]";
}
}

static const char *
output_1570 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4323 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst2.64\t%h1, [%0]";
}
}

static const char *
output_1575 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4353 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.8\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1576 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4353 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1577 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4353 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1578 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4353 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = operands[2];
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1579 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4378 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.16\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1580 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4378 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1581 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4378 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[4];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = GEN_INT (lane);
  output_asm_insn ("vst2.32\t{%P1[%c3], %P2[%c3]}, [%0]", ops);
  return "";
}
}

static const char *
output_1582 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4406 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld3.8\t%h0, [%1]";
}
}

static const char *
output_1583 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4406 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld3.16\t%h0, [%1]";
}
}

static const char *
output_1584 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4406 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld3.32\t%h0, [%1]";
}
}

static const char *
output_1585 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4406 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld3.32\t%h0, [%1]";
}
}

static const char *
output_1586 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4406 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld3.64\t%h0, [%1]";
}
}

static const char *
output_1587 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4441 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[2];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1588 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4441 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[2];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1589 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4441 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[2];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4441 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[2];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1591 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4464 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[2];
  output_asm_insn ("vld3.8\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1592 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4464 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[2];
  output_asm_insn ("vld3.16\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1593 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4464 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[2];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1594 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4464 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[4];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = operands[2];
  output_asm_insn ("vld3.32\t{%P0, %P1, %P2}, [%3]!", ops);
  return "";
}
}

static const char *
output_1595 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4485 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.8\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1596 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4485 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1597 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4485 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1598 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4485 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = operands[1];
  ops[4] = operands[3];
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1599 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4512 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.16\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1600 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4512 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1601 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4512 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = operands[1];
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vld3.32\t{%P0[%c4], %P1[%c4], %P2[%c4]}, [%3]",
                   ops);
  return "";
}
}

static const char *
output_1602 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4542 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.8\t{%P0[], %P1[], %P2[]}, [%3]", ops);
      return "";
    }
  else
    return "vld1.8\t%h0, [%1]";
}
}

static const char *
output_1603 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4542 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.16\t{%P0[], %P1[], %P2[]}, [%3]", ops);
      return "";
    }
  else
    return "vld1.16\t%h0, [%1]";
}
}

static const char *
output_1604 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4542 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, [%3]", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1605 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4542 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.32\t{%P0[], %P1[], %P2[]}, [%3]", ops);
      return "";
    }
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1606 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4542 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[4];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = operands[1];
      output_asm_insn ("vld3.64\t{%P0[], %P1[], %P2[]}, [%3]", ops);
      return "";
    }
  else
    return "vld1.64\t%h0, [%1]";
}
}

static const char *
output_1607 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4568 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst3.8\t%h1, [%0]";
}
}

static const char *
output_1608 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4568 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst3.16\t%h1, [%0]";
}
}

static const char *
output_1609 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4568 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst3.32\t%h1, [%0]";
}
}

static const char *
output_1610 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4568 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst3.32\t%h1, [%0]";
}
}

static const char *
output_1611 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4568 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst3.64\t%h1, [%0]";
}
}

static const char *
output_1612 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4599 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1613 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4599 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1614 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4599 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1615 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4599 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1616 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4621 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.8\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1617 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4621 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.16\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1618 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4621 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1619 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4621 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[4];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  output_asm_insn ("vst3.32\t{%P1, %P2, %P3}, [%0]!", ops);
  return "";
}
}

static const char *
output_1620 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4642 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.8\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1621 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4642 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1622 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4642 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1623 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4642 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = operands[2];
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1624 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.16\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1625 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1626 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4669 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[5];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = GEN_INT (lane);
  output_asm_insn ("vst3.32\t{%P1[%c4], %P2[%c4], %P3[%c4]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1627 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4698 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld4.8\t%h0, [%1]";
}
}

static const char *
output_1628 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4698 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld4.16\t%h0, [%1]";
}
}

static const char *
output_1629 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4698 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld4.32\t%h0, [%1]";
}
}

static const char *
output_1630 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4698 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld4.32\t%h0, [%1]";
}
}

static const char *
output_1631 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4698 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vld1.64\t%h0, [%1]";
  else
    return "vld4.64\t%h0, [%1]";
}
}

static const char *
output_1632 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4733 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[2];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1633 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4733 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[2];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1634 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4733 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[2];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1635 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4733 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[2];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1636 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4757 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[2];
  output_asm_insn ("vld4.8\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1637 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4757 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[2];
  output_asm_insn ("vld4.16\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1638 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4757 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[2];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1639 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4757 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[0]);
  rtx ops[5];
  ops[0] = gen_rtx_REG (DImode, regno + 2);
  ops[1] = gen_rtx_REG (DImode, regno + 6);
  ops[2] = gen_rtx_REG (DImode, regno + 10);
  ops[3] = gen_rtx_REG (DImode, regno + 14);
  ops[4] = operands[2];
  output_asm_insn ("vld4.32\t{%P0, %P1, %P2, %P3}, [%4]!", ops);
  return "";
}
}

static const char *
output_1640 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4779 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.8\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1641 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4779 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1642 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4779 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1643 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4779 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 6);
  ops[4] = operands[1];
  ops[5] = operands[3];
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1644 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4807 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.16\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1645 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4807 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1646 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4807 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[3]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[0]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = gen_rtx_REG (DImode, regno);
  ops[1] = gen_rtx_REG (DImode, regno + 4);
  ops[2] = gen_rtx_REG (DImode, regno + 8);
  ops[3] = gen_rtx_REG (DImode, regno + 12);
  ops[4] = operands[1];
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vld4.32\t{%P0[%c5], %P1[%c5], %P2[%c5], %P3[%c5]}, [%4]",
                   ops);
  return "";
}
}

static const char *
output_1647 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4838 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V8QImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.8\t{%P0[], %P1[], %P2[], %P3[]}, [%4]",
                       ops);
      return "";
    }
  else
    return "vld1.8\t%h0, [%1]";
}
}

static const char *
output_1648 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4838 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V4HImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.16\t{%P0[], %P1[], %P2[], %P3[]}, [%4]",
                       ops);
      return "";
    }
  else
    return "vld1.16\t%h0, [%1]";
}
}

static const char *
output_1649 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4838 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, [%4]",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1650 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4838 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (V2SFmode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.32\t{%P0[], %P1[], %P2[], %P3[]}, [%4]",
                       ops);
      return "";
    }
  else
    return "vld1.32\t%h0, [%1]";
}
}

static const char *
output_1651 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4838 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (GET_MODE_NUNITS (DImode) > 1)
    {
      int regno = REGNO (operands[0]);
      rtx ops[5];
      ops[0] = gen_rtx_REG (DImode, regno);
      ops[1] = gen_rtx_REG (DImode, regno + 2);
      ops[2] = gen_rtx_REG (DImode, regno + 4);
      ops[3] = gen_rtx_REG (DImode, regno + 6);
      ops[4] = operands[1];
      output_asm_insn ("vld4.64\t{%P0[], %P1[], %P2[], %P3[]}, [%4]",
                       ops);
      return "";
    }
  else
    return "vld1.64\t%h0, [%1]";
}
}

static const char *
output_1652 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4867 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (8 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst4.8\t%h1, [%0]";
}
}

static const char *
output_1653 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4867 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (16 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst4.16\t%h1, [%0]";
}
}

static const char *
output_1654 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4867 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst4.32\t%h1, [%0]";
}
}

static const char *
output_1655 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4867 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (32 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst4.32\t%h1, [%0]";
}
}

static const char *
output_1656 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4867 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (64 == 64)
    return "vst1.64\t%h1, [%0]";
  else
    return "vst4.64\t%h1, [%0]";
}
}

static const char *
output_1657 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4899 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1658 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4899 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1659 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4899 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1660 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4899 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1661 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4922 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.8\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1662 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4922 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.16\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1663 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4922 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1664 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4922 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[2]);
  rtx ops[5];
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2);
  ops[2] = gen_rtx_REG (DImode, regno + 6);
  ops[3] = gen_rtx_REG (DImode, regno + 10);
  ops[4] = gen_rtx_REG (DImode, regno + 14);
  output_asm_insn ("vst4.32\t{%P1, %P2, %P3, %P4}, [%0]!", ops);
  return "";
}
}

static const char *
output_1665 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4944 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8QImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.8\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1666 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4944 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4HImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1667 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4944 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1668 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4944 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V2SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 2);
  ops[3] = gen_rtx_REG (DImode, regno + 4);
  ops[4] = gen_rtx_REG (DImode, regno + 6);
  ops[5] = operands[2];
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1669 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4972 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V8HImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.16\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1670 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4972 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SImode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1671 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 4972 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT lane = INTVAL (operands[2]);
  HOST_WIDE_INT max = GET_MODE_NUNITS (V4SFmode);
  int regno = REGNO (operands[1]);
  rtx ops[6];
  if (lane < 0 || lane >= max)
    error ("lane out of range");
  else if (lane >= max / 2)
    {
      lane -= max / 2;
      regno += 2;
    }
  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno);
  ops[2] = gen_rtx_REG (DImode, regno + 4);
  ops[3] = gen_rtx_REG (DImode, regno + 8);
  ops[4] = gen_rtx_REG (DImode, regno + 12);
  ops[5] = GEN_INT (lane);
  output_asm_insn ("vst4.32\t{%P1[%c5], %P2[%c5], %P3[%c5], %P4[%c5]}, [%0]",
                   ops);
  return "";
}
}

static const char *
output_1869 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10450 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return emit_ldm_seq (operands, 4);
  
}

static const char *
output_1870 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10463 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return emit_ldm_seq (operands, 3);
  
}

static const char *
output_1871 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10474 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return emit_ldm_seq (operands, 2);
  
}

static const char *
output_1872 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10489 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return emit_stm_seq (operands, 4);
  
}

static const char *
output_1873 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10502 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return emit_stm_seq (operands, 3);
  
}

static const char *
output_1874 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10513 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  return emit_stm_seq (operands, 2);
  
}

static const char * const output_2295[] = {
  "add%?\t%0, %1, %2",
  "add%?\t%0, %1, %2",
  "add%?\t%0, %2, %1",
  "sub%?\t%0, %1, #%n2",
  "sub%?\t%0, %1, #%n2",
  "#",
};

static const char * const output_2297[] = {
  "rsb%?\t%0, %2, %1",
  "sub%?\t%0, %1, %2",
  "#",
};

static const char * const output_2322[] = {
  "and%?\t%0, %1, %2",
  "bic%?\t%0, %1, #%B2",
  "#",
};

static const char * const output_2328[] = {
  "bic%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_2335[] = {
  "orr%?\t%Q0, %Q1, %2",
  "#",
};

static const char * const output_2337[] = {
  "orr%?\t%0, %1, %2",
  "#",
};

static const char * const output_2340[] = {
  "eor%?\t%Q0, %Q1, %2",
  "#",
};

static const char *
output_2347 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3393 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"
 return arm_output_shift(operands, 0);
}

static const char *
output_2355 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3919 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, #0";
  
}

static const char * const output_2356[] = {
  "and%?\t%Q0, %1, #255\n\tmov%?\t%R0, #0",
  "ldr%(b%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char *
output_2357 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 3961 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    if (REGNO (operands[1])
        != REGNO (operands[0]) + (WORDS_BIG_ENDIAN ? 1 : 0))
      output_asm_insn ("mov%?\t%Q0, %1", operands);
    return "mov%?\t%R0, %Q0, asr #31";
  
}

static const char * const output_2359[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_2362[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char * const output_2365[] = {
  "sxth%?\t%0, %1",
  "ldr%(sh%)\t%0, %1",
};

static const char * const output_2368[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_2371[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char *
output_2372 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5289 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "add%?\t%0, %|pc, %1";
  
}

static const char *
output_2373 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5304 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

    (*targetm.asm_out.internal_label) (asm_out_file, "LPIC",
				       INTVAL (operands[2]));
    return "ldr%?\t%0, [%|pc, %1]\t\t@ tls_load_dot_plus_eight";
  
}

static const char * const output_2374[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_2375[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "mvn%?\t%0, #%B1\t%@ movhi",
};

static const char * const output_2376[] = {
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "ldr%(b%)\t%0, %1",
  "str%(b%)\t%1, %0",
};

static const char *
output_2377 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 5980 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  switch (which_alternative)
    {
    case 0:	/* ARM register from memory */
      return "ldr%(h%)\t%0, %1\t%@ __fp16";
    case 1:	/* memory from ARM register */
      return "str%(h%)\t%1, %0\t%@ __fp16";
    case 2:	/* ARM register from ARM register */
      return "mov%?\t%0, %1\t%@ __fp16";
    case 3:	/* ARM register from constant */
      {
	REAL_VALUE_TYPE r;
	long bits;
	rtx ops[4];

	REAL_VALUE_FROM_CONST_DOUBLE (r, operands[1]);
	bits = real_to_target (NULL, &r, HFmode);
	ops[0] = operands[0];
	ops[1] = GEN_INT (bits);
	ops[2] = GEN_INT (bits & 0xff00);
	ops[3] = GEN_INT (bits & 0x00ff);

	if (arm_arch_thumb2)
	  output_asm_insn ("movw%?\t%0, %1", ops);
	else
	  output_asm_insn ("mov%?\t%0, %2\n\torr%?\t%0, %0, %3", ops);
	return "";
       }
    default:
      gcc_unreachable ();
    }
  
}

static const char * const output_2378[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_2391 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8365 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 1 || arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return "b%?\t%l0";
  }
  
}

static const char *
output_2392 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 8738 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    if (arm_ccfsm_state == 2)
      {
        arm_ccfsm_state += 2;
        return "";
      }
    return output_return_instruction (const_true_rtx, TRUE, FALSE);
  }
}

static const char *
output_2397 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 10327 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md"

  {
    rtx ldm[3];
    rtx arith[4];
    rtx base_reg;
    HOST_WIDE_INT val1 = 0, val2 = 0;

    if (REGNO (operands[0]) > REGNO (operands[4]))
      {
	ldm[1] = operands[4];
	ldm[2] = operands[0];
      }
    else
      {
	ldm[1] = operands[0];
	ldm[2] = operands[4];
      }

    base_reg = XEXP (operands[2], 0);

    if (!REG_P (base_reg))
      {
	val1 = INTVAL (XEXP (base_reg, 1));
	base_reg = XEXP (base_reg, 0);
      }

    if (!REG_P (XEXP (operands[3], 0)))
      val2 = INTVAL (XEXP (XEXP (operands[3], 0), 1));

    arith[0] = operands[0];
    arith[3] = operands[1];

    if (val1 < val2)
      {
	arith[1] = ldm[1];
	arith[2] = ldm[2];
      }
    else
      {
	arith[1] = ldm[2];
	arith[2] = ldm[1];
      }

    ldm[0] = base_reg;
    if (val1 !=0 && val2 != 0)
      {
	rtx ops[3];

	if (val1 == 4 || val2 == 4)
	  /* Other val must be 8, since we know they are adjacent and neither
	     is zero.  */
	  output_asm_insn ("ldm%(ib%)\t%0, {%1, %2}", ldm);
	else if (const_ok_for_arm (val1) || const_ok_for_arm (-val1))
	  {
	    ldm[0] = ops[0] = operands[4];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_add_immediate (ops);
	    if (val1 < val2)
	      output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	    else
	      output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	  }
	else
	  {
	    /* Offset is out of range for a single add, so use two ldr.  */
	    ops[0] = ldm[1];
	    ops[1] = base_reg;
	    ops[2] = GEN_INT (val1);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	    ops[0] = ldm[2];
	    ops[2] = GEN_INT (val2);
	    output_asm_insn ("ldr%?\t%0, [%1, %2]", ops);
	  }
      }
    else if (val1 != 0)
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
      }
    else
      {
	if (val1 < val2)
	  output_asm_insn ("ldm%(ia%)\t%0, {%1, %2}", ldm);
	else
	  output_asm_insn ("ldm%(da%)\t%0, {%1, %2}", ldm);
      }
    output_asm_insn ("%I3%?\t%0, %1, %2", arith);
    return "";
  }
}

static const char * const output_2403[] = {
  "adf%?s\t%0, %1, %2",
  "suf%?s\t%0, %1, #%N2",
};

static const char * const output_2404[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_2405[] = {
  "adf%?d\t%0, %1, %2",
  "suf%?d\t%0, %1, #%N2",
};

static const char * const output_2408[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_2410[] = {
  "suf%?d\t%0, %1, %2",
  "rsf%?d\t%0, %2, %1",
};

static const char * const output_2417[] = {
  "fdv%?s\t%0, %1, %2",
  "frd%?s\t%0, %2, %1",
};

static const char * const output_2418[] = {
  "dvf%?d\t%0, %1, %2",
  "rdf%?d\t%0, %2, %1",
};

static const char * const output_2442[] = {
  "mvf%?s\t%0, %1",
  "mnf%?s\t%0, #%N1",
  "ldf%?s\t%0, %1",
  "stf%?s\t%1, %0",
  "str%?\t%1, [%|sp, #-4]!\n\tldf%?s\t%0, [%|sp], #4",
  "stf%?s\t%1, [%|sp, #-4]!\n\tldr%?\t%0, [%|sp], #4",
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char *
output_2443 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 562 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"

  {
  switch (which_alternative)
    {
    default:
    case 0: return "ldm%(ia%)\t%m1, %M0\t%@ double";
    case 1: return "stm%(ia%)\t%m0, %M1\t%@ double";
    case 2: return "#";
    case 3: case 4: return output_move_double (operands);
    case 5: return "mvf%?d\t%0, %1";
    case 6: return "mnf%?d\t%0, #%N1";
    case 7: return "ldf%?d\t%0, %1";
    case 8: return "stf%?d\t%1, %0";
    case 9: return output_mov_double_fpa_from_arm (operands);
    case 10: return output_mov_double_arm_from_fpa (operands);
    }
  }
  
}

static const char *
output_2444 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 597 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md"

  switch (which_alternative)
    {
    default:
    case 0: return "mvf%?e\t%0, %1";
    case 1: if (TARGET_FPA_EMU2)
	      return "ldf%?e\t%0, %1";
	    return "lfm%?\t%0, 1, %1";
    case 2: if (TARGET_FPA_EMU2)
	      return "stf%?e\t%1, %0";
	    return "sfm%?\t%1, 1, %0";
    }
  
}

static const char * const output_2445[] = {
  "mvf%?s\t%0, %1",
  "mnf%?s\t%0, #%N1",
  "ldf%?s\t%0, %1",
  "stf%?s\t%1, %0",
  "str%?\t%1, [%|sp, #-4]!\n\tldf%?s\t%0, [%|sp], #4",
  "stf%?s\t%1, [%|sp, #-4]!\n\tldr%?\t%0, [%|sp], #4",
  "mov%?\t%0, %1 @bar",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_2446[] = {
  "wor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_2447[] = {
  "wxor%?\t%0, %1, %2",
  "#",
  "#",
};

static const char * const output_2448[] = {
  "wand%?\t%0, %1, %2",
  "#",
  "#",
};

static const char *
output_2450 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char *
output_2451 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char *
output_2452 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 174 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md"

   switch (which_alternative)
   {
   case 0: return "wmov%?\t%0, %1";
   case 1: return "wstrd%?\t%1, %0";
   case 2: return "wldrd%?\t%0, %1";
   case 3: return "tmrrc%?\t%Q0, %R0, %1";
   case 4: return "tmcrr%?\t%0, %Q1, %R1";
   case 5: return "#";
   default: return output_move_double (operands);
   }
}

static const char * const output_2582[] = {
  "waligni%?\t%0, %1, %2, %3",
  "walignr%U3%?\t%0, %1, %2",
};

static const char *
output_2589 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 58 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "fmsr%?\t%0, %1\t%@ int";
    case 7:
      return "fmrs%?\t%0, %1\t%@ int";
    case 8:
      return "fcpys%?\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_2590 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 95 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: case 1:
      return "mov%?\t%0, %1";
    case 2:
      return "mvn%?\t%0, #%B1";
    case 3:
      return "movw%?\t%0, %1";
    case 4:
      return "ldr%?\t%0, %1";
    case 5:
      return "str%?\t%1, %0";
    case 6:
      return "fmsr%?\t%0, %1\t%@ int";
    case 7:
      return "fmrs%?\t%0, %1\t%@ int";
    case 8:
      return "fcpys%?\t%0, %1\t%@ int";
    case 9: case 10:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_2591 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 135 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0: 
      return "#";
    case 1:
    case 2:
      return output_move_double (operands);
    case 3:
      return "fmdrr%?\t%P0, %Q1, %R1\t%@ int";
    case 4:
      return "fmrrd%?\t%Q0, %R0, %P1\t%@ int";
    case 5:
      if (TARGET_VFP_SINGLE)
	return "fcpys%?\t%0, %1\t%@ int\n\tfcpys%?\t%p0, %p1\t%@ int";
      else
	return "fcpyd%?\t%P0, %P1\t%@ int";
    case 6: case 7:
      return output_move_vfp (operands);
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_2592 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 325 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_2593 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 361 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  switch (which_alternative)
    {
    case 0:
      return "fmsr%?\t%0, %1";
    case 1:
      return "fmrs%?\t%0, %1";
    case 2:
      return "fconsts%?\t%0, #%G1";
    case 3: case 4:
      return output_move_vfp (operands);
    case 5:
      return "ldr%?\t%0, %1\t%@ float";
    case 6:
      return "str%?\t%1, %0\t%@ float";
    case 7:
      return "fcpys%?\t%0, %1";
    case 8:
      return "mov%?\t%0, %1\t%@ float";
    default:
      gcc_unreachable ();
    }
  
}

static const char *
output_2594 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 400 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md"

  {
    switch (which_alternative)
      {
      case 0:
	return "fmdrr%?\t%P0, %Q1, %R1";
      case 1:
	return "fmrrd%?\t%Q0, %R0, %P1";
      case 2:
	gcc_assert (TARGET_VFP_DOUBLE);
        return "fconstd%?\t%P0, #%G1";
      case 3: case 4:
	return output_move_double (operands);
      case 5: case 6:
	return output_move_vfp (operands);
      case 7:
	if (TARGET_VFP_SINGLE)
	  return "fcpys%?\t%0, %1\n\tfcpys%?\t%p0, %p1";
	else
	  return "fcpyd%?\t%P0, %P1";
      case 8:
        return "#";
      default:
	gcc_unreachable ();
      }
    }
  
}

static const char * const output_2597[] = {
  "fnegs%?\t%0, %1",
  "eor%?\t%0, %1, #-2147483648",
};

static const char * const output_2598[] = {
  "fnegd%?\t%P0, %P1",
  "#",
  "#",
};

static const char * const output_2632[] = {
  "fcmps%?\t%0, %1",
  "fcmpzs%?\t%0",
};

static const char * const output_2633[] = {
  "fcmpes%?\t%0, %1",
  "fcmpezs%?\t%0",
};

static const char * const output_2634[] = {
  "fcmpd%?\t%P0, %P1",
  "fcmpzd%?\t%P0",
};

static const char * const output_2635[] = {
  "fcmped%?\t%P0, %P1",
  "fcmpezd%?\t%P0",
};

static const char * const output_2638[] = {
  "mov%?\t%0, %1",
  "mov%?\t%0, %1",
  "mvn%?\t%0, #%B1",
  "movw%?\t%0, %1",
  "ldr%?\t%0, %1",
  "str%?\t%1, %0",
};

static const char * const output_2639[] = {
  "mov%?\t%0, %1\t%@ movhi",
  "movw%?\t%0, %L1\t%@ movhi",
  "str%(h%)\t%1, %0\t%@ movhi",
  "ldr%(h%)\t%0, %1\t%@ movhi",
};

static const char * const output_2640[] = {
  "mov%?\t%0, %1",
  "ldr%?\t%0, %1\t%@ float",
  "str%?\t%1, %0\t%@ float",
};

static const char * const output_2645[] = {
  "uxth%?\t%Q0, %1\n\tmov%?\t%R0, #0",
  "ldr%(h%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char * const output_2647[] = {
  "uxtb%?\t%Q0, %1\n\tmov%?\t%R0, #0",
  "ldr%(b%)\t%Q0, %1\n\tmov%?\t%R0, #0",
};

static const char * const output_2651[] = {
  "sxth%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
  "ldrsh%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
};

static const char * const output_2653[] = {
  "sxtb%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
  "ldrsb%?\t%Q0, %1\n\tasr%?\t%R0, %Q0, #31",
};

static const char * const output_2655[] = {
  "sxtb%?\t%0, %1",
  "ldr%(sb%)\t%0, %1",
};

static const char * const output_2656[] = {
  "uxth%?\t%0, %1",
  "ldr%(h%)\t%0, %1",
};

static const char * const output_2657[] = {
  "uxtb%(%)\t%0, %1",
  "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
};

static const char *
output_2659 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1131 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"
 return arm_output_shift(operands, 2);
}

static const char *
output_2663 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 1188 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md"

    HOST_WIDE_INT val;

    if (GET_CODE (operands[2]) == CONST_INT)
      val = INTVAL(operands[2]);
    else
      val = 0;

    /* We prefer eg. subs rn, rn, #1 over adds rn, rn, #0xffffffff.  */
    if (val < 0 && const_ok_for_arm(ARM_SIGN_EXTEND (-val)))
      return "sub%!\t%0, %1, #%n2";
    else
      return "add%!\t%0, %1, %2";
  
}

static const char * const output_2672[] = {
  "orr%?\t%0, %1, %2",
  "orn%?\t%0, %1, #%B2",
  "#",
};

static const char *
output_2674 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 682 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.u8\t%P0[%c2], %1";
}
}

static const char *
output_2675 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 682 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.u16\t%P0[%c2], %1";
}
}

static const char *
output_2676 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 682 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_2677 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 682 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int elt = ffs ((int) INTVAL (operands[2]) - 1);
  if (BYTES_BIG_ENDIAN)
    elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
  operands[2] = GEN_INT (elt);
  
  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_2678 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 701 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u8\t%P0[%c2], %1";
}
}

static const char *
output_2679 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 701 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u16\t%P0[%c2], %1";
}
}

static const char *
output_2680 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 701 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_2681 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 701 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = elem % half_elts;
  int hi = (elem / half_elts) * 2;
  int regno = REGNO (operands[0]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[0] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%P0[%c2], %1";
}
}

static const char *
output_2682 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 728 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  HOST_WIDE_INT elem = ffs ((int) INTVAL (operands[2])) - 1;
  int regno = REGNO (operands[0]) + 2 * elem;

  operands[0] = gen_rtx_REG (DImode, regno);

  return "vmov%?.64\t%P0, %Q1, %R1";
}
}

static const char *
output_2683 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 758 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_2684 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 758 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_2685 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 758 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_2686 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 758 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_2687 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V16QImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V8QImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_2688 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V8HImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V4HImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_2689 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SImode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SImode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_2690 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 777 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int half_elts = GET_MODE_NUNITS (V4SFmode) / 2;
  int elt = INTVAL (operands[2]) % half_elts;
  int hi = (INTVAL (operands[2]) / half_elts) * 2;
  int regno = REGNO (operands[1]);

  if (BYTES_BIG_ENDIAN)
    elt = half_elts - 1 - elt;

  operands[1] = gen_rtx_REG (V2SFmode, regno + hi);
  operands[2] = GEN_INT (elt);

  return "vmov%?.32\t%0, %P1[%c2]";
}
}

static const char *
output_2691 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 801 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  int regno = REGNO (operands[1]) + INTVAL (operands[2]);

  operands[1] = gen_rtx_REG (DImode, regno);

  return "vmov%?.64\t%Q0, %R0, %P1";
}
}

static const char *
output_2692 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2422 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s8\t%0, %P1[%c2]";
}
}

static const char *
output_2693 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2422 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s16\t%0, %P1[%c2]";
}
}

static const char *
output_2694 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2422 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s32\t%0, %P1[%c2]";
}
}

static const char *
output_2695 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2422 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.s32\t%0, %P1[%c2]";
}
}

static const char *
output_2696 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2442 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V8QImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u8\t%0, %P1[%c2]";
}
}

static const char *
output_2697 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2442 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V4HImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u16\t%0, %P1[%c2]";
}
}

static const char *
output_2698 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2442 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SImode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u32\t%0, %P1[%c2]";
}
}

static const char *
output_2699 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2442 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  if (BYTES_BIG_ENDIAN)
    {
      int elt = INTVAL (operands[2]);
      elt = GET_MODE_NUNITS (V2SFmode) - 1 - elt;
      operands[2] = GEN_INT (elt);
    }
  return "vmov%?.u32\t%0, %P1[%c2]";
}
}

static const char *
output_2700 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_2701 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_2702 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_2703 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2462 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.s32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_2704 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2490 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u8\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_2705 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2490 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u16\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_2706 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2490 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_2707 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2490 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[3];
  int regno = REGNO (operands[1]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[2]);
  unsigned int elt_adj = elt % halfelts;

  if (BYTES_BIG_ENDIAN)
    elt_adj = halfelts - 1 - elt_adj;

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[2] = GEN_INT (elt_adj);
  output_asm_insn ("vmov%?.u32\t%0, %P1[%c2]", ops);

  return "";
}
}

static const char *
output_2708 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2562 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[2], 0, 1);
  return "vmov%?\t%Q0, %R0, %P1  @ di";
}
}

static const char *
output_2709 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2577 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[2];
  unsigned int regno = REGNO (operands[1]);
  unsigned int elt = INTVAL (operands[2]);

  neon_lane_bounds (operands[2], 0, 2);

  ops[0] = operands[0];
  ops[1] = gen_rtx_REG (DImode, regno + 2 * elt);
  output_asm_insn ("vmov%?\t%Q0, %R0, %P1  @ v2di", ops);

  return "";
}
}

static const char *
output_2710 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2601 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V8QImode));
  return "vmov%?.8\t%P0[%c3], %1";
}
}

static const char *
output_2711 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2601 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V4HImode));
  return "vmov%?.16\t%P0[%c3], %1";
}
}

static const char *
output_2712 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2601 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SImode));
  return "vmov%?.32\t%P0[%c3], %1";
}
}

static const char *
output_2713 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2601 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, GET_MODE_NUNITS (V2SFmode));
  return "vmov%?.32\t%P0[%c3], %1";
}
}

static const char *
output_2714 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2618 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  neon_lane_bounds (operands[3], 0, 1);
  return "vmov%?\t%P0, %Q1, %R1  @ di";
}
}

static const char *
output_2715 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2633 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[4];
  unsigned int regno = REGNO (operands[0]);
  unsigned int halfelts = GET_MODE_NUNITS (V16QImode) / 2;
  unsigned int elt = INTVAL (operands[3]);

  neon_lane_bounds (operands[3], 0, halfelts * 2);

  ops[0] = gen_rtx_REG (V8QImode, regno + 2 * (elt / halfelts));
  ops[1] = operands[1];
  ops[2] = GEN_INT (elt % halfelts);
  output_asm_insn ("vmov%?.8\t%P0[%c2], %1", ops);

  return "";
}
}

static const char *
output_2716 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2633 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[4];
  unsigned int regno = REGNO (operands[0]);
  unsigned int halfelts = GET_MODE_NUNITS (V8HImode) / 2;
  unsigned int elt = INTVAL (operands[3]);

  neon_lane_bounds (operands[3], 0, halfelts * 2);

  ops[0] = gen_rtx_REG (V4HImode, regno + 2 * (elt / halfelts));
  ops[1] = operands[1];
  ops[2] = GEN_INT (elt % halfelts);
  output_asm_insn ("vmov%?.16\t%P0[%c2], %1", ops);

  return "";
}
}

static const char *
output_2717 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2633 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[4];
  unsigned int regno = REGNO (operands[0]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SImode) / 2;
  unsigned int elt = INTVAL (operands[3]);

  neon_lane_bounds (operands[3], 0, halfelts * 2);

  ops[0] = gen_rtx_REG (V2SImode, regno + 2 * (elt / halfelts));
  ops[1] = operands[1];
  ops[2] = GEN_INT (elt % halfelts);
  output_asm_insn ("vmov%?.32\t%P0[%c2], %1", ops);

  return "";
}
}

static const char *
output_2718 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2633 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[4];
  unsigned int regno = REGNO (operands[0]);
  unsigned int halfelts = GET_MODE_NUNITS (V4SFmode) / 2;
  unsigned int elt = INTVAL (operands[3]);

  neon_lane_bounds (operands[3], 0, halfelts * 2);

  ops[0] = gen_rtx_REG (V2SFmode, regno + 2 * (elt / halfelts));
  ops[1] = operands[1];
  ops[2] = GEN_INT (elt % halfelts);
  output_asm_insn ("vmov%?.32\t%P0[%c2], %1", ops);

  return "";
}
}

static const char *
output_2719 (rtx *operands ATTRIBUTE_UNUSED, rtx insn ATTRIBUTE_UNUSED)
{
#line 2659 "/home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md"
{
  rtx ops[2];
  unsigned int regno = REGNO (operands[0]);
  unsigned int elt = INTVAL (operands[3]);

  neon_lane_bounds (operands[3], 0, 2);

  ops[0] = gen_rtx_REG (DImode, regno + 2 * elt);
  ops[1] = operands[1];
  output_asm_insn ("vmov%?\t%P0, %Q1, %R1  @ v2di", ops);

  return "";
}
}

static const char * const output_2724[] = {
  "vdup%?.32\t%P0, %1",
  "vdup%?.32\t%P0, %y1",
};

static const char * const output_2725[] = {
  "vdup%?.32\t%P0, %1",
  "vdup%?.32\t%P0, %y1",
};

static const char * const output_2726[] = {
  "vdup%?.32\t%q0, %1",
  "vdup%?.32\t%q0, %y1",
};

static const char * const output_2727[] = {
  "vdup%?.32\t%q0, %1",
  "vdup%?.32\t%q0, %y1",
};



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,!k,r,r,!k,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%rk,!k,r,rk,!k,rk",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,rI,!k,L,L,?n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l,l,*rk,*hk,l,!k,l,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0,0,l,*0,*0,!k,!k,0,l",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,J,lL,*hk,*rk,!M,!O,Pa,Pb",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_addimm_operand,
    "I,L",
    SImode,
    0,
    1
  },
  {
    arm_addimm_operand,
    "L,I",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    CCmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,rk,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,!k,?n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "r,I",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&l,&l,&l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%l,*h,0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,l,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,l,0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,0,0",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,0,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "?r,r,0,0",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,K,?n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "rI,K",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "rIK",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "rIK",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,?n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,?r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r,?r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    minmax_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "N,l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&l",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "l,m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "l,m",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "l,m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "V,m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l,l",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "l,V,m",
    QImode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,r,r,m",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rDa,Db,Dc,mi,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,>,l,m,*r",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "l,I,J,>,l,mi,l,*r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,l,l,l,>,l,m,*lhk",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "l,I,J,K,>,l,mi,l,*lhk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "mX",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    0,
    "mX",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h,l",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "l,m,l,*h,*r,I",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,r,m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,K",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,m,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h,l",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "l,m,l,*h,*r,I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    HFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,m,*r,*h",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "l,mF,l,*h,*r",
    HFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r,*h",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*h,*r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=r,r,r,r,m",
    DFmode,
    0,
    1
  },
  {
    soft_df_operand,
    "rDa,Db,Dc,mF,r",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=l,l,>,l,m,*r",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "l,>,l,mF,l,*r",
    DFmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=&l",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "l,*h",
    SImode,
    0,
    1
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=l,l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    thumb1_cmpneg_operand,
    "L,J",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,l,*h,*m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,l,l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%0,1,1,1",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,l,l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=!l,l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "0,1,1,1,1",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,l,l,l,l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,1,l",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    thumb_cbrch_target_operand,
    "=l,l,*!h,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,X,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%l,0,*0,1,1,1",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "lL,IJ,*r,lIJ,lIJ,lIJ",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,l,l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "%l,l,l,0",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "J,l,L,IJ",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    thumb_cbrch_target_operand,
    "=l,*?h,*?m,*?m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,&l,&l",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "l,l,1,l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,l,l,l",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&l,l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=X,l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,*h",
    SImode,
    0,
    1
  },
  {
    thumb1_cmp_operand,
    "lI*h,*r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    thumb1_cmp_operand,
    "lI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r,r,r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,0,rI,K,rI,rI,K,K",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "rI,K,0,0,rI,K,rI,K",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "l*r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "X",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    cc_register,
    "",
    CC_NOOVmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L,rI,L",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,rI,L,L",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,0",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,0,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,rI,?rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,0,?rI,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rI,L,rI,L",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rIK",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM,rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL,rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "0,?rI,K",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM,rM,rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "rIL",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "0,?rI",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    f_register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    0
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,f,r,r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fG,H,mE,f,r,f,r,mE,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Q,r,m,r,f,f,f,m,!f,!r",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "Q,r,r,r,mF,fG,H,mF,f,r,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,m",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "f,m,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,f,r,r",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fG,H,m,f,r,f,r",
    XFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f,f,f,f,f,f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "0,0,fG,H,fG,fG,H,H",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H,0,0,fG,H,fG,H",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f,f,f,f,f,f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "0,0,fG,H,fG,fG,H,H",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H,0,0,fG,H,fG,H",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_shift_const,
    "",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=v",
    DFmode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "=v",
    SFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "=v",
    DFmode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "v",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,o<>,v,r,v,m,v",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r,r,v,mi,v,v",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=v,v,v,r,m,r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "v,mE,r,v,v,r,mE,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Q,r,m,r,v,v,v,r,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "Q,r,r,r,mF,v,mF,r,v,v",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,m,y,y,yr,y,yrUy",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r,y,yr,y,yrUy,y",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,rk,m,z,r,?z,Uy,z",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,mi,rk,r,z,Uy,z,z",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m,z,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,mi,r,r,z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "i,z",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,m,w,r,w,w,Uv",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=t,Um,r,m,t,r,t,r,r",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "Um,t,m,r,t,r,r,t,F",
    HFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,t,r,t,r,r",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "m,r,t,r,r,t,F",
    HFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,r,m,w,Uv,w,r",
    DFmode,
    0,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,mF,r,UvF,w,w,r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t,t,t,t,t,t,?r,?r,?r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0,t,t,0,?r,?r,0,t,t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t,0,t,?r,0,?r,t,0,t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w,w,w,w,?r,?r,?r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w,0,?r,?r,0,w,w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w,?r,0,?r,w,0,w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t,?r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t,r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,?r,?r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "+t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    HFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    HFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "tG",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "wG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "t,G",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "w,G",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    BLKmode,
    0,
    1
  },
  {
    vfp_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    multi_register_push,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=&r,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "?r,0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=l,l,r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,l,X,r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "0,1,0,1",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,n,r,m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    thumb_16bit_operator,
    "",
    SImode,
    0,
    0
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    low_reg_or_int_operand,
    "lM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    low_register_operand,
    "=l",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    HImode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=l",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l,?r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Uv,w,w,?r,?w,?r,?r,?Us",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uvi,w,r,r,Usi,r",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Uv,w,w,?r,?w,?r,?r,?Us",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uvi,w,r,r,Usi,r",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Uv,w,w,?r,?w,?r,?r,?Us",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uvi,w,r,r,Usi,r",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Uv,w,w,?r,?w,?r,?r,?Us",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uvi,w,r,r,Usi,r",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Un,w,w,?r,?w,?r,?r,?Us",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Dn,Uni,w,r,r,Usi,r",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    EImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    EImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    OImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    OImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    CImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    CImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=w,Ut,w",
    XImode,
    0,
    1
  },
  {
    general_operand,
    "w,w,Ut",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V8QImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V16QImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4HImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V8HImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2SImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4SImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2SFmode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4SFmode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2DImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    DImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "w,Dl",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V8QImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V16QImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4HImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V8HImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2SImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4SImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2SFmode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V4SFmode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    V2DImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0",
    DImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "w,DL",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "%w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "x",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,w,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w,0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    neon_lane_number,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    TImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    OImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    TImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    OImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    EImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    CImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    EImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    XImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    equality_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    logical_binary_operator,
    "",
    DImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    logical_binary_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    subreg_lowpart_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    const_double_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&l",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    arm_reload_memory_operand,
    "o",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_general_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_reload_memory_operand,
    "=o",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_compare_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_compare_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_float_compare_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_compare_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    cirrus_fp_register,
    "",
    DImode,
    0,
    1
  },
  {
    cirrus_fp_register,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    thumb1_cmp_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_not_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    thumb1_cmp_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    dominant_cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=rk",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "rk",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_add_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    thumb_16bit_operator,
    "",
    SImode,
    0,
    0
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    low_register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    HImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    EImode,
    0,
    1
  },
  {
    general_operand,
    "",
    EImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    OImode,
    0,
    1
  },
  {
    general_operand,
    "",
    OImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    CImode,
    0,
    1
  },
  {
    general_operand,
    "",
    CImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XImode,
    0,
    1
  },
  {
    general_operand,
    "",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    EImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    OImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    const_multiple_of_8_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    CImode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    XImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    neon_inv_logic_op2,
    "",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    neon_logic_op2,
    "",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,!k,r,r,!k,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%rk,!k,r,rk,!k,rk",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,rI,!k,L,L,?n",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,rk,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,!k,?n",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r,0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,0,0",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r,&r",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,K,?n",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,0",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,?r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI,?n",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r,&r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "%0,r,r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,0,rI",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,rI,rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=&r,&r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_extendqisi_mem_op,
    "Uq",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    arm_reg_or_extendqisi_mem_op,
    "r,Uq",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,r,m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    arm_rhs_operand,
    "rI,K",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "rI,K,m,r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m,r,r",
    HFmode,
    0,
    1
  },
  {
    general_operand,
    "m,r,r,F",
    HFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "r,mE,r",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    load_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    store_multiple_operation,
    "",
    VOIDmode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_hard_register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rI",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    reg_or_int_operand,
    "rM",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "%f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_add_operand,
    "fG,H",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG,f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f,f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "f,G",
    SFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG,f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    arm_float_rhs_operand,
    "fG",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,f,m,f,r,r,r,m",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fG,H,mE,f,r,f,r,mE,r",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,Q,r,m,r,f,f,f,m,!f,!r",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "Q,r,r,r,mF,fG,H,mF,f,r,f",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,f,m",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "f,m,f",
    XFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y,?&r,?&r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%y,0,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y,r,r",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m,y,?r,?y,?r,?r,?m",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "y,y,mi,y,r,r,mi,r",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y,y",
    V8QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "i,z",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rk,r,r,r,rk,m,*t,r,*t,*t,*Uv",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rk,I,K,j,mi,rk,r,*t,*t,*Uvi,*t",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_di_operand,
    "=r,r,m,w,r,w,w,Uv",
    DImode,
    0,
    1
  },
  {
    di_operand,
    "rIK,mi,r,r,w,w,Uvi,w",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=t,?r,t,t,Uv,r,m,t,r",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "?r,t,Dv,UvE,t,mE,r,t,r",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_soft_df_operand,
    "=w,?r,w,r,m,w,Uv,w,r",
    DFmode,
    0,
    1
  },
  {
    soft_df_operand,
    "?r,w,Dy,mF,r,UvF,w,w,r",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t,?r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t,r",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,?r,?r",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,0,r",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "+t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "+w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    HFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    HFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=t",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DFmode,
    0,
    1
  },
  {
    s_register_operand,
    "t",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "t,t",
    SFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "t,G",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "w,w",
    DFmode,
    0,
    1
  },
  {
    vfp_compare_operand,
    "w,G",
    DFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,m,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rI,n,r,m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    shiftable_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "M",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    thumb_16bit_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    low_reg_or_int_operand,
    "lM",
    SImode,
    0,
    1
  },
  {
    shift_operator,
    "",
    SImode,
    0,
    0
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "I",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l,l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l,0",
    SImode,
    0,
    1
  },
  {
    low_reg_or_int_operand,
    "lPt,Ps",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    low_register_operand,
    "=l",
    SImode,
    0,
    1
  },
  {
    low_register_operand,
    "l",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "w",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V16QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V8HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "0",
    V2DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V4HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V16QImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V8HImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    HImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V2SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SImode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w,w",
    V4SFmode,
    0,
    1
  },
  {
    s_register_operand,
    "r,t",
    SFmode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
  {
    s_register_operand,
    "=w",
    V2DImode,
    0,
    1
  },
  {
    s_register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    arm_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    cc_register,
    "",
    VOIDmode,
    0,
    1
  },
};


#if GCC_VERSION >= 2007
__extension__
#endif

const struct insn_data insn_data[] = 
{
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:484 */
  {
    "*thumb1_adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "add\t%Q0, %Q0, %Q2\n\tadc\t%R0, %R0, %R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:495 */
  {
    "*arm_adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[4],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:522 */
  {
    "*adddi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:551 */
  {
    "*adddi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:613 */
  {
    "*arm_addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_4 },
#else
    { 0, output_4, 0 },
#endif
    0,
    &operand_data[10],
    3,
    0,
    6,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:645 */
  {
    "*thumb1_addsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_5 },
#else
    { 0, 0, output_5 },
#endif
    0,
    &operand_data[13],
    3,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:702 */
  {
    "*addsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_6 },
#else
    { 0, output_6, 0 },
#endif
    0,
    &operand_data[16],
    3,
    2,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:717 */
  {
    "*addsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_7 },
#else
    { 0, output_7, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:730 */
  {
    "*compare_negsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%1, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[19],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:742 */
  {
    "*cmpsi2_addneg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_9 },
#else
    { 0, output_9, 0 },
#endif
    0,
    &operand_data[21],
    4,
    1,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:798 */
  {
    "*addsi3_compare_op1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_10 },
#else
    { 0, output_10, 0 },
#endif
    0,
    &operand_data[16],
    3,
    3,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:813 */
  {
    "*addsi3_compare_op2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_11 },
#else
    { 0, output_11, 0 },
#endif
    0,
    &operand_data[16],
    3,
    3,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:828 */
  {
    "*compare_addsi2_op0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_12 },
#else
    { 0, output_12, 0 },
#endif
    0,
    &operand_data[17],
    2,
    1,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:841 */
  {
    "*compare_addsi2_op1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_13 },
#else
    { 0, output_13, 0 },
#endif
    0,
    &operand_data[17],
    2,
    1,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:854 */
  {
    "*addsi3_carryin",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:864 */
  {
    "*addsi3_carryin_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    5,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:880 */
  {
    "*addsi3_carryin_alt1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:890 */
  {
    "*addsi3_carryin_alt2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:900 */
  {
    "*addsi3_carryin_alt3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adc%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:919 */
  {
    "*arm_incscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_19 },
#else
    { 0, output_19, 0 },
#endif
    0,
    &operand_data[33],
    4,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:995 */
  {
    "*arm_subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %Q2\n\tsbc\t%R0, %R1, %R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[37],
    3,
    0,
    3,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1006 */
  {
    "*thumb_subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%Q0, %Q0, %Q2\n\tsbc\t%R0, %R0, %R2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[40],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1016 */
  {
    "*subdi_di_zesidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %2\n\tsbc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1028 */
  {
    "*subdi_di_sesidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %Q1, %2\n\tsbc\t%R0, %R1, %2, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1040 */
  {
    "*subdi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, %2\n\trsc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1052 */
  {
    "*subdi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, %2\n\trsc\t%R0, %R1, %2, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1064 */
  {
    "*subdi_zesidi_zesidi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "subs\t%Q0, %1, %2\n\tsbc\t%R0, %1, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1098 */
  {
    "*thumb1_subsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1108 */
  {
    "*arm_subsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_28 },
#else
    { 0, output_28, 0 },
#endif
    0,
    &operand_data[49],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1143 */
  {
    "*subsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_29 },
#else
    { 0, output_29, 0 },
#endif
    0,
    &operand_data[52],
    3,
    2,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1167 */
  {
    "*arm_decscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_30 },
#else
    { 0, output_30, 0 },
#endif
    0,
    &operand_data[55],
    4,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1222 */
  {
    "*arm_mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[59],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1232 */
  {
    "*arm_mulsi3_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1247 */
  {
    "*thumb_mulsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_33 },
#else
    { 0, 0, output_33 },
#endif
    0,
    &operand_data[65],
    3,
    0,
    3,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1262 */
  {
    "*thumb_mulsi3_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_34 },
#else
    { 0, output_34, 0 },
#endif
    0,
    &operand_data[68],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1275 */
  {
    "*mulsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[59],
    3,
    2,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1289 */
  {
    "*mulsi3_compare0_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    3,
    2,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1303 */
  {
    "*mulsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[71],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1316 */
  {
    "*mulsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%.\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1331 */
  {
    "*mulsi3addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[77],
    4,
    0,
    4,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1343 */
  {
    "*mulsi3addsi_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[81],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1355 */
  {
    "*mulsi3addsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[77],
    4,
    3,
    4,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1372 */
  {
    "*mulsi3addsi_compare0_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[81],
    4,
    3,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1389 */
  {
    "*mulsi3addsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[85],
    4,
    0,
    4,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1404 */
  {
    "*mulsi3addsi_compare0_scratch_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mla%.\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[89],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1419 */
  {
    "*mulsi3subsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mls%?\t%0, %2, %1, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[81],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1433 */
  {
    "*mulsidi3adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[93],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1446 */
  {
    "*mulsidi3adddi_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1474 */
  {
    "*mulsidi3_nov6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[101],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1485 */
  {
    "*mulsidi3_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1505 */
  {
    "*umulsidi3_nov6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[101],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1516 */
  {
    "*umulsidi3_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%Q0, %R0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1529 */
  {
    "*umulsidi3adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[93],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1542 */
  {
    "*umulsidi3adddi_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umlal%?\t%Q0, %R0, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[97],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1569 */
  {
    "*smulsi3_highpart_nov6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[104],
    4,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1584 */
  {
    "*smulsi3_highpart_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[108],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1613 */
  {
    "*umulsi3_highpart_nov6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[104],
    4,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1628 */
  {
    "*umulsi3_highpart_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "umull%?\t%3, %0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[108],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1643 */
  {
    "mulhisi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_mulhisi3,
    &operand_data[112],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1655 */
  {
    "*mulhisi3tb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[115],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1668 */
  {
    "*mulhisi3bt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smulbt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[118],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1681 */
  {
    "*mulhisi3tt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smultt%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1695 */
  {
    "*mulhisi3addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlabb%?\t%0, %2, %3, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[121],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1708 */
  {
    "*mulhidi3adddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "smlalbb%?\t%Q0, %R0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[125],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1860 */
  {
    "anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_anddi3,
    &operand_data[129],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1869 */
  {
    "*anddi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1890 */
  {
    "*anddi_sesdi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1972 */
  {
    "*arm_andsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_67 },
#else
    { 0, output_67, 0 },
#endif
    0,
    &operand_data[132],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:1995 */
  {
    "*thumb1_andsi3_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[135],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2004 */
  {
    "*andsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_69 },
#else
    { 0, output_69, 0 },
#endif
    0,
    &operand_data[138],
    3,
    2,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2019 */
  {
    "*andsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_70 },
#else
    { 0, output_70, 0 },
#endif
    0,
    &operand_data[139],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2033 */
  {
    "*zeroextractsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_71 },
#else
    { 0, 0, output_71 },
#endif
    0,
    &operand_data[142],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2054 */
  {
    "*ne_zeroextractsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2091 */
  {
    "*ne_zeroextractsi_shifted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2116 */
  {
    "*ite_ne_zeroextractsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[145],
    5,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2154 */
  {
    "*ite_ne_zeroextractsi_shifted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[150],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2435 */
  {
    "insv_zero",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfc%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_insv_zero,
    &operand_data[154],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2446 */
  {
    "insv_t2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bfi%?\t%0, %3, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_insv_t2,
    &operand_data[154],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2458 */
  {
    "*anddi_notdi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[158],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2480 */
  {
    "*anddi_notzesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_79 },
#else
    { 0, output_79, 0 },
#endif
    0,
    &operand_data[161],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2507 */
  {
    "*anddi_notsesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2530 */
  {
    "andsi_notsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andsi_notsi_si,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2539 */
  {
    "bicsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic\t%0, %0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicsi3,
    &operand_data[164],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2548 */
  {
    "andsi_not_shiftsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2%S4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_andsi_not_shiftsi_si,
    &operand_data[167],
    5,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2563 */
  {
    "*andsi_notsi_si_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%.\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[62],
    3,
    2,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2576 */
  {
    "*andsi_notsi_si_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%.\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[74],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2588 */
  {
    "iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iordi3,
    &operand_data[129],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2598 */
  {
    "*iordi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_87 },
#else
    { 0, output_87, 0 },
#endif
    0,
    &operand_data[161],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2611 */
  {
    "*iordi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2652 */
  {
    "*arm_iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_89 },
#else
    { 0, output_89, 0 },
#endif
    0,
    &operand_data[172],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2673 */
  {
    "*thumb1_iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[135],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2695 */
  {
    "*iorsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[175],
    3,
    2,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2707 */
  {
    "*iorsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%.\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[178],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2718 */
  {
    "xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xordi3,
    &operand_data[129],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2728 */
  {
    "*xordi_zesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_94 },
#else
    { 0, output_94, 0 },
#endif
    0,
    &operand_data[161],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2741 */
  {
    "*xordi_sesidi_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[7],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2780 */
  {
    "*arm_xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2789 */
  {
    "*thumb1_xorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[135],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2798 */
  {
    "*xorsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "eor%.\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    3,
    2,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2810 */
  {
    "*xorsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[26],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2837 */
  {
    "*andsi_iorsi3_notsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %2\n\tbic%?\t%0, %0, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[181],
    4,
    0,
    3,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2976 */
  {
    "*smax_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2985 */
  {
    "*smax_m1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orr%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:2994 */
  {
    "*arm_smax_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_103 },
#else
    { 0, output_103, 0 },
#endif
    0,
    &operand_data[185],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3025 */
  {
    "*smin_0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "and%?\t%0, %1, %1, asr #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3034 */
  {
    "*arm_smin_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_105 },
#else
    { 0, output_105, 0 },
#endif
    0,
    &operand_data[185],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3057 */
  {
    "*arm_umaxsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_106 },
#else
    { 0, output_106, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3081 */
  {
    "*arm_uminsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_107 },
#else
    { 0, output_107, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3095 */
  {
    "*store_minmaxsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_108 },
#else
    { 0, 0, output_108 },
#endif
    0,
    &operand_data[191],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3122 */
  {
    "*minmax_arithsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_109 },
#else
    { 0, 0, output_109 },
#endif
    0,
    &operand_data[195],
    6,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3191 */
  {
    "arm_ashldi3_1bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%Q0, %Q1, asl #1\n\tadc\t%R0, %R1, %R1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_arm_ashldi3_1bit,
    &operand_data[201],
    2,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3217 */
  {
    "*thumb1_ashlsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lsl\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[203],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3250 */
  {
    "arm_ashrdi3_1bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%R0, %R1, asr #1\n\tmov\t%Q0, %Q1, rrx",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_arm_ashrdi3_1bit,
    &operand_data[201],
    2,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3273 */
  {
    "*thumb1_ashrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "asr\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[203],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3306 */
  {
    "arm_lshrdi3_1bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movs\t%R0, %R1, lsr #1\n\tmov\t%Q0, %Q1, rrx",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_arm_lshrdi3_1bit,
    &operand_data[201],
    2,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3332 */
  {
    "*thumb1_lshrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "lsr\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[203],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3378 */
  {
    "*thumb1_rotrsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ror\t%0, %0, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3387 */
  {
    "*arm_shiftsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_117 },
#else
    { 0, 0, output_117 },
#endif
    0,
    &operand_data[209],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3401 */
  {
    "*shiftsi3_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_118 },
#else
    { 0, 0, output_118 },
#endif
    0,
    &operand_data[213],
    4,
    3,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3418 */
  {
    "*shiftsi3_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_119 },
#else
    { 0, 0, output_119 },
#endif
    0,
    &operand_data[217],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3431 */
  {
    "*arm_notsi_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[213],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3445 */
  {
    "*arm_notsi_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[213],
    4,
    3,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3462 */
  {
    "*arm_not_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[217],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3514 */
  {
    "extv",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sbfx%?\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extv,
    &operand_data[221],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3525 */
  {
    "extzv_t2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ubfx%?\t%0, %1, %3, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extzv_t2,
    &operand_data[221],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3556 */
  {
    "*arm_negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsbs\t%Q0, %Q1, #0\n\trsc\t%R0, %R1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[225],
    2,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3566 */
  {
    "*thumb1_negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%R0, #0\n\tneg\t%Q0, %Q1\n\tsbc\t%R0, %R1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[227],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3582 */
  {
    "*arm_negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rsb%?\t%0, %1, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3590 */
  {
    "*thumb1_negsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3629 */
  {
    "*arm_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_129 },
#else
    { 0, output_129, 0 },
#endif
    0,
    &operand_data[229],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3643 */
  {
    "*thumb1_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[231],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3657 */
  {
    "*arm_neg_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_131 },
#else
    { 0, output_131, 0 },
#endif
    0,
    &operand_data[229],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3671 */
  {
    "*thumb1_neg_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[231],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3709 */
  {
    "one_cmpldi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[7],
    2,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3735 */
  {
    "*arm_one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3743 */
  {
    "*thumb1_one_cmplsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[46],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3751 */
  {
    "*notsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3762 */
  {
    "*notsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[74],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3915 */
  {
    "*arm_zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_138 },
#else
    { 0, 0, output_138 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3936 */
  {
    "*arm_zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_139 },
#else
    { 0, output_139, 0 },
#endif
    0,
    &operand_data[234],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:3957 */
  {
    "*arm_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_140 },
#else
    { 0, 0, output_140 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4009 */
  {
    "*thumb1_zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_141 },
#else
    { 0, 0, output_141 },
#endif
    0,
    &operand_data[236],
    2,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4051 */
  {
    "*thumb1_zero_extendhisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_142 },
#else
    { 0, 0, output_142 },
#endif
    0,
    &operand_data[238],
    2,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4098 */
  {
    "*arm_zero_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(h%)\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[240],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4109 */
  {
    "*arm_zero_extendhisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_144 },
#else
    { 0, output_144, 0 },
#endif
    0,
    &operand_data[242],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4122 */
  {
    "*arm_zero_extendhisi2addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "uxtah%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[118],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4172 */
  {
    "*thumb1_zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldrb\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[244],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4182 */
  {
    "*thumb1_zero_extendqisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_147 },
#else
    { 0, output_147, 0 },
#endif
    0,
    &operand_data[246],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4194 */
  {
    "*arm_zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(b%)\t%0, %1\t%@ zero_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[248],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4205 */
  {
    "*arm_zero_extendqisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_149 },
#else
    { 0, output_149, 0 },
#endif
    0,
    &operand_data[250],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4218 */
  {
    "*arm_zero_extendqisi2addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "uxtab%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[252],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4271 */
  {
    "*compareqi_eq0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tst\t%0, #255",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[253],
    1,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4330 */
  {
    "thumb1_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_152 },
#else
    { 0, 0, output_152 },
#endif
    (insn_gen_fn) gen_thumb1_extendhisi2,
    &operand_data[255],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4391 */
  {
    "*thumb1_extendhisi2_insn_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_153 },
#else
    { 0, 0, output_153 },
#endif
    0,
    &operand_data[258],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4489 */
  {
    "*arm_extendhisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(sh%)\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[240],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4501 */
  {
    "*arm_extendhisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_155 },
#else
    { 0, output_155, 0 },
#endif
    0,
    &operand_data[242],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4514 */
  {
    "*arm_extendhisi2addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sxtah%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[118],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4547 */
  {
    "*arm_extendqihi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(sb%)\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[261],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4590 */
  {
    "*arm_extendqisi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%(sb%)\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[263],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4601 */
  {
    "*arm_extendqisi_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_159 },
#else
    { 0, output_159, 0 },
#endif
    0,
    &operand_data[265],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4615 */
  {
    "*arm_extendqisi2addsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sxtab%?\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[252],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4626 */
  {
    "*thumb1_extendqisi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_161 },
#else
    { 0, 0, output_161 },
#endif
    0,
    &operand_data[267],
    2,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4704 */
  {
    "*thumb1_extendqisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_162 },
#else
    { 0, 0, output_162 },
#endif
    0,
    &operand_data[269],
    2,
    0,
    3,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:4880 */
  {
    "*arm_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_163 },
#else
    { 0, 0, output_163 },
#endif
    0,
    &operand_data[271],
    2,
    0,
    5,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5000 */
  {
    "*thumb1_movdi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_164 },
#else
    { 0, 0, output_164 },
#endif
    0,
    &operand_data[273],
    2,
    0,
    8,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5137 */
  {
    "*arm_movt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movt%?\t%0, #:upper16:%c2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[275],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5147 */
  {
    "*arm_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_166 },
#else
    { 0, output_166, 0 },
#endif
    0,
    &operand_data[278],
    2,
    0,
    6,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5181 */
  {
    "*thumb1_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_167 },
#else
    { 0, output_167, 0 },
#endif
    0,
    &operand_data[280],
    2,
    0,
    9,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5245 */
  {
    "pic_load_addr_32bit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pic_load_addr_32bit,
    &operand_data[282],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5258 */
  {
    "pic_load_addr_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_pic_load_addr_thumb1,
    &operand_data[284],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5267 */
  {
    "pic_add_dot_plus_four",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_170 },
#else
    { 0, 0, output_170 },
#endif
    (insn_gen_fn) gen_pic_add_dot_plus_four,
    &operand_data[286],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5282 */
  {
    "pic_add_dot_plus_eight",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_171 },
#else
    { 0, 0, output_171 },
#endif
    (insn_gen_fn) gen_pic_add_dot_plus_eight,
    &operand_data[289],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5297 */
  {
    "tls_load_dot_plus_eight",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_172 },
#else
    { 0, 0, output_172 },
#endif
    (insn_gen_fn) gen_tls_load_dot_plus_eight,
    &operand_data[289],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5358 */
  {
    "*movsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_173 },
#else
    { 0, output_173, 0 },
#endif
    0,
    &operand_data[292],
    2,
    1,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5681 */
  {
    "*thumb1_movhi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_174 },
#else
    { 0, 0, output_174 },
#endif
    0,
    &operand_data[294],
    2,
    0,
    6,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5769 */
  {
    "*movhi_insn_arch4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_175 },
#else
    { 0, output_175, 0 },
#endif
    0,
    &operand_data[296],
    2,
    0,
    4,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5788 */
  {
    "*movhi_bytes",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_176 },
#else
    { 0, output_176, 0 },
#endif
    0,
    &operand_data[298],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5919 */
  {
    "*arm_movqi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_177 },
#else
    { 0, output_177, 0 },
#endif
    0,
    &operand_data[300],
    2,
    0,
    4,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5934 */
  {
    "*thumb1_movqi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_178 },
#else
    { 0, output_178, 0 },
#endif
    0,
    &operand_data[302],
    2,
    0,
    6,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:5974 */
  {
    "*arm32_movhf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_179 },
#else
    { 0, 0, output_179 },
#endif
    0,
    &operand_data[304],
    2,
    0,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6019 */
  {
    "*thumb1_movhf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_180 },
#else
    { 0, 0, output_180 },
#endif
    0,
    &operand_data[306],
    2,
    0,
    5,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6091 */
  {
    "*arm_movsf_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_181 },
#else
    { 0, output_181, 0 },
#endif
    0,
    &operand_data[308],
    2,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6110 */
  {
    "*thumb1_movsf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_182 },
#else
    { 0, output_182, 0 },
#endif
    0,
    &operand_data[310],
    2,
    0,
    7,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6194 */
  {
    "*movdf_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_183 },
#else
    { 0, 0, output_183 },
#endif
    0,
    &operand_data[312],
    2,
    0,
    5,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6221 */
  {
    "*thumb_movdf_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_184 },
#else
    { 0, 0, output_184 },
#endif
    0,
    &operand_data[314],
    2,
    0,
    6,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6299 */
  {
    "*ldmsi_postinc4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[316],
    7,
    4,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6318 */
  {
    "*ldmsi_postinc4_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldmia\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[323],
    7,
    4,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6336 */
  {
    "*ldmsi_postinc3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1!, {%3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[316],
    6,
    3,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6353 */
  {
    "*ldmsi_postinc2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1!, {%3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[316],
    5,
    2,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6370 */
  {
    "*ldmsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1, {%2, %3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[330],
    6,
    3,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6386 */
  {
    "*ldmsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1, {%2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[330],
    5,
    2,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6400 */
  {
    "*ldmsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldm%(ia%)\t%1, {%2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[330],
    4,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6438 */
  {
    "*stmsi_postinc4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[336],
    7,
    4,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6457 */
  {
    "*stmsi_postinc4_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stmia\t%1!, {%3, %4, %5, %6}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[343],
    7,
    4,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6475 */
  {
    "*stmsi_postinc3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1!, {%3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[336],
    6,
    3,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6492 */
  {
    "*stmsi_postinc2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1!, {%3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[336],
    5,
    2,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6509 */
  {
    "*stmsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1, {%2, %3, %4, %5}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[350],
    6,
    3,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6525 */
  {
    "*stmsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1, {%2, %3, %4}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[350],
    5,
    2,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6539 */
  {
    "*stmsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "stm%(ia%)\t%1, {%2, %3}",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[350],
    4,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6582 */
  {
    "movmem12b",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_199 },
#else
    { 0, 0, output_199 },
#endif
    (insn_gen_fn) gen_movmem12b,
    &operand_data[356],
    7,
    6,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6604 */
  {
    "movmem8b",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_200 },
#else
    { 0, 0, output_200 },
#endif
    (insn_gen_fn) gen_movmem8b,
    &operand_data[356],
    6,
    4,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6706 */
  {
    "*cbranchsi4_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_201 },
#else
    { 0, 0, output_201 },
#endif
    0,
    &operand_data[363],
    4,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6741 */
  {
    "cbranchsi4_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_202 },
#else
    { 0, 0, output_202 },
#endif
    (insn_gen_fn) gen_cbranchsi4_scratch,
    &operand_data[367],
    5,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6777 */
  {
    "*movsi_cbranchsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_203 },
#else
    { 0, 0, output_203 },
#endif
    0,
    &operand_data[372],
    4,
    1,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6879 */
  {
    "*negated_cbranchsi4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_204 },
#else
    { 0, 0, output_204 },
#endif
    0,
    &operand_data[376],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6914 */
  {
    "*tbit_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_205 },
#else
    { 0, 0, output_205 },
#endif
    0,
    &operand_data[380],
    5,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:6958 */
  {
    "*tlobits_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_206 },
#else
    { 0, 0, output_206 },
#endif
    0,
    &operand_data[380],
    5,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7002 */
  {
    "*tstsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_207 },
#else
    { 0, 0, output_207 },
#endif
    0,
    &operand_data[385],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7039 */
  {
    "*andsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_208 },
#else
    { 0, 0, output_208 },
#endif
    0,
    &operand_data[389],
    6,
    2,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7106 */
  {
    "*orrsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_209 },
#else
    { 0, 0, output_209 },
#endif
    0,
    &operand_data[395],
    5,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7144 */
  {
    "*orrsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_210 },
#else
    { 0, 0, output_210 },
#endif
    0,
    &operand_data[389],
    6,
    2,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7211 */
  {
    "*xorsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_211 },
#else
    { 0, 0, output_211 },
#endif
    0,
    &operand_data[395],
    5,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7249 */
  {
    "*xorsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_212 },
#else
    { 0, 0, output_212 },
#endif
    0,
    &operand_data[389],
    6,
    2,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7316 */
  {
    "*bicsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_213 },
#else
    { 0, 0, output_213 },
#endif
    0,
    &operand_data[400],
    5,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7354 */
  {
    "*bicsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_214 },
#else
    { 0, 0, output_214 },
#endif
    0,
    &operand_data[405],
    6,
    2,
    5,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7423 */
  {
    "*cbranchne_decr1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_215 },
#else
    { 0, 0, output_215 },
#endif
    0,
    &operand_data[411],
    5,
    1,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7526 */
  {
    "*addsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_216 },
#else
    { 0, 0, output_216 },
#endif
    0,
    &operand_data[416],
    6,
    2,
    6,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7608 */
  {
    "*addsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_217 },
#else
    { 0, 0, output_217 },
#endif
    0,
    &operand_data[422],
    5,
    0,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7676 */
  {
    "*subsi3_cbranch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_218 },
#else
    { 0, 0, output_218 },
#endif
    0,
    &operand_data[427],
    6,
    2,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7757 */
  {
    "*subsi3_cbranch_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_219 },
#else
    { 0, 0, output_219 },
#endif
    0,
    &operand_data[433],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7799 */
  {
    "*arm_cmpsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_220 },
#else
    { 0, output_220, 0 },
#endif
    0,
    &operand_data[17],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7810 */
  {
    "*arm_cmpsi_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[168],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7825 */
  {
    "*arm_cmpsi_shiftsi_swp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[437],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7840 */
  {
    "*arm_cmpsi_negshiftsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%0, %2%S1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[29],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7856 */
  {
    "*cirrus_cmpsf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcmps%?\tr15, %V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[441],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7867 */
  {
    "*cirrus_cmpdf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcmpd%?\tr15, %V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[443],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7877 */
  {
    "*cirrus_cmpdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcmp64%?\tr15, %V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[445],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7893 */
  {
    "*deleted_compare",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "\t%@ deleted compare",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[58],
    1,
    1,
    0,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7920 */
  {
    "*arm_cond_branch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_228 },
#else
    { 0, 0, output_228 },
#endif
    0,
    &operand_data[447],
    3,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7939 */
  {
    "*arm_cond_branch_reversed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_229 },
#else
    { 0, 0, output_229 },
#endif
    0,
    &operand_data[447],
    3,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7972 */
  {
    "*mov_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tmov%d1\t%0, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7982 */
  {
    "*mov_negscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tmvn%d1\t%0, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:7992 */
  {
    "*mov_notscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tmvn%d1\t%0, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8190 */
  {
    "*cstoresi_eq0_thumb1_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_233 },
#else
    { 0, output_233, 0 },
#endif
    0,
    &operand_data[453],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8202 */
  {
    "*cstoresi_ne0_thumb1_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub\t%2, %1, #1\n\tsbc\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[456],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8213 */
  {
    "cstoresi_nltu_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%1, %2\n\tsbc\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cstoresi_nltu_thumb1,
    &operand_data[459],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8222 */
  {
    "cstoresi_ltu_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cstoresi_ltu_thumb1,
    &operand_data[459],
    3,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8237 */
  {
    "thumb1_addsi3_addgeu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp\t%3, %4\n\tadc\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_thumb1_addsi3_addgeu,
    &operand_data[462],
    5,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8317 */
  {
    "*movsicc_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_238 },
#else
    { 0, output_238, 0 },
#endif
    0,
    &operand_data[467],
    5,
    0,
    8,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8338 */
  {
    "*movsfcc_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_239 },
#else
    { 0, output_239, 0 },
#endif
    0,
    &operand_data[472],
    5,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8361 */
  {
    "*arm_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_240 },
#else
    { 0, 0, output_240 },
#endif
    0,
    &operand_data[288],
    1,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8378 */
  {
    "*thumb_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_241 },
#else
    { 0, 0, output_241 },
#endif
    0,
    &operand_data[288],
    1,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8435 */
  {
    "*call_reg_armv5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[477],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8445 */
  {
    "*call_reg_arm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_243 },
#else
    { 0, 0, output_243 },
#endif
    0,
    &operand_data[477],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8464 */
  {
    "*call_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_244 },
#else
    { 0, 0, output_244 },
#endif
    0,
    &operand_data[480],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8477 */
  {
    "*call_reg_thumb1_v5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[483],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8488 */
  {
    "*call_reg_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_246 },
#else
    { 0, 0, output_246 },
#endif
    0,
    &operand_data[483],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8546 */
  {
    "*call_value_reg_armv5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[485],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8557 */
  {
    "*call_value_reg_arm",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_248 },
#else
    { 0, 0, output_248 },
#endif
    0,
    &operand_data[485],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8573 */
  {
    "*call_value_mem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_249 },
#else
    { 0, 0, output_249 },
#endif
    0,
    &operand_data[479],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8587 */
  {
    "*call_value_reg_thumb1_v5",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[482],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8599 */
  {
    "*call_value_reg_thumb1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_251 },
#else
    { 0, 0, output_251 },
#endif
    0,
    &operand_data[482],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8623 */
  {
    "*call_symbol",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_252 },
#else
    { 0, 0, output_252 },
#endif
    0,
    &operand_data[489],
    3,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8638 */
  {
    "*call_value_symbol",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_253 },
#else
    { 0, 0, output_253 },
#endif
    0,
    &operand_data[491],
    4,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8654 */
  {
    "*call_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t%a0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[492],
    3,
    0,
    0,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8667 */
  {
    "*call_value_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t%a1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[494],
    4,
    0,
    0,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8709 */
  {
    "*sibcall_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_256 },
#else
    { 0, 0, output_256 },
#endif
    0,
    &operand_data[498],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8721 */
  {
    "*sibcall_value_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_257 },
#else
    { 0, 0, output_257 },
#endif
    0,
    &operand_data[497],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8735 */
  {
    "return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_258 },
#else
    { 0, 0, output_258 },
#endif
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8752 */
  {
    "*cond_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_259 },
#else
    { 0, 0, output_259 },
#endif
    0,
    &operand_data[448],
    2,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8773 */
  {
    "*cond_return_inverted",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_260 },
#else
    { 0, 0, output_260 },
#endif
    0,
    &operand_data[448],
    2,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8811 */
  {
    "*check_arch2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "teq\t%|r0, %|r0\n\tteq\t%|pc, %|pc",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[501],
    1,
    0,
    0,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8944 */
  {
    "blockage",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:8991 */
  {
    "arm_casesi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_263 },
#else
    { 0, 0, output_263 },
#endif
    (insn_gen_fn) gen_arm_casesi_internal,
    &operand_data[502],
    4,
    2,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9029 */
  {
    "thumb1_casesi_dispatch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_264 },
#else
    { 0, 0, output_264 },
#endif
    (insn_gen_fn) gen_thumb1_casesi_dispatch,
    &operand_data[288],
    1,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9060 */
  {
    "*arm_indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%|pc, %0\t%@ indirect register jump",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[19],
    1,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9068 */
  {
    "*load_indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ldr%?\t%|pc, %0\t%@ indirect memory jump",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[506],
    1,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9080 */
  {
    "*thumb1_indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\tpc, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[483],
    1,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9092 */
  {
    "nop",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_268 },
#else
    { 0, 0, output_268 },
#endif
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9111 */
  {
    "*arith_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%?\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[507],
    6,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9145 */
  {
    "*arith_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[507],
    6,
    5,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9165 */
  {
    "*arith_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[513],
    6,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9183 */
  {
    "*sub_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    5,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9198 */
  {
    "*sub_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[28],
    5,
    4,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9218 */
  {
    "*sub_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[519],
    5,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9238 */
  {
    "*and_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%D1\t%0, #0\n\tand%d1\t%0, %2, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[524],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9249 */
  {
    "*ior_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_276 },
#else
    { 0, output_276, 0 },
#endif
    0,
    &operand_data[55],
    4,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9262 */
  {
    "*compare_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_277 },
#else
    { 0, 0, output_277 },
#endif
    0,
    &operand_data[528],
    4,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9298 */
  {
    "*cond_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_278 },
#else
    { 0, 0, output_278 },
#endif
    0,
    &operand_data[532],
    6,
    0,
    3,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9326 */
  {
    "*cond_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_279 },
#else
    { 0, 0, output_279 },
#endif
    0,
    &operand_data[538],
    6,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9352 */
  {
    "*cond_sub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_280 },
#else
    { 0, 0, output_280 },
#endif
    0,
    &operand_data[538],
    5,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9371 */
  {
    "*cmp_ite0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_281 },
#else
    { 0, 0, output_281 },
#endif
    0,
    &operand_data[544],
    7,
    0,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9406 */
  {
    "*cmp_ite1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_282 },
#else
    { 0, 0, output_282 },
#endif
    0,
    &operand_data[544],
    7,
    0,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9442 */
  {
    "*cmp_and",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_283 },
#else
    { 0, 0, output_283 },
#endif
    0,
    &operand_data[544],
    7,
    0,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9477 */
  {
    "*cmp_ior",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_284 },
#else
    { 0, 0, output_284 },
#endif
    0,
    &operand_data[544],
    7,
    0,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9512 */
  {
    "*ior_scc_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[551],
    7,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9542 */
  {
    "*ior_scc_scc_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[558],
    8,
    6,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9568 */
  {
    "*and_scc_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[551],
    7,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9600 */
  {
    "*and_scc_scc_cmp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[558],
    8,
    6,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9630 */
  {
    "*and_scc_scc_nodom",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[566],
    7,
    0,
    3,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9699 */
  {
    "*negscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_290 },
#else
    { 0, 0, output_290 },
#endif
    0,
    &operand_data[573],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9721 */
  {
    "movcond",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_291 },
#else
    { 0, 0, output_291 },
#endif
    (insn_gen_fn) gen_movcond,
    &operand_data[577],
    6,
    0,
    3,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9786 */
  {
    "*ifcompare_plus_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[583],
    7,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9802 */
  {
    "*if_plus_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_293 },
#else
    { 0, output_293, 0 },
#endif
    0,
    &operand_data[590],
    6,
    0,
    4,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9822 */
  {
    "*ifcompare_move_plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[583],
    7,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9838 */
  {
    "*if_move_plus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_295 },
#else
    { 0, output_295, 0 },
#endif
    0,
    &operand_data[590],
    6,
    0,
    4,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9858 */
  {
    "*ifcompare_arith_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[596],
    10,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9876 */
  {
    "*if_arith_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%I6%d5\t%0, %1, %2\n\t%I7%D5\t%0, %3, %4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[606],
    9,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9892 */
  {
    "*ifcompare_arith_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_298 },
#else
    { 0, 0, output_298 },
#endif
    0,
    &operand_data[615],
    8,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9933 */
  {
    "*if_arith_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_299 },
#else
    { 0, output_299, 0 },
#endif
    0,
    &operand_data[623],
    7,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9950 */
  {
    "*ifcompare_move_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_300 },
#else
    { 0, 0, output_300 },
#endif
    0,
    &operand_data[630],
    8,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:9992 */
  {
    "*if_move_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_301 },
#else
    { 0, output_301, 0 },
#endif
    0,
    &operand_data[623],
    7,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10010 */
  {
    "*ifcompare_move_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[638],
    6,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10026 */
  {
    "*if_move_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_303 },
#else
    { 0, output_303, 0 },
#endif
    0,
    &operand_data[644],
    5,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10042 */
  {
    "*ifcompare_not_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[638],
    6,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10058 */
  {
    "*if_not_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_305 },
#else
    { 0, output_305, 0 },
#endif
    0,
    &operand_data[644],
    5,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10074 */
  {
    "*ifcompare_shift_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[649],
    8,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10091 */
  {
    "*if_shift_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_307 },
#else
    { 0, output_307, 0 },
#endif
    0,
    &operand_data[657],
    7,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10113 */
  {
    "*ifcompare_move_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[649],
    8,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10130 */
  {
    "*if_move_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_309 },
#else
    { 0, output_309, 0 },
#endif
    0,
    &operand_data[657],
    7,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10152 */
  {
    "*ifcompare_shift_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[664],
    10,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10171 */
  {
    "*if_shift_shift",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%d5\t%0, %1%S6\n\tmov%D5\t%0, %3%S7",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[674],
    9,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10194 */
  {
    "*ifcompare_not_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[683],
    8,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10211 */
  {
    "*if_not_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%d5\t%0, %1\n\t%I6%D5\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[691],
    7,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10226 */
  {
    "*ifcompare_arith_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[683],
    8,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10243 */
  {
    "*if_arith_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%D5\t%0, %1\n\t%I6%d5\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[691],
    7,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10258 */
  {
    "*ifcompare_neg_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[638],
    6,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10273 */
  {
    "*if_neg_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_317 },
#else
    { 0, output_317, 0 },
#endif
    0,
    &operand_data[644],
    5,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10289 */
  {
    "*ifcompare_move_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[638],
    6,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10304 */
  {
    "*if_move_neg",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_319 },
#else
    { 0, output_319, 0 },
#endif
    0,
    &operand_data[644],
    5,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10320 */
  {
    "*arith_adjacentmem",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_320 },
#else
    { 0, 0, output_320 },
#endif
    0,
    &operand_data[698],
    5,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10592 */
  {
    "sibcall_epilogue",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_321 },
#else
    { 0, 0, output_321 },
#endif
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10610 */
  {
    "*epilogue_insns",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_322 },
#else
    { 0, 0, output_322 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10770 */
  {
    "*cond_move_not",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_323 },
#else
    { 0, output_323, 0 },
#endif
    0,
    &operand_data[703],
    5,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10788 */
  {
    "*sign_extract_onebit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_324 },
#else
    { 0, 0, output_324 },
#endif
    0,
    &operand_data[145],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10804 */
  {
    "*not_signextract_onebit",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_325 },
#else
    { 0, 0, output_325 },
#endif
    0,
    &operand_data[145],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10826 */
  {
    "*push_multi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_326 },
#else
    { 0, 0, output_326 },
#endif
    0,
    &operand_data[708],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10868 */
  {
    "stack_tie",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_stack_tie,
    &operand_data[711],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10879 */
  {
    "*push_fp_multi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_328 },
#else
    { 0, 0, output_328 },
#endif
    0,
    &operand_data[713],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10898 */
  {
    "align_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_329 },
#else
    { 0, 0, output_329 },
#endif
    (insn_gen_fn) gen_align_4,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10907 */
  {
    "align_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_330 },
#else
    { 0, 0, output_330 },
#endif
    (insn_gen_fn) gen_align_8,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10916 */
  {
    "consttable_end",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_331 },
#else
    { 0, 0, output_331 },
#endif
    (insn_gen_fn) gen_consttable_end,
    &operand_data[0],
    0,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10925 */
  {
    "consttable_1",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_332 },
#else
    { 0, 0, output_332 },
#endif
    (insn_gen_fn) gen_consttable_1,
    &operand_data[288],
    1,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10937 */
  {
    "consttable_2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_333 },
#else
    { 0, 0, output_333 },
#endif
    (insn_gen_fn) gen_consttable_2,
    &operand_data[288],
    1,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10950 */
  {
    "consttable_4",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_334 },
#else
    { 0, 0, output_334 },
#endif
    (insn_gen_fn) gen_consttable_4,
    &operand_data[288],
    1,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:10986 */
  {
    "consttable_8",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_335 },
#else
    { 0, 0, output_335 },
#endif
    (insn_gen_fn) gen_consttable_8,
    &operand_data[288],
    1,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11010 */
  {
    "consttable_16",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_336 },
#else
    { 0, 0, output_336 },
#endif
    (insn_gen_fn) gen_consttable_16,
    &operand_data[288],
    1,
    0,
    0,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11054 */
  {
    "*thumb1_tablejump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov\t%|pc, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[483],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11064 */
  {
    "clzsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "clz%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_clzsi2,
    &operand_data[25],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11072 */
  {
    "rbitsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rbit%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rbitsi2,
    &operand_data[25],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11096 */
  {
    "prefetch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "pld\t%a0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_prefetch,
    &operand_data[716],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11113 */
  {
    "prologue_use",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%@ %0 needed for prologue",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_prologue_use,
    &operand_data[719],
    1,
    0,
    0,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11137 */
  {
    "arm_eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_arm_eh_return,
    &operand_data[720],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11152 */
  {
    "thumb_eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_thumb_eh_return,
    &operand_data[232],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11170 */
  {
    "load_tp_hard",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mrc%?\tp15, 0, %0, c13, c0, 3\t@ load_tp_hard",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_tp_hard,
    &operand_data[286],
    1,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11179 */
  {
    "load_tp_soft",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bl\t__aeabi_read_tp\t@ load_tp_soft",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_load_tp_soft,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11189 */
  {
    "*arm_movtas_ze",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "movt%?\t%0, %c1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[722],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11200 */
  {
    "*arm_rev",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rev%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[25],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/arm.md:11209 */
  {
    "*thumb1_rev",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rev\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[231],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:103 */
  {
    "*addsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_349 },
#else
    { 0, output_349, 0 },
#endif
    0,
    &operand_data[724],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:115 */
  {
    "*adddf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_350 },
#else
    { 0, output_350, 0 },
#endif
    0,
    &operand_data[727],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:127 */
  {
    "*adddf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_351 },
#else
    { 0, output_351, 0 },
#endif
    0,
    &operand_data[730],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:140 */
  {
    "*adddf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[733],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:151 */
  {
    "*adddf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "adf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[736],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:163 */
  {
    "*subsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_354 },
#else
    { 0, output_354, 0 },
#endif
    0,
    &operand_data[739],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:174 */
  {
    "*subdf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_355 },
#else
    { 0, output_355, 0 },
#endif
    0,
    &operand_data[742],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:186 */
  {
    "*subdf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "suf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[745],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:197 */
  {
    "*subdf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_357 },
#else
    { 0, output_357, 0 },
#endif
    0,
    &operand_data[748],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:210 */
  {
    "*subdf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "suf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[736],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:222 */
  {
    "*mulsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fml%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[751],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:232 */
  {
    "*muldf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[754],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:242 */
  {
    "*muldf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[745],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:253 */
  {
    "*muldf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[733],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:264 */
  {
    "*muldf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[736],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:277 */
  {
    "*divsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_364 },
#else
    { 0, output_364, 0 },
#endif
    0,
    &operand_data[739],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:289 */
  {
    "*divdf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_365 },
#else
    { 0, output_365, 0 },
#endif
    0,
    &operand_data[742],
    3,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:301 */
  {
    "*divdf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dvf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[745],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:312 */
  {
    "*divdf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rdf%?d\t%0, %2, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[757],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:323 */
  {
    "*divdf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "dvf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[736],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:335 */
  {
    "*modsf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?s\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[751],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:345 */
  {
    "*moddf3_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[754],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:355 */
  {
    "*moddf_esfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[745],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:366 */
  {
    "*moddf_df_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[733],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:377 */
  {
    "*moddf_esfdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "rmf%?d\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[736],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:389 */
  {
    "*negsf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[751],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:398 */
  {
    "*negdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[733],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:407 */
  {
    "*negdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mnf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[736],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:417 */
  {
    "*abssf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[751],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:426 */
  {
    "*absdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[733],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:435 */
  {
    "*absdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "abs%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[736],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:445 */
  {
    "*sqrtsf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[751],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:454 */
  {
    "*sqrtdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[733],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:463 */
  {
    "*sqrtdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sqt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[736],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:473 */
  {
    "*floatsisf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "flt%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[760],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:482 */
  {
    "*floatsidf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "flt%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[762],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:491 */
  {
    "*fix_truncsfsi2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fix%?z\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[764],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:500 */
  {
    "*fix_truncdfsi2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fix%?z\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[766],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:509 */
  {
    "*truncdfsf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvf%?s\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[768],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:519 */
  {
    "*extendsfdf2_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvf%?d\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[736],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:528 */
  {
    "*movsf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_389 },
#else
    { 0, output_389, 0 },
#endif
    0,
    &operand_data[770],
    2,
    0,
    9,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:553 */
  {
    "*movdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_390 },
#else
    { 0, 0, output_390 },
#endif
    0,
    &operand_data[772],
    2,
    0,
    11,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:591 */
  {
    "*movxf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_391 },
#else
    { 0, 0, output_391 },
#endif
    0,
    &operand_data[774],
    2,
    0,
    3,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:617 */
  {
    "*thumb2_movsf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_392 },
#else
    { 0, output_392, 0 },
#endif
    0,
    &operand_data[770],
    2,
    0,
    9,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:644 */
  {
    "*thumb2_movdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_393 },
#else
    { 0, 0, output_393 },
#endif
    0,
    &operand_data[772],
    2,
    0,
    11,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:683 */
  {
    "*thumb2_movxf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_394 },
#else
    { 0, 0, output_394 },
#endif
    0,
    &operand_data[776],
    2,
    0,
    7,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:706 */
  {
    "*cmpsf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_395 },
#else
    { 0, output_395, 0 },
#endif
    0,
    &operand_data[778],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:718 */
  {
    "*cmpdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_396 },
#else
    { 0, output_396, 0 },
#endif
    0,
    &operand_data[780],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:730 */
  {
    "*cmpesfdf_df_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_397 },
#else
    { 0, output_397, 0 },
#endif
    0,
    &operand_data[731],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:743 */
  {
    "*cmpdf_esfdf_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmf%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:754 */
  {
    "*cmpsf_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_399 },
#else
    { 0, output_399, 0 },
#endif
    0,
    &operand_data[778],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:766 */
  {
    "*cmpdf_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_400 },
#else
    { 0, output_400, 0 },
#endif
    0,
    &operand_data[780],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:778 */
  {
    "*cmp_esfdf_df_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_401 },
#else
    { 0, output_401, 0 },
#endif
    0,
    &operand_data[731],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:791 */
  {
    "*cmp_df_esfdf_trap_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmf%?e\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:802 */
  {
    "*movsfcc_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_403 },
#else
    { 0, output_403, 0 },
#endif
    0,
    &operand_data[782],
    5,
    0,
    8,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:824 */
  {
    "*movdfcc_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_404 },
#else
    { 0, output_404, 0 },
#endif
    0,
    &operand_data[787],
    5,
    0,
    8,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:846 */
  {
    "*thumb2_movsfcc_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_405 },
#else
    { 0, output_405, 0 },
#endif
    0,
    &operand_data[782],
    5,
    0,
    8,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/fpa.md:868 */
  {
    "*thumb2_movdfcc_fpa",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_406 },
#else
    { 0, output_406, 0 },
#endif
    0,
    &operand_data[787],
    5,
    0,
    8,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:32 */
  {
    "cirrus_adddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfadd64%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_adddi3,
    &operand_data[792],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:52 */
  {
    "*cirrus_addsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfadds%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[795],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:62 */
  {
    "*cirrus_adddf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfaddd%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[798],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:72 */
  {
    "cirrus_subdi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsub64%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_subdi3,
    &operand_data[792],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:92 */
  {
    "*cirrus_subsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsubs%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[795],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:102 */
  {
    "*cirrus_subdf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsubd%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[798],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:122 */
  {
    "muldi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmul64%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_muldi3,
    &operand_data[792],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:157 */
  {
    "*cirrus_mulsf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmuls%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[795],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:167 */
  {
    "*cirrus_muldf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmuld%?\t%V0, %V1, %V2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[798],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:204 */
  {
    "ashldi3_cirrus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfrshl64%?\t%V1, %V0, %s2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_cirrus,
    &operand_data[801],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:213 */
  {
    "cirrus_ashldi_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsh64%?\t%V0, %V1, #%s2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_ashldi_const,
    &operand_data[804],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:222 */
  {
    "cirrus_ashiftrtdi_const",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfsh64%?\t%V0, %V1, #-%s2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_ashiftrtdi_const,
    &operand_data[804],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:231 */
  {
    "*cirrus_absdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfabs64%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[792],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:240 */
  {
    "*cirrus_negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfneg64%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[792],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:257 */
  {
    "*cirrus_negsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfnegs%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[795],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:265 */
  {
    "*cirrus_negdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfnegd%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[798],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:283 */
  {
    "*cirrus_abssf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfabss%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[795],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:291 */
  {
    "*cirrus_absdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfabsd%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[798],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:300 */
  {
    "cirrus_floatsisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmv64lr%?\t%Z2, %1\n\tcfcvt32s%?\t%V0, %Y2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_floatsisf2,
    &operand_data[807],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:310 */
  {
    "cirrus_floatsidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfmv64lr%?\t%Z2, %1\n\tcfcvt32d%?\t%V0, %Y2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_floatsidf2,
    &operand_data[810],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:320 */
  {
    "floatdisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvt64s%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[813],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:327 */
  {
    "floatdidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvt64d%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[815],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:334 */
  {
    "cirrus_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cftruncs32%?\t%Y2, %V1\n\tcfmvr64l%?\t%0, %Z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_truncsfsi2,
    &operand_data[817],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:344 */
  {
    "cirrus_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cftruncd32%?\t%Y2, %V1\n\tcfmvr64l%?\t%0, %Z2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_cirrus_truncdfsi2,
    &operand_data[820],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:353 */
  {
    "*cirrus_truncdfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvtds%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[823],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:362 */
  {
    "*cirrus_extendsfdf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cfcvtsd%?\t%V0, %V1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[825],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:370 */
  {
    "*cirrus_arm_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_433 },
#else
    { 0, 0, output_433 },
#endif
    0,
    &operand_data[827],
    2,
    0,
    8,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:406 */
  {
    "*cirrus_movsf_hard_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_434 },
#else
    { 0, output_434, 0 },
#endif
    0,
    &operand_data[829],
    2,
    0,
    8,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:428 */
  {
    "*cirrus_movdf_hard_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_435 },
#else
    { 0, 0, output_435 },
#endif
    0,
    &operand_data[831],
    2,
    0,
    10,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:458 */
  {
    "*cirrus_thumb2_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_436 },
#else
    { 0, 0, output_436 },
#endif
    0,
    &operand_data[827],
    2,
    0,
    8,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:490 */
  {
    "*thumb2_cirrus_movsf_hard_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_437 },
#else
    { 0, output_437, 0 },
#endif
    0,
    &operand_data[829],
    2,
    0,
    8,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/cirrus.md:512 */
  {
    "*thumb2_cirrus_movdf_hard_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_438 },
#else
    { 0, 0, output_438 },
#endif
    0,
    &operand_data[831],
    2,
    0,
    10,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:23 */
  {
    "iwmmxt_iordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_439 },
#else
    { 0, output_439, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_iordi3,
    &operand_data[833],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:43 */
  {
    "iwmmxt_xordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_440 },
#else
    { 0, output_440, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_xordi3,
    &operand_data[833],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:55 */
  {
    "iwmmxt_anddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_441 },
#else
    { 0, output_441, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_anddi3,
    &operand_data[833],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:67 */
  {
    "iwmmxt_nanddi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wandn%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_nanddi3,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:75 */
  {
    "*iwmmxt_arm_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_443 },
#else
    { 0, 0, output_443 },
#endif
    0,
    &operand_data[839],
    2,
    0,
    8,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:107 */
  {
    "*iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_444 },
#else
    { 0, 0, output_444 },
#endif
    0,
    &operand_data[841],
    2,
    0,
    10,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:145 */
  {
    "*cond_iwmmxt_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_445 },
#else
    { 0, 0, output_445 },
#endif
    0,
    &operand_data[843],
    4,
    0,
    6,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:170 */
  {
    "movv2si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_446 },
#else
    { 0, 0, output_446 },
#endif
    (insn_gen_fn) gen_movv2si_internal,
    &operand_data[847],
    2,
    0,
    8,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:170 */
  {
    "movv4hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_447 },
#else
    { 0, 0, output_447 },
#endif
    (insn_gen_fn) gen_movv4hi_internal,
    &operand_data[849],
    2,
    0,
    8,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:170 */
  {
    "movv8qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_448 },
#else
    { 0, 0, output_448 },
#endif
    (insn_gen_fn) gen_movv8qi_internal,
    &operand_data[851],
    2,
    0,
    8,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:193 */
  {
    "*addv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:193 */
  {
    "*addv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:193 */
  {
    "*addv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:201 */
  {
    "ssaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv8qi3,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:209 */
  {
    "ssaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv4hi3,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:217 */
  {
    "ssaddv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ssaddv2si3,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:225 */
  {
    "usaddv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv8qi3,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:233 */
  {
    "usaddv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv4hi3,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:241 */
  {
    "usaddv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waddwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_usaddv2si3,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:249 */
  {
    "*subv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:249 */
  {
    "*subv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:249 */
  {
    "*subv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:257 */
  {
    "sssubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv8qi3,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:265 */
  {
    "sssubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv4hi3,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:273 */
  {
    "sssubv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_sssubv2si3,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:281 */
  {
    "ussubv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubbus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv8qi3,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:289 */
  {
    "ussubv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv4hi3,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:297 */
  {
    "ussubv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsubwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ussubv2si3,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:305 */
  {
    "*mulv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulul%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:313 */
  {
    "smulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulsm%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_smulv4hi3_highpart,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:324 */
  {
    "umulv4hi3_highpart",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmulum%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_umulv4hi3_highpart,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:335 */
  {
    "iwmmxt_wmacs",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacs,
    &operand_data[862],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:344 */
  {
    "iwmmxt_wmacsz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacsz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacsz,
    &operand_data[866],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:352 */
  {
    "iwmmxt_wmacu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacu%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacu,
    &operand_data[862],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:361 */
  {
    "iwmmxt_wmacuz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmacuz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmacuz,
    &operand_data[866],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:371 */
  {
    "iwmmxt_clrdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_clrdi,
    &operand_data[836],
    1,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:380 */
  {
    "*iwmmxt_clrv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[859],
    1,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:390 */
  {
    "*iwmmxt_clrv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[856],
    1,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:398 */
  {
    "*iwmmxt_clrv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wxor%?\t%0, %0, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[853],
    1,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:407 */
  {
    "iwmmxt_uavgrndv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2br%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgrndv8qi3,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:426 */
  {
    "iwmmxt_uavgrndv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2hr%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgrndv4hi3,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:442 */
  {
    "iwmmxt_uavgv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2b%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgv8qi3,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:452 */
  {
    "iwmmxt_uavgv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wavg2h%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_uavgv4hi3,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:462 */
  {
    "iwmmxt_psadbw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "psadbw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_psadbw,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:473 */
  {
    "iwmmxt_tinsrb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tinsrb,
    &operand_data[869],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:483 */
  {
    "iwmmxt_tinsrh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrh%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tinsrh,
    &operand_data[873],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:493 */
  {
    "iwmmxt_tinsrw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tinsrw%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tinsrw,
    &operand_data[877],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:503 */
  {
    "iwmmxt_textrmub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmub,
    &operand_data[881],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:512 */
  {
    "iwmmxt_textrmsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmsb,
    &operand_data[881],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:521 */
  {
    "iwmmxt_textrmuh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmuh,
    &operand_data[884],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:530 */
  {
    "iwmmxt_textrmsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmsh,
    &operand_data[884],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:541 */
  {
    "iwmmxt_textrmw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "textrmsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_textrmw,
    &operand_data[887],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:549 */
  {
    "iwmmxt_wshufh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wshufh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wshufh,
    &operand_data[890],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:573 */
  {
    "eqv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eqv8qi3,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:582 */
  {
    "eqv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eqv4hi3,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:591 */
  {
    "eqv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpeqw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_eqv2si3,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:600 */
  {
    "gtuv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtuv8qi3,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:609 */
  {
    "gtuv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtuv4hi3,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:618 */
  {
    "gtuv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtuv2si3,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:627 */
  {
    "gtv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtv8qi3,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:636 */
  {
    "gtv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtv4hi3,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:645 */
  {
    "gtv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wcmpgtsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_gtv2si3,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:656 */
  {
    "*smaxv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:656 */
  {
    "*smaxv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:656 */
  {
    "*smaxv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:664 */
  {
    "*umaxv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:664 */
  {
    "*umaxv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:664 */
  {
    "*umaxv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaxub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:672 */
  {
    "*sminv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:672 */
  {
    "*sminv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:672 */
  {
    "*sminv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminsb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:680 */
  {
    "*uminv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:680 */
  {
    "*uminv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminuh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:680 */
  {
    "*uminv8qi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wminub%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:690 */
  {
    "iwmmxt_wpackhss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackhss,
    &operand_data[893],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:699 */
  {
    "iwmmxt_wpackwss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackwss,
    &operand_data[896],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:708 */
  {
    "iwmmxt_wpackdss",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdss%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackdss,
    &operand_data[899],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:717 */
  {
    "iwmmxt_wpackhus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackhus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackhus,
    &operand_data[893],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:726 */
  {
    "iwmmxt_wpackwus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackwus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackwus,
    &operand_data[896],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:735 */
  {
    "iwmmxt_wpackdus",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wpackdus%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wpackdus,
    &operand_data[899],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:745 */
  {
    "iwmmxt_wunpckihb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckihb,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:771 */
  {
    "iwmmxt_wunpckihh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckihh,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:789 */
  {
    "iwmmxt_wunpckihw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckihw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckihw,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:803 */
  {
    "iwmmxt_wunpckilb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckilb,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:829 */
  {
    "iwmmxt_wunpckilh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckilh,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:847 */
  {
    "iwmmxt_wunpckilw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckilw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckilw,
    &operand_data[853],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:861 */
  {
    "iwmmxt_wunpckehub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehub,
    &operand_data[902],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:871 */
  {
    "iwmmxt_wunpckehuh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehuh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehuh,
    &operand_data[904],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:880 */
  {
    "iwmmxt_wunpckehuw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehuw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehuw,
    &operand_data[906],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:889 */
  {
    "iwmmxt_wunpckehsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehsb,
    &operand_data[902],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:899 */
  {
    "iwmmxt_wunpckehsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehsh,
    &operand_data[904],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:908 */
  {
    "iwmmxt_wunpckehsw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckehsw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckehsw,
    &operand_data[906],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:917 */
  {
    "iwmmxt_wunpckelub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelub%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelub,
    &operand_data[902],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:927 */
  {
    "iwmmxt_wunpckeluh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckeluh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckeluh,
    &operand_data[904],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:936 */
  {
    "iwmmxt_wunpckeluw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckeluw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckeluw,
    &operand_data[906],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:945 */
  {
    "iwmmxt_wunpckelsb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelsb,
    &operand_data[902],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:955 */
  {
    "iwmmxt_wunpckelsh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelsh,
    &operand_data[904],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:964 */
  {
    "iwmmxt_wunpckelsw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wunpckelsw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wunpckelsw,
    &operand_data[906],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:975 */
  {
    "rorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv4hi3,
    &operand_data[908],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:983 */
  {
    "rorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv2si3,
    &operand_data[911],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:991 */
  {
    "rordi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrordg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rordi3,
    &operand_data[914],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:999 */
  {
    "ashrv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrahg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv4hi3_iwmmxt,
    &operand_data[908],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:999 */
  {
    "ashrv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrawg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv2si3_iwmmxt,
    &operand_data[911],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:999 */
  {
    "ashrdi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsradg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3_iwmmxt,
    &operand_data[914],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1007 */
  {
    "lshrv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv4hi3_iwmmxt,
    &operand_data[908],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1007 */
  {
    "lshrv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv2si3_iwmmxt,
    &operand_data[911],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1007 */
  {
    "lshrdi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrldg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3_iwmmxt,
    &operand_data[914],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1015 */
  {
    "ashlv4hi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllhg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4hi3_iwmmxt,
    &operand_data[908],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1015 */
  {
    "ashlv2si3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllwg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2si3_iwmmxt,
    &operand_data[911],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1015 */
  {
    "ashldi3_iwmmxt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wslldg%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_iwmmxt,
    &operand_data[914],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1023 */
  {
    "rorv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv4hi3_di,
    &operand_data[917],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1031 */
  {
    "rorv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrorw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rorv2si3_di,
    &operand_data[920],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1039 */
  {
    "rordi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wrord%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_rordi3_di,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1047 */
  {
    "ashrv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrah%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv4hi3_di,
    &operand_data[917],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1055 */
  {
    "ashrv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsraw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrv2si3_di,
    &operand_data[920],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1063 */
  {
    "ashrdi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrad%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashrdi3_di,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1071 */
  {
    "lshrv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv4hi3_di,
    &operand_data[917],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1079 */
  {
    "lshrv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrlw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrv2si3_di,
    &operand_data[920],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1087 */
  {
    "lshrdi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsrld%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_lshrdi3_di,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1095 */
  {
    "ashlv4hi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4hi3_di,
    &operand_data[917],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1103 */
  {
    "ashlv2si3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsllw%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2si3_di,
    &operand_data[920],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1111 */
  {
    "ashldi3_di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wslld%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashldi3_di,
    &operand_data[836],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1119 */
  {
    "iwmmxt_wmadds",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmadds%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmadds,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1127 */
  {
    "iwmmxt_wmaddu",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wmaddu%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wmaddu,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1135 */
  {
    "iwmmxt_tmia",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmia%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmia,
    &operand_data[923],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1146 */
  {
    "iwmmxt_tmiaph",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiaph%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiaph,
    &operand_data[923],
    4,
    2,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1162 */
  {
    "iwmmxt_tmiabb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiabb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiabb,
    &operand_data[923],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1173 */
  {
    "iwmmxt_tmiatb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiatb%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiatb,
    &operand_data[923],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1186 */
  {
    "iwmmxt_tmiabt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiabt%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiabt,
    &operand_data[923],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1199 */
  {
    "iwmmxt_tmiatt",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmiatt%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmiatt,
    &operand_data[923],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1214 */
  {
    "iwmmxt_tbcstqi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tbcstqi,
    &operand_data[927],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1221 */
  {
    "iwmmxt_tbcsthi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcsth%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tbcsthi,
    &operand_data[929],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1228 */
  {
    "iwmmxt_tbcstsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tbcstw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tbcstsi,
    &operand_data[931],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1235 */
  {
    "iwmmxt_tmovmskb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmovmskb,
    &operand_data[881],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1242 */
  {
    "iwmmxt_tmovmskh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskh%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmovmskh,
    &operand_data[884],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1249 */
  {
    "iwmmxt_tmovmskw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmovmskw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmovmskw,
    &operand_data[887],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1256 */
  {
    "iwmmxt_waccb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waccb%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_waccb,
    &operand_data[933],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1263 */
  {
    "iwmmxt_wacch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wacch%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wacch,
    &operand_data[866],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1270 */
  {
    "iwmmxt_waccw",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "waccw%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_waccw,
    &operand_data[906],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1277 */
  {
    "iwmmxt_walign",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_578 },
#else
    { 0, output_578, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_walign,
    &operand_data[935],
    4,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1292 */
  {
    "iwmmxt_tmrc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmrc%?\t%0, %w1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmrc,
    &operand_data[939],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1300 */
  {
    "iwmmxt_tmcr",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "tmcr%?\t%w0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_tmcr,
    &operand_data[940],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1308 */
  {
    "iwmmxt_wsadb",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadb%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadb,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1316 */
  {
    "iwmmxt_wsadh",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadh%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadh,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1324 */
  {
    "iwmmxt_wsadbz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadbz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadbz,
    &operand_data[859],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/iwmmxt.md:1332 */
  {
    "iwmmxt_wsadhz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "wsadhz%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_iwmmxt_wsadhz,
    &operand_data[856],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:22 */
  {
    "*arm_movsi_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_585 },
#else
    { 0, 0, output_585 },
#endif
    0,
    &operand_data[942],
    2,
    0,
    11,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:89 */
  {
    "*thumb2_movsi_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_586 },
#else
    { 0, 0, output_586 },
#endif
    0,
    &operand_data[942],
    2,
    0,
    11,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:129 */
  {
    "*arm_movdi_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_587 },
#else
    { 0, 0, output_587 },
#endif
    0,
    &operand_data[944],
    2,
    0,
    8,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:172 */
  {
    "*thumb2_movdi_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_588 },
#else
    { 0, 0, output_588 },
#endif
    0,
    &operand_data[944],
    2,
    0,
    8,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:210 */
  {
    "*movhf_vfp_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_589 },
#else
    { 0, 0, output_589 },
#endif
    0,
    &operand_data[946],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:265 */
  {
    "*movhf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_590 },
#else
    { 0, 0, output_590 },
#endif
    0,
    &operand_data[948],
    2,
    0,
    7,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:319 */
  {
    "*movsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_591 },
#else
    { 0, 0, output_591 },
#endif
    0,
    &operand_data[950],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:355 */
  {
    "*thumb2_movsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_592 },
#else
    { 0, 0, output_592 },
#endif
    0,
    &operand_data[950],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:394 */
  {
    "*movdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_593 },
#else
    { 0, 0, output_593 },
#endif
    0,
    &operand_data[952],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:442 */
  {
    "*thumb2_movdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_594 },
#else
    { 0, 0, output_594 },
#endif
    0,
    &operand_data[952],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:488 */
  {
    "*movsfcc_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_595 },
#else
    { 0, output_595, 0 },
#endif
    0,
    &operand_data[954],
    5,
    0,
    9,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:511 */
  {
    "*thumb2_movsfcc_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_596 },
#else
    { 0, output_596, 0 },
#endif
    0,
    &operand_data[954],
    5,
    0,
    9,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:534 */
  {
    "*movdfcc_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_597 },
#else
    { 0, output_597, 0 },
#endif
    0,
    &operand_data[959],
    5,
    0,
    9,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:557 */
  {
    "*thumb2_movdfcc_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_598 },
#else
    { 0, output_598, 0 },
#endif
    0,
    &operand_data[959],
    5,
    0,
    9,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:583 */
  {
    "*abssf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabss%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[964],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:592 */
  {
    "*absdf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fabsd%?\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[966],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:601 */
  {
    "*negsf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_601 },
#else
    { 0, output_601, 0 },
#endif
    0,
    &operand_data[968],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:612 */
  {
    "*negdf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_602 },
#else
    { 0, output_602, 0 },
#endif
    0,
    &operand_data[970],
    2,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:661 */
  {
    "*addsf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fadds%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:671 */
  {
    "*adddf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "faddd%?\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[975],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:682 */
  {
    "*subsf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsubs%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[972],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:692 */
  {
    "*subdf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsubd%?\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[975],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:705 */
  {
    "*divsf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdivs%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[978],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:715 */
  {
    "*divdf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fdivd%?\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[981],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:728 */
  {
    "*mulsf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuls%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[978],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:738 */
  {
    "*muldf3_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmuld%?\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[981],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:749 */
  {
    "*mulsf3negsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmuls%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[978],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:759 */
  {
    "*muldf3negdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmuld%?\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[981],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:773 */
  {
    "*mulsf3addsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmacs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[984],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:784 */
  {
    "*muldf3adddf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmacd%?\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[988],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:796 */
  {
    "*mulsf3subsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmscs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[984],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:807 */
  {
    "*muldf3subdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmscd%?\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[988],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:819 */
  {
    "*mulsf3negsfaddsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmacs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[984],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:830 */
  {
    "*fmuldf3negdfadddf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmacd%?\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[988],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:843 */
  {
    "*mulsf3negsfsubsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmscs%?\t%0, %2, %3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[984],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:855 */
  {
    "*muldf3negdfsubdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fnmscd%?\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[988],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:870 */
  {
    "*extendsfdf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvtds%?\t%P0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[992],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:879 */
  {
    "*truncdfsf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fcvtsd%?\t%0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[994],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:888 */
  {
    "extendhfsf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtb%?.f32.f16\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_extendhfsf2,
    &operand_data[996],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:897 */
  {
    "truncsfhf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vcvtb%?.f16.f32\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_truncsfhf2,
    &operand_data[998],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:906 */
  {
    "*truncsisf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftosizs%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1000],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:915 */
  {
    "*truncsidf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftosizd%?\t%0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1002],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:925 */
  {
    "fixuns_truncsfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftouizs%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncsfsi2,
    &operand_data[1000],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:934 */
  {
    "fixuns_truncdfsi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ftouizd%?\t%0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_fixuns_truncdfsi2,
    &operand_data[1004],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:944 */
  {
    "*floatsisf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsitos%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1006],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:953 */
  {
    "*floatsidf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsitod%?\t%P0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1008],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:963 */
  {
    "floatunssisf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fuitos%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatunssisf2,
    &operand_data[1006],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:972 */
  {
    "floatunssidf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fuitod%?\t%P0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_floatunssidf2,
    &operand_data[1008],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:984 */
  {
    "*sqrtsf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrts%?\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[964],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:993 */
  {
    "*sqrtdf2_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fsqrtd%?\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[966],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:1005 */
  {
    "*movcc_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "fmstat%?",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:1014 */
  {
    "*cmpsf_split_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1010],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:1029 */
  {
    "*cmpsf_trap_split_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1010],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:1044 */
  {
    "*cmpdf_split_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1012],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:1059 */
  {
    "*cmpdf_trap_split_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1012],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:1077 */
  {
    "*cmpsf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_640 },
#else
    { 0, output_640, 0 },
#endif
    0,
    &operand_data[1014],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:1089 */
  {
    "*cmpsf_trap_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_641 },
#else
    { 0, output_641, 0 },
#endif
    0,
    &operand_data[1014],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:1101 */
  {
    "*cmpdf_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_642 },
#else
    { 0, output_642, 0 },
#endif
    0,
    &operand_data[1016],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:1113 */
  {
    "*cmpdf_trap_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_643 },
#else
    { 0, output_643, 0 },
#endif
    0,
    &operand_data[1016],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/vfp.md:1128 */
  {
    "*push_multi_vfp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_644 },
#else
    { 0, 0, output_644 },
#endif
    0,
    &operand_data[1018],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:27 */
  {
    "*thumb2_incscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_645 },
#else
    { 0, output_645, 0 },
#endif
    0,
    &operand_data[33],
    4,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:40 */
  {
    "*thumb2_decscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_646 },
#else
    { 0, output_646, 0 },
#endif
    0,
    &operand_data[55],
    4,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:54 */
  {
    "*thumb_andsi_not_shiftsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bic%?\t%0, %1, %2%S4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1021],
    5,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:67 */
  {
    "*thumb2_smaxsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_648 },
#else
    { 0, output_648, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:81 */
  {
    "*thumb2_sminsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_649 },
#else
    { 0, output_649, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:95 */
  {
    "*thumb32_umaxsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_650 },
#else
    { 0, output_650, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:109 */
  {
    "*thumb2_uminsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_651 },
#else
    { 0, output_651, 0 },
#endif
    0,
    &operand_data[188],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:123 */
  {
    "*thumb2_notsi_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1026],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:135 */
  {
    "*thumb2_notsi_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1026],
    4,
    3,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:150 */
  {
    "*thumb2_not_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%.\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1030],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:165 */
  {
    "*thumb2_negdi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "negs\t%Q0, %Q1\n\tsbc\t%R0, %R1, %R1, lsl #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1034],
    2,
    0,
    2,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:175 */
  {
    "*thumb2_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_656 },
#else
    { 0, output_656, 0 },
#endif
    0,
    &operand_data[229],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:189 */
  {
    "*thumb2_neg_abssi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_657 },
#else
    { 0, output_657, 0 },
#endif
    0,
    &operand_data[229],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:203 */
  {
    "*thumb2_movdi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_658 },
#else
    { 0, 0, output_658 },
#endif
    0,
    &operand_data[271],
    2,
    0,
    5,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:226 */
  {
    "*thumb2_movsi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_659 },
#else
    { 0, output_659, 0 },
#endif
    0,
    &operand_data[278],
    2,
    0,
    6,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:246 */
  {
    "tls_load_dot_plus_four",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_660 },
#else
    { 0, 0, output_660 },
#endif
    (insn_gen_fn) gen_tls_load_dot_plus_four,
    &operand_data[1036],
    4,
    0,
    4,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:264 */
  {
    "*thumb2_movhi_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_661 },
#else
    { 0, output_661, 0 },
#endif
    0,
    &operand_data[1040],
    2,
    0,
    4,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:279 */
  {
    "*thumb2_movsf_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_662 },
#else
    { 0, output_662, 0 },
#endif
    0,
    &operand_data[308],
    2,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:296 */
  {
    "*thumb2_movdf_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_663 },
#else
    { 0, 0, output_663 },
#endif
    0,
    &operand_data[312],
    2,
    0,
    5,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:319 */
  {
    "*thumb2_cmpsi_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1022],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:332 */
  {
    "*thumb2_cmpsi_shiftsi_swp",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmp%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1022],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:345 */
  {
    "*thumb2_cmpsi_neg_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "cmn%?\t%0, %1%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1022],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:358 */
  {
    "*thumb2_mov_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ite\t%D1\n\tmov%D1\t%0, #0\n\tmov%d1\t%0, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:368 */
  {
    "*thumb2_mov_negscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ite\t%D1\n\tmov%D1\t%0, #0\n\tmvn%d1\t%0, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:378 */
  {
    "*thumb2_mov_notscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ite\t%D1\n\tmov%D1\t%0, #0\n\tmvn%d1\t%0, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[450],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:388 */
  {
    "*thumb2_movsicc_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_670 },
#else
    { 0, output_670, 0 },
#endif
    0,
    &operand_data[467],
    5,
    0,
    8,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:409 */
  {
    "*thumb2_movsfcc_soft_insn",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_671 },
#else
    { 0, output_671, 0 },
#endif
    0,
    &operand_data[472],
    5,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:423 */
  {
    "*call_reg_thumb2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx%?\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[477],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:433 */
  {
    "*call_value_reg_thumb2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "blx\t%1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[482],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:444 */
  {
    "*thumb2_indirect_jump",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "bx\t%0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[483],
    1,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:457 */
  {
    "*thumb2_arith_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%?\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1042],
    6,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:490 */
  {
    "*thumb2_arith_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1042],
    6,
    5,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:508 */
  {
    "*thumb2_arith_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%i1%.\t%0, %2, %4%S3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1048],
    6,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:524 */
  {
    "*thumb2_sub_shiftsi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%?\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1054],
    5,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:537 */
  {
    "*thumb2_sub_shiftsi_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1054],
    5,
    4,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:555 */
  {
    "*thumb2_sub_shiftsi_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%.\t%0, %1, %3%S2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1059],
    5,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:571 */
  {
    "*thumb2_and_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "ite\t%D1\n\tmov%D1\t%0, #0\n\tand%d1\t%0, %2, #1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[524],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:582 */
  {
    "*thumb2_ior_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_682 },
#else
    { 0, output_682, 0 },
#endif
    0,
    &operand_data[55],
    4,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:595 */
  {
    "*thumb2_compare_scc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_683 },
#else
    { 0, 0, output_683 },
#endif
    0,
    &operand_data[528],
    4,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:631 */
  {
    "*thumb2_cond_move",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_684 },
#else
    { 0, 0, output_684 },
#endif
    0,
    &operand_data[532],
    6,
    0,
    3,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:673 */
  {
    "*thumb2_cond_arith",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_685 },
#else
    { 0, 0, output_685 },
#endif
    0,
    &operand_data[538],
    6,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:710 */
  {
    "*thumb2_cond_sub",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_686 },
#else
    { 0, 0, output_686 },
#endif
    0,
    &operand_data[538],
    5,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:733 */
  {
    "*thumb2_negscc",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_687 },
#else
    { 0, 0, output_687 },
#endif
    0,
    &operand_data[573],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:756 */
  {
    "*thumb2_movcond",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_688 },
#else
    { 0, 0, output_688 },
#endif
    0,
    &operand_data[577],
    6,
    0,
    3,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:835 */
  {
    "*thumb2_zero_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%Q0, %1\n\tmov%?\t%R0, #0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:856 */
  {
    "*thumb2_zero_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_690 },
#else
    { 0, output_690, 0 },
#endif
    0,
    &operand_data[1064],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:881 */
  {
    "*thumb2_zero_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_691 },
#else
    { 0, output_691, 0 },
#endif
    0,
    &operand_data[234],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:906 */
  {
    "*thumb2_extendsidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%?\t%Q0, %1\n\tasr?\t%R0, %1, #31",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[43],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:926 */
  {
    "*thumb2_extendhidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_693 },
#else
    { 0, output_693, 0 },
#endif
    0,
    &operand_data[1064],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:950 */
  {
    "*thumb2_extendqidi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_694 },
#else
    { 0, output_694, 0 },
#endif
    0,
    &operand_data[234],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:976 */
  {
    "*thumb2_extendqisi_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_695 },
#else
    { 0, output_695, 0 },
#endif
    0,
    &operand_data[250],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:989 */
  {
    "*thumb2_zero_extendhisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_696 },
#else
    { 0, output_696, 0 },
#endif
    0,
    &operand_data[242],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1002 */
  {
    "*thumb2_zero_extendqisi2_v6",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_697 },
#else
    { 0, output_697, 0 },
#endif
    0,
    &operand_data[250],
    2,
    0,
    2,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1015 */
  {
    "thumb2_casesi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_698 },
#else
    { 0, 0, output_698 },
#endif
    (insn_gen_fn) gen_thumb2_casesi_internal,
    &operand_data[1066],
    5,
    2,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1032 */
  {
    "thumb2_casesi_internal_pic",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_699 },
#else
    { 0, 0, output_699 },
#endif
    (insn_gen_fn) gen_thumb2_casesi_internal_pic,
    &operand_data[1066],
    6,
    2,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1050 */
  {
    "thumb2_eh_return",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "#",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_thumb2_eh_return,
    &operand_data[720],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1088 */
  {
    "*thumb2_alusi3_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "%I3%!\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1072],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1122 */
  {
    "*thumb2_shiftsi3_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_702 },
#else
    { 0, 0, output_702 },
#endif
    0,
    &operand_data[1076],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1154 */
  {
    "*thumb2_movqi_shortim",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%!\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1080],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1154 */
  {
    "*thumb2_movhi_shortim",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%!\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1082],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1154 */
  {
    "*thumb2_movsi_shortim",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mov%!\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1084],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1182 */
  {
    "*thumb2_addsi_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_706 },
#else
    { 0, 0, output_706 },
#endif
    0,
    &operand_data[1086],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1206 */
  {
    "divsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sdiv%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_divsi3,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1216 */
  {
    "udivsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "udiv%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_udivsi3,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1226 */
  {
    "*thumb2_subsi_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "sub%!\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1089],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1266 */
  {
    "*thumb2_mulsi_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mul%!\t%0, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1092],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1277 */
  {
    "*thumb2_mulsi_short_compare0",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls\t%0, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[135],
    3,
    2,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1290 */
  {
    "*thumb2_mulsi_short_compare0_scratch",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "muls\t%0, %2, %0",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1095],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1302 */
  {
    "*thumb2_cbz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_713 },
#else
    { 0, 0, output_713 },
#endif
    0,
    &operand_data[1098],
    2,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1325 */
  {
    "*thumb2_cbnz",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_714 },
#else
    { 0, 0, output_714 },
#endif
    0,
    &operand_data[1098],
    2,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1361 */
  {
    "*thumb2_one_cmplsi2_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "mvn%!\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1076],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1384 */
  {
    "*thumb2_negsi2_short",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "neg%!\t%0, %1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1076],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1394 */
  {
    "orsi_notsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orn%?\t%0, %1, %2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_orsi_notsi_si,
    &operand_data[62],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1403 */
  {
    "*thumb_orsi_not_shiftsi_si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "orn%?\t%0, %1, %2%S4",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1021],
    5,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/thumb2.md:1416 */
  {
    "*thumb2_iorsi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .multi = output_719 },
#else
    { 0, output_719, 0 },
#endif
    0,
    &operand_data[132],
    3,
    0,
    3,
    2
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:429 */
  {
    "*neon_movv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_720 },
#else
    { 0, 0, output_720 },
#endif
    0,
    &operand_data[1100],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:429 */
  {
    "*neon_movv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_721 },
#else
    { 0, 0, output_721 },
#endif
    0,
    &operand_data[1102],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:429 */
  {
    "*neon_movv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_722 },
#else
    { 0, 0, output_722 },
#endif
    0,
    &operand_data[1104],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:429 */
  {
    "*neon_movv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_723 },
#else
    { 0, 0, output_723 },
#endif
    0,
    &operand_data[1106],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:503 */
  {
    "*neon_movv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_724 },
#else
    { 0, 0, output_724 },
#endif
    0,
    &operand_data[1108],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:503 */
  {
    "*neon_movv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_725 },
#else
    { 0, 0, output_725 },
#endif
    0,
    &operand_data[1110],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:503 */
  {
    "*neon_movv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_726 },
#else
    { 0, 0, output_726 },
#endif
    0,
    &operand_data[1112],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:503 */
  {
    "*neon_movv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_727 },
#else
    { 0, 0, output_727 },
#endif
    0,
    &operand_data[1114],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:503 */
  {
    "*neon_movv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_728 },
#else
    { 0, 0, output_728 },
#endif
    0,
    &operand_data[1116],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:503 */
  {
    "*neon_movti",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_729 },
#else
    { 0, 0, output_729 },
#endif
    0,
    &operand_data[1118],
    2,
    0,
    9,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:572 */
  {
    "*neon_movei",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_730 },
#else
    { 0, 0, output_730 },
#endif
    0,
    &operand_data[1120],
    2,
    0,
    3,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:572 */
  {
    "*neon_movoi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_731 },
#else
    { 0, 0, output_731 },
#endif
    0,
    &operand_data[1122],
    2,
    0,
    3,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:572 */
  {
    "*neon_movci",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_732 },
#else
    { 0, 0, output_732 },
#endif
    0,
    &operand_data[1124],
    2,
    0,
    3,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:572 */
  {
    "*neon_movxi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_733 },
#else
    { 0, 0, output_733 },
#endif
    0,
    &operand_data[1126],
    2,
    0,
    3,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:674 */
  {
    "vec_setv8qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_734 },
#else
    { 0, 0, output_734 },
#endif
    (insn_gen_fn) gen_vec_setv8qi_internal,
    &operand_data[1128],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:674 */
  {
    "vec_setv4hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_735 },
#else
    { 0, 0, output_735 },
#endif
    (insn_gen_fn) gen_vec_setv4hi_internal,
    &operand_data[1132],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:674 */
  {
    "vec_setv2si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_736 },
#else
    { 0, 0, output_736 },
#endif
    (insn_gen_fn) gen_vec_setv2si_internal,
    &operand_data[1136],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:674 */
  {
    "vec_setv2sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_737 },
#else
    { 0, 0, output_737 },
#endif
    (insn_gen_fn) gen_vec_setv2sf_internal,
    &operand_data[1140],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:693 */
  {
    "vec_setv16qi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_738 },
#else
    { 0, 0, output_738 },
#endif
    (insn_gen_fn) gen_vec_setv16qi_internal,
    &operand_data[1144],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:693 */
  {
    "vec_setv8hi_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_739 },
#else
    { 0, 0, output_739 },
#endif
    (insn_gen_fn) gen_vec_setv8hi_internal,
    &operand_data[1148],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:693 */
  {
    "vec_setv4si_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_740 },
#else
    { 0, 0, output_740 },
#endif
    (insn_gen_fn) gen_vec_setv4si_internal,
    &operand_data[1152],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:693 */
  {
    "vec_setv4sf_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_741 },
#else
    { 0, 0, output_741 },
#endif
    (insn_gen_fn) gen_vec_setv4sf_internal,
    &operand_data[1156],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:720 */
  {
    "vec_setv2di_internal",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_742 },
#else
    { 0, 0, output_742 },
#endif
    (insn_gen_fn) gen_vec_setv2di_internal,
    &operand_data[1160],
    4,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:752 */
  {
    "vec_extractv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_743 },
#else
    { 0, 0, output_743 },
#endif
    (insn_gen_fn) gen_vec_extractv8qi,
    &operand_data[1164],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:752 */
  {
    "vec_extractv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_744 },
#else
    { 0, 0, output_744 },
#endif
    (insn_gen_fn) gen_vec_extractv4hi,
    &operand_data[1167],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:752 */
  {
    "vec_extractv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_745 },
#else
    { 0, 0, output_745 },
#endif
    (insn_gen_fn) gen_vec_extractv2si,
    &operand_data[1170],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:752 */
  {
    "vec_extractv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_746 },
#else
    { 0, 0, output_746 },
#endif
    (insn_gen_fn) gen_vec_extractv2sf,
    &operand_data[1173],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:771 */
  {
    "vec_extractv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_747 },
#else
    { 0, 0, output_747 },
#endif
    (insn_gen_fn) gen_vec_extractv16qi,
    &operand_data[1176],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:771 */
  {
    "vec_extractv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_748 },
#else
    { 0, 0, output_748 },
#endif
    (insn_gen_fn) gen_vec_extractv8hi,
    &operand_data[1179],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:771 */
  {
    "vec_extractv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_749 },
#else
    { 0, 0, output_749 },
#endif
    (insn_gen_fn) gen_vec_extractv4si,
    &operand_data[1182],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:771 */
  {
    "vec_extractv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_750 },
#else
    { 0, 0, output_750 },
#endif
    (insn_gen_fn) gen_vec_extractv4sf,
    &operand_data[1185],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:795 */
  {
    "vec_extractv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_751 },
#else
    { 0, 0, output_751 },
#endif
    (insn_gen_fn) gen_vec_extractv2di,
    &operand_data[1188],
    3,
    0,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:829 */
  {
    "*addv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:829 */
  {
    "*addv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:829 */
  {
    "*addv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:829 */
  {
    "*addv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:829 */
  {
    "*addv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:829 */
  {
    "*addv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:829 */
  {
    "*addv2sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:829 */
  {
    "*addv4sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.f32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1212],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:829 */
  {
    "*addv2di3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i64\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1215],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:843 */
  {
    "*subv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:843 */
  {
    "*subv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:843 */
  {
    "*subv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:843 */
  {
    "*subv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:843 */
  {
    "*subv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:843 */
  {
    "*subv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:843 */
  {
    "*subv2sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:843 */
  {
    "*subv4sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.f32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1212],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:843 */
  {
    "*subv2di3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vsub.i64\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1215],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:857 */
  {
    "*mulv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:857 */
  {
    "*mulv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:857 */
  {
    "*mulv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:857 */
  {
    "*mulv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:857 */
  {
    "*mulv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:857 */
  {
    "*mulv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:857 */
  {
    "*mulv2sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:857 */
  {
    "*mulv4sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.f32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1212],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:857 */
  {
    "*mulv2di3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmul.i64\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1215],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:878 */
  {
    "*mulv8qi3addv8qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i8\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1218],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:878 */
  {
    "*mulv16qi3addv16qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i8\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1222],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:878 */
  {
    "*mulv4hi3addv4hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i16\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1226],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:878 */
  {
    "*mulv8hi3addv8hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i16\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1230],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:878 */
  {
    "*mulv2si3addv2si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i32\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1234],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:878 */
  {
    "*mulv4si3addv4si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i32\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1238],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:878 */
  {
    "*mulv2sf3addv2sf_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.f32\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1242],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:878 */
  {
    "*mulv4sf3addv4sf_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.f32\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1246],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:878 */
  {
    "*mulv2di3addv2di_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmla.i64\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1250],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:900 */
  {
    "*mulv8qi3negv8qiaddv8qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i8\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1218],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:900 */
  {
    "*mulv16qi3negv16qiaddv16qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i8\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1222],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:900 */
  {
    "*mulv4hi3negv4hiaddv4hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i16\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1226],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:900 */
  {
    "*mulv8hi3negv8hiaddv8hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i16\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1230],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:900 */
  {
    "*mulv2si3negv2siaddv2si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i32\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1234],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:900 */
  {
    "*mulv4si3negv4siaddv4si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i32\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1238],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:900 */
  {
    "*mulv2sf3negv2sfaddv2sf_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.f32\t%P0, %P2, %P3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1242],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:900 */
  {
    "*mulv4sf3negv4sfaddv4sf_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.f32\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1246],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:900 */
  {
    "*mulv2di3negv2diaddv2di_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmls.i64\t%q0, %q2, %q3",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1250],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:922 */
  {
    "iorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_797 },
#else
    { 0, 0, output_797 },
#endif
    (insn_gen_fn) gen_iorv8qi3,
    &operand_data[1254],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:922 */
  {
    "iorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_798 },
#else
    { 0, 0, output_798 },
#endif
    (insn_gen_fn) gen_iorv16qi3,
    &operand_data[1257],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:922 */
  {
    "iorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_799 },
#else
    { 0, 0, output_799 },
#endif
    (insn_gen_fn) gen_iorv4hi3,
    &operand_data[1260],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:922 */
  {
    "iorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_800 },
#else
    { 0, 0, output_800 },
#endif
    (insn_gen_fn) gen_iorv8hi3,
    &operand_data[1263],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:922 */
  {
    "iorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_801 },
#else
    { 0, 0, output_801 },
#endif
    (insn_gen_fn) gen_iorv2si3,
    &operand_data[1266],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:922 */
  {
    "iorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_802 },
#else
    { 0, 0, output_802 },
#endif
    (insn_gen_fn) gen_iorv4si3,
    &operand_data[1269],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:922 */
  {
    "iorv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_803 },
#else
    { 0, 0, output_803 },
#endif
    (insn_gen_fn) gen_iorv2sf3,
    &operand_data[1272],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:922 */
  {
    "iorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_804 },
#else
    { 0, 0, output_804 },
#endif
    (insn_gen_fn) gen_iorv4sf3,
    &operand_data[1275],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:922 */
  {
    "iorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_805 },
#else
    { 0, 0, output_805 },
#endif
    (insn_gen_fn) gen_iorv2di3,
    &operand_data[1278],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:939 */
  {
    "iordi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_806 },
#else
    { 0, 0, output_806 },
#endif
    (insn_gen_fn) gen_iordi3_neon,
    &operand_data[1281],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:962 */
  {
    "andv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_807 },
#else
    { 0, 0, output_807 },
#endif
    (insn_gen_fn) gen_andv8qi3,
    &operand_data[1284],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:962 */
  {
    "andv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_808 },
#else
    { 0, 0, output_808 },
#endif
    (insn_gen_fn) gen_andv16qi3,
    &operand_data[1287],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:962 */
  {
    "andv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_809 },
#else
    { 0, 0, output_809 },
#endif
    (insn_gen_fn) gen_andv4hi3,
    &operand_data[1290],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:962 */
  {
    "andv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_810 },
#else
    { 0, 0, output_810 },
#endif
    (insn_gen_fn) gen_andv8hi3,
    &operand_data[1293],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:962 */
  {
    "andv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_811 },
#else
    { 0, 0, output_811 },
#endif
    (insn_gen_fn) gen_andv2si3,
    &operand_data[1296],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:962 */
  {
    "andv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_812 },
#else
    { 0, 0, output_812 },
#endif
    (insn_gen_fn) gen_andv4si3,
    &operand_data[1299],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:962 */
  {
    "andv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_813 },
#else
    { 0, 0, output_813 },
#endif
    (insn_gen_fn) gen_andv2sf3,
    &operand_data[1302],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:962 */
  {
    "andv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_814 },
#else
    { 0, 0, output_814 },
#endif
    (insn_gen_fn) gen_andv4sf3,
    &operand_data[1305],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:962 */
  {
    "andv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_815 },
#else
    { 0, 0, output_815 },
#endif
    (insn_gen_fn) gen_andv2di3,
    &operand_data[1308],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:979 */
  {
    "anddi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_816 },
#else
    { 0, 0, output_816 },
#endif
    (insn_gen_fn) gen_anddi3_neon,
    &operand_data[1311],
    3,
    0,
    2,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:997 */
  {
    "ornv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorn\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ornv8qi3_neon,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:997 */
  {
    "ornv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorn\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ornv16qi3_neon,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:997 */
  {
    "ornv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorn\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ornv4hi3_neon,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:997 */
  {
    "ornv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorn\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ornv8hi3_neon,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:997 */
  {
    "ornv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorn\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ornv2si3_neon,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:997 */
  {
    "ornv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorn\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ornv4si3_neon,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:997 */
  {
    "ornv2sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorn\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ornv2sf3_neon,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:997 */
  {
    "ornv4sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorn\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ornv4sf3_neon,
    &operand_data[1212],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:997 */
  {
    "ornv2di3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorn\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ornv2di3_neon,
    &operand_data[1215],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1006 */
  {
    "orndi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vorn\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_orndi3_neon,
    &operand_data[1314],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1016 */
  {
    "bicv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbic\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicv8qi3_neon,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1016 */
  {
    "bicv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbic\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicv16qi3_neon,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1016 */
  {
    "bicv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbic\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicv4hi3_neon,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1016 */
  {
    "bicv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbic\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicv8hi3_neon,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1016 */
  {
    "bicv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbic\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicv2si3_neon,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1016 */
  {
    "bicv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbic\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicv4si3_neon,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1016 */
  {
    "bicv2sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbic\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicv2sf3_neon,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1016 */
  {
    "bicv4sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbic\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicv4sf3_neon,
    &operand_data[1212],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1016 */
  {
    "bicv2di3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbic\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicv2di3_neon,
    &operand_data[1215],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1025 */
  {
    "bicdi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vbic\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_bicdi3_neon,
    &operand_data[1314],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1035 */
  {
    "xorv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "veor\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv8qi3,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1035 */
  {
    "xorv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "veor\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv16qi3,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1035 */
  {
    "xorv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "veor\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv4hi3,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1035 */
  {
    "xorv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "veor\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv8hi3,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1035 */
  {
    "xorv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "veor\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv2si3,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1035 */
  {
    "xorv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "veor\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv4si3,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1035 */
  {
    "xorv2sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "veor\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv2sf3,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1035 */
  {
    "xorv4sf3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "veor\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv4sf3,
    &operand_data[1212],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1035 */
  {
    "xorv2di3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "veor\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xorv2di3,
    &operand_data[1215],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1044 */
  {
    "xordi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "veor\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_xordi3_neon,
    &operand_data[1314],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1054 */
  {
    "one_cmplv8qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmvn\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv8qi2,
    &operand_data[1191],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1054 */
  {
    "one_cmplv16qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmvn\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv16qi2,
    &operand_data[1194],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1054 */
  {
    "one_cmplv4hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmvn\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv4hi2,
    &operand_data[1197],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1054 */
  {
    "one_cmplv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmvn\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv8hi2,
    &operand_data[1200],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1054 */
  {
    "one_cmplv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmvn\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv2si2,
    &operand_data[1203],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1054 */
  {
    "one_cmplv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmvn\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv4si2,
    &operand_data[1206],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1054 */
  {
    "one_cmplv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmvn\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv2sf2,
    &operand_data[1209],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1054 */
  {
    "one_cmplv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmvn\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv4sf2,
    &operand_data[1212],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1054 */
  {
    "one_cmplv2di2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmvn\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_one_cmplv2di2,
    &operand_data[1215],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1062 */
  {
    "absv8qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vabs.s8\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv8qi2,
    &operand_data[1191],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1062 */
  {
    "absv16qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vabs.s8\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv16qi2,
    &operand_data[1194],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1062 */
  {
    "absv4hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vabs.s16\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv4hi2,
    &operand_data[1197],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1062 */
  {
    "absv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vabs.s16\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv8hi2,
    &operand_data[1200],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1062 */
  {
    "absv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vabs.s32\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv2si2,
    &operand_data[1203],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1062 */
  {
    "absv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vabs.s32\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv4si2,
    &operand_data[1206],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1062 */
  {
    "absv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vabs.f32\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv2sf2,
    &operand_data[1209],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1062 */
  {
    "absv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vabs.f32\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_absv4sf2,
    &operand_data[1212],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1075 */
  {
    "negv8qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vneg.s8\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negv8qi2,
    &operand_data[1191],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1075 */
  {
    "negv16qi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vneg.s8\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negv16qi2,
    &operand_data[1194],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1075 */
  {
    "negv4hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vneg.s16\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negv4hi2,
    &operand_data[1197],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1075 */
  {
    "negv8hi2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vneg.s16\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negv8hi2,
    &operand_data[1200],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1075 */
  {
    "negv2si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vneg.s32\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negv2si2,
    &operand_data[1203],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1075 */
  {
    "negv4si2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vneg.s32\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negv4si2,
    &operand_data[1206],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1075 */
  {
    "negv2sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vneg.f32\t%P0, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negv2sf2,
    &operand_data[1209],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1075 */
  {
    "negv4sf2",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vneg.f32\t%q0, %q1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_negv4sf2,
    &operand_data[1212],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1088 */
  {
    "*uminv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.u8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1088 */
  {
    "*uminv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.u8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1088 */
  {
    "*uminv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.u16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1088 */
  {
    "*uminv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.u16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1088 */
  {
    "*uminv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.u32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1088 */
  {
    "*uminv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.u32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1097 */
  {
    "*umaxv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.u8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1097 */
  {
    "*umaxv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.u8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1097 */
  {
    "*umaxv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.u16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1097 */
  {
    "*umaxv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.u16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1097 */
  {
    "*umaxv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.u32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1097 */
  {
    "*umaxv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.u32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1106 */
  {
    "*sminv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.s8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1106 */
  {
    "*sminv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.s8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1106 */
  {
    "*sminv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.s16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1106 */
  {
    "*sminv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.s16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1106 */
  {
    "*sminv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.s32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1106 */
  {
    "*sminv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.s32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1106 */
  {
    "*sminv2sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1106 */
  {
    "*sminv4sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.f32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1212],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1118 */
  {
    "*smaxv8qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.s8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1118 */
  {
    "*smaxv16qi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.s8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1118 */
  {
    "*smaxv4hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.s16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1118 */
  {
    "*smaxv8hi3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.s16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1118 */
  {
    "*smaxv2si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.s32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1118 */
  {
    "*smaxv4si3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.s32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1118 */
  {
    "*smaxv2sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1118 */
  {
    "*smaxv4sf3_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.f32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1212],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1134 */
  {
    "vashlv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vashlv8qi3,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1134 */
  {
    "vashlv16qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vashlv16qi3,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1134 */
  {
    "vashlv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vashlv4hi3,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1134 */
  {
    "vashlv8hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vashlv8hi3,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1134 */
  {
    "vashlv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vashlv2si3,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1134 */
  {
    "vashlv4si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_vashlv4si3,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1151 */
  {
    "ashlv8qi3_signed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv8qi3_signed,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1151 */
  {
    "ashlv16qi3_signed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv16qi3_signed,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1151 */
  {
    "ashlv4hi3_signed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4hi3_signed,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1151 */
  {
    "ashlv8hi3_signed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv8hi3_signed,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1151 */
  {
    "ashlv2si3_signed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2si3_signed,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1151 */
  {
    "ashlv4si3_signed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4si3_signed,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1151 */
  {
    "ashlv2di3_signed",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.s64\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2di3_signed,
    &operand_data[1215],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1167 */
  {
    "ashlv8qi3_unsigned",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.u8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv8qi3_unsigned,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1167 */
  {
    "ashlv16qi3_unsigned",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.u8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv16qi3_unsigned,
    &operand_data[1194],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1167 */
  {
    "ashlv4hi3_unsigned",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.u16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4hi3_unsigned,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1167 */
  {
    "ashlv8hi3_unsigned",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.u16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv8hi3_unsigned,
    &operand_data[1200],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1167 */
  {
    "ashlv2si3_unsigned",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.u32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2si3_unsigned,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1167 */
  {
    "ashlv4si3_unsigned",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.u32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv4si3_unsigned,
    &operand_data[1206],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1167 */
  {
    "ashlv2di3_unsigned",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vshl.u64\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_ashlv2di3_unsigned,
    &operand_data[1215],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1210 */
  {
    "widen_ssumv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddw.s8\t%q0, %q2, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_widen_ssumv8qi3,
    &operand_data[1317],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1210 */
  {
    "widen_ssumv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddw.s16\t%q0, %q2, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_widen_ssumv4hi3,
    &operand_data[1320],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1210 */
  {
    "widen_ssumv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddw.s32\t%q0, %q2, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_widen_ssumv2si3,
    &operand_data[1323],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1220 */
  {
    "widen_usumv8qi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddw.u8\t%q0, %q2, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_widen_usumv8qi3,
    &operand_data[1317],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1220 */
  {
    "widen_usumv4hi3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddw.u16\t%q0, %q2, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_widen_usumv4hi3,
    &operand_data[1320],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1220 */
  {
    "widen_usumv2si3",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddw.u32\t%q0, %q2, %P1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_widen_usumv2si3,
    &operand_data[1323],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1298 */
  {
    "quad_halves_plusv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i32\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_plusv4si,
    &operand_data[1326],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1298 */
  {
    "quad_halves_sminv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.s32\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_sminv4si,
    &operand_data[1326],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1298 */
  {
    "quad_halves_smaxv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.s32\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_smaxv4si,
    &operand_data[1326],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1298 */
  {
    "quad_halves_uminv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.u32\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_uminv4si,
    &operand_data[1326],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1298 */
  {
    "quad_halves_umaxv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.u32\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_umaxv4si,
    &operand_data[1326],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1313 */
  {
    "quad_halves_plusv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.f32\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_plusv4sf,
    &operand_data[1328],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1313 */
  {
    "quad_halves_sminv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.f32\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_sminv4sf,
    &operand_data[1328],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1313 */
  {
    "quad_halves_smaxv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.f32\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_smaxv4sf,
    &operand_data[1328],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1328 */
  {
    "quad_halves_plusv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i16\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_plusv8hi,
    &operand_data[1330],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1328 */
  {
    "quad_halves_sminv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.s16\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_sminv8hi,
    &operand_data[1330],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1328 */
  {
    "quad_halves_smaxv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.s16\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_smaxv8hi,
    &operand_data[1330],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1328 */
  {
    "quad_halves_uminv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.u16\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_uminv8hi,
    &operand_data[1330],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1328 */
  {
    "quad_halves_umaxv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.u16\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_umaxv8hi,
    &operand_data[1330],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1345 */
  {
    "quad_halves_plusv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i8\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_plusv16qi,
    &operand_data[1332],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1345 */
  {
    "quad_halves_sminv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.s8\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_sminv16qi,
    &operand_data[1332],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1345 */
  {
    "quad_halves_smaxv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.s8\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_smaxv16qi,
    &operand_data[1332],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1345 */
  {
    "quad_halves_uminv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmin.u8\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_uminv16qi,
    &operand_data[1332],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1345 */
  {
    "quad_halves_umaxv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vmax.u8\t%P0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_quad_halves_umaxv16qi,
    &operand_data[1332],
    2,
    1,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1370 */
  {
    "move_lo_quad_v4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_944 },
#else
    { 0, 0, output_944 },
#endif
    (insn_gen_fn) gen_move_lo_quad_v4si,
    &operand_data[1334],
    2,
    1,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1389 */
  {
    "move_lo_quad_v4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_945 },
#else
    { 0, 0, output_945 },
#endif
    (insn_gen_fn) gen_move_lo_quad_v4sf,
    &operand_data[1336],
    2,
    1,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1408 */
  {
    "move_lo_quad_v8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_946 },
#else
    { 0, 0, output_946 },
#endif
    (insn_gen_fn) gen_move_lo_quad_v8hi,
    &operand_data[1338],
    2,
    1,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1428 */
  {
    "move_lo_quad_v16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .function = output_947 },
#else
    { 0, 0, output_947 },
#endif
    (insn_gen_fn) gen_move_lo_quad_v16qi,
    &operand_data[1340],
    2,
    1,
    1,
    3
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1477 */
  {
    "reduc_splus_v2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i64\t%e0, %e1, %f1",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_reduc_splus_v2di,
    &operand_data[1215],
    2,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1597 */
  {
    "neon_vpadd_internalv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpadd.i8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpadd_internalv8qi,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1597 */
  {
    "neon_vpadd_internalv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpadd.i16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpadd_internalv4hi,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1597 */
  {
    "neon_vpadd_internalv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpadd.i32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpadd_internalv2si,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1597 */
  {
    "neon_vpadd_internalv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpadd.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpadd_internalv2sf,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1613 */
  {
    "neon_vpsminv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmin.s8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpsminv8qi,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1613 */
  {
    "neon_vpsminv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmin.s16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpsminv4hi,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1613 */
  {
    "neon_vpsminv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmin.s32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpsminv2si,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1613 */
  {
    "neon_vpsminv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmin.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpsminv2sf,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1627 */
  {
    "neon_vpsmaxv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmax.s8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpsmaxv8qi,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1627 */
  {
    "neon_vpsmaxv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmax.s16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpsmaxv4hi,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1627 */
  {
    "neon_vpsmaxv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmax.s32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpsmaxv2si,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1627 */
  {
    "neon_vpsmaxv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmax.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpsmaxv2sf,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1641 */
  {
    "neon_vpuminv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmin.u8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpuminv8qi,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1641 */
  {
    "neon_vpuminv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmin.u16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpuminv4hi,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1641 */
  {
    "neon_vpuminv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmin.u32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpuminv2si,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1652 */
  {
    "neon_vpumaxv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmax.u8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpumaxv8qi,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1652 */
  {
    "neon_vpumaxv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmax.u16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpumaxv4hi,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1652 */
  {
    "neon_vpumaxv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vpmax.u32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vpumaxv2si,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1671 */
  {
    "*ss_addv8qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.s8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1671 */
  {
    "*ss_addv4hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.s16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1671 */
  {
    "*ss_addv2si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.s32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1671 */
  {
    "*ss_addv2sf_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1680 */
  {
    "*us_addv8qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.u8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1680 */
  {
    "*us_addv4hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.u16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1680 */
  {
    "*us_addv2si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.u32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1680 */
  {
    "*us_addv2sf_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1689 */
  {
    "*ss_subv8qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqsub.s8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1689 */
  {
    "*ss_subv4hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqsub.s16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1689 */
  {
    "*ss_subv2si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqsub.s32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1689 */
  {
    "*ss_subv2sf_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqsub.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1698 */
  {
    "*us_subv8qi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqsub.u8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1191],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1698 */
  {
    "*us_subv4hi_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqsub.u16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1197],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1698 */
  {
    "*us_subv2si_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqsub.u32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1203],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1698 */
  {
    "*us_subv2sf_neon",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqsub.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    0,
    &operand_data[1209],
    3,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1711 */
  {
    "neon_vaddv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddv8qi,
    &operand_data[1342],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1711 */
  {
    "neon_vaddv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddv16qi,
    &operand_data[1346],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1711 */
  {
    "neon_vaddv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddv4hi,
    &operand_data[1350],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1711 */
  {
    "neon_vaddv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddv8hi,
    &operand_data[1354],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1711 */
  {
    "neon_vaddv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddv2si,
    &operand_data[1358],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1711 */
  {
    "neon_vaddv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddv4si,
    &operand_data[1362],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1711 */
  {
    "neon_vaddv2sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.f32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddv2sf,
    &operand_data[1366],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1711 */
  {
    "neon_vaddv4sf",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.f32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddv4sf,
    &operand_data[1370],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1711 */
  {
    "neon_vadddi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i64\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vadddi,
    &operand_data[1374],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1711 */
  {
    "neon_vaddv2di",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vadd.i64\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddv2di,
    &operand_data[1378],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1731 */
  {
    "neon_vaddlv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddl.%T3%#8\t%q0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddlv8qi,
    &operand_data[1382],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1731 */
  {
    "neon_vaddlv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddl.%T3%#16\t%q0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddlv4hi,
    &operand_data[1386],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1731 */
  {
    "neon_vaddlv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddl.%T3%#32\t%q0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddlv2si,
    &operand_data[1390],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1742 */
  {
    "neon_vaddwv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddw.%T3%#8\t%q0, %q1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddwv8qi,
    &operand_data[1394],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1742 */
  {
    "neon_vaddwv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddw.%T3%#16\t%q0, %q1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddwv4hi,
    &operand_data[1398],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1742 */
  {
    "neon_vaddwv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vaddw.%T3%#32\t%q0, %q1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vaddwv2si,
    &operand_data[1402],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1755 */
  {
    "neon_vhaddv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "v%O3hadd.%T3%#8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vhaddv8qi,
    &operand_data[1342],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1755 */
  {
    "neon_vhaddv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "v%O3hadd.%T3%#8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vhaddv16qi,
    &operand_data[1346],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1755 */
  {
    "neon_vhaddv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "v%O3hadd.%T3%#16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vhaddv4hi,
    &operand_data[1350],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1755 */
  {
    "neon_vhaddv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "v%O3hadd.%T3%#16\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vhaddv8hi,
    &operand_data[1354],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1755 */
  {
    "neon_vhaddv2si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "v%O3hadd.%T3%#32\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vhaddv2si,
    &operand_data[1358],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1755 */
  {
    "neon_vhaddv4si",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "v%O3hadd.%T3%#32\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vhaddv4si,
    &operand_data[1362],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1766 */
  {
    "neon_vqaddv8qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.%T3%#8\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vqaddv8qi,
    &operand_data[1342],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1766 */
  {
    "neon_vqaddv16qi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.%T3%#8\t%q0, %q1, %q2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vqaddv16qi,
    &operand_data[1346],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1766 */
  {
    "neon_vqaddv4hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.%T3%#16\t%P0, %P1, %P2",
#if HAVE_DESIGNATED_INITIALIZERS
    },
#else
    0, 0 },
#endif
    (insn_gen_fn) gen_neon_vqaddv4hi,
    &operand_data[1350],
    4,
    0,
    1,
    1
  },
  /* /home/licj/software/netBSD/source/netBSD/usr/src/tools/gcc/../../external/gpl3/gcc/dist/gcc/config/arm/neon.md:1766 */
  {
    "neon_vqaddv8hi",
#if HAVE_DESIGNATED_INITIALIZERS
    { .single =
#else
    {
#endif
    "vqadd.%T3%#16\t%q0, %q1, %q2",
  },