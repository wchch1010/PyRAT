/*
** sarsimstats.h: declarations for statistics of similarity criteria
**
** This file is part of NL-SAR Toolbox version 0.6.
**
** Copyright Charles-Alban Deledalle (2013)
** Email charles-alban.deledalle@math.u-bordeaux1.fr
**
** This software is a computer program whose purpose is to provide a
** suite of tools to manipulate SAR images.
**
** This software is governed by the CeCILL license under French law and
** abiding by the rules of distribution of free software. You can use,
** modify and/ or redistribute the software under the terms of the CeCILL
** license as circulated by CEA, CNRS and INRIA at the following URL
** "http://www.cecill.info".
**
** As a counterpart to the access to the source code and rights to copy,
** modify and redistribute granted by the license, users are provided only
** with a limited warranty and the software's author, the holder of the
** economic rights, and the successive licensors have only limited
** liability.
**
** In this respect, the user's attention is drawn to the risks associated
** with loading, using, modifying and/or developing or reproducing the
** software by the user in light of its specific status of free software,
** that may mean that it is complicated to manipulate, and that also
** therefore means that it is reserved for developers and experienced
** professionals having in-depth computer knowledge. Users are therefore
** encouraged to load and test the software's suitability as regards their
** requirements in conditions enabling the security of their systems and/or
** data to be ensured and, more generally, to use and operate it in the
** same conditions as regards security.
**
** The fact that you are presently reading this means that you have had
** knowledge of the CeCILL license and that you accept its terms.
**
**
** Started on  Wed Jul 24 15:42:05 2013 Charles-Alban Deledalle
** Last update Wed Jul 24 15:45:05 2013 Charles-Alban Deledalle
*/

#ifndef SARSIMSTATS_H_
# define SARSIMSTATS_H_

#include "data/sardata.h"
#include "sarsim.h"

typedef struct {
  int	N;
  float mean;
  float std;
  float min;
  float max;
  float selfsim;
  float* alpha;
  float* quantile;
} sarsimstats;

sarsimstats* sarsimstats_create(const sardata* sar,
				const sarsimfuncs* funcs,
				sarsimstats* stats,
				int L,
				int hP,
				float alpha_min,
				float alpha_max,
				int nb);

sarsimstats* sarsimstats_free(sarsimstats* stats);


#endif //!SARSIMSTATS_H_