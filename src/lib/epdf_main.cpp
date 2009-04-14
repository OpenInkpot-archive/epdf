#include <config.h>
#include <GlobalParams.h>

#include "Epdf.h"


const char *
epdf_poppler_version_get (void)
{
  return POPPLER_VERSION;
}

static GlobalParams* _get_global_params()
{
    /* Defined in GlobalParams.h */
    if(!globalParams)
        globalParams = new GlobalParams();
    return globalParams;
}

int epdf_fonts_antialias_get (void)
{
    return _get_global_params()->getAntialias();
}

void epdf_fonts_antialias_set (int on)
{
    /* Nice API */
    _get_global_params()->setAntialias((char*)(on ? "yes" : "no"));
}

int epdf_lines_antialias_get (void)
{
    return _get_global_params()->getVectorAntialias();
}

void epdf_lines_antialias_set (int on)
{
    _get_global_params()->setVectorAntialias((char*)(on ? "yes" : "no"));
}
