/*
 * UnityVoice.cpp
 *
 *  Created on: 22 Aug 2013
 *      Author: pete
 */

#include <libunityvoice/VoiceInterface.h>
#include <libunityvoice/UnityVoice.h>
#include <common/DBusTypes.h>

namespace LibUnityVoice {

ComCanonicalUnityVoiceInterface * UnityVoice::getInstance() {
	return new ComCanonicalUnityVoiceInterface("com.canonical.Unity.Voice",
			"/com/canonical/Unity/Voice", QDBusConnection::sessionBus());
}

void UnityVoice::registerMetaTypes() {
	DBusTypes::registerMetaTypes();
}

} /* namespace LibUnityVoice */
