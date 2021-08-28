#ifndef __CORE_DEFINITIONS_MESSAGE_TYPES__H
#define __CORE_DEFINITIONS_MESSAGE_TYPES__H

namespace core::definitions {
enum RequestType {
  IDENTITY = 0,
  JOIN_GROUP = 1,
  DIRECT_MESSAGE = 2,
  LEAVE_GROUP = 3,
  FETCH_GROUPS = 4,
  SEARCH_FOR_GROUP = 5,
  DISCONNECT = 6,
  AUDIO_OUT = 7,
  VIDEO_OUT = 8
};

enum ResponseType {
  REQUEST_IDENTITY = 0,
  IDENTITY_REJECTION = 1,
  IDENTITY_ACCEPTED = 2,
  DISCONNECTION_ACCEPTED = 3,
  AUDIO_IN = 4,
  VIDEO_IN = 5
};
};// namespace core::definitions

#endif// __CORE_DEFINITIONS_MESSAGE_TYPES__H