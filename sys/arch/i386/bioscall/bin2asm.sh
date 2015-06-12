#!/bin/sh -
# bin2asm (binary to asm) shell script version by ukai
#
#	$NetBSD: bin2asm.sh,v 1.2 1998/01/05 21:28:21 perry Exp $
#
if [ $# -lt 1 ]; then
	echo 'usage: $0 [in]'
	exit 1
fi
in=$1
size=`ls -l ${in} | awk '{print $5}'`
# Oops, must 8 byte align
len=`expr \( $size + 8 \) / 8 \* 8` 

echo "/*	\$NetBSD\$	*/"
echo "/* This file is automatically generated by bin2asm.sh */" 
echo "/* Original file is '${in}' */"
echo
dd if=${in} bs=${len} conv=sync |\
	hexdump -v -e '"	.byte	" 7/1 "0x%02x, " 1/1 " 0x%02x" "\n"'
echo
echo "/* Total size = $size -> $len */"
echo "/* End of File */"