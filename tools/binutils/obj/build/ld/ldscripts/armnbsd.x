/* Default linker script, for normal executables */
OUTPUT_FORMAT("a.out-arm-netbsd", "a.out-arm-netbsd",
	      "a.out-arm-netbsd")
OUTPUT_ARCH(arm)
SEARCH_DIR("=/usr/lib");
__DYNAMIC = 0;
PROVIDE (__stack = 0);
SECTIONS
{
  . = 0x1020;
  .text :
  {
    CREATE_OBJECT_SYMBOLS
    *(.text)
    /* The next six sections are for SunOS dynamic linking.  The order
       is important.  */
    *(.dynrel)
    *(.hash)
    *(.dynsym)
    *(.dynstr)
    *(.rules)
    *(.need)
    _etext = .;
    __etext = .;
  }
  . = ALIGN(0x1000);
  .data :
  {
    /* The first three sections are for SunOS dynamic linking.  */
    *(.dynamic)
    *(.got)
    *(.plt)
    *(.data)
    *(.linux-dynamic) /* For Linux dynamic linking.  */
    CONSTRUCTORS
    _edata  =  .;
    __edata  =  .;
  }
  .bss :
  {
    __bss_start = .;
   *(.bss)
   *(COMMON)
   . = ALIGN(4);
   _end = . ;
   __end = . ;
  }
}
