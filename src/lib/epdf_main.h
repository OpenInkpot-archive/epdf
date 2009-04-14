#ifndef __EPDF_MAIN_H__
#define __EPDF_MAIN_H__


/**
 * @file epdf_main.h
 *
 * @defgroup Epdf_Main Epdf main functions
 *
 * @brief Functions that manage miscellaneous functions
 *
 * Miscellaenous functions
 *
 * @ingroup Epdf
 */

/**
 * @brief Return the version of Poppler.
 *
 * @return The version of Poppler.
 *
 * Return the version of Poppler as a string.
 *
 * @ingroup Epdf_Main
 */
const char *epdf_poppler_version_get (void);

/**
 * @brief Return the state of fonts antialiasing in Poppler
 *
 * @return Whether fonts antialiasing enabled.
 *
 * Return the state of fonts antialiasing in Poppler.
 *
 * @ingroup Epdf_Main
 */
int epdf_fonts_antialias_get (void);

/**
 * @brief Sets fonts antialiasing mode in Poppler
 *
 * @param on 1 to enable fonts antialiasing, 0 to disable
 *
 * Enable/disable fonts antialiasing in Poppler
 */
void epdf_fonts_antialias_set (int on);

/**
 * @brief Return the state of lines antialiasing in Poppler
 *
 * @return Whether lines antialiasing enabled
 *
 * Return whether lines antialiasing turned on in Poppler.
 *
 * @ingroup Epdf_Main
 */
int epdf_lines_antialias_get (void);

/**
 * @brief Sets lines antialiasing mode in Poppler
 *
 * @param on 1 to enable lines antialiasing, 0 to disable
 *
 * Enable/disable lines antialiasing in Poppler
 */
void epdf_lines_antialias_set (int on);

#endif /* __EPDF_MAIN_H__ */
