/** @file
 *
 * @ingroup implementationMaxExternalsAudioGraph
 *
 * @brief j.degrade= : wraps the #TTDegrade class as an audio signal quality degrading external for AudioGraph
 *
 * @details
 *
 * @authors Tim Place, Trond Lossius
 *
 * @copyright © 2008 by Timothy Place @n
 * This code is licensed under the terms of the "New BSD License" @n
 * http://creativecommons.org/licenses/BSD/
 */


#include "MaxAudioGraph.h"

int C74_EXPORT main(void)
{
	TTAudioGraphInit();
	wrapAsMaxAudioGraph(TT("degrade"), "j.degrade=", NULL);
	wrapAsMaxAudioGraph(TT("degrade"), "degrade=", NULL);
	return 0;
}

