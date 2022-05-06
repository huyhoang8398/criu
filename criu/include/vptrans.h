#ifndef VPTRANS_H
#define VPTRANS_H

#include <linux/types.h>
#include "common/list.h"

struct vptrans_pin {
	unsigned long vaddr;
	u64 off;
	u64 nr_page;
};

#endif
