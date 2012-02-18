
#include "sysdep.h"
#include "bfd.h"
#include "libbfd.h"
#include "elf-bfd.h"
#include "libiberty.h"
#include "elf/i2d.h"

static reloc_howto_type *
bfd_elf32_bfd_reloc_type_lookup (bfd *abfd ATTRIBUTE_UNUSED,
				 bfd_reloc_code_real_type code)
{
	code = code;
	printf("%s called\n", __func__);
	return NULL;
}

static reloc_howto_type *
bfd_elf32_bfd_reloc_name_lookup (bfd *abfd ATTRIBUTE_UNUSED,
				 const char *r_name)
{
	r_name = r_name;
	printf("%s called\n", __func__);
	return NULL;
}

#define	TARGET_LITTLE_SYM	bfd_elf32_or32_vec
#define TARGET_LITTLE_NAME	"elf32-i2d"
#define	ELF_ARCH		bfd_arch_i2d
#define ELF_MACHINE_CODE	EM_I2D
#define ELF_MAXPAGESIZE		0x1000 /* 4k */

#include "elf32-target.h"
