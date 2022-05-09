#ifndef VPTRANS_H
#define VPTRANS_H

#include <linux/types.h>
#include "common/list.h"

struct vptrans_pin {
	uintptr_t vaddr;
	unsigned int off;
	int nr_page;
};

#endif
