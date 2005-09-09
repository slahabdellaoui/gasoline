#ifndef COOLING_HINCLUDED
#define COOLING_HINCLUDED

#ifdef GASOLINE
#ifndef NOCOOLING

#ifdef COOLING_DISK
#include "cooling_disk.h"
#else

#ifdef COOLING_PLANET
#include "cooling_planet.h"
#else

#ifdef COOLING_COSMO
#include "cooling_cosmo.h"
#else

#ifdef COOLING_BATE
#include "cooling_bate.h"
#else

#error "No valid cooling function specified"

#endif
#endif
#endif
#endif

#endif
#endif

#endif
