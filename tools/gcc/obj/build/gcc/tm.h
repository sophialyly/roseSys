#ifndef GCC_TM_H
#define GCC_TM_H
#define TARGET_CPU_DEFAULT (TARGET_CPU_generic)
#ifndef NETBSD_ENABLE_PTHREADS
# define NETBSD_ENABLE_PTHREADS
#endif
#ifdef IN_GCC
# include "options.h"
# include "config/dbxelf.h"
# include "config/elfos.h"
# include "config/netbsd.h"
# include "config/netbsd-elf.h"
# include "config/arm/elf.h"
# include "config/arm/aout.h"
# include "config/arm/arm.h"
# include "config/arm/netbsd-elf.h"
# include "defaults.h"
#endif
#if defined IN_GCC && !defined GENERATOR_FILE && !defined USED_FOR_TARGET
# include "insn-constants.h"
# include "insn-flags.h"
#endif
#endif /* GCC_TM_H */
