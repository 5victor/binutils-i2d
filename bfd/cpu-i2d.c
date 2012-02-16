/* This port ref or32 */

#include "sysdep.h"
#include "bfd.h"
#include "libbfd.h"

const bfd_arch_info_type bfd_i2d_arch = 
{
	32,	/* 32 bits in a word. */
	32,	/* 32 bits in an address. */
	8,	/*  8 bits in a byte */
	bfd_arch_id,
	0,
	"i2d",
	"i2d",
	TRUE,
	bfd_default_compatible,
	bfd_default_scan,
	0,
};

